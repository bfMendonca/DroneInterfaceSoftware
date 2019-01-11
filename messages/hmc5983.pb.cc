// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: hmc5983.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "hmc5983.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace {

const ::google::protobuf::Descriptor* HMC5983Readings_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  HMC5983Readings_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_hmc5983_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_hmc5983_2eproto() {
  protobuf_AddDesc_hmc5983_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "hmc5983.proto");
  GOOGLE_CHECK(file != NULL);
  HMC5983Readings_descriptor_ = file->message_type(0);
  static const int HMC5983Readings_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(HMC5983Readings, magnetometer_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(HMC5983Readings, temperature_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(HMC5983Readings, timestamp_),
  };
  HMC5983Readings_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      HMC5983Readings_descriptor_,
      HMC5983Readings::default_instance_,
      HMC5983Readings_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(HMC5983Readings, _has_bits_[0]),
      -1,
      -1,
      sizeof(HMC5983Readings),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(HMC5983Readings, _internal_metadata_),
      -1);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_hmc5983_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      HMC5983Readings_descriptor_, &HMC5983Readings::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_hmc5983_2eproto() {
  delete HMC5983Readings::default_instance_;
  delete HMC5983Readings_reflection_;
}

void protobuf_AddDesc_hmc5983_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_hmc5983_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::protobuf_AddDesc_vector3_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\rhmc5983.proto\032\rvector3.proto\"Y\n\017HMC598"
    "3Readings\022\036\n\014magnetometer\030\001 \002(\0132\010.Vector"
    "3\022\023\n\013temperature\030\002 \002(\002\022\021\n\ttimestamp\030\003 \002("
    "\004", 121);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "hmc5983.proto", &protobuf_RegisterTypes);
  HMC5983Readings::default_instance_ = new HMC5983Readings();
  HMC5983Readings::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_hmc5983_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_hmc5983_2eproto {
  StaticDescriptorInitializer_hmc5983_2eproto() {
    protobuf_AddDesc_hmc5983_2eproto();
  }
} static_descriptor_initializer_hmc5983_2eproto_;

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int HMC5983Readings::kMagnetometerFieldNumber;
const int HMC5983Readings::kTemperatureFieldNumber;
const int HMC5983Readings::kTimestampFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

HMC5983Readings::HMC5983Readings()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:HMC5983Readings)
}

void HMC5983Readings::InitAsDefaultInstance() {
  magnetometer_ = const_cast< ::Vector3*>(&::Vector3::default_instance());
}

HMC5983Readings::HMC5983Readings(const HMC5983Readings& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:HMC5983Readings)
}

void HMC5983Readings::SharedCtor() {
  _cached_size_ = 0;
  magnetometer_ = NULL;
  temperature_ = 0;
  timestamp_ = GOOGLE_ULONGLONG(0);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

HMC5983Readings::~HMC5983Readings() {
  // @@protoc_insertion_point(destructor:HMC5983Readings)
  SharedDtor();
}

void HMC5983Readings::SharedDtor() {
  if (this != default_instance_) {
    delete magnetometer_;
  }
}

void HMC5983Readings::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* HMC5983Readings::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return HMC5983Readings_descriptor_;
}

const HMC5983Readings& HMC5983Readings::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_hmc5983_2eproto();
  return *default_instance_;
}

HMC5983Readings* HMC5983Readings::default_instance_ = NULL;

HMC5983Readings* HMC5983Readings::New(::google::protobuf::Arena* arena) const {
  HMC5983Readings* n = new HMC5983Readings;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void HMC5983Readings::Clear() {
// @@protoc_insertion_point(message_clear_start:HMC5983Readings)
#if defined(__clang__)
#define ZR_HELPER_(f) \
  _Pragma("clang diagnostic push") \
  _Pragma("clang diagnostic ignored \"-Winvalid-offsetof\"") \
  __builtin_offsetof(HMC5983Readings, f) \
  _Pragma("clang diagnostic pop")
#else
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<HMC5983Readings*>(16)->f)
#endif

#define ZR_(first, last) do {\
  ::memset(&first, 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  if (_has_bits_[0 / 32] & 7u) {
    ZR_(timestamp_, temperature_);
    if (has_magnetometer()) {
      if (magnetometer_ != NULL) magnetometer_->::Vector3::Clear();
    }
  }

#undef ZR_HELPER_
#undef ZR_

  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool HMC5983Readings::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:HMC5983Readings)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required .Vector3 magnetometer = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_magnetometer()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(21)) goto parse_temperature;
        break;
      }

      // required float temperature = 2;
      case 2: {
        if (tag == 21) {
         parse_temperature:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &temperature_)));
          set_has_temperature();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_timestamp;
        break;
      }

      // required uint64 timestamp = 3;
      case 3: {
        if (tag == 24) {
         parse_timestamp:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &timestamp_)));
          set_has_timestamp();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:HMC5983Readings)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:HMC5983Readings)
  return false;
#undef DO_
}

void HMC5983Readings::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:HMC5983Readings)
  // required .Vector3 magnetometer = 1;
  if (has_magnetometer()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, *this->magnetometer_, output);
  }

  // required float temperature = 2;
  if (has_temperature()) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(2, this->temperature(), output);
  }

  // required uint64 timestamp = 3;
  if (has_timestamp()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(3, this->timestamp(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:HMC5983Readings)
}

::google::protobuf::uint8* HMC5983Readings::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:HMC5983Readings)
  // required .Vector3 magnetometer = 1;
  if (has_magnetometer()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        1, *this->magnetometer_, false, target);
  }

  // required float temperature = 2;
  if (has_temperature()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(2, this->temperature(), target);
  }

  // required uint64 timestamp = 3;
  if (has_timestamp()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(3, this->timestamp(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:HMC5983Readings)
  return target;
}

int HMC5983Readings::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:HMC5983Readings)
  int total_size = 0;

  if (has_magnetometer()) {
    // required .Vector3 magnetometer = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->magnetometer_);
  }

  if (has_temperature()) {
    // required float temperature = 2;
    total_size += 1 + 4;
  }

  if (has_timestamp()) {
    // required uint64 timestamp = 3;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->timestamp());
  }

  return total_size;
}
int HMC5983Readings::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:HMC5983Readings)
  int total_size = 0;

  if (((_has_bits_[0] & 0x00000007) ^ 0x00000007) == 0) {  // All required fields are present.
    // required .Vector3 magnetometer = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->magnetometer_);

    // required float temperature = 2;
    total_size += 1 + 4;

    // required uint64 timestamp = 3;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->timestamp());

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void HMC5983Readings::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:HMC5983Readings)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const HMC5983Readings* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const HMC5983Readings>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:HMC5983Readings)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:HMC5983Readings)
    MergeFrom(*source);
  }
}

void HMC5983Readings::MergeFrom(const HMC5983Readings& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:HMC5983Readings)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_magnetometer()) {
      mutable_magnetometer()->::Vector3::MergeFrom(from.magnetometer());
    }
    if (from.has_temperature()) {
      set_temperature(from.temperature());
    }
    if (from.has_timestamp()) {
      set_timestamp(from.timestamp());
    }
  }
  if (from._internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  }
}

void HMC5983Readings::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:HMC5983Readings)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void HMC5983Readings::CopyFrom(const HMC5983Readings& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:HMC5983Readings)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool HMC5983Readings::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000007) != 0x00000007) return false;

  if (has_magnetometer()) {
    if (!this->magnetometer_->IsInitialized()) return false;
  }
  return true;
}

void HMC5983Readings::Swap(HMC5983Readings* other) {
  if (other == this) return;
  InternalSwap(other);
}
void HMC5983Readings::InternalSwap(HMC5983Readings* other) {
  std::swap(magnetometer_, other->magnetometer_);
  std::swap(temperature_, other->temperature_);
  std::swap(timestamp_, other->timestamp_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata HMC5983Readings::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = HMC5983Readings_descriptor_;
  metadata.reflection = HMC5983Readings_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// HMC5983Readings

// required .Vector3 magnetometer = 1;
bool HMC5983Readings::has_magnetometer() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void HMC5983Readings::set_has_magnetometer() {
  _has_bits_[0] |= 0x00000001u;
}
void HMC5983Readings::clear_has_magnetometer() {
  _has_bits_[0] &= ~0x00000001u;
}
void HMC5983Readings::clear_magnetometer() {
  if (magnetometer_ != NULL) magnetometer_->::Vector3::Clear();
  clear_has_magnetometer();
}
const ::Vector3& HMC5983Readings::magnetometer() const {
  // @@protoc_insertion_point(field_get:HMC5983Readings.magnetometer)
  return magnetometer_ != NULL ? *magnetometer_ : *default_instance_->magnetometer_;
}
::Vector3* HMC5983Readings::mutable_magnetometer() {
  set_has_magnetometer();
  if (magnetometer_ == NULL) {
    magnetometer_ = new ::Vector3;
  }
  // @@protoc_insertion_point(field_mutable:HMC5983Readings.magnetometer)
  return magnetometer_;
}
::Vector3* HMC5983Readings::release_magnetometer() {
  // @@protoc_insertion_point(field_release:HMC5983Readings.magnetometer)
  clear_has_magnetometer();
  ::Vector3* temp = magnetometer_;
  magnetometer_ = NULL;
  return temp;
}
void HMC5983Readings::set_allocated_magnetometer(::Vector3* magnetometer) {
  delete magnetometer_;
  magnetometer_ = magnetometer;
  if (magnetometer) {
    set_has_magnetometer();
  } else {
    clear_has_magnetometer();
  }
  // @@protoc_insertion_point(field_set_allocated:HMC5983Readings.magnetometer)
}

// required float temperature = 2;
bool HMC5983Readings::has_temperature() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void HMC5983Readings::set_has_temperature() {
  _has_bits_[0] |= 0x00000002u;
}
void HMC5983Readings::clear_has_temperature() {
  _has_bits_[0] &= ~0x00000002u;
}
void HMC5983Readings::clear_temperature() {
  temperature_ = 0;
  clear_has_temperature();
}
 float HMC5983Readings::temperature() const {
  // @@protoc_insertion_point(field_get:HMC5983Readings.temperature)
  return temperature_;
}
 void HMC5983Readings::set_temperature(float value) {
  set_has_temperature();
  temperature_ = value;
  // @@protoc_insertion_point(field_set:HMC5983Readings.temperature)
}

// required uint64 timestamp = 3;
bool HMC5983Readings::has_timestamp() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
void HMC5983Readings::set_has_timestamp() {
  _has_bits_[0] |= 0x00000004u;
}
void HMC5983Readings::clear_has_timestamp() {
  _has_bits_[0] &= ~0x00000004u;
}
void HMC5983Readings::clear_timestamp() {
  timestamp_ = GOOGLE_ULONGLONG(0);
  clear_has_timestamp();
}
 ::google::protobuf::uint64 HMC5983Readings::timestamp() const {
  // @@protoc_insertion_point(field_get:HMC5983Readings.timestamp)
  return timestamp_;
}
 void HMC5983Readings::set_timestamp(::google::protobuf::uint64 value) {
  set_has_timestamp();
  timestamp_ = value;
  // @@protoc_insertion_point(field_set:HMC5983Readings.timestamp)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)
