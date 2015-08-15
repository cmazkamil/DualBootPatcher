// automatically generated by the FlatBuffers compiler, do not modify

#ifndef FLATBUFFERS_GENERATED_COPY_MBTOOL_DAEMON_V2_H_
#define FLATBUFFERS_GENERATED_COPY_MBTOOL_DAEMON_V2_H_

#include "flatbuffers/flatbuffers.h"

namespace mbtool {
namespace daemon {
namespace v2 {
struct GetVersionRequest;
struct GetVersionResponse;
}  // namespace v2
}  // namespace daemon
}  // namespace mbtool
namespace mbtool {
namespace daemon {
namespace v2 {
struct Rom;
struct GetRomsListRequest;
struct GetRomsListResponse;
}  // namespace v2
}  // namespace daemon
}  // namespace mbtool
namespace mbtool {
namespace daemon {
namespace v2 {
struct GetBuiltinRomIdsRequest;
struct GetBuiltinRomIdsResponse;
}  // namespace v2
}  // namespace daemon
}  // namespace mbtool
namespace mbtool {
namespace daemon {
namespace v2 {
struct GetCurrentRomRequest;
struct GetCurrentRomResponse;
}  // namespace v2
}  // namespace daemon
}  // namespace mbtool
namespace mbtool {
namespace daemon {
namespace v2 {
struct SwitchRomRequest;
struct SwitchRomResponse;
}  // namespace v2
}  // namespace daemon
}  // namespace mbtool
namespace mbtool {
namespace daemon {
namespace v2 {
struct SetKernelRequest;
struct SetKernelResponse;
}  // namespace v2
}  // namespace daemon
}  // namespace mbtool
namespace mbtool {
namespace daemon {
namespace v2 {
struct RebootRequest;
struct RebootResponse;
}  // namespace v2
}  // namespace daemon
}  // namespace mbtool
namespace mbtool {
namespace daemon {
namespace v2 {
struct OpenRequest;
struct OpenResponse;
}  // namespace v2
}  // namespace daemon
}  // namespace mbtool

namespace mbtool {
namespace daemon {
namespace v2 {

struct CopyRequest;
struct CopyResponse;

struct CopyRequest FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  const flatbuffers::String *source() const { return GetPointer<const flatbuffers::String *>(4); }
  const flatbuffers::String *target() const { return GetPointer<const flatbuffers::String *>(6); }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, 4 /* source */) &&
           verifier.Verify(source()) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, 6 /* target */) &&
           verifier.Verify(target()) &&
           verifier.EndTable();
  }
};

struct CopyRequestBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_source(flatbuffers::Offset<flatbuffers::String> source) { fbb_.AddOffset(4, source); }
  void add_target(flatbuffers::Offset<flatbuffers::String> target) { fbb_.AddOffset(6, target); }
  CopyRequestBuilder(flatbuffers::FlatBufferBuilder &_fbb) : fbb_(_fbb) { start_ = fbb_.StartTable(); }
  CopyRequestBuilder &operator=(const CopyRequestBuilder &);
  flatbuffers::Offset<CopyRequest> Finish() {
    auto o = flatbuffers::Offset<CopyRequest>(fbb_.EndTable(start_, 2));
    return o;
  }
};

inline flatbuffers::Offset<CopyRequest> CreateCopyRequest(flatbuffers::FlatBufferBuilder &_fbb,
   flatbuffers::Offset<flatbuffers::String> source = 0,
   flatbuffers::Offset<flatbuffers::String> target = 0) {
  CopyRequestBuilder builder_(_fbb);
  builder_.add_target(target);
  builder_.add_source(source);
  return builder_.Finish();
}

struct CopyResponse FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  uint8_t success() const { return GetField<uint8_t>(4, 0); }
  const flatbuffers::String *error_msg() const { return GetPointer<const flatbuffers::String *>(6); }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint8_t>(verifier, 4 /* success */) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, 6 /* error_msg */) &&
           verifier.Verify(error_msg()) &&
           verifier.EndTable();
  }
};

struct CopyResponseBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_success(uint8_t success) { fbb_.AddElement<uint8_t>(4, success, 0); }
  void add_error_msg(flatbuffers::Offset<flatbuffers::String> error_msg) { fbb_.AddOffset(6, error_msg); }
  CopyResponseBuilder(flatbuffers::FlatBufferBuilder &_fbb) : fbb_(_fbb) { start_ = fbb_.StartTable(); }
  CopyResponseBuilder &operator=(const CopyResponseBuilder &);
  flatbuffers::Offset<CopyResponse> Finish() {
    auto o = flatbuffers::Offset<CopyResponse>(fbb_.EndTable(start_, 2));
    return o;
  }
};

inline flatbuffers::Offset<CopyResponse> CreateCopyResponse(flatbuffers::FlatBufferBuilder &_fbb,
   uint8_t success = 0,
   flatbuffers::Offset<flatbuffers::String> error_msg = 0) {
  CopyResponseBuilder builder_(_fbb);
  builder_.add_error_msg(error_msg);
  builder_.add_success(success);
  return builder_.Finish();
}

}  // namespace v2
}  // namespace daemon
}  // namespace mbtool

#endif  // FLATBUFFERS_GENERATED_COPY_MBTOOL_DAEMON_V2_H_
