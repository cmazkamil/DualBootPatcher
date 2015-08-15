// automatically generated by the FlatBuffers compiler, do not modify

#ifndef FLATBUFFERS_GENERATED_LOKIPATCH_MBTOOL_DAEMON_V2_H_
#define FLATBUFFERS_GENERATED_LOKIPATCH_MBTOOL_DAEMON_V2_H_

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
}  // namespace v2
}  // namespace daemon
}  // namespace mbtool
namespace mbtool {
namespace daemon {
namespace v2 {
struct ChmodRequest;
struct ChmodResponse;
}  // namespace v2
}  // namespace daemon
}  // namespace mbtool

namespace mbtool {
namespace daemon {
namespace v2 {

struct LokiPatchRequest;
struct LokiPatchResponse;

struct LokiPatchRequest FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           verifier.EndTable();
  }
};

struct LokiPatchRequestBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  LokiPatchRequestBuilder(flatbuffers::FlatBufferBuilder &_fbb) : fbb_(_fbb) { start_ = fbb_.StartTable(); }
  LokiPatchRequestBuilder &operator=(const LokiPatchRequestBuilder &);
  flatbuffers::Offset<LokiPatchRequest> Finish() {
    auto o = flatbuffers::Offset<LokiPatchRequest>(fbb_.EndTable(start_, 2));
    return o;
  }
};

inline flatbuffers::Offset<LokiPatchRequest> CreateLokiPatchRequest(flatbuffers::FlatBufferBuilder &_fbb) {
  LokiPatchRequestBuilder builder_(_fbb);
  return builder_.Finish();
}

struct LokiPatchResponse FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           verifier.EndTable();
  }
};

struct LokiPatchResponseBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  LokiPatchResponseBuilder(flatbuffers::FlatBufferBuilder &_fbb) : fbb_(_fbb) { start_ = fbb_.StartTable(); }
  LokiPatchResponseBuilder &operator=(const LokiPatchResponseBuilder &);
  flatbuffers::Offset<LokiPatchResponse> Finish() {
    auto o = flatbuffers::Offset<LokiPatchResponse>(fbb_.EndTable(start_, 1));
    return o;
  }
};

inline flatbuffers::Offset<LokiPatchResponse> CreateLokiPatchResponse(flatbuffers::FlatBufferBuilder &_fbb) {
  LokiPatchResponseBuilder builder_(_fbb);
  return builder_.Finish();
}

}  // namespace v2
}  // namespace daemon
}  // namespace mbtool

#endif  // FLATBUFFERS_GENERATED_LOKIPATCH_MBTOOL_DAEMON_V2_H_
