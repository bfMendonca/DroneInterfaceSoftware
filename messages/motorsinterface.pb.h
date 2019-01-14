// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: motorsinterface.proto

#ifndef PROTOBUF_motorsinterface_2eproto__INCLUDED
#define PROTOBUF_motorsinterface_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3000000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3000000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_motorsinterface_2eproto();
void protobuf_AssignDesc_motorsinterface_2eproto();
void protobuf_ShutdownFile_motorsinterface_2eproto();

class MotorsInterfaceMessage;

// ===================================================================

class MotorsInterfaceMessage : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:MotorsInterfaceMessage) */ {
 public:
  MotorsInterfaceMessage();
  virtual ~MotorsInterfaceMessage();

  MotorsInterfaceMessage(const MotorsInterfaceMessage& from);

  inline MotorsInterfaceMessage& operator=(const MotorsInterfaceMessage& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const MotorsInterfaceMessage& default_instance();

  void Swap(MotorsInterfaceMessage* other);

  // implements Message ----------------------------------------------

  inline MotorsInterfaceMessage* New() const { return New(NULL); }

  MotorsInterfaceMessage* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const MotorsInterfaceMessage& from);
  void MergeFrom(const MotorsInterfaceMessage& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(MotorsInterfaceMessage* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required float motor1DC = 1;
  bool has_motor1dc() const;
  void clear_motor1dc();
  static const int kMotor1DCFieldNumber = 1;
  float motor1dc() const;
  void set_motor1dc(float value);

  // required float motor2Dc = 2;
  bool has_motor2dc() const;
  void clear_motor2dc();
  static const int kMotor2DcFieldNumber = 2;
  float motor2dc() const;
  void set_motor2dc(float value);

  // required float motor3DC = 3;
  bool has_motor3dc() const;
  void clear_motor3dc();
  static const int kMotor3DCFieldNumber = 3;
  float motor3dc() const;
  void set_motor3dc(float value);

  // required float motor4DC = 4;
  bool has_motor4dc() const;
  void clear_motor4dc();
  static const int kMotor4DCFieldNumber = 4;
  float motor4dc() const;
  void set_motor4dc(float value);

  // @@protoc_insertion_point(class_scope:MotorsInterfaceMessage)
 private:
  inline void set_has_motor1dc();
  inline void clear_has_motor1dc();
  inline void set_has_motor2dc();
  inline void clear_has_motor2dc();
  inline void set_has_motor3dc();
  inline void clear_has_motor3dc();
  inline void set_has_motor4dc();
  inline void clear_has_motor4dc();

  // helper for ByteSize()
  int RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  float motor1dc_;
  float motor2dc_;
  float motor3dc_;
  float motor4dc_;
  friend void  protobuf_AddDesc_motorsinterface_2eproto();
  friend void protobuf_AssignDesc_motorsinterface_2eproto();
  friend void protobuf_ShutdownFile_motorsinterface_2eproto();

  void InitAsDefaultInstance();
  static MotorsInterfaceMessage* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// MotorsInterfaceMessage

// required float motor1DC = 1;
inline bool MotorsInterfaceMessage::has_motor1dc() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void MotorsInterfaceMessage::set_has_motor1dc() {
  _has_bits_[0] |= 0x00000001u;
}
inline void MotorsInterfaceMessage::clear_has_motor1dc() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void MotorsInterfaceMessage::clear_motor1dc() {
  motor1dc_ = 0;
  clear_has_motor1dc();
}
inline float MotorsInterfaceMessage::motor1dc() const {
  // @@protoc_insertion_point(field_get:MotorsInterfaceMessage.motor1DC)
  return motor1dc_;
}
inline void MotorsInterfaceMessage::set_motor1dc(float value) {
  set_has_motor1dc();
  motor1dc_ = value;
  // @@protoc_insertion_point(field_set:MotorsInterfaceMessage.motor1DC)
}

// required float motor2Dc = 2;
inline bool MotorsInterfaceMessage::has_motor2dc() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void MotorsInterfaceMessage::set_has_motor2dc() {
  _has_bits_[0] |= 0x00000002u;
}
inline void MotorsInterfaceMessage::clear_has_motor2dc() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void MotorsInterfaceMessage::clear_motor2dc() {
  motor2dc_ = 0;
  clear_has_motor2dc();
}
inline float MotorsInterfaceMessage::motor2dc() const {
  // @@protoc_insertion_point(field_get:MotorsInterfaceMessage.motor2Dc)
  return motor2dc_;
}
inline void MotorsInterfaceMessage::set_motor2dc(float value) {
  set_has_motor2dc();
  motor2dc_ = value;
  // @@protoc_insertion_point(field_set:MotorsInterfaceMessage.motor2Dc)
}

// required float motor3DC = 3;
inline bool MotorsInterfaceMessage::has_motor3dc() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void MotorsInterfaceMessage::set_has_motor3dc() {
  _has_bits_[0] |= 0x00000004u;
}
inline void MotorsInterfaceMessage::clear_has_motor3dc() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void MotorsInterfaceMessage::clear_motor3dc() {
  motor3dc_ = 0;
  clear_has_motor3dc();
}
inline float MotorsInterfaceMessage::motor3dc() const {
  // @@protoc_insertion_point(field_get:MotorsInterfaceMessage.motor3DC)
  return motor3dc_;
}
inline void MotorsInterfaceMessage::set_motor3dc(float value) {
  set_has_motor3dc();
  motor3dc_ = value;
  // @@protoc_insertion_point(field_set:MotorsInterfaceMessage.motor3DC)
}

// required float motor4DC = 4;
inline bool MotorsInterfaceMessage::has_motor4dc() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void MotorsInterfaceMessage::set_has_motor4dc() {
  _has_bits_[0] |= 0x00000008u;
}
inline void MotorsInterfaceMessage::clear_has_motor4dc() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void MotorsInterfaceMessage::clear_motor4dc() {
  motor4dc_ = 0;
  clear_has_motor4dc();
}
inline float MotorsInterfaceMessage::motor4dc() const {
  // @@protoc_insertion_point(field_get:MotorsInterfaceMessage.motor4DC)
  return motor4dc_;
}
inline void MotorsInterfaceMessage::set_motor4dc(float value) {
  set_has_motor4dc();
  motor4dc_ = value;
  // @@protoc_insertion_point(field_set:MotorsInterfaceMessage.motor4DC)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_motorsinterface_2eproto__INCLUDED
