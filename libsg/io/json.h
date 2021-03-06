#pragma once

#define RAPIDJSON_NO_INT64DEFINE
#include <rapidjson/document.h>

#include "libsg.h"  // NOLINT
#include "io/io.h"

namespace sg {
namespace io {

//! Parse JSON file into rapidjson Document object d and return whether successful
bool parseRapidJSONDocument(const string& file, rapidjson::Document* d);

//! Parse JSON string into rapidjson Document object d and return whether successful
bool parseRapidJSONString(const string& jsonString, rapidjson::Document* d);

template <typename GV, typename T>
void toVector(const GV& arr, std::vector<T>* vec,
              const std::function<T(const GV&)>& conv) {
  const unsigned n = arr.Size();
  vec->resize(n);
  for (unsigned i = 0; i < n; i++) {
    (*vec)[i] = conv(arr[i]);
  }
}

template <typename GV>
void toIntVector(const GV& value, std::vector<int>* vec) {
  const auto conv = [] (const GV& x) {
    return x.GetInt();
  };
  toVector<GV, int>(value, vec, conv);
}

template <typename GV>
void toFloatVector(const GV& value, std::vector<float>* vec) {
  const auto conv = [] (const GV& x) {
    return static_cast<float>(x.GetDouble());
  };
  toVector<GV, float>(value, vec, conv);
}

template <typename GV>
void toDoubleVector(const GV& value, std::vector<double>* vec) {
  const auto conv = [] (const GV& x) {
    return x.GetDouble();
  };
  toVector<GV, double>(value, vec, conv);
}

////! Generic toJSON function to output array-like types (should work for any type
////! on which std::begin and std::end can work. Recurses down to basic types which
////! are then streamed out with regular call to operator<<
//template <typename T>
//ostream& toJSON(ostream& os, const T& x) {
//  const bool isFundamental = !std::is_arr<T>::value;
//  if (isFundamental) {
//    return os << x;
//  }
//
//  const auto start = std::begin(x);
//  const auto end = std::end(x) - 1;
//  os << "[";
//  for (auto it = start; it != end; it++) {
//    toJSON(os, *it); os << ",";
//  }
//  toJSON(os, *end); os << "]";
//
//  return os;
//}

template <typename T>
ostream& toJSON(ostream& os, const T* x, size_t size) {
  os << "[";
  if (size == 0) { return os << "]"; }
  const size_t iLast = size - 1;
  for (size_t i = 0; i < iLast; i++) {
    toJSON(os, x[i]) << ",";
  }
  return toJSON(os, x[iLast]) << "]";
}

template <typename T>
ostream& toJSON(ostream& os, const vec<T>& x) {
  os << "[";
  if (x.empty()) { return os << "]"; }
  const size_t iLast = x.size() - 1;
  for (size_t i = 0; i < iLast; i++) {
    toJSON(os, x[i]) << ",";
  }
  return toJSON(os, x[iLast]) << "]";
}

template <typename T, typename E>
ostream& toJSON(ostream& os, const vec<T>& x, const std::function<E(const T&)> extractFun) {
  os << "[";
  if (x.empty()) { return os << "]"; }
  const size_t iLast = x.size() - 1;
  for (size_t i = 0; i < iLast; i++) {
    toJSON(os, extractFun(x[i])) << ",";
  }
  return toJSON(os, extractFun(x[iLast])) << "]";
}

template <typename A, typename B>
ostream& toJSON(ostream& os, const pair<A, B>& p) {
  os << "[";
  toJSON(os, p.first);
  os << ",";
  toJSON(os, p.second);
  os << "]";
  return os;
}

inline ostream& toJSON(ostream& os, const ml::vec2f& x) {
  return os << "[" << x[0] << "," << x[1] << "]";
}

inline ostream& toJSON(ostream& os, const ml::vec3f& x) {
  return os << "[" << x[0] << "," << x[1] << "," << x[2] << "]";
}

inline ostream& toJSON(ostream& os, const ml::vec4f& x) {
  return os << "[" << x[0] << "," << x[1] << "," << x[2] << "," << x[3] << "]";
}

inline ostream& toJSON(ostream& os, const ml::mat4f& m) {
  os << "[";
  for (int i = 0; i < 15; i++) { os << m[i] << ","; }
  return os << m[15] << "]";
}

template <typename T>
inline ostream& toJSON(ostream& os, const T& x) {
  return os << x;
}

//! Quotes string TODO(MS): Escape any quotes inside string
inline ostream& toJSON(ostream& os, const string& x) {
  return os << "\"" << x << "\"";
}

}  // namespace io
}  // namespace sg


