#pragma once

#ifndef ARCV_WEBCAM_HPP
#define ARCV_WEBCAM_HPP

#include "../Math/Matrix.hpp"

namespace Arcv {

class Webcam {
public:
  Webcam(unsigned int width, unsigned int height, uint8_t videoIndex = 0);

  std::size_t getFrameWidth() const { return frameWidth; }
  std::size_t getFrameHeight() const { return frameHeight; }

  Matrix<uint8_t> captureImage() const;

  ~Webcam();

private:
  struct Buffer {
    void* start;
    std::size_t length;
  };

#ifdef __gnu_linux__
  void checkIoCtl(unsigned long request, void* attribute) const;
#endif

  int index;
  Buffer buffer;
  std::size_t frameWidth, frameHeight;
};

} // namespace Arcv

#endif // ARCV_WEBCAM_HPP
