// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cartographer/mapping/proto/2d/grid_2d_options.proto

#include "cartographer/mapping/proto/2d/grid_2d_options.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

namespace cartographer {
namespace mapping {
namespace proto {
class GridOptions2DDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<GridOptions2D> _instance;
} _GridOptions2D_default_instance_;
}  // namespace proto
}  // namespace mapping
}  // namespace cartographer
static void InitDefaultsGridOptions2D_cartographer_2fmapping_2fproto_2f2d_2fgrid_5f2d_5foptions_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::cartographer::mapping::proto::_GridOptions2D_default_instance_;
    new (ptr) ::cartographer::mapping::proto::GridOptions2D();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::cartographer::mapping::proto::GridOptions2D::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_GridOptions2D_cartographer_2fmapping_2fproto_2f2d_2fgrid_5f2d_5foptions_2eproto =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsGridOptions2D_cartographer_2fmapping_2fproto_2f2d_2fgrid_5f2d_5foptions_2eproto}, {}};

void InitDefaults_cartographer_2fmapping_2fproto_2f2d_2fgrid_5f2d_5foptions_2eproto() {
  ::google::protobuf::internal::InitSCC(&scc_info_GridOptions2D_cartographer_2fmapping_2fproto_2f2d_2fgrid_5f2d_5foptions_2eproto.base);
}

::google::protobuf::Metadata file_level_metadata_cartographer_2fmapping_2fproto_2f2d_2fgrid_5f2d_5foptions_2eproto[1];
const ::google::protobuf::EnumDescriptor* file_level_enum_descriptors_cartographer_2fmapping_2fproto_2f2d_2fgrid_5f2d_5foptions_2eproto[1];
constexpr ::google::protobuf::ServiceDescriptor const** file_level_service_descriptors_cartographer_2fmapping_2fproto_2f2d_2fgrid_5f2d_5foptions_2eproto = nullptr;

const ::google::protobuf::uint32 TableStruct_cartographer_2fmapping_2fproto_2f2d_2fgrid_5f2d_5foptions_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::cartographer::mapping::proto::GridOptions2D, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::cartographer::mapping::proto::GridOptions2D, grid_type_),
  PROTOBUF_FIELD_OFFSET(::cartographer::mapping::proto::GridOptions2D, resolution_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::cartographer::mapping::proto::GridOptions2D)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::cartographer::mapping::proto::_GridOptions2D_default_instance_),
};

::google::protobuf::internal::AssignDescriptorsTable assign_descriptors_table_cartographer_2fmapping_2fproto_2f2d_2fgrid_5f2d_5foptions_2eproto = {
  {}, AddDescriptors_cartographer_2fmapping_2fproto_2f2d_2fgrid_5f2d_5foptions_2eproto, "cartographer/mapping/proto/2d/grid_2d_options.proto", schemas,
  file_default_instances, TableStruct_cartographer_2fmapping_2fproto_2f2d_2fgrid_5f2d_5foptions_2eproto::offsets,
  file_level_metadata_cartographer_2fmapping_2fproto_2f2d_2fgrid_5f2d_5foptions_2eproto, 1, file_level_enum_descriptors_cartographer_2fmapping_2fproto_2f2d_2fgrid_5f2d_5foptions_2eproto, file_level_service_descriptors_cartographer_2fmapping_2fproto_2f2d_2fgrid_5f2d_5foptions_2eproto,
};

const char descriptor_table_protodef_cartographer_2fmapping_2fproto_2f2d_2fgrid_5f2d_5foptions_2eproto[] =
  "\n3cartographer/mapping/proto/2d/grid_2d_"
  "options.proto\022\032cartographer.mapping.prot"
  "o\"\250\001\n\rGridOptions2D\022E\n\tgrid_type\030\001 \001(\01622"
  ".cartographer.mapping.proto.GridOptions2"
  "D.GridType\022\022\n\nresolution\030\002 \001(\002\"<\n\010GridTy"
  "pe\022\020\n\014INVALID_GRID\020\000\022\024\n\020PROBABILITY_GRID"
  "\020\001\022\010\n\004TSDF\020\002b\006proto3"
  ;
::google::protobuf::internal::DescriptorTable descriptor_table_cartographer_2fmapping_2fproto_2f2d_2fgrid_5f2d_5foptions_2eproto = {
  false, InitDefaults_cartographer_2fmapping_2fproto_2f2d_2fgrid_5f2d_5foptions_2eproto, 
  descriptor_table_protodef_cartographer_2fmapping_2fproto_2f2d_2fgrid_5f2d_5foptions_2eproto,
  "cartographer/mapping/proto/2d/grid_2d_options.proto", &assign_descriptors_table_cartographer_2fmapping_2fproto_2f2d_2fgrid_5f2d_5foptions_2eproto, 260,
};

void AddDescriptors_cartographer_2fmapping_2fproto_2f2d_2fgrid_5f2d_5foptions_2eproto() {
  static constexpr ::google::protobuf::internal::InitFunc deps[1] =
  {
  };
 ::google::protobuf::internal::AddDescriptors(&descriptor_table_cartographer_2fmapping_2fproto_2f2d_2fgrid_5f2d_5foptions_2eproto, deps, 0);
}

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_cartographer_2fmapping_2fproto_2f2d_2fgrid_5f2d_5foptions_2eproto = []() { AddDescriptors_cartographer_2fmapping_2fproto_2f2d_2fgrid_5f2d_5foptions_2eproto(); return true; }();
namespace cartographer {
namespace mapping {
namespace proto {
const ::google::protobuf::EnumDescriptor* GridOptions2D_GridType_descriptor() {
  ::google::protobuf::internal::AssignDescriptors(&assign_descriptors_table_cartographer_2fmapping_2fproto_2f2d_2fgrid_5f2d_5foptions_2eproto);
  return file_level_enum_descriptors_cartographer_2fmapping_2fproto_2f2d_2fgrid_5f2d_5foptions_2eproto[0];
}
bool GridOptions2D_GridType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const GridOptions2D_GridType GridOptions2D::INVALID_GRID;
const GridOptions2D_GridType GridOptions2D::PROBABILITY_GRID;
const GridOptions2D_GridType GridOptions2D::TSDF;
const GridOptions2D_GridType GridOptions2D::GridType_MIN;
const GridOptions2D_GridType GridOptions2D::GridType_MAX;
const int GridOptions2D::GridType_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

// ===================================================================

void GridOptions2D::InitAsDefaultInstance() {
}
class GridOptions2D::HasBitSetters {
 public:
};

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int GridOptions2D::kGridTypeFieldNumber;
const int GridOptions2D::kResolutionFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

GridOptions2D::GridOptions2D()
  : ::google::protobuf::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:cartographer.mapping.proto.GridOptions2D)
}
GridOptions2D::GridOptions2D(const GridOptions2D& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&grid_type_, &from.grid_type_,
    static_cast<size_t>(reinterpret_cast<char*>(&resolution_) -
    reinterpret_cast<char*>(&grid_type_)) + sizeof(resolution_));
  // @@protoc_insertion_point(copy_constructor:cartographer.mapping.proto.GridOptions2D)
}

void GridOptions2D::SharedCtor() {
  ::memset(&grid_type_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&resolution_) -
      reinterpret_cast<char*>(&grid_type_)) + sizeof(resolution_));
}

GridOptions2D::~GridOptions2D() {
  // @@protoc_insertion_point(destructor:cartographer.mapping.proto.GridOptions2D)
  SharedDtor();
}

void GridOptions2D::SharedDtor() {
}

void GridOptions2D::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const GridOptions2D& GridOptions2D::default_instance() {
  ::google::protobuf::internal::InitSCC(&::scc_info_GridOptions2D_cartographer_2fmapping_2fproto_2f2d_2fgrid_5f2d_5foptions_2eproto.base);
  return *internal_default_instance();
}


void GridOptions2D::Clear() {
// @@protoc_insertion_point(message_clear_start:cartographer.mapping.proto.GridOptions2D)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&grid_type_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&resolution_) -
      reinterpret_cast<char*>(&grid_type_)) + sizeof(resolution_));
  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* GridOptions2D::_InternalParse(const char* begin, const char* end, void* object,
                  ::google::protobuf::internal::ParseContext* ctx) {
  auto msg = static_cast<GridOptions2D*>(object);
  ::google::protobuf::int32 size; (void)size;
  int depth; (void)depth;
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::ParseFunc parser_till_end; (void)parser_till_end;
  auto ptr = begin;
  while (ptr < end) {
    ptr = ::google::protobuf::io::Parse32(ptr, &tag);
    GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
    switch (tag >> 3) {
      // .cartographer.mapping.proto.GridOptions2D.GridType grid_type = 1;
      case 1: {
        if (static_cast<::google::protobuf::uint8>(tag) != 8) goto handle_unusual;
        ::google::protobuf::uint64 val = ::google::protobuf::internal::ReadVarint(&ptr);
        msg->set_grid_type(static_cast<::cartographer::mapping::proto::GridOptions2D_GridType>(val));
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        break;
      }
      // float resolution = 2;
      case 2: {
        if (static_cast<::google::protobuf::uint8>(tag) != 21) goto handle_unusual;
        msg->set_resolution(::google::protobuf::io::UnalignedLoad<float>(ptr));
        ptr += sizeof(float);
        break;
      }
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->EndGroup(tag);
          return ptr;
        }
        auto res = UnknownFieldParse(tag, {_InternalParse, msg},
          ptr, end, msg->_internal_metadata_.mutable_unknown_fields(), ctx);
        ptr = res.first;
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr != nullptr);
        if (res.second) return ptr;
      }
    }  // switch
  }  // while
  return ptr;
}
#else  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
bool GridOptions2D::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:cartographer.mapping.proto.GridOptions2D)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .cartographer.mapping.proto.GridOptions2D.GridType grid_type = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (8 & 0xFF)) {
          int value = 0;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_grid_type(static_cast< ::cartographer::mapping::proto::GridOptions2D_GridType >(value));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // float resolution = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (21 & 0xFF)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &resolution_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:cartographer.mapping.proto.GridOptions2D)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:cartographer.mapping.proto.GridOptions2D)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void GridOptions2D::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:cartographer.mapping.proto.GridOptions2D)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .cartographer.mapping.proto.GridOptions2D.GridType grid_type = 1;
  if (this->grid_type() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->grid_type(), output);
  }

  // float resolution = 2;
  if (this->resolution() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(2, this->resolution(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:cartographer.mapping.proto.GridOptions2D)
}

::google::protobuf::uint8* GridOptions2D::InternalSerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:cartographer.mapping.proto.GridOptions2D)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .cartographer.mapping.proto.GridOptions2D.GridType grid_type = 1;
  if (this->grid_type() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->grid_type(), target);
  }

  // float resolution = 2;
  if (this->resolution() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(2, this->resolution(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:cartographer.mapping.proto.GridOptions2D)
  return target;
}

size_t GridOptions2D::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:cartographer.mapping.proto.GridOptions2D)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // .cartographer.mapping.proto.GridOptions2D.GridType grid_type = 1;
  if (this->grid_type() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->grid_type());
  }

  // float resolution = 2;
  if (this->resolution() != 0) {
    total_size += 1 + 4;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void GridOptions2D::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:cartographer.mapping.proto.GridOptions2D)
  GOOGLE_DCHECK_NE(&from, this);
  const GridOptions2D* source =
      ::google::protobuf::DynamicCastToGenerated<GridOptions2D>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:cartographer.mapping.proto.GridOptions2D)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:cartographer.mapping.proto.GridOptions2D)
    MergeFrom(*source);
  }
}

void GridOptions2D::MergeFrom(const GridOptions2D& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:cartographer.mapping.proto.GridOptions2D)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.grid_type() != 0) {
    set_grid_type(from.grid_type());
  }
  if (from.resolution() != 0) {
    set_resolution(from.resolution());
  }
}

void GridOptions2D::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:cartographer.mapping.proto.GridOptions2D)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void GridOptions2D::CopyFrom(const GridOptions2D& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:cartographer.mapping.proto.GridOptions2D)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GridOptions2D::IsInitialized() const {
  return true;
}

void GridOptions2D::Swap(GridOptions2D* other) {
  if (other == this) return;
  InternalSwap(other);
}
void GridOptions2D::InternalSwap(GridOptions2D* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(grid_type_, other->grid_type_);
  swap(resolution_, other->resolution_);
}

::google::protobuf::Metadata GridOptions2D::GetMetadata() const {
  ::google::protobuf::internal::AssignDescriptors(&::assign_descriptors_table_cartographer_2fmapping_2fproto_2f2d_2fgrid_5f2d_5foptions_2eproto);
  return ::file_level_metadata_cartographer_2fmapping_2fproto_2f2d_2fgrid_5f2d_5foptions_2eproto[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace proto
}  // namespace mapping
}  // namespace cartographer
namespace google {
namespace protobuf {
template<> PROTOBUF_NOINLINE ::cartographer::mapping::proto::GridOptions2D* Arena::CreateMaybeMessage< ::cartographer::mapping::proto::GridOptions2D >(Arena* arena) {
  return Arena::CreateInternal< ::cartographer::mapping::proto::GridOptions2D >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>