#ifndef TACO_FILE_IO_TNS_H
#define TACO_FILE_IO_TNS_H

#include <istream>
#include <ostream>
#include <string>

#include "taco/format.h"
#include "taco/storage/storage.h"

namespace taco {
class TensorBase;
class Format;

/// Read a tns tensor from a file.
TensorBase readTNS(std::string filename, const ModeFormat& modetype, 
                   bool pack=true);

/// Read a tns tensor from a file.
TensorBase readTNS(std::string filename, const Format& format, bool pack=true);

/// Read a tns tensor from a stream.
TensorBase readTNS(std::istream& stream, const ModeFormat& modetype, 
                   bool pack=true);

/// Read a tns tensor from a stream.
TensorBase readTNS(std::istream& stream, const Format& format, bool pack=true);

/// Read a tns tensor from a file.
TensorStorage readToStorageTNS(std::string filename, const ModeFormat& modetype);

/// Read a tns tensor from a file.
TensorStorage readToStorageTNS(std::string filename, const Format& format);

/// Read a tns tensor from a stream.
TensorStorage readToStorageTNS(std::istream& stream, const ModeFormat& modetype);

/// Read a tns tensor from a stream.
TensorStorage readToStorageTNS(std::istream& stream, const Format& format);

/// Write a tns tensor to a file.
void writeTNS(std::string filename, const TensorBase& tensor);

/// Write a tns tensor to a stream.
void writeTNS(std::ostream& stream, const TensorBase& tensor);

/// Write a tns tensor to a file.
void writeFromStorageTNS(std::string filename, const TensorStorage& tensor);

/// Write a tns tensor to a stream.
void writeFromStorageTNS(std::ostream& stream, const TensorStorage& tensor);

}

#endif
