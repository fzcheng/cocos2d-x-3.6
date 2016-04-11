// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: chat.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "chat.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace {

const ::google::protobuf::Descriptor* PChatReq_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  PChatReq_reflection_ = NULL;
const ::google::protobuf::Descriptor* PChatResp_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  PChatResp_reflection_ = NULL;
const ::google::protobuf::Descriptor* PChatUpdate_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  PChatUpdate_reflection_ = NULL;
const ::google::protobuf::Descriptor* PChatTag_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  PChatTag_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_chat_2eproto() {
  protobuf_AddDesc_chat_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "chat.proto");
  GOOGLE_CHECK(file != NULL);
  PChatReq_descriptor_ = file->message_type(0);
  static const int PChatReq_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PChatReq, type_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PChatReq, msg_),
  };
  PChatReq_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      PChatReq_descriptor_,
      PChatReq::default_instance_,
      PChatReq_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PChatReq, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PChatReq, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(PChatReq));
  PChatResp_descriptor_ = file->message_type(1);
  static const int PChatResp_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PChatResp, msg_),
  };
  PChatResp_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      PChatResp_descriptor_,
      PChatResp::default_instance_,
      PChatResp_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PChatResp, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PChatResp, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(PChatResp));
  PChatUpdate_descriptor_ = file->message_type(2);
  static const int PChatUpdate_offsets_[4] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PChatUpdate, msgtype_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PChatUpdate, msgname_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PChatUpdate, roleid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PChatUpdate, msg_),
  };
  PChatUpdate_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      PChatUpdate_descriptor_,
      PChatUpdate::default_instance_,
      PChatUpdate_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PChatUpdate, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PChatUpdate, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(PChatUpdate));
  PChatTag_descriptor_ = file->message_type(3);
  static const int PChatTag_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PChatTag, type_),
  };
  PChatTag_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      PChatTag_descriptor_,
      PChatTag::default_instance_,
      PChatTag_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PChatTag, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PChatTag, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(PChatTag));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_chat_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    PChatReq_descriptor_, &PChatReq::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    PChatResp_descriptor_, &PChatResp::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    PChatUpdate_descriptor_, &PChatUpdate::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    PChatTag_descriptor_, &PChatTag::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_chat_2eproto() {
  delete PChatReq::default_instance_;
  delete PChatReq_reflection_;
  delete PChatResp::default_instance_;
  delete PChatResp_reflection_;
  delete PChatUpdate::default_instance_;
  delete PChatUpdate_reflection_;
  delete PChatTag::default_instance_;
  delete PChatTag_reflection_;
}

void protobuf_AddDesc_chat_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\nchat.proto\"%\n\010PChatReq\022\014\n\004type\030\001 \002(\005\022\013"
    "\n\003msg\030\002 \002(\t\"\030\n\tPChatResp\022\013\n\003msg\030\001 \001(\t\"L\n"
    "\013PChatUpdate\022\017\n\007msgType\030\001 \002(\005\022\017\n\007msgName"
    "\030\002 \002(\t\022\016\n\006roleId\030\003 \002(\003\022\013\n\003msg\030\004 \002(\t\"\030\n\010P"
    "ChatTag\022\014\n\004type\030\001 \002(\005B.\n com.doteyplay.g"
    "ame.message.protoB\nChatProBuf", 229);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "chat.proto", &protobuf_RegisterTypes);
  PChatReq::default_instance_ = new PChatReq();
  PChatResp::default_instance_ = new PChatResp();
  PChatUpdate::default_instance_ = new PChatUpdate();
  PChatTag::default_instance_ = new PChatTag();
  PChatReq::default_instance_->InitAsDefaultInstance();
  PChatResp::default_instance_->InitAsDefaultInstance();
  PChatUpdate::default_instance_->InitAsDefaultInstance();
  PChatTag::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_chat_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_chat_2eproto {
  StaticDescriptorInitializer_chat_2eproto() {
    protobuf_AddDesc_chat_2eproto();
  }
} static_descriptor_initializer_chat_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int PChatReq::kTypeFieldNumber;
const int PChatReq::kMsgFieldNumber;
#endif  // !_MSC_VER

PChatReq::PChatReq()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void PChatReq::InitAsDefaultInstance() {
}

PChatReq::PChatReq(const PChatReq& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void PChatReq::SharedCtor() {
  _cached_size_ = 0;
  type_ = 0;
  msg_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

PChatReq::~PChatReq() {
  SharedDtor();
}

void PChatReq::SharedDtor() {
  if (msg_ != &::google::protobuf::internal::kEmptyString) {
    delete msg_;
  }
  if (this != default_instance_) {
  }
}

void PChatReq::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* PChatReq::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return PChatReq_descriptor_;
}

const PChatReq& PChatReq::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_chat_2eproto();
  return *default_instance_;
}

PChatReq* PChatReq::default_instance_ = NULL;

PChatReq* PChatReq::New() const {
  return new PChatReq;
}

void PChatReq::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    type_ = 0;
    if (has_msg()) {
      if (msg_ != &::google::protobuf::internal::kEmptyString) {
        msg_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool PChatReq::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required int32 type = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &type_)));
          set_has_type();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_msg;
        break;
      }

      // required string msg = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_msg:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_msg()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->msg().data(), this->msg().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void PChatReq::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required int32 type = 1;
  if (has_type()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->type(), output);
  }

  // required string msg = 2;
  if (has_msg()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->msg().data(), this->msg().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->msg(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* PChatReq::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required int32 type = 1;
  if (has_type()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->type(), target);
  }

  // required string msg = 2;
  if (has_msg()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->msg().data(), this->msg().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->msg(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int PChatReq::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required int32 type = 1;
    if (has_type()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->type());
    }

    // required string msg = 2;
    if (has_msg()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->msg());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void PChatReq::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const PChatReq* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const PChatReq*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void PChatReq::MergeFrom(const PChatReq& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_type()) {
      set_type(from.type());
    }
    if (from.has_msg()) {
      set_msg(from.msg());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void PChatReq::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void PChatReq::CopyFrom(const PChatReq& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PChatReq::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;

  return true;
}

void PChatReq::Swap(PChatReq* other) {
  if (other != this) {
    std::swap(type_, other->type_);
    std::swap(msg_, other->msg_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata PChatReq::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = PChatReq_descriptor_;
  metadata.reflection = PChatReq_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int PChatResp::kMsgFieldNumber;
#endif  // !_MSC_VER

PChatResp::PChatResp()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void PChatResp::InitAsDefaultInstance() {
}

PChatResp::PChatResp(const PChatResp& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void PChatResp::SharedCtor() {
  _cached_size_ = 0;
  msg_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

PChatResp::~PChatResp() {
  SharedDtor();
}

void PChatResp::SharedDtor() {
  if (msg_ != &::google::protobuf::internal::kEmptyString) {
    delete msg_;
  }
  if (this != default_instance_) {
  }
}

void PChatResp::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* PChatResp::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return PChatResp_descriptor_;
}

const PChatResp& PChatResp::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_chat_2eproto();
  return *default_instance_;
}

PChatResp* PChatResp::default_instance_ = NULL;

PChatResp* PChatResp::New() const {
  return new PChatResp;
}

void PChatResp::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_msg()) {
      if (msg_ != &::google::protobuf::internal::kEmptyString) {
        msg_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool PChatResp::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string msg = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_msg()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->msg().data(), this->msg().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void PChatResp::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional string msg = 1;
  if (has_msg()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->msg().data(), this->msg().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->msg(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* PChatResp::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional string msg = 1;
  if (has_msg()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->msg().data(), this->msg().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->msg(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int PChatResp::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional string msg = 1;
    if (has_msg()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->msg());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void PChatResp::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const PChatResp* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const PChatResp*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void PChatResp::MergeFrom(const PChatResp& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_msg()) {
      set_msg(from.msg());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void PChatResp::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void PChatResp::CopyFrom(const PChatResp& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PChatResp::IsInitialized() const {

  return true;
}

void PChatResp::Swap(PChatResp* other) {
  if (other != this) {
    std::swap(msg_, other->msg_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata PChatResp::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = PChatResp_descriptor_;
  metadata.reflection = PChatResp_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int PChatUpdate::kMsgTypeFieldNumber;
const int PChatUpdate::kMsgNameFieldNumber;
const int PChatUpdate::kRoleIdFieldNumber;
const int PChatUpdate::kMsgFieldNumber;
#endif  // !_MSC_VER

PChatUpdate::PChatUpdate()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void PChatUpdate::InitAsDefaultInstance() {
}

PChatUpdate::PChatUpdate(const PChatUpdate& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void PChatUpdate::SharedCtor() {
  _cached_size_ = 0;
  msgtype_ = 0;
  msgname_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  roleid_ = GOOGLE_LONGLONG(0);
  msg_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

PChatUpdate::~PChatUpdate() {
  SharedDtor();
}

void PChatUpdate::SharedDtor() {
  if (msgname_ != &::google::protobuf::internal::kEmptyString) {
    delete msgname_;
  }
  if (msg_ != &::google::protobuf::internal::kEmptyString) {
    delete msg_;
  }
  if (this != default_instance_) {
  }
}

void PChatUpdate::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* PChatUpdate::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return PChatUpdate_descriptor_;
}

const PChatUpdate& PChatUpdate::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_chat_2eproto();
  return *default_instance_;
}

PChatUpdate* PChatUpdate::default_instance_ = NULL;

PChatUpdate* PChatUpdate::New() const {
  return new PChatUpdate;
}

void PChatUpdate::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    msgtype_ = 0;
    if (has_msgname()) {
      if (msgname_ != &::google::protobuf::internal::kEmptyString) {
        msgname_->clear();
      }
    }
    roleid_ = GOOGLE_LONGLONG(0);
    if (has_msg()) {
      if (msg_ != &::google::protobuf::internal::kEmptyString) {
        msg_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool PChatUpdate::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required int32 msgType = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &msgtype_)));
          set_has_msgtype();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_msgName;
        break;
      }

      // required string msgName = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_msgName:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_msgname()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->msgname().data(), this->msgname().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_roleId;
        break;
      }

      // required int64 roleId = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_roleId:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &roleid_)));
          set_has_roleid();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(34)) goto parse_msg;
        break;
      }

      // required string msg = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_msg:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_msg()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->msg().data(), this->msg().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void PChatUpdate::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required int32 msgType = 1;
  if (has_msgtype()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->msgtype(), output);
  }

  // required string msgName = 2;
  if (has_msgname()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->msgname().data(), this->msgname().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->msgname(), output);
  }

  // required int64 roleId = 3;
  if (has_roleid()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(3, this->roleid(), output);
  }

  // required string msg = 4;
  if (has_msg()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->msg().data(), this->msg().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      4, this->msg(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* PChatUpdate::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required int32 msgType = 1;
  if (has_msgtype()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->msgtype(), target);
  }

  // required string msgName = 2;
  if (has_msgname()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->msgname().data(), this->msgname().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->msgname(), target);
  }

  // required int64 roleId = 3;
  if (has_roleid()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(3, this->roleid(), target);
  }

  // required string msg = 4;
  if (has_msg()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->msg().data(), this->msg().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        4, this->msg(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int PChatUpdate::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required int32 msgType = 1;
    if (has_msgtype()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->msgtype());
    }

    // required string msgName = 2;
    if (has_msgname()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->msgname());
    }

    // required int64 roleId = 3;
    if (has_roleid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->roleid());
    }

    // required string msg = 4;
    if (has_msg()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->msg());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void PChatUpdate::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const PChatUpdate* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const PChatUpdate*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void PChatUpdate::MergeFrom(const PChatUpdate& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_msgtype()) {
      set_msgtype(from.msgtype());
    }
    if (from.has_msgname()) {
      set_msgname(from.msgname());
    }
    if (from.has_roleid()) {
      set_roleid(from.roleid());
    }
    if (from.has_msg()) {
      set_msg(from.msg());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void PChatUpdate::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void PChatUpdate::CopyFrom(const PChatUpdate& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PChatUpdate::IsInitialized() const {
  if ((_has_bits_[0] & 0x0000000f) != 0x0000000f) return false;

  return true;
}

void PChatUpdate::Swap(PChatUpdate* other) {
  if (other != this) {
    std::swap(msgtype_, other->msgtype_);
    std::swap(msgname_, other->msgname_);
    std::swap(roleid_, other->roleid_);
    std::swap(msg_, other->msg_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata PChatUpdate::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = PChatUpdate_descriptor_;
  metadata.reflection = PChatUpdate_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int PChatTag::kTypeFieldNumber;
#endif  // !_MSC_VER

PChatTag::PChatTag()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void PChatTag::InitAsDefaultInstance() {
}

PChatTag::PChatTag(const PChatTag& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void PChatTag::SharedCtor() {
  _cached_size_ = 0;
  type_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

PChatTag::~PChatTag() {
  SharedDtor();
}

void PChatTag::SharedDtor() {
  if (this != default_instance_) {
  }
}

void PChatTag::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* PChatTag::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return PChatTag_descriptor_;
}

const PChatTag& PChatTag::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_chat_2eproto();
  return *default_instance_;
}

PChatTag* PChatTag::default_instance_ = NULL;

PChatTag* PChatTag::New() const {
  return new PChatTag;
}

void PChatTag::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    type_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool PChatTag::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required int32 type = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &type_)));
          set_has_type();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void PChatTag::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required int32 type = 1;
  if (has_type()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->type(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* PChatTag::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required int32 type = 1;
  if (has_type()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->type(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int PChatTag::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required int32 type = 1;
    if (has_type()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->type());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void PChatTag::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const PChatTag* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const PChatTag*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void PChatTag::MergeFrom(const PChatTag& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_type()) {
      set_type(from.type());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void PChatTag::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void PChatTag::CopyFrom(const PChatTag& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PChatTag::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  return true;
}

void PChatTag::Swap(PChatTag* other) {
  if (other != this) {
    std::swap(type_, other->type_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata PChatTag::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = PChatTag_descriptor_;
  metadata.reflection = PChatTag_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)