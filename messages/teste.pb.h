// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: teste.proto

#ifndef PROTOBUF_teste_2eproto__INCLUDED
#define PROTOBUF_teste_2eproto__INCLUDED

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
void protobuf_AddDesc_teste_2eproto();
void protobuf_AssignDesc_teste_2eproto();
void protobuf_ShutdownFile_teste_2eproto();

class SimpleMessage;

// ===================================================================

class SimpleMessage : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:SimpleMessage) */ {
 public:
  SimpleMessage();
  virtual ~SimpleMessage();

  SimpleMessage(const SimpleMessage& from);

  inline SimpleMessage& operator=(const SimpleMessage& from) {
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
  static const SimpleMessage& default_instance();

  void Swap(SimpleMessage* other);

  // implements Message ----------------------------------------------

  inline SimpleMessage* New() const { return New(NULL); }

  SimpleMessage* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const SimpleMessage& from);
  void MergeFrom(const SimpleMessage& from);
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
  void InternalSwap(SimpleMessage* other);
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

  // required int32 lucky_number = 1;
  bool has_lucky_number() const;
  void clear_lucky_number();
  static const int kLuckyNumberFieldNumber = 1;
  ::google::protobuf::int32 lucky_number() const;
  void set_lucky_number(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:SimpleMessage)
 private:
  inline void set_has_lucky_number();
  inline void clear_has_lucky_number();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::int32 lucky_number_;
  friend void  protobuf_AddDesc_teste_2eproto();
  friend void protobuf_AssignDesc_teste_2eproto();
  friend void protobuf_ShutdownFile_teste_2eproto();

  void InitAsDefaultInstance();
  static SimpleMessage* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// SimpleMessage

// required int32 lucky_number = 1;
inline bool SimpleMessage::has_lucky_number() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void SimpleMessage::set_has_lucky_number() {
  _has_bits_[0] |= 0x00000001u;
}
inline void SimpleMessage::clear_has_lucky_number() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void SimpleMessage::clear_lucky_number() {
  lucky_number_ = 0;
  clear_has_lucky_number();
}
inline ::google::protobuf::int32 SimpleMessage::lucky_number() const {
  // @@protoc_insertion_point(field_get:SimpleMessage.lucky_number)
  return lucky_number_;
}
inline void SimpleMessage::set_lucky_number(::google::protobuf::int32 value) {
  set_has_lucky_number();
  lucky_number_ = value;
  // @@protoc_insertion_point(field_set:SimpleMessage.lucky_number)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_teste_2eproto__INCLUDED
