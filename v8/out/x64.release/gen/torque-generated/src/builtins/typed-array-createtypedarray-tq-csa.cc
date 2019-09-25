#include "src/builtins/builtins-array-gen.h"
#include "src/builtins/builtins-regexp-gen.h"
#include "src/builtins/builtins-utils-gen.h"
#include "src/builtins/builtins.h"
#include "src/codegen/code-factory.h"
#include "src/heap/factory-inl.h"
#include "src/objects/arguments.h"
#include "src/objects/bigint.h"
#include "src/objects/elements-kind.h"
#include "src/objects/free-space.h"
#include "src/objects/js-generator.h"
#include "src/objects/js-promise.h"
#include "src/objects/js-regexp-string-iterator.h"
#include "src/objects/js-weak-refs.h"
#include "src/objects/objects.h"
#include "src/objects/source-text-module.h"
#include "src/objects/stack-frame-info.h"
#include "src/objects/synthetic-module.h"
#include "src/objects/template-objects.h"
#include "src/builtins/builtins-bigint-gen.h"
#include "src/builtins/builtins-collections-gen.h"
#include "src/builtins/builtins-data-view-gen.h"
#include "src/builtins/builtins-regexp-gen.h"
#include "src/builtins/builtins-iterator-gen.h"
#include "src/builtins/builtins-proxy-gen.h"
#include "src/builtins/builtins-proxy-gen.h"
#include "src/builtins/builtins-proxy-gen.h"
#include "src/builtins/builtins-proxy-gen.h"
#include "src/builtins/builtins-proxy-gen.h"
#include "src/builtins/builtins-proxy-gen.h"
#include "src/builtins/builtins-proxy-gen.h"
#include "src/builtins/builtins-proxy-gen.h"
#include "src/builtins/builtins-proxy-gen.h"
#include "src/builtins/builtins-proxy-gen.h"
#include "src/builtins/builtins-proxy-gen.h"
#include "src/builtins/builtins-proxy-gen.h"
#include "src/builtins/builtins-regexp-gen.h"
#include "src/builtins/builtins-regexp-gen.h"
#include "src/builtins/builtins-regexp-gen.h"
#include "src/builtins/builtins-regexp-gen.h"
#include "src/builtins/builtins-regexp-gen.h"
#include "src/builtins/builtins-regexp-gen.h"
#include "src/builtins/builtins-regexp-gen.h"
#include "src/builtins/builtins-regexp-gen.h"
#include "src/builtins/builtins-string-gen.h"
#include "src/builtins/builtins-string-gen.h"
#include "src/builtins/builtins-regexp-gen.h"
#include "src/builtins/builtins-constructor-gen.h"
#include "src/builtins/builtins-typed-array-gen.h"
#include "src/builtins/builtins-typed-array-gen.h"
#include "src/builtins/builtins-typed-array-gen.h"
#include "src/builtins/builtins-typed-array-gen.h"
#include "src/builtins/builtins-typed-array-gen.h"
#include "src/builtins/builtins-typed-array-gen.h"
#include "src/builtins/builtins-typed-array-gen.h"
#include "src/builtins/builtins-typed-array-gen.h"
#include "src/builtins/builtins-typed-array-gen.h"
#include "src/objects/js-break-iterator.h"
#include "src/objects/js-collator.h"
#include "src/objects/js-number-format.h"
#include "src/objects/js-objects.h"
#include "src/objects/js-plural-rules.h"
#include "src/objects/js-relative-time-format.h"
#include "src/objects/js-date-time-format.h"
#include "src/objects/js-list-format.h"
#include "src/objects/js-locale.h"
#include "src/objects/js-segment-iterator.h"
#include "src/objects/js-segmenter.h"
#include "torque-generated/src/builtins/arguments-tq-csa.h"
#include "torque-generated/src/builtins/array-copywithin-tq-csa.h"
#include "torque-generated/src/builtins/array-every-tq-csa.h"
#include "torque-generated/src/builtins/array-filter-tq-csa.h"
#include "torque-generated/src/builtins/array-find-tq-csa.h"
#include "torque-generated/src/builtins/array-findindex-tq-csa.h"
#include "torque-generated/src/builtins/array-foreach-tq-csa.h"
#include "torque-generated/src/builtins/array-join-tq-csa.h"
#include "torque-generated/src/builtins/array-lastindexof-tq-csa.h"
#include "torque-generated/src/builtins/array-map-tq-csa.h"
#include "torque-generated/src/builtins/array-of-tq-csa.h"
#include "torque-generated/src/builtins/array-reduce-right-tq-csa.h"
#include "torque-generated/src/builtins/array-reduce-tq-csa.h"
#include "torque-generated/src/builtins/array-reverse-tq-csa.h"
#include "torque-generated/src/builtins/array-shift-tq-csa.h"
#include "torque-generated/src/builtins/array-slice-tq-csa.h"
#include "torque-generated/src/builtins/array-some-tq-csa.h"
#include "torque-generated/src/builtins/array-splice-tq-csa.h"
#include "torque-generated/src/builtins/array-unshift-tq-csa.h"
#include "torque-generated/src/builtins/array-tq-csa.h"
#include "torque-generated/src/builtins/base-tq-csa.h"
#include "torque-generated/src/builtins/bigint-tq-csa.h"
#include "torque-generated/src/builtins/boolean-tq-csa.h"
#include "torque-generated/src/builtins/collections-tq-csa.h"
#include "torque-generated/src/builtins/data-view-tq-csa.h"
#include "torque-generated/src/builtins/extras-utils-tq-csa.h"
#include "torque-generated/src/builtins/frames-tq-csa.h"
#include "torque-generated/src/builtins/growable-fixed-array-tq-csa.h"
#include "torque-generated/src/builtins/internal-coverage-tq-csa.h"
#include "torque-generated/src/builtins/iterator-tq-csa.h"
#include "torque-generated/src/builtins/math-tq-csa.h"
#include "torque-generated/src/builtins/object-fromentries-tq-csa.h"
#include "torque-generated/src/builtins/object-tq-csa.h"
#include "torque-generated/src/builtins/proxy-constructor-tq-csa.h"
#include "torque-generated/src/builtins/proxy-delete-property-tq-csa.h"
#include "torque-generated/src/builtins/proxy-get-property-tq-csa.h"
#include "torque-generated/src/builtins/proxy-get-prototype-of-tq-csa.h"
#include "torque-generated/src/builtins/proxy-has-property-tq-csa.h"
#include "torque-generated/src/builtins/proxy-is-extensible-tq-csa.h"
#include "torque-generated/src/builtins/proxy-prevent-extensions-tq-csa.h"
#include "torque-generated/src/builtins/proxy-revocable-tq-csa.h"
#include "torque-generated/src/builtins/proxy-revoke-tq-csa.h"
#include "torque-generated/src/builtins/proxy-set-property-tq-csa.h"
#include "torque-generated/src/builtins/proxy-set-prototype-of-tq-csa.h"
#include "torque-generated/src/builtins/proxy-tq-csa.h"
#include "torque-generated/src/builtins/reflect-tq-csa.h"
#include "torque-generated/src/builtins/regexp-exec-tq-csa.h"
#include "torque-generated/src/builtins/regexp-match-tq-csa.h"
#include "torque-generated/src/builtins/regexp-replace-tq-csa.h"
#include "torque-generated/src/builtins/regexp-search-tq-csa.h"
#include "torque-generated/src/builtins/regexp-source-tq-csa.h"
#include "torque-generated/src/builtins/regexp-split-tq-csa.h"
#include "torque-generated/src/builtins/regexp-test-tq-csa.h"
#include "torque-generated/src/builtins/regexp-tq-csa.h"
#include "torque-generated/src/builtins/string-tq-csa.h"
#include "torque-generated/src/builtins/string-endswith-tq-csa.h"
#include "torque-generated/src/builtins/string-html-tq-csa.h"
#include "torque-generated/src/builtins/string-iterator-tq-csa.h"
#include "torque-generated/src/builtins/string-pad-tq-csa.h"
#include "torque-generated/src/builtins/string-repeat-tq-csa.h"
#include "torque-generated/src/builtins/string-slice-tq-csa.h"
#include "torque-generated/src/builtins/string-startswith-tq-csa.h"
#include "torque-generated/src/builtins/string-substring-tq-csa.h"
#include "torque-generated/src/builtins/torque-internal-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-createtypedarray-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-every-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-filter-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-find-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-findindex-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-foreach-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-reduce-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-reduceright-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-slice-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-some-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-subarray-tq-csa.h"
#include "torque-generated/src/builtins/typed-array-tq-csa.h"
#include "torque-generated/src/objects/intl-objects-tq-csa.h"
#include "torque-generated/test/torque/test-torque-tq-csa.h"
#include "torque-generated/third_party/v8/builtins/array-sort-tq-csa.h"

namespace v8 {
namespace internal {

TNode<JSTypedArray> AllocateTypedArray_348(compiler::CodeAssemblerState* state_, TNode<Context> p_context, bool p_isOnHeap, TNode<Map> p_map, TNode<JSArrayBuffer> p_buffer, TNode<UintPtrT> p_byteOffset, TNode<UintPtrT> p_byteLength, TNode<UintPtrT> p_length) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, JSArrayBuffer, UintPtrT, UintPtrT, UintPtrT> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, JSArrayBuffer, UintPtrT, UintPtrT, UintPtrT, ByteArray> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, JSArrayBuffer, UintPtrT, UintPtrT, UintPtrT, ByteArray> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, JSArrayBuffer, UintPtrT, UintPtrT, UintPtrT, ByteArray> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, JSArrayBuffer, UintPtrT, UintPtrT, UintPtrT, ByteArray, JSTypedArray> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, JSArrayBuffer, UintPtrT, UintPtrT, UintPtrT, ByteArray, JSTypedArray> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, JSArrayBuffer, UintPtrT, UintPtrT, UintPtrT, ByteArray, JSTypedArray> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, JSArrayBuffer, UintPtrT, UintPtrT, UintPtrT, JSTypedArray> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, JSArrayBuffer, UintPtrT, UintPtrT, UintPtrT, JSTypedArray> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_map, p_buffer, p_byteOffset, p_byteLength, p_length);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Map> tmp1;
    TNode<JSArrayBuffer> tmp2;
    TNode<UintPtrT> tmp3;
    TNode<UintPtrT> tmp4;
    TNode<UintPtrT> tmp5;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4, &tmp5);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 29);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 30);
    if ((p_isOnHeap)) {
      ca_.Goto(&block2, tmp0, tmp1, tmp2, tmp3, tmp4, tmp5, ca_.Uninitialized<ByteArray>());
    } else {
      ca_.Goto(&block3, tmp0, tmp1, tmp2, tmp3, tmp4, tmp5, ca_.Uninitialized<ByteArray>());
    }
  }

  if (block2.is_used()) {
    TNode<Context> tmp6;
    TNode<Map> tmp7;
    TNode<JSArrayBuffer> tmp8;
    TNode<UintPtrT> tmp9;
    TNode<UintPtrT> tmp10;
    TNode<UintPtrT> tmp11;
    TNode<ByteArray> tmp12;
    ca_.Bind(&block2, &tmp6, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11, &tmp12);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 31);
    TNode<ByteArray> tmp13;
    USE(tmp13);
    tmp13 = CodeStubAssembler(state_).AllocateByteArray(TNode<UintPtrT>{tmp10});
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 30);
    ca_.Goto(&block4, tmp6, tmp7, tmp8, tmp9, tmp10, tmp11, tmp13);
  }

  if (block3.is_used()) {
    TNode<Context> tmp14;
    TNode<Map> tmp15;
    TNode<JSArrayBuffer> tmp16;
    TNode<UintPtrT> tmp17;
    TNode<UintPtrT> tmp18;
    TNode<UintPtrT> tmp19;
    TNode<ByteArray> tmp20;
    ca_.Bind(&block3, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18, &tmp19, &tmp20);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 33);
    TNode<ByteArray> tmp21;
    USE(tmp21);
    tmp21 = kEmptyByteArray_213(state_);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 39);
    TNode<IntPtrT> tmp22 = ca_.IntPtrConstant(JSArrayBuffer::kBackingStoreOffset);
    USE(tmp22);
    TNode<RawPtrT>tmp23 = CodeStubAssembler(state_).LoadReference<RawPtrT>(CodeStubAssembler::Reference{tmp16, tmp22});
    TNode<UintPtrT> tmp24;
    USE(tmp24);
    tmp24 = Convert9ATuintptr8ATRawPtr_206(state_, TNode<RawPtrT>{tmp23});
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 32);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 30);
    ca_.Goto(&block4, tmp14, tmp15, tmp16, tmp17, tmp18, tmp19, tmp21);
  }

  if (block4.is_used()) {
    TNode<Context> tmp25;
    TNode<Map> tmp26;
    TNode<JSArrayBuffer> tmp27;
    TNode<UintPtrT> tmp28;
    TNode<UintPtrT> tmp29;
    TNode<UintPtrT> tmp30;
    TNode<ByteArray> tmp31;
    ca_.Bind(&block4, &tmp25, &tmp26, &tmp27, &tmp28, &tmp29, &tmp30, &tmp31);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 54);
    TNode<JSObject> tmp32;
    USE(tmp32);
    tmp32 = AllocateFastOrSlowJSObjectFromMap_57(state_, TNode<Context>{tmp25}, TNode<Map>{tmp26});
    TNode<JSTypedArray> tmp33;
    USE(tmp33);
    tmp33 = UnsafeCast12JSTypedArray_1443(state_, TNode<Context>{tmp25}, TNode<Object>{tmp32});
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 55);
    TNode<IntPtrT> tmp34 = ca_.IntPtrConstant(JSObject::kElementsOffset);
    USE(tmp34);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp33, tmp34}, tmp31);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 56);
    TNode<IntPtrT> tmp35 = ca_.IntPtrConstant(JSArrayBufferView::kBufferOffset);
    USE(tmp35);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp33, tmp35}, tmp27);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 57);
    TNode<IntPtrT> tmp36 = ca_.IntPtrConstant(JSArrayBufferView::kByteOffsetOffset);
    USE(tmp36);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp33, tmp36}, tmp28);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 58);
    TNode<IntPtrT> tmp37 = ca_.IntPtrConstant(JSArrayBufferView::kByteLengthOffset);
    USE(tmp37);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp33, tmp37}, tmp29);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 59);
    TNode<IntPtrT> tmp38 = ca_.IntPtrConstant(JSTypedArray::kLengthOffset);
    USE(tmp38);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp33, tmp38}, tmp30);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 60);
    if ((p_isOnHeap)) {
      ca_.Goto(&block5, tmp25, tmp26, tmp27, tmp28, tmp29, tmp30, tmp31, tmp33);
    } else {
      ca_.Goto(&block6, tmp25, tmp26, tmp27, tmp28, tmp29, tmp30, tmp31, tmp33);
    }
  }

  if (block5.is_used()) {
    TNode<Context> tmp39;
    TNode<Map> tmp40;
    TNode<JSArrayBuffer> tmp41;
    TNode<UintPtrT> tmp42;
    TNode<UintPtrT> tmp43;
    TNode<UintPtrT> tmp44;
    TNode<ByteArray> tmp45;
    TNode<JSTypedArray> tmp46;
    ca_.Bind(&block5, &tmp39, &tmp40, &tmp41, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 62);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 61);
    TypedArrayBuiltinsAssembler(state_).SetJSTypedArrayOnHeapDataPtr(TNode<JSTypedArray>{tmp46}, TNode<ByteArray>{tmp45}, TNode<UintPtrT>{tmp42});
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 60);
    ca_.Goto(&block7, tmp39, tmp40, tmp41, tmp42, tmp43, tmp44, tmp45, tmp46);
  }

  if (block6.is_used()) {
    TNode<Context> tmp47;
    TNode<Map> tmp48;
    TNode<JSArrayBuffer> tmp49;
    TNode<UintPtrT> tmp50;
    TNode<UintPtrT> tmp51;
    TNode<UintPtrT> tmp52;
    TNode<ByteArray> tmp53;
    TNode<JSTypedArray> tmp54;
    ca_.Bind(&block6, &tmp47, &tmp48, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 65);
    TNode<IntPtrT> tmp55 = ca_.IntPtrConstant(JSArrayBuffer::kBackingStoreOffset);
    USE(tmp55);
    TNode<RawPtrT>tmp56 = CodeStubAssembler(state_).LoadReference<RawPtrT>(CodeStubAssembler::Reference{tmp49, tmp55});
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 64);
    TypedArrayBuiltinsAssembler(state_).SetJSTypedArrayOffHeapDataPtr(TNode<JSTypedArray>{tmp54}, TNode<RawPtrT>{tmp56}, TNode<UintPtrT>{tmp50});
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 60);
    ca_.Goto(&block7, tmp47, tmp48, tmp49, tmp50, tmp51, tmp52, tmp53, tmp54);
  }

  if (block7.is_used()) {
    TNode<Context> tmp57;
    TNode<Map> tmp58;
    TNode<JSArrayBuffer> tmp59;
    TNode<UintPtrT> tmp60;
    TNode<UintPtrT> tmp61;
    TNode<UintPtrT> tmp62;
    TNode<ByteArray> tmp63;
    TNode<JSTypedArray> tmp64;
    ca_.Bind(&block7, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 70);
    TypedArrayBuiltinsAssembler(state_).SetupTypedArrayEmbedderFields(TNode<JSTypedArray>{tmp64});
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 71);
    ca_.Goto(&block1, tmp57, tmp58, tmp59, tmp60, tmp61, tmp62, tmp64);
  }

  if (block1.is_used()) {
    TNode<Context> tmp65;
    TNode<Map> tmp66;
    TNode<JSArrayBuffer> tmp67;
    TNode<UintPtrT> tmp68;
    TNode<UintPtrT> tmp69;
    TNode<UintPtrT> tmp70;
    TNode<JSTypedArray> tmp71;
    ca_.Bind(&block1, &tmp65, &tmp66, &tmp67, &tmp68, &tmp69, &tmp70, &tmp71);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 26);
    ca_.Goto(&block8, tmp65, tmp66, tmp67, tmp68, tmp69, tmp70, tmp71);
  }

    TNode<Context> tmp72;
    TNode<Map> tmp73;
    TNode<JSArrayBuffer> tmp74;
    TNode<UintPtrT> tmp75;
    TNode<UintPtrT> tmp76;
    TNode<UintPtrT> tmp77;
    TNode<JSTypedArray> tmp78;
    ca_.Bind(&block8, &tmp72, &tmp73, &tmp74, &tmp75, &tmp76, &tmp77, &tmp78);
  return TNode<JSTypedArray>{tmp78};
}

TNode<JSTypedArray> TypedArrayInitialize_349(compiler::CodeAssemblerState* state_, TNode<Context> p_context, bool p_initialize, TNode<Map> p_map, TNode<Smi> p_length, TorqueStructTypedArrayElementsInfo p_elementsInfo, TNode<JSReceiver> p_bufferConstructor) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, Smi, UintPtrT, Int32T, JSReceiver> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, Smi, UintPtrT, Int32T, JSReceiver, UintPtrT, Int32T, Smi, Smi, UintPtrT, UintPtrT> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, Smi, UintPtrT, Int32T, JSReceiver, UintPtrT, Int32T, Smi, Smi, UintPtrT, UintPtrT> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, Smi, UintPtrT, Int32T, JSReceiver, UintPtrT, Int32T, Smi, Smi, UintPtrT> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, Smi, UintPtrT, Int32T, JSReceiver> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, Smi, UintPtrT, Int32T, JSReceiver, UintPtrT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, Smi, UintPtrT, Int32T, JSReceiver, UintPtrT, Number, JSReceiver, UintPtrT> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, Smi, UintPtrT, Int32T, JSReceiver, UintPtrT, Number, JSReceiver, UintPtrT> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, Smi, UintPtrT, Int32T, JSReceiver, UintPtrT, Number, JSReceiver, UintPtrT> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, Smi, UintPtrT, Int32T, JSReceiver, UintPtrT, Number, JSReceiver, UintPtrT> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, Smi, UintPtrT, Int32T, JSReceiver, UintPtrT, Number, JSReceiver, UintPtrT, JSArrayBuffer, JSTypedArray> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, Smi, UintPtrT, Int32T, JSReceiver, UintPtrT, Number, JSReceiver, UintPtrT, JSArrayBuffer, JSTypedArray> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, Smi, UintPtrT, Int32T, JSReceiver, UintPtrT, Number, JSReceiver, UintPtrT, JSArrayBuffer, JSTypedArray> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, Smi, UintPtrT, Int32T, JSReceiver, UintPtrT, Number, JSReceiver, UintPtrT> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, Smi, UintPtrT, Int32T, JSReceiver, UintPtrT, Number, JSReceiver, UintPtrT> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, Smi, UintPtrT, Int32T, JSReceiver, UintPtrT, Number, JSReceiver, UintPtrT> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, Smi, UintPtrT, Int32T, JSReceiver, UintPtrT, Number, JSReceiver, UintPtrT, Object> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, Smi, UintPtrT, Int32T, JSReceiver, UintPtrT, Number, JSReceiver, UintPtrT, Object, Object> block24(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, Smi, UintPtrT, Int32T, JSReceiver, UintPtrT, Number, JSReceiver, UintPtrT, Object, Object, JSArrayBuffer> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, Smi, UintPtrT, Int32T, JSReceiver, UintPtrT, Number, JSReceiver, UintPtrT, Object> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, Smi, UintPtrT, Int32T, JSReceiver, UintPtrT, Number, JSReceiver, UintPtrT, Object, JSArrayBuffer> block21(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, Smi, UintPtrT, Int32T, JSReceiver, JSTypedArray> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, Smi, UintPtrT, Int32T, JSReceiver, JSTypedArray> block25(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_map, p_length, p_elementsInfo.sizeLog2, p_elementsInfo.kind, p_bufferConstructor);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Map> tmp1;
    TNode<Smi> tmp2;
    TNode<UintPtrT> tmp3;
    TNode<Int32T> tmp4;
    TNode<JSReceiver> tmp5;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4, &tmp5);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 78);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 26);
    TNode<UintPtrT> tmp6;
    USE(tmp6);
    tmp6 = Convert9ATuintptr13ATPositiveSmi_189(state_, TNode<Smi>{tmp2});
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 27);
    TNode<UintPtrT> tmp7;
    USE(tmp7);
    tmp7 = CodeStubAssembler(state_).WordShl(TNode<UintPtrT>{tmp6}, TNode<UintPtrT>{tmp3});
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 30);
    TNode<UintPtrT> tmp8;
    USE(tmp8);
    tmp8 = CodeStubAssembler(state_).WordShr(TNode<UintPtrT>{tmp7}, TNode<UintPtrT>{tmp3});
    TNode<BoolT> tmp9;
    USE(tmp9);
    tmp9 = CodeStubAssembler(state_).WordNotEqual(TNode<UintPtrT>{tmp8}, TNode<UintPtrT>{tmp6});
    ca_.Branch(tmp9, &block5, &block6, tmp0, tmp1, tmp2, tmp3, tmp4, tmp5, tmp3, tmp4, tmp2, tmp2, tmp6, tmp7);
  }

  if (block5.is_used()) {
    TNode<Context> tmp10;
    TNode<Map> tmp11;
    TNode<Smi> tmp12;
    TNode<UintPtrT> tmp13;
    TNode<Int32T> tmp14;
    TNode<JSReceiver> tmp15;
    TNode<UintPtrT> tmp16;
    TNode<Int32T> tmp17;
    TNode<Smi> tmp18;
    TNode<Smi> tmp19;
    TNode<UintPtrT> tmp20;
    TNode<UintPtrT> tmp21;
    ca_.Bind(&block5, &tmp10, &tmp11, &tmp12, &tmp13, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18, &tmp19, &tmp20, &tmp21);
    ca_.Goto(&block3, tmp10, tmp11, tmp12, tmp13, tmp14, tmp15);
  }

  if (block6.is_used()) {
    TNode<Context> tmp22;
    TNode<Map> tmp23;
    TNode<Smi> tmp24;
    TNode<UintPtrT> tmp25;
    TNode<Int32T> tmp26;
    TNode<JSReceiver> tmp27;
    TNode<UintPtrT> tmp28;
    TNode<Int32T> tmp29;
    TNode<Smi> tmp30;
    TNode<Smi> tmp31;
    TNode<UintPtrT> tmp32;
    TNode<UintPtrT> tmp33;
    ca_.Bind(&block6, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26, &tmp27, &tmp28, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 31);
    ca_.Goto(&block4, tmp22, tmp23, tmp24, tmp25, tmp26, tmp27, tmp28, tmp29, tmp30, tmp31, tmp33);
  }

  if (block4.is_used()) {
    TNode<Context> tmp34;
    TNode<Map> tmp35;
    TNode<Smi> tmp36;
    TNode<UintPtrT> tmp37;
    TNode<Int32T> tmp38;
    TNode<JSReceiver> tmp39;
    TNode<UintPtrT> tmp40;
    TNode<Int32T> tmp41;
    TNode<Smi> tmp42;
    TNode<Smi> tmp43;
    TNode<UintPtrT> tmp44;
    ca_.Bind(&block4, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40, &tmp41, &tmp42, &tmp43, &tmp44);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 78);
    ca_.Goto(&block2, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39, tmp44);
  }

  if (block3.is_used()) {
    TNode<Context> tmp45;
    TNode<Map> tmp46;
    TNode<Smi> tmp47;
    TNode<UintPtrT> tmp48;
    TNode<Int32T> tmp49;
    TNode<JSReceiver> tmp50;
    ca_.Bind(&block3, &tmp45, &tmp46, &tmp47, &tmp48, &tmp49, &tmp50);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 79);
    CodeStubAssembler(state_).ThrowRangeError(TNode<Context>{tmp45}, MessageTemplate::kInvalidArrayBufferLength);
  }

  if (block2.is_used()) {
    TNode<Context> tmp51;
    TNode<Map> tmp52;
    TNode<Smi> tmp53;
    TNode<UintPtrT> tmp54;
    TNode<Int32T> tmp55;
    TNode<JSReceiver> tmp56;
    TNode<UintPtrT> tmp57;
    ca_.Bind(&block2, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56, &tmp57);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 80);
    TNode<Number> tmp58;
    USE(tmp58);
    tmp58 = Convert20UT5ATSmi10HeapNumber9ATuintptr_203(state_, TNode<UintPtrT>{tmp57});
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 81);
    TNode<JSReceiver> tmp59;
    USE(tmp59);
    tmp59 = GetArrayBufferFunction_222(state_, TNode<Context>{tmp51});
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 82);
    TNode<UintPtrT> tmp60;
    USE(tmp60);
    tmp60 = FromConstexpr9ATuintptr17ATconstexpr_int31_164(state_, 0);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 85);
    TNode<BoolT> tmp61;
    USE(tmp61);
    tmp61 = CodeStubAssembler(state_).TaggedNotEqual(TNode<HeapObject>{tmp56}, TNode<HeapObject>{tmp59});
    ca_.Branch(tmp61, &block11, &block12, tmp51, tmp52, tmp53, tmp54, tmp55, tmp56, tmp57, tmp58, tmp59, tmp60);
  }

  if (block11.is_used()) {
    TNode<Context> tmp62;
    TNode<Map> tmp63;
    TNode<Smi> tmp64;
    TNode<UintPtrT> tmp65;
    TNode<Int32T> tmp66;
    TNode<JSReceiver> tmp67;
    TNode<UintPtrT> tmp68;
    TNode<Number> tmp69;
    TNode<JSReceiver> tmp70;
    TNode<UintPtrT> tmp71;
    ca_.Bind(&block11, &tmp62, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67, &tmp68, &tmp69, &tmp70, &tmp71);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 87);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 86);
    TNode<JSReceiver> tmp72;
    USE(tmp72);
    tmp72 = CodeStubAssembler(state_).ConstructWithTarget(TNode<Context>{tmp62}, TNode<JSReceiver>{tmp70}, TNode<JSReceiver>{tmp67}, TNode<Object>{tmp69});
    ca_.Goto(&block8, tmp62, tmp63, tmp64, tmp65, tmp66, tmp67, tmp68, tmp69, tmp70, tmp71, tmp72);
  }

  if (block12.is_used()) {
    TNode<Context> tmp73;
    TNode<Map> tmp74;
    TNode<Smi> tmp75;
    TNode<UintPtrT> tmp76;
    TNode<Int32T> tmp77;
    TNode<JSReceiver> tmp78;
    TNode<UintPtrT> tmp79;
    TNode<Number> tmp80;
    TNode<JSReceiver> tmp81;
    TNode<UintPtrT> tmp82;
    ca_.Bind(&block12, &tmp73, &tmp74, &tmp75, &tmp76, &tmp77, &tmp78, &tmp79, &tmp80, &tmp81, &tmp82);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 90);
    TNode<UintPtrT> tmp83;
    USE(tmp83);
    tmp83 = FromConstexpr9ATuintptr17ATconstexpr_int31_164(state_, JSTypedArray::kMaxSizeInHeap);
    TNode<BoolT> tmp84;
    USE(tmp84);
    tmp84 = CodeStubAssembler(state_).UintPtrGreaterThan(TNode<UintPtrT>{tmp79}, TNode<UintPtrT>{tmp83});
    ca_.Branch(tmp84, &block13, &block14, tmp73, tmp74, tmp75, tmp76, tmp77, tmp78, tmp79, tmp80, tmp81, tmp82);
  }

  if (block13.is_used()) {
    TNode<Context> tmp85;
    TNode<Map> tmp86;
    TNode<Smi> tmp87;
    TNode<UintPtrT> tmp88;
    TNode<Int32T> tmp89;
    TNode<JSReceiver> tmp90;
    TNode<UintPtrT> tmp91;
    TNode<Number> tmp92;
    TNode<JSReceiver> tmp93;
    TNode<UintPtrT> tmp94;
    ca_.Bind(&block13, &tmp85, &tmp86, &tmp87, &tmp88, &tmp89, &tmp90, &tmp91, &tmp92, &tmp93, &tmp94);
    ca_.Goto(&block10, tmp85, tmp86, tmp87, tmp88, tmp89, tmp90, tmp91, tmp92, tmp93, tmp94);
  }

  if (block14.is_used()) {
    TNode<Context> tmp95;
    TNode<Map> tmp96;
    TNode<Smi> tmp97;
    TNode<UintPtrT> tmp98;
    TNode<Int32T> tmp99;
    TNode<JSReceiver> tmp100;
    TNode<UintPtrT> tmp101;
    TNode<Number> tmp102;
    TNode<JSReceiver> tmp103;
    TNode<UintPtrT> tmp104;
    ca_.Bind(&block14, &tmp95, &tmp96, &tmp97, &tmp98, &tmp99, &tmp100, &tmp101, &tmp102, &tmp103, &tmp104);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 92);
    TNode<JSArrayBuffer> tmp105;
    USE(tmp105);
    tmp105 = TypedArrayBuiltinsAssembler(state_).AllocateEmptyOnHeapBuffer(TNode<Context>{tmp95}, TNode<UintPtrT>{tmp101});
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 96);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 97);
    TNode<UintPtrT> tmp106;
    USE(tmp106);
    tmp106 = Convert9ATuintptr13ATPositiveSmi_189(state_, TNode<Smi>{tmp97});
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 95);
    TNode<JSTypedArray> tmp107;
    USE(tmp107);
    tmp107 = AllocateTypedArray_348(state_, TNode<Context>{tmp95}, true, TNode<Map>{tmp96}, TNode<JSArrayBuffer>{tmp105}, TNode<UintPtrT>{tmp104}, TNode<UintPtrT>{tmp101}, TNode<UintPtrT>{tmp106});
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 99);
    if ((p_initialize)) {
      ca_.Goto(&block15, tmp95, tmp96, tmp97, tmp98, tmp99, tmp100, tmp101, tmp102, tmp103, tmp104, tmp105, tmp107);
    } else {
      ca_.Goto(&block16, tmp95, tmp96, tmp97, tmp98, tmp99, tmp100, tmp101, tmp102, tmp103, tmp104, tmp105, tmp107);
    }
  }

  if (block15.is_used()) {
    TNode<Context> tmp108;
    TNode<Map> tmp109;
    TNode<Smi> tmp110;
    TNode<UintPtrT> tmp111;
    TNode<Int32T> tmp112;
    TNode<JSReceiver> tmp113;
    TNode<UintPtrT> tmp114;
    TNode<Number> tmp115;
    TNode<JSReceiver> tmp116;
    TNode<UintPtrT> tmp117;
    TNode<JSArrayBuffer> tmp118;
    TNode<JSTypedArray> tmp119;
    ca_.Bind(&block15, &tmp108, &tmp109, &tmp110, &tmp111, &tmp112, &tmp113, &tmp114, &tmp115, &tmp116, &tmp117, &tmp118, &tmp119);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 100);
    TNode<RawPtrT> tmp120;
    USE(tmp120);
    tmp120 = CodeStubAssembler(state_).LoadJSTypedArrayDataPtr(TNode<JSTypedArray>{tmp119});
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 101);
    TNode<IntPtrT> tmp121;
    USE(tmp121);
    tmp121 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 0);
    TypedArrayBuiltinsAssembler(state_).CallCMemset(TNode<RawPtrT>{tmp120}, TNode<IntPtrT>{tmp121}, TNode<UintPtrT>{tmp114});
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 99);
    ca_.Goto(&block17, tmp108, tmp109, tmp110, tmp111, tmp112, tmp113, tmp114, tmp115, tmp116, tmp117, tmp118, tmp119);
  }

  if (block16.is_used()) {
    TNode<Context> tmp122;
    TNode<Map> tmp123;
    TNode<Smi> tmp124;
    TNode<UintPtrT> tmp125;
    TNode<Int32T> tmp126;
    TNode<JSReceiver> tmp127;
    TNode<UintPtrT> tmp128;
    TNode<Number> tmp129;
    TNode<JSReceiver> tmp130;
    TNode<UintPtrT> tmp131;
    TNode<JSArrayBuffer> tmp132;
    TNode<JSTypedArray> tmp133;
    ca_.Bind(&block16, &tmp122, &tmp123, &tmp124, &tmp125, &tmp126, &tmp127, &tmp128, &tmp129, &tmp130, &tmp131, &tmp132, &tmp133);
    ca_.Goto(&block17, tmp122, tmp123, tmp124, tmp125, tmp126, tmp127, tmp128, tmp129, tmp130, tmp131, tmp132, tmp133);
  }

  if (block17.is_used()) {
    TNode<Context> tmp134;
    TNode<Map> tmp135;
    TNode<Smi> tmp136;
    TNode<UintPtrT> tmp137;
    TNode<Int32T> tmp138;
    TNode<JSReceiver> tmp139;
    TNode<UintPtrT> tmp140;
    TNode<Number> tmp141;
    TNode<JSReceiver> tmp142;
    TNode<UintPtrT> tmp143;
    TNode<JSArrayBuffer> tmp144;
    TNode<JSTypedArray> tmp145;
    ca_.Bind(&block17, &tmp134, &tmp135, &tmp136, &tmp137, &tmp138, &tmp139, &tmp140, &tmp141, &tmp142, &tmp143, &tmp144, &tmp145);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 104);
    ca_.Goto(&block1, tmp134, tmp135, tmp136, tmp137, tmp138, tmp139, tmp145);
  }

  if (block10.is_used()) {
    TNode<Context> tmp146;
    TNode<Map> tmp147;
    TNode<Smi> tmp148;
    TNode<UintPtrT> tmp149;
    TNode<Int32T> tmp150;
    TNode<JSReceiver> tmp151;
    TNode<UintPtrT> tmp152;
    TNode<Number> tmp153;
    TNode<JSReceiver> tmp154;
    TNode<UintPtrT> tmp155;
    ca_.Bind(&block10, &tmp146, &tmp147, &tmp148, &tmp149, &tmp150, &tmp151, &tmp152, &tmp153, &tmp154, &tmp155);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 107);
    if ((p_initialize)) {
      ca_.Goto(&block18, tmp146, tmp147, tmp148, tmp149, tmp150, tmp151, tmp152, tmp153, tmp154, tmp155);
    } else {
      ca_.Goto(&block19, tmp146, tmp147, tmp148, tmp149, tmp150, tmp151, tmp152, tmp153, tmp154, tmp155);
    }
  }

  if (block18.is_used()) {
    TNode<Context> tmp156;
    TNode<Map> tmp157;
    TNode<Smi> tmp158;
    TNode<UintPtrT> tmp159;
    TNode<Int32T> tmp160;
    TNode<JSReceiver> tmp161;
    TNode<UintPtrT> tmp162;
    TNode<Number> tmp163;
    TNode<JSReceiver> tmp164;
    TNode<UintPtrT> tmp165;
    ca_.Bind(&block18, &tmp156, &tmp157, &tmp158, &tmp159, &tmp160, &tmp161, &tmp162, &tmp163, &tmp164, &tmp165);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 108);
    TNode<JSReceiver> tmp166;
    USE(tmp166);
    tmp166 = CodeStubAssembler(state_).Construct(TNode<Context>{tmp156}, TNode<JSReceiver>{tmp164}, TNode<Object>{tmp163});
    ca_.Goto(&block8, tmp156, tmp157, tmp158, tmp159, tmp160, tmp161, tmp162, tmp163, tmp164, tmp165, tmp166);
  }

  if (block19.is_used()) {
    TNode<Context> tmp167;
    TNode<Map> tmp168;
    TNode<Smi> tmp169;
    TNode<UintPtrT> tmp170;
    TNode<Int32T> tmp171;
    TNode<JSReceiver> tmp172;
    TNode<UintPtrT> tmp173;
    TNode<Number> tmp174;
    TNode<JSReceiver> tmp175;
    TNode<UintPtrT> tmp176;
    ca_.Bind(&block19, &tmp167, &tmp168, &tmp169, &tmp170, &tmp171, &tmp172, &tmp173, &tmp174, &tmp175, &tmp176);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 111);
    TNode<JSFunction> tmp177;
    USE(tmp177);
    tmp177 = GetArrayBufferNoInitFunction_223(state_, TNode<Context>{tmp167});
    TNode<Oddball> tmp178;
    USE(tmp178);
    tmp178 = Undefined_64(state_);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 110);
    TNode<Object> tmp179;
    USE(tmp179);
    tmp179 = CodeStubAssembler(state_).Call(TNode<Context>{tmp167}, TNode<JSReceiver>{tmp177}, TNode<Object>{tmp178}, TNode<Object>{tmp174});
    ca_.Goto(&block8, tmp167, tmp168, tmp169, tmp170, tmp171, tmp172, tmp173, tmp174, tmp175, tmp176, tmp179);
  }

  if (block8.is_used()) {
    TNode<Context> tmp180;
    TNode<Map> tmp181;
    TNode<Smi> tmp182;
    TNode<UintPtrT> tmp183;
    TNode<Int32T> tmp184;
    TNode<JSReceiver> tmp185;
    TNode<UintPtrT> tmp186;
    TNode<Number> tmp187;
    TNode<JSReceiver> tmp188;
    TNode<UintPtrT> tmp189;
    TNode<Object> tmp190;
    ca_.Bind(&block8, &tmp180, &tmp181, &tmp182, &tmp183, &tmp184, &tmp185, &tmp186, &tmp187, &tmp188, &tmp189, &tmp190);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 115);
    TNode<JSArrayBuffer> tmp191;
    USE(tmp191);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp191 = Cast13JSArrayBuffer_1503(state_, TNode<Context>{tmp180}, TNode<Object>{tmp190}, &label0);
    ca_.Goto(&block23, tmp180, tmp181, tmp182, tmp183, tmp184, tmp185, tmp186, tmp187, tmp188, tmp189, tmp190, tmp190, tmp191);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block24, tmp180, tmp181, tmp182, tmp183, tmp184, tmp185, tmp186, tmp187, tmp188, tmp189, tmp190, tmp190);
    }
  }

  if (block24.is_used()) {
    TNode<Context> tmp192;
    TNode<Map> tmp193;
    TNode<Smi> tmp194;
    TNode<UintPtrT> tmp195;
    TNode<Int32T> tmp196;
    TNode<JSReceiver> tmp197;
    TNode<UintPtrT> tmp198;
    TNode<Number> tmp199;
    TNode<JSReceiver> tmp200;
    TNode<UintPtrT> tmp201;
    TNode<Object> tmp202;
    TNode<Object> tmp203;
    ca_.Bind(&block24, &tmp192, &tmp193, &tmp194, &tmp195, &tmp196, &tmp197, &tmp198, &tmp199, &tmp200, &tmp201, &tmp202, &tmp203);
    ca_.Goto(&block22, tmp192, tmp193, tmp194, tmp195, tmp196, tmp197, tmp198, tmp199, tmp200, tmp201, tmp202);
  }

  if (block23.is_used()) {
    TNode<Context> tmp204;
    TNode<Map> tmp205;
    TNode<Smi> tmp206;
    TNode<UintPtrT> tmp207;
    TNode<Int32T> tmp208;
    TNode<JSReceiver> tmp209;
    TNode<UintPtrT> tmp210;
    TNode<Number> tmp211;
    TNode<JSReceiver> tmp212;
    TNode<UintPtrT> tmp213;
    TNode<Object> tmp214;
    TNode<Object> tmp215;
    TNode<JSArrayBuffer> tmp216;
    ca_.Bind(&block23, &tmp204, &tmp205, &tmp206, &tmp207, &tmp208, &tmp209, &tmp210, &tmp211, &tmp212, &tmp213, &tmp214, &tmp215, &tmp216);
    ca_.Goto(&block21, tmp204, tmp205, tmp206, tmp207, tmp208, tmp209, tmp210, tmp211, tmp212, tmp213, tmp214, tmp216);
  }

  if (block22.is_used()) {
    TNode<Context> tmp217;
    TNode<Map> tmp218;
    TNode<Smi> tmp219;
    TNode<UintPtrT> tmp220;
    TNode<Int32T> tmp221;
    TNode<JSReceiver> tmp222;
    TNode<UintPtrT> tmp223;
    TNode<Number> tmp224;
    TNode<JSReceiver> tmp225;
    TNode<UintPtrT> tmp226;
    TNode<Object> tmp227;
    ca_.Bind(&block22, &tmp217, &tmp218, &tmp219, &tmp220, &tmp221, &tmp222, &tmp223, &tmp224, &tmp225, &tmp226, &tmp227);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block21.is_used()) {
    TNode<Context> tmp228;
    TNode<Map> tmp229;
    TNode<Smi> tmp230;
    TNode<UintPtrT> tmp231;
    TNode<Int32T> tmp232;
    TNode<JSReceiver> tmp233;
    TNode<UintPtrT> tmp234;
    TNode<Number> tmp235;
    TNode<JSReceiver> tmp236;
    TNode<UintPtrT> tmp237;
    TNode<Object> tmp238;
    TNode<JSArrayBuffer> tmp239;
    ca_.Bind(&block21, &tmp228, &tmp229, &tmp230, &tmp231, &tmp232, &tmp233, &tmp234, &tmp235, &tmp236, &tmp237, &tmp238, &tmp239);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 118);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 119);
    TNode<UintPtrT> tmp240;
    USE(tmp240);
    tmp240 = Convert9ATuintptr13ATPositiveSmi_189(state_, TNode<Smi>{tmp230});
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 117);
    TNode<JSTypedArray> tmp241;
    USE(tmp241);
    tmp241 = AllocateTypedArray_348(state_, TNode<Context>{tmp228}, false, TNode<Map>{tmp229}, TNode<JSArrayBuffer>{tmp239}, TNode<UintPtrT>{tmp237}, TNode<UintPtrT>{tmp234}, TNode<UintPtrT>{tmp240});
    ca_.Goto(&block1, tmp228, tmp229, tmp230, tmp231, tmp232, tmp233, tmp241);
  }

  if (block1.is_used()) {
    TNode<Context> tmp242;
    TNode<Map> tmp243;
    TNode<Smi> tmp244;
    TNode<UintPtrT> tmp245;
    TNode<Int32T> tmp246;
    TNode<JSReceiver> tmp247;
    TNode<JSTypedArray> tmp248;
    ca_.Bind(&block1, &tmp242, &tmp243, &tmp244, &tmp245, &tmp246, &tmp247, &tmp248);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 74);
    ca_.Goto(&block25, tmp242, tmp243, tmp244, tmp245, tmp246, tmp247, tmp248);
  }

    TNode<Context> tmp249;
    TNode<Map> tmp250;
    TNode<Smi> tmp251;
    TNode<UintPtrT> tmp252;
    TNode<Int32T> tmp253;
    TNode<JSReceiver> tmp254;
    TNode<JSTypedArray> tmp255;
    ca_.Bind(&block25, &tmp249, &tmp250, &tmp251, &tmp252, &tmp253, &tmp254, &tmp255);
  return TNode<JSTypedArray>{tmp255};
}

TNode<JSTypedArray> ConstructByLength_350(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Map> p_map, TNode<Object> p_length, TorqueStructTypedArrayElementsInfo p_elementsInfo) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, Object, UintPtrT, Int32T> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, Object, UintPtrT, Int32T, Number, Number> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, Object, UintPtrT, Int32T, Number, Number, Smi> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, Object, UintPtrT, Int32T, Number> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, Object, UintPtrT, Int32T, Number, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, Object, UintPtrT, Int32T, JSTypedArray> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, Object, UintPtrT, Int32T, JSTypedArray> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_map, p_length, p_elementsInfo.sizeLog2, p_elementsInfo.kind);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Map> tmp1;
    TNode<Object> tmp2;
    TNode<UintPtrT> tmp3;
    TNode<Int32T> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 129);
    TNode<Number> tmp5;
    USE(tmp5);
    tmp5 = CodeStubAssembler(state_).ToInteger_Inline(TNode<Context>{tmp0}, TNode<Object>{tmp2}, CodeStubAssembler::ToIntegerTruncationMode::kTruncateMinusZero);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 128);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 134);
    TNode<Smi> tmp6;
    USE(tmp6);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp6 = Cast13ATPositiveSmi_84(state_, TNode<Object>{tmp5}, &label0);
    ca_.Goto(&block4, tmp0, tmp1, tmp2, tmp3, tmp4, tmp5, tmp5, tmp6);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block5, tmp0, tmp1, tmp2, tmp3, tmp4, tmp5, tmp5);
    }
  }

  if (block5.is_used()) {
    TNode<Context> tmp7;
    TNode<Map> tmp8;
    TNode<Object> tmp9;
    TNode<UintPtrT> tmp10;
    TNode<Int32T> tmp11;
    TNode<Number> tmp12;
    TNode<Number> tmp13;
    ca_.Bind(&block5, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11, &tmp12, &tmp13);
    ca_.Goto(&block3, tmp7, tmp8, tmp9, tmp10, tmp11, tmp12);
  }

  if (block4.is_used()) {
    TNode<Context> tmp14;
    TNode<Map> tmp15;
    TNode<Object> tmp16;
    TNode<UintPtrT> tmp17;
    TNode<Int32T> tmp18;
    TNode<Number> tmp19;
    TNode<Number> tmp20;
    TNode<Smi> tmp21;
    ca_.Bind(&block4, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18, &tmp19, &tmp20, &tmp21);
    ca_.Goto(&block2, tmp14, tmp15, tmp16, tmp17, tmp18, tmp19, tmp21);
  }

  if (block3.is_used()) {
    TNode<Context> tmp22;
    TNode<Map> tmp23;
    TNode<Object> tmp24;
    TNode<UintPtrT> tmp25;
    TNode<Int32T> tmp26;
    TNode<Number> tmp27;
    ca_.Bind(&block3, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26, &tmp27);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 135);
    CodeStubAssembler(state_).ThrowRangeError(TNode<Context>{tmp22}, MessageTemplate::kInvalidTypedArrayLength, TNode<Object>{tmp24});
  }

  if (block2.is_used()) {
    TNode<Context> tmp28;
    TNode<Map> tmp29;
    TNode<Object> tmp30;
    TNode<UintPtrT> tmp31;
    TNode<Int32T> tmp32;
    TNode<Number> tmp33;
    TNode<Smi> tmp34;
    ca_.Bind(&block2, &tmp28, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33, &tmp34);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 134);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 136);
    TNode<JSReceiver> tmp35;
    USE(tmp35);
    tmp35 = GetArrayBufferFunction_222(state_, TNode<Context>{tmp28});
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 139);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 138);
    TNode<JSTypedArray> tmp36;
    USE(tmp36);
    tmp36 = TypedArrayInitialize_349(state_, TNode<Context>{tmp28}, true, TNode<Map>{tmp29}, TNode<Smi>{tmp34}, TorqueStructTypedArrayElementsInfo{TNode<UintPtrT>{tmp31}, TNode<Int32T>{tmp32}}, TNode<JSReceiver>{tmp35});
    ca_.Goto(&block1, tmp28, tmp29, tmp30, tmp31, tmp32, tmp36);
  }

  if (block1.is_used()) {
    TNode<Context> tmp37;
    TNode<Map> tmp38;
    TNode<Object> tmp39;
    TNode<UintPtrT> tmp40;
    TNode<Int32T> tmp41;
    TNode<JSTypedArray> tmp42;
    ca_.Bind(&block1, &tmp37, &tmp38, &tmp39, &tmp40, &tmp41, &tmp42);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 125);
    ca_.Goto(&block6, tmp37, tmp38, tmp39, tmp40, tmp41, tmp42);
  }

    TNode<Context> tmp43;
    TNode<Map> tmp44;
    TNode<Object> tmp45;
    TNode<UintPtrT> tmp46;
    TNode<Int32T> tmp47;
    TNode<JSTypedArray> tmp48;
    ca_.Bind(&block6, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47, &tmp48);
  return TNode<JSTypedArray>{tmp48};
}

TNode<JSTypedArray> ConstructByArrayLike_351(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Map> p_map, TNode<HeapObject> p_arrayLike, TNode<Object> p_initialLength, TorqueStructTypedArrayElementsInfo p_elementsInfo, TNode<JSReceiver> p_bufferConstructor) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, HeapObject, Object, UintPtrT, Int32T, JSReceiver> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, HeapObject, Object, UintPtrT, Int32T, JSReceiver, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, HeapObject, Object, UintPtrT, Int32T, JSReceiver, Object, Smi> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, HeapObject, Object, UintPtrT, Int32T, JSReceiver> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, HeapObject, Object, UintPtrT, Int32T, JSReceiver, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, HeapObject, Object, UintPtrT, Int32T, JSReceiver, Smi, JSTypedArray, HeapObject> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, HeapObject, Object, UintPtrT, Int32T, JSReceiver, Smi, JSTypedArray, HeapObject, JSTypedArray> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, HeapObject, Object, UintPtrT, Int32T, JSReceiver, Smi, JSTypedArray, JSTypedArray> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, HeapObject, Object, UintPtrT, Int32T, JSReceiver, Smi, JSTypedArray, JSTypedArray> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, HeapObject, Object, UintPtrT, Int32T, JSReceiver, Smi, JSTypedArray, JSTypedArray> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, HeapObject, Object, UintPtrT, Int32T, JSReceiver, Smi, JSTypedArray, JSTypedArray> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, HeapObject, Object, UintPtrT, Int32T, JSReceiver, Smi, JSTypedArray, JSTypedArray> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, HeapObject, Object, UintPtrT, Int32T, JSReceiver, Smi, JSTypedArray, JSTypedArray> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, HeapObject, Object, UintPtrT, Int32T, JSReceiver, Smi, JSTypedArray, JSTypedArray> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, HeapObject, Object, UintPtrT, Int32T, JSReceiver, Smi, JSTypedArray, JSTypedArray> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, HeapObject, Object, UintPtrT, Int32T, JSReceiver, Smi, JSTypedArray> block7(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, HeapObject, Object, UintPtrT, Int32T, JSReceiver, Smi, JSTypedArray> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, HeapObject, Object, UintPtrT, Int32T, JSReceiver, Smi, JSTypedArray> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, HeapObject, Object, UintPtrT, Int32T, JSReceiver, Smi, JSTypedArray> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, HeapObject, Object, UintPtrT, Int32T, JSReceiver, JSTypedArray> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, HeapObject, Object, UintPtrT, Int32T, JSReceiver, JSTypedArray> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_map, p_arrayLike, p_initialLength, p_elementsInfo.sizeLog2, p_elementsInfo.kind, p_bufferConstructor);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Map> tmp1;
    TNode<HeapObject> tmp2;
    TNode<Object> tmp3;
    TNode<UintPtrT> tmp4;
    TNode<Int32T> tmp5;
    TNode<JSReceiver> tmp6;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4, &tmp5, &tmp6);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 149);
    TNode<Smi> tmp7;
    USE(tmp7);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp7 = CodeStubAssembler(state_).ToSmiLength(TNode<Context>{tmp0}, TNode<Object>{tmp3}, &label0);
    ca_.Goto(&block4, tmp0, tmp1, tmp2, tmp3, tmp4, tmp5, tmp6, tmp3, tmp7);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block5, tmp0, tmp1, tmp2, tmp3, tmp4, tmp5, tmp6, tmp3);
    }
  }

  if (block5.is_used()) {
    TNode<Context> tmp8;
    TNode<Map> tmp9;
    TNode<HeapObject> tmp10;
    TNode<Object> tmp11;
    TNode<UintPtrT> tmp12;
    TNode<Int32T> tmp13;
    TNode<JSReceiver> tmp14;
    TNode<Object> tmp15;
    ca_.Bind(&block5, &tmp8, &tmp9, &tmp10, &tmp11, &tmp12, &tmp13, &tmp14, &tmp15);
    ca_.Goto(&block3, tmp8, tmp9, tmp10, tmp11, tmp12, tmp13, tmp14);
  }

  if (block4.is_used()) {
    TNode<Context> tmp16;
    TNode<Map> tmp17;
    TNode<HeapObject> tmp18;
    TNode<Object> tmp19;
    TNode<UintPtrT> tmp20;
    TNode<Int32T> tmp21;
    TNode<JSReceiver> tmp22;
    TNode<Object> tmp23;
    TNode<Smi> tmp24;
    ca_.Bind(&block4, &tmp16, &tmp17, &tmp18, &tmp19, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24);
    ca_.Goto(&block2, tmp16, tmp17, tmp18, tmp19, tmp20, tmp21, tmp22, tmp24);
  }

  if (block3.is_used()) {
    TNode<Context> tmp25;
    TNode<Map> tmp26;
    TNode<HeapObject> tmp27;
    TNode<Object> tmp28;
    TNode<UintPtrT> tmp29;
    TNode<Int32T> tmp30;
    TNode<JSReceiver> tmp31;
    ca_.Bind(&block3, &tmp25, &tmp26, &tmp27, &tmp28, &tmp29, &tmp30, &tmp31);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 150);
    CodeStubAssembler(state_).ThrowRangeError(TNode<Context>{tmp25}, MessageTemplate::kInvalidTypedArrayLength, TNode<Object>{tmp28});
  }

  if (block2.is_used()) {
    TNode<Context> tmp32;
    TNode<Map> tmp33;
    TNode<HeapObject> tmp34;
    TNode<Object> tmp35;
    TNode<UintPtrT> tmp36;
    TNode<Int32T> tmp37;
    TNode<JSReceiver> tmp38;
    TNode<Smi> tmp39;
    ca_.Bind(&block2, &tmp32, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 149);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 153);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 152);
    TNode<JSTypedArray> tmp40;
    USE(tmp40);
    tmp40 = TypedArrayInitialize_349(state_, TNode<Context>{tmp32}, false, TNode<Map>{tmp33}, TNode<Smi>{tmp39}, TorqueStructTypedArrayElementsInfo{TNode<UintPtrT>{tmp36}, TNode<Int32T>{tmp37}}, TNode<JSReceiver>{tmp38});
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 156);
    TNode<JSTypedArray> tmp41;
    USE(tmp41);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp41 = Cast12JSTypedArray_109(state_, TNode<HeapObject>{tmp34}, &label0);
    ca_.Goto(&block8, tmp32, tmp33, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39, tmp40, tmp34, tmp41);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block9, tmp32, tmp33, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39, tmp40, tmp34);
    }
  }

  if (block9.is_used()) {
    TNode<Context> tmp42;
    TNode<Map> tmp43;
    TNode<HeapObject> tmp44;
    TNode<Object> tmp45;
    TNode<UintPtrT> tmp46;
    TNode<Int32T> tmp47;
    TNode<JSReceiver> tmp48;
    TNode<Smi> tmp49;
    TNode<JSTypedArray> tmp50;
    TNode<HeapObject> tmp51;
    ca_.Bind(&block9, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47, &tmp48, &tmp49, &tmp50, &tmp51);
    ca_.Goto(&block7, tmp42, tmp43, tmp44, tmp45, tmp46, tmp47, tmp48, tmp49, tmp50);
  }

  if (block8.is_used()) {
    TNode<Context> tmp52;
    TNode<Map> tmp53;
    TNode<HeapObject> tmp54;
    TNode<Object> tmp55;
    TNode<UintPtrT> tmp56;
    TNode<Int32T> tmp57;
    TNode<JSReceiver> tmp58;
    TNode<Smi> tmp59;
    TNode<JSTypedArray> tmp60;
    TNode<HeapObject> tmp61;
    TNode<JSTypedArray> tmp62;
    ca_.Bind(&block8, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 158);
    TNode<IntPtrT> tmp63 = ca_.IntPtrConstant(JSArrayBufferView::kBufferOffset);
    USE(tmp63);
    TNode<JSArrayBuffer>tmp64 = CodeStubAssembler(state_).LoadReference<JSArrayBuffer>(CodeStubAssembler::Reference{tmp62, tmp63});
    TNode<BoolT> tmp65;
    USE(tmp65);
    tmp65 = CodeStubAssembler(state_).IsDetachedBuffer(TNode<JSArrayBuffer>{tmp64});
    ca_.Branch(tmp65, &block10, &block11, tmp52, tmp53, tmp54, tmp55, tmp56, tmp57, tmp58, tmp59, tmp60, tmp62);
  }

  if (block10.is_used()) {
    TNode<Context> tmp66;
    TNode<Map> tmp67;
    TNode<HeapObject> tmp68;
    TNode<Object> tmp69;
    TNode<UintPtrT> tmp70;
    TNode<Int32T> tmp71;
    TNode<JSReceiver> tmp72;
    TNode<Smi> tmp73;
    TNode<JSTypedArray> tmp74;
    TNode<JSTypedArray> tmp75;
    ca_.Bind(&block10, &tmp66, &tmp67, &tmp68, &tmp69, &tmp70, &tmp71, &tmp72, &tmp73, &tmp74, &tmp75);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 159);
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{tmp66}, MessageTemplate::kDetachedOperation, "Construct");
  }

  if (block11.is_used()) {
    TNode<Context> tmp76;
    TNode<Map> tmp77;
    TNode<HeapObject> tmp78;
    TNode<Object> tmp79;
    TNode<UintPtrT> tmp80;
    TNode<Int32T> tmp81;
    TNode<JSReceiver> tmp82;
    TNode<Smi> tmp83;
    TNode<JSTypedArray> tmp84;
    TNode<JSTypedArray> tmp85;
    ca_.Bind(&block11, &tmp76, &tmp77, &tmp78, &tmp79, &tmp80, &tmp81, &tmp82, &tmp83, &tmp84, &tmp85);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 161);
    TNode<Int32T> tmp86;
    USE(tmp86);
    tmp86 = CodeStubAssembler(state_).LoadElementsKind(TNode<JSTypedArray>{tmp85});
    TNode<BoolT> tmp87;
    USE(tmp87);
    tmp87 = ElementsKindNotEqual_72(state_, TNode<Int32T>{tmp86}, TNode<Int32T>{tmp81});
    ca_.Branch(tmp87, &block13, &block14, tmp76, tmp77, tmp78, tmp79, tmp80, tmp81, tmp82, tmp83, tmp84, tmp85);
  }

  if (block13.is_used()) {
    TNode<Context> tmp88;
    TNode<Map> tmp89;
    TNode<HeapObject> tmp90;
    TNode<Object> tmp91;
    TNode<UintPtrT> tmp92;
    TNode<Int32T> tmp93;
    TNode<JSReceiver> tmp94;
    TNode<Smi> tmp95;
    TNode<JSTypedArray> tmp96;
    TNode<JSTypedArray> tmp97;
    ca_.Bind(&block13, &tmp88, &tmp89, &tmp90, &tmp91, &tmp92, &tmp93, &tmp94, &tmp95, &tmp96, &tmp97);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 162);
    ca_.Goto(&block7, tmp88, tmp89, tmp90, tmp91, tmp92, tmp93, tmp94, tmp95, tmp96);
  }

  if (block14.is_used()) {
    TNode<Context> tmp98;
    TNode<Map> tmp99;
    TNode<HeapObject> tmp100;
    TNode<Object> tmp101;
    TNode<UintPtrT> tmp102;
    TNode<Int32T> tmp103;
    TNode<JSReceiver> tmp104;
    TNode<Smi> tmp105;
    TNode<JSTypedArray> tmp106;
    TNode<JSTypedArray> tmp107;
    ca_.Bind(&block14, &tmp98, &tmp99, &tmp100, &tmp101, &tmp102, &tmp103, &tmp104, &tmp105, &tmp106, &tmp107);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 164);
    TNode<Smi> tmp108;
    USE(tmp108);
    tmp108 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 0);
    TNode<BoolT> tmp109;
    USE(tmp109);
    tmp109 = CodeStubAssembler(state_).SmiGreaterThan(TNode<Smi>{tmp105}, TNode<Smi>{tmp108});
    ca_.Branch(tmp109, &block16, &block17, tmp98, tmp99, tmp100, tmp101, tmp102, tmp103, tmp104, tmp105, tmp106, tmp107);
  }

  if (block16.is_used()) {
    TNode<Context> tmp110;
    TNode<Map> tmp111;
    TNode<HeapObject> tmp112;
    TNode<Object> tmp113;
    TNode<UintPtrT> tmp114;
    TNode<Int32T> tmp115;
    TNode<JSReceiver> tmp116;
    TNode<Smi> tmp117;
    TNode<JSTypedArray> tmp118;
    TNode<JSTypedArray> tmp119;
    ca_.Bind(&block16, &tmp110, &tmp111, &tmp112, &tmp113, &tmp114, &tmp115, &tmp116, &tmp117, &tmp118, &tmp119);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 165);
    TNode<IntPtrT> tmp120 = ca_.IntPtrConstant(JSArrayBufferView::kByteLengthOffset);
    USE(tmp120);
    TNode<UintPtrT>tmp121 = CodeStubAssembler(state_).LoadReference<UintPtrT>(CodeStubAssembler::Reference{tmp118, tmp120});
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 167);
    TNode<RawPtrT> tmp122;
    USE(tmp122);
    tmp122 = CodeStubAssembler(state_).LoadJSTypedArrayDataPtr(TNode<JSTypedArray>{tmp118});
    TNode<RawPtrT> tmp123;
    USE(tmp123);
    tmp123 = CodeStubAssembler(state_).LoadJSTypedArrayDataPtr(TNode<JSTypedArray>{tmp119});
    TypedArrayBuiltinsAssembler(state_).CallCMemcpy(TNode<RawPtrT>{tmp122}, TNode<RawPtrT>{tmp123}, TNode<UintPtrT>{tmp121});
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 164);
    ca_.Goto(&block17, tmp110, tmp111, tmp112, tmp113, tmp114, tmp115, tmp116, tmp117, tmp118, tmp119);
  }

  if (block17.is_used()) {
    TNode<Context> tmp124;
    TNode<Map> tmp125;
    TNode<HeapObject> tmp126;
    TNode<Object> tmp127;
    TNode<UintPtrT> tmp128;
    TNode<Int32T> tmp129;
    TNode<JSReceiver> tmp130;
    TNode<Smi> tmp131;
    TNode<JSTypedArray> tmp132;
    TNode<JSTypedArray> tmp133;
    ca_.Bind(&block17, &tmp124, &tmp125, &tmp126, &tmp127, &tmp128, &tmp129, &tmp130, &tmp131, &tmp132, &tmp133);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 161);
    ca_.Goto(&block15, tmp124, tmp125, tmp126, tmp127, tmp128, tmp129, tmp130, tmp131, tmp132, tmp133);
  }

  if (block15.is_used()) {
    TNode<Context> tmp134;
    TNode<Map> tmp135;
    TNode<HeapObject> tmp136;
    TNode<Object> tmp137;
    TNode<UintPtrT> tmp138;
    TNode<Int32T> tmp139;
    TNode<JSReceiver> tmp140;
    TNode<Smi> tmp141;
    TNode<JSTypedArray> tmp142;
    TNode<JSTypedArray> tmp143;
    ca_.Bind(&block15, &tmp134, &tmp135, &tmp136, &tmp137, &tmp138, &tmp139, &tmp140, &tmp141, &tmp142, &tmp143);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 158);
    ca_.Goto(&block12, tmp134, tmp135, tmp136, tmp137, tmp138, tmp139, tmp140, tmp141, tmp142, tmp143);
  }

  if (block12.is_used()) {
    TNode<Context> tmp144;
    TNode<Map> tmp145;
    TNode<HeapObject> tmp146;
    TNode<Object> tmp147;
    TNode<UintPtrT> tmp148;
    TNode<Int32T> tmp149;
    TNode<JSReceiver> tmp150;
    TNode<Smi> tmp151;
    TNode<JSTypedArray> tmp152;
    TNode<JSTypedArray> tmp153;
    ca_.Bind(&block12, &tmp144, &tmp145, &tmp146, &tmp147, &tmp148, &tmp149, &tmp150, &tmp151, &tmp152, &tmp153);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 155);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 170);
    ca_.Goto(&block6, tmp144, tmp145, tmp146, tmp147, tmp148, tmp149, tmp150, tmp151, tmp152);
  }

  if (block7.is_used()) {
    TNode<Context> tmp154;
    TNode<Map> tmp155;
    TNode<HeapObject> tmp156;
    TNode<Object> tmp157;
    TNode<UintPtrT> tmp158;
    TNode<Int32T> tmp159;
    TNode<JSReceiver> tmp160;
    TNode<Smi> tmp161;
    TNode<JSTypedArray> tmp162;
    ca_.Bind(&block7, &tmp154, &tmp155, &tmp156, &tmp157, &tmp158, &tmp159, &tmp160, &tmp161, &tmp162);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 171);
    TNode<Smi> tmp163;
    USE(tmp163);
    tmp163 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 0);
    TNode<BoolT> tmp164;
    USE(tmp164);
    tmp164 = CodeStubAssembler(state_).SmiGreaterThan(TNode<Smi>{tmp161}, TNode<Smi>{tmp163});
    ca_.Branch(tmp164, &block18, &block19, tmp154, tmp155, tmp156, tmp157, tmp158, tmp159, tmp160, tmp161, tmp162);
  }

  if (block18.is_used()) {
    TNode<Context> tmp165;
    TNode<Map> tmp166;
    TNode<HeapObject> tmp167;
    TNode<Object> tmp168;
    TNode<UintPtrT> tmp169;
    TNode<Int32T> tmp170;
    TNode<JSReceiver> tmp171;
    TNode<Smi> tmp172;
    TNode<JSTypedArray> tmp173;
    ca_.Bind(&block18, &tmp165, &tmp166, &tmp167, &tmp168, &tmp169, &tmp170, &tmp171, &tmp172, &tmp173);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 172);
    CodeStubAssembler(state_).CallRuntime(Runtime::kTypedArrayCopyElements, tmp165, tmp173, tmp167, tmp172);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 171);
    ca_.Goto(&block19, tmp165, tmp166, tmp167, tmp168, tmp169, tmp170, tmp171, tmp172, tmp173);
  }

  if (block19.is_used()) {
    TNode<Context> tmp175;
    TNode<Map> tmp176;
    TNode<HeapObject> tmp177;
    TNode<Object> tmp178;
    TNode<UintPtrT> tmp179;
    TNode<Int32T> tmp180;
    TNode<JSReceiver> tmp181;
    TNode<Smi> tmp182;
    TNode<JSTypedArray> tmp183;
    ca_.Bind(&block19, &tmp175, &tmp176, &tmp177, &tmp178, &tmp179, &tmp180, &tmp181, &tmp182, &tmp183);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 155);
    ca_.Goto(&block6, tmp175, tmp176, tmp177, tmp178, tmp179, tmp180, tmp181, tmp182, tmp183);
  }

  if (block6.is_used()) {
    TNode<Context> tmp184;
    TNode<Map> tmp185;
    TNode<HeapObject> tmp186;
    TNode<Object> tmp187;
    TNode<UintPtrT> tmp188;
    TNode<Int32T> tmp189;
    TNode<JSReceiver> tmp190;
    TNode<Smi> tmp191;
    TNode<JSTypedArray> tmp192;
    ca_.Bind(&block6, &tmp184, &tmp185, &tmp186, &tmp187, &tmp188, &tmp189, &tmp190, &tmp191, &tmp192);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 175);
    ca_.Goto(&block1, tmp184, tmp185, tmp186, tmp187, tmp188, tmp189, tmp190, tmp192);
  }

  if (block1.is_used()) {
    TNode<Context> tmp193;
    TNode<Map> tmp194;
    TNode<HeapObject> tmp195;
    TNode<Object> tmp196;
    TNode<UintPtrT> tmp197;
    TNode<Int32T> tmp198;
    TNode<JSReceiver> tmp199;
    TNode<JSTypedArray> tmp200;
    ca_.Bind(&block1, &tmp193, &tmp194, &tmp195, &tmp196, &tmp197, &tmp198, &tmp199, &tmp200);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 144);
    ca_.Goto(&block20, tmp193, tmp194, tmp195, tmp196, tmp197, tmp198, tmp199, tmp200);
  }

    TNode<Context> tmp201;
    TNode<Map> tmp202;
    TNode<HeapObject> tmp203;
    TNode<Object> tmp204;
    TNode<UintPtrT> tmp205;
    TNode<Int32T> tmp206;
    TNode<JSReceiver> tmp207;
    TNode<JSTypedArray> tmp208;
    ca_.Bind(&block20, &tmp201, &tmp202, &tmp203, &tmp204, &tmp205, &tmp206, &tmp207, &tmp208);
  return TNode<JSTypedArray>{tmp208};
}

void ConstructByIterable_352(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSReceiver> p_iterable, TNode<JSReceiver> p_iteratorFn, compiler::CodeAssemblerLabel* label_IfConstructByArrayLike, compiler::TypedCodeAssemblerVariable<JSArray>* label_IfConstructByArrayLike_parameter_0, compiler::TypedCodeAssemblerVariable<Number>* label_IfConstructByArrayLike_parameter_1, compiler::TypedCodeAssemblerVariable<JSReceiver>* label_IfConstructByArrayLike_parameter_2) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, JSReceiver> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArray, Number, JSReceiver> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_iterable, p_iteratorFn);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<JSReceiver> tmp1;
    TNode<JSReceiver> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 184);
    TNode<JSArray> tmp3;
    tmp3 = TORQUE_CAST(CodeStubAssembler(state_).CallBuiltin(Builtins::kIterableToListMayPreserveHoles, tmp0, tmp1, tmp2));
    USE(tmp3);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 183);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 185);
    TNode<IntPtrT> tmp4 = ca_.IntPtrConstant(JSArray::kLengthOffset);
    USE(tmp4);
    TNode<Number>tmp5 = CodeStubAssembler(state_).LoadReference<Number>(CodeStubAssembler::Reference{tmp3, tmp4});
    TNode<JSReceiver> tmp6;
    USE(tmp6);
    tmp6 = GetArrayBufferFunction_222(state_, TNode<Context>{tmp0});
    ca_.Goto(&block1, tmp3, tmp5, tmp6);
  }

  if (block1.is_used()) {
    TNode<JSArray> tmp7;
    TNode<Number> tmp8;
    TNode<JSReceiver> tmp9;
    ca_.Bind(&block1, &tmp7, &tmp8, &tmp9);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 180);
    *label_IfConstructByArrayLike_parameter_2 = tmp9;
    *label_IfConstructByArrayLike_parameter_1 = tmp8;
    *label_IfConstructByArrayLike_parameter_0 = tmp7;
    ca_.Goto(label_IfConstructByArrayLike);
  }
}

void ConstructByTypedArray_353(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSTypedArray> p_srcTypedArray, compiler::CodeAssemblerLabel* label_IfConstructByArrayLike, compiler::TypedCodeAssemblerVariable<JSTypedArray>* label_IfConstructByArrayLike_parameter_0, compiler::TypedCodeAssemblerVariable<Number>* label_IfConstructByArrayLike_parameter_1, compiler::TypedCodeAssemblerVariable<JSReceiver>* label_IfConstructByArrayLike_parameter_2) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, JSArrayBuffer> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, JSArrayBuffer> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, JSArrayBuffer> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, JSArrayBuffer, Number> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, JSArrayBuffer, Number> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, JSArrayBuffer, Number> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, JSArrayBuffer, Number> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, JSArrayBuffer, Number> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSTypedArray, Number, JSReceiver> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_srcTypedArray);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<JSTypedArray> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 193);
    TNode<JSReceiver> tmp2;
    USE(tmp2);
    tmp2 = GetArrayBufferFunction_222(state_, TNode<Context>{tmp0});
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 194);
    TNode<IntPtrT> tmp3 = ca_.IntPtrConstant(JSArrayBufferView::kBufferOffset);
    USE(tmp3);
    TNode<JSArrayBuffer>tmp4 = CodeStubAssembler(state_).LoadReference<JSArrayBuffer>(CodeStubAssembler::Reference{tmp1, tmp3});
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 198);
    TNode<BoolT> tmp5;
    USE(tmp5);
    tmp5 = CodeStubAssembler(state_).IsDetachedBuffer(TNode<JSArrayBuffer>{tmp4});
    ca_.Branch(tmp5, &block2, &block3, tmp0, tmp1, tmp2, tmp4);
  }

  if (block2.is_used()) {
    TNode<Context> tmp6;
    TNode<JSTypedArray> tmp7;
    TNode<JSReceiver> tmp8;
    TNode<JSArrayBuffer> tmp9;
    ca_.Bind(&block2, &tmp6, &tmp7, &tmp8, &tmp9);
    ca_.Goto(&block5, tmp6, tmp7, tmp8, tmp9);
  }

  if (block3.is_used()) {
    TNode<Context> tmp10;
    TNode<JSTypedArray> tmp11;
    TNode<JSReceiver> tmp12;
    TNode<JSArrayBuffer> tmp13;
    ca_.Bind(&block3, &tmp10, &tmp11, &tmp12, &tmp13);
    TNode<IntPtrT> tmp14 = ca_.IntPtrConstant(JSTypedArray::kLengthOffset);
    USE(tmp14);
    TNode<UintPtrT>tmp15 = CodeStubAssembler(state_).LoadReference<UintPtrT>(CodeStubAssembler::Reference{tmp11, tmp14});
    TNode<Number> tmp16;
    USE(tmp16);
    tmp16 = Convert20UT5ATSmi10HeapNumber9ATuintptr_203(state_, TNode<UintPtrT>{tmp15});
    ca_.Goto(&block4, tmp10, tmp11, tmp12, tmp13, tmp16);
  }

  if (block5.is_used()) {
    TNode<Context> tmp17;
    TNode<JSTypedArray> tmp18;
    TNode<JSReceiver> tmp19;
    TNode<JSArrayBuffer> tmp20;
    ca_.Bind(&block5, &tmp17, &tmp18, &tmp19, &tmp20);
    TNode<Number> tmp21;
    USE(tmp21);
    tmp21 = FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_160(state_, 0);
    ca_.Goto(&block4, tmp17, tmp18, tmp19, tmp20, tmp21);
  }

  if (block4.is_used()) {
    TNode<Context> tmp22;
    TNode<JSTypedArray> tmp23;
    TNode<JSReceiver> tmp24;
    TNode<JSArrayBuffer> tmp25;
    TNode<Number> tmp26;
    ca_.Bind(&block4, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 203);
    TNode<BoolT> tmp27;
    USE(tmp27);
    tmp27 = TypedArrayBuiltinsAssembler(state_).IsSharedArrayBuffer(TNode<JSArrayBuffer>{tmp25});
    TNode<BoolT> tmp28;
    USE(tmp28);
    tmp28 = CodeStubAssembler(state_).Word32BinaryNot(TNode<BoolT>{tmp27});
    ca_.Branch(tmp28, &block6, &block7, tmp22, tmp23, tmp24, tmp25, tmp26);
  }

  if (block6.is_used()) {
    TNode<Context> tmp29;
    TNode<JSTypedArray> tmp30;
    TNode<JSReceiver> tmp31;
    TNode<JSArrayBuffer> tmp32;
    TNode<Number> tmp33;
    ca_.Bind(&block6, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 204);
    TNode<JSReceiver> tmp34;
    USE(tmp34);
    tmp34 = CodeStubAssembler(state_).SpeciesConstructor(TNode<Context>{tmp29}, TNode<Object>{tmp32}, TNode<JSReceiver>{tmp31});
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 206);
    TNode<BoolT> tmp35;
    USE(tmp35);
    tmp35 = CodeStubAssembler(state_).IsDetachedBuffer(TNode<JSArrayBuffer>{tmp32});
    ca_.Branch(tmp35, &block8, &block9, tmp29, tmp30, tmp34, tmp32, tmp33);
  }

  if (block8.is_used()) {
    TNode<Context> tmp36;
    TNode<JSTypedArray> tmp37;
    TNode<JSReceiver> tmp38;
    TNode<JSArrayBuffer> tmp39;
    TNode<Number> tmp40;
    ca_.Bind(&block8, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40);
    TNode<Number> tmp41;
    USE(tmp41);
    tmp41 = FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_160(state_, 0);
    ca_.Goto(&block9, tmp36, tmp37, tmp38, tmp39, tmp41);
  }

  if (block9.is_used()) {
    TNode<Context> tmp42;
    TNode<JSTypedArray> tmp43;
    TNode<JSReceiver> tmp44;
    TNode<JSArrayBuffer> tmp45;
    TNode<Number> tmp46;
    ca_.Bind(&block9, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 203);
    ca_.Goto(&block7, tmp42, tmp43, tmp44, tmp45, tmp46);
  }

  if (block7.is_used()) {
    TNode<Context> tmp47;
    TNode<JSTypedArray> tmp48;
    TNode<JSReceiver> tmp49;
    TNode<JSArrayBuffer> tmp50;
    TNode<Number> tmp51;
    ca_.Bind(&block7, &tmp47, &tmp48, &tmp49, &tmp50, &tmp51);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 208);
    ca_.Goto(&block1, tmp48, tmp51, tmp49);
  }

  if (block1.is_used()) {
    TNode<JSTypedArray> tmp52;
    TNode<Number> tmp53;
    TNode<JSReceiver> tmp54;
    ca_.Bind(&block1, &tmp52, &tmp53, &tmp54);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 190);
    *label_IfConstructByArrayLike_parameter_2 = tmp54;
    *label_IfConstructByArrayLike_parameter_1 = tmp53;
    *label_IfConstructByArrayLike_parameter_0 = tmp52;
    ca_.Goto(label_IfConstructByArrayLike);
  }
}

TNode<JSTypedArray> ConstructByArrayBuffer_354(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Map> p_map, TNode<JSArrayBuffer> p_buffer, TNode<Object> p_byteOffset, TNode<Object> p_length, TorqueStructTypedArrayElementsInfo p_elementsInfo) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, JSArrayBuffer, Object, Object, UintPtrT, Int32T> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, JSArrayBuffer, Object, Object, UintPtrT, Int32T, UintPtrT> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, JSArrayBuffer, Object, Object, UintPtrT, Int32T, UintPtrT, Number> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, JSArrayBuffer, Object, Object, UintPtrT, Int32T, UintPtrT, Number, UintPtrT> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, JSArrayBuffer, Object, Object, UintPtrT, Int32T, UintPtrT> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, JSArrayBuffer, Object, Object, UintPtrT, Int32T, UintPtrT, UintPtrT> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, JSArrayBuffer, Object, Object, UintPtrT, Int32T, UintPtrT, UintPtrT, Int32T, UintPtrT, UintPtrT, BoolT> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, JSArrayBuffer, Object, Object, UintPtrT, Int32T, UintPtrT> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, JSArrayBuffer, Object, Object, UintPtrT, Int32T, UintPtrT> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, JSArrayBuffer, Object, Object, UintPtrT, Int32T, UintPtrT> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, JSArrayBuffer, Object, Object, UintPtrT, Int32T, UintPtrT, Smi, UintPtrT> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, JSArrayBuffer, Object, Object, UintPtrT, Int32T, UintPtrT, Smi, UintPtrT, Object> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, JSArrayBuffer, Object, Object, UintPtrT, Int32T, UintPtrT, Smi, UintPtrT, Object, Smi> block21(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, JSArrayBuffer, Object, Object, UintPtrT, Int32T, UintPtrT, Smi, UintPtrT> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, JSArrayBuffer, Object, Object, UintPtrT, Int32T, UintPtrT, Smi, UintPtrT> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, JSArrayBuffer, Object, Object, UintPtrT, Int32T, UintPtrT, Smi, UintPtrT> block24(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, JSArrayBuffer, Object, Object, UintPtrT, Int32T, UintPtrT, Smi, UintPtrT, UintPtrT> block25(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, JSArrayBuffer, Object, Object, UintPtrT, Int32T, UintPtrT, Smi, UintPtrT, UintPtrT, UintPtrT, Int32T, UintPtrT, UintPtrT, BoolT> block30(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, JSArrayBuffer, Object, Object, UintPtrT, Int32T, UintPtrT, Smi, UintPtrT, UintPtrT> block28(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, JSArrayBuffer, Object, Object, UintPtrT, Int32T, UintPtrT, Smi, UintPtrT, UintPtrT> block29(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, JSArrayBuffer, Object, Object, UintPtrT, Int32T, UintPtrT, Smi, UintPtrT, UintPtrT> block31(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, JSArrayBuffer, Object, Object, UintPtrT, Int32T, UintPtrT, Smi, UintPtrT, UintPtrT> block32(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, JSArrayBuffer, Object, Object, UintPtrT, Int32T, UintPtrT, Smi, UintPtrT, UintPtrT, UintPtrT, Int32T, UintPtrT, UintPtrT, UintPtrT> block35(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, JSArrayBuffer, Object, Object, UintPtrT, Int32T, UintPtrT, Smi, UintPtrT, UintPtrT, UintPtrT, Int32T, UintPtrT, UintPtrT, UintPtrT, Smi> block34(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, JSArrayBuffer, Object, Object, UintPtrT, Int32T, UintPtrT, Smi, UintPtrT, UintPtrT, UintPtrT, Int32T, UintPtrT, UintPtrT, Smi> block33(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, JSArrayBuffer, Object, Object, UintPtrT, Int32T, UintPtrT, Smi, UintPtrT, UintPtrT> block26(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, JSArrayBuffer, Object, Object, UintPtrT, Int32T, UintPtrT, Smi, UintPtrT, UintPtrT, UintPtrT, Int32T, Smi, Smi, UintPtrT, UintPtrT> block37(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, JSArrayBuffer, Object, Object, UintPtrT, Int32T, UintPtrT, Smi, UintPtrT, UintPtrT, UintPtrT, Int32T, Smi, Smi, UintPtrT, UintPtrT> block38(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, JSArrayBuffer, Object, Object, UintPtrT, Int32T, UintPtrT, Smi, UintPtrT, UintPtrT, UintPtrT, Int32T, Smi, Smi, UintPtrT> block36(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, JSArrayBuffer, Object, Object, UintPtrT, Int32T, UintPtrT, Smi, UintPtrT, UintPtrT, BoolT> block41(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, JSArrayBuffer, Object, Object, UintPtrT, Int32T, UintPtrT, Smi, UintPtrT, UintPtrT, BoolT> block42(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, JSArrayBuffer, Object, Object, UintPtrT, Int32T, UintPtrT, Smi, UintPtrT, UintPtrT, BoolT, BoolT> block43(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, JSArrayBuffer, Object, Object, UintPtrT, Int32T, UintPtrT, Smi, UintPtrT, UintPtrT> block39(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, JSArrayBuffer, Object, Object, UintPtrT, Int32T, UintPtrT, Smi, UintPtrT, UintPtrT> block40(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, JSArrayBuffer, Object, Object, UintPtrT, Int32T, UintPtrT, Smi, UintPtrT, UintPtrT> block27(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, JSArrayBuffer, Object, Object, UintPtrT, Int32T, String> block9(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, JSArrayBuffer, Object, Object, UintPtrT, Int32T> block7(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, JSArrayBuffer, Object, Object, UintPtrT, Int32T> block5(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, JSArrayBuffer, Object, Object, UintPtrT, Int32T> block3(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, JSArrayBuffer, Object, Object, UintPtrT, Int32T, JSTypedArray> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Map, JSArrayBuffer, Object, Object, UintPtrT, Int32T, JSTypedArray> block44(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_map, p_buffer, p_byteOffset, p_length, p_elementsInfo.sizeLog2, p_elementsInfo.kind);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Map> tmp1;
    TNode<JSArrayBuffer> tmp2;
    TNode<Object> tmp3;
    TNode<Object> tmp4;
    TNode<UintPtrT> tmp5;
    TNode<Int32T> tmp6;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4, &tmp5, &tmp6);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 217);
    TNode<UintPtrT> tmp7;
    USE(tmp7);
    tmp7 = FromConstexpr9ATuintptr17ATconstexpr_int31_164(state_, 0);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 218);
    TNode<Oddball> tmp8;
    USE(tmp8);
    tmp8 = Undefined_64(state_);
    TNode<BoolT> tmp9;
    USE(tmp9);
    tmp9 = CodeStubAssembler(state_).TaggedNotEqual(TNode<Object>{tmp3}, TNode<HeapObject>{tmp8});
    ca_.Branch(tmp9, &block10, &block11, tmp0, tmp1, tmp2, tmp3, tmp4, tmp5, tmp6, tmp7);
  }

  if (block10.is_used()) {
    TNode<Context> tmp10;
    TNode<Map> tmp11;
    TNode<JSArrayBuffer> tmp12;
    TNode<Object> tmp13;
    TNode<Object> tmp14;
    TNode<UintPtrT> tmp15;
    TNode<Int32T> tmp16;
    TNode<UintPtrT> tmp17;
    ca_.Bind(&block10, &tmp10, &tmp11, &tmp12, &tmp13, &tmp14, &tmp15, &tmp16, &tmp17);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 221);
    TNode<Number> tmp18;
    USE(tmp18);
    tmp18 = CodeStubAssembler(state_).ToInteger_Inline(TNode<Context>{tmp10}, TNode<Object>{tmp13}, CodeStubAssembler::ToIntegerTruncationMode::kTruncateMinusZero);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 220);
    TNode<UintPtrT> tmp19;
    USE(tmp19);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp19 = CodeStubAssembler(state_).TryNumberToUintPtr(TNode<Number>{tmp18}, &label0);
    ca_.Goto(&block14, tmp10, tmp11, tmp12, tmp13, tmp14, tmp15, tmp16, tmp17, tmp18, tmp19);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block15, tmp10, tmp11, tmp12, tmp13, tmp14, tmp15, tmp16, tmp17, tmp18);
    }
  }

  if (block15.is_used()) {
    TNode<Context> tmp20;
    TNode<Map> tmp21;
    TNode<JSArrayBuffer> tmp22;
    TNode<Object> tmp23;
    TNode<Object> tmp24;
    TNode<UintPtrT> tmp25;
    TNode<Int32T> tmp26;
    TNode<UintPtrT> tmp27;
    TNode<Number> tmp28;
    ca_.Bind(&block15, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26, &tmp27, &tmp28);
    ca_.Goto(&block13, tmp20, tmp21, tmp22, tmp23, tmp24, tmp25, tmp26, tmp27);
  }

  if (block14.is_used()) {
    TNode<Context> tmp29;
    TNode<Map> tmp30;
    TNode<JSArrayBuffer> tmp31;
    TNode<Object> tmp32;
    TNode<Object> tmp33;
    TNode<UintPtrT> tmp34;
    TNode<Int32T> tmp35;
    TNode<UintPtrT> tmp36;
    TNode<Number> tmp37;
    TNode<UintPtrT> tmp38;
    ca_.Bind(&block14, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38);
    ca_.Goto(&block12, tmp29, tmp30, tmp31, tmp32, tmp33, tmp34, tmp35, tmp36, tmp38);
  }

  if (block13.is_used()) {
    TNode<Context> tmp39;
    TNode<Map> tmp40;
    TNode<JSArrayBuffer> tmp41;
    TNode<Object> tmp42;
    TNode<Object> tmp43;
    TNode<UintPtrT> tmp44;
    TNode<Int32T> tmp45;
    TNode<UintPtrT> tmp46;
    ca_.Bind(&block13, &tmp39, &tmp40, &tmp41, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 222);
    ca_.Goto(&block3, tmp39, tmp40, tmp41, tmp42, tmp43, tmp44, tmp45);
  }

  if (block12.is_used()) {
    TNode<Context> tmp47;
    TNode<Map> tmp48;
    TNode<JSArrayBuffer> tmp49;
    TNode<Object> tmp50;
    TNode<Object> tmp51;
    TNode<UintPtrT> tmp52;
    TNode<Int32T> tmp53;
    TNode<UintPtrT> tmp54;
    TNode<UintPtrT> tmp55;
    ca_.Bind(&block12, &tmp47, &tmp48, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 220);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 225);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 48);
    TNode<UintPtrT> tmp56;
    USE(tmp56);
    tmp56 = FromConstexpr9ATuintptr17ATconstexpr_int31_164(state_, 1);
    TNode<UintPtrT> tmp57;
    USE(tmp57);
    tmp57 = CodeStubAssembler(state_).WordShl(TNode<UintPtrT>{tmp56}, TNode<UintPtrT>{tmp52});
    TNode<UintPtrT> tmp58;
    USE(tmp58);
    tmp58 = FromConstexpr9ATuintptr17ATconstexpr_int31_164(state_, 1);
    TNode<UintPtrT> tmp59;
    USE(tmp59);
    tmp59 = CodeStubAssembler(state_).UintPtrSub(TNode<UintPtrT>{tmp57}, TNode<UintPtrT>{tmp58});
    TNode<UintPtrT> tmp60;
    USE(tmp60);
    tmp60 = CodeStubAssembler(state_).WordAnd(TNode<UintPtrT>{tmp55}, TNode<UintPtrT>{tmp59});
    TNode<UintPtrT> tmp61;
    USE(tmp61);
    tmp61 = FromConstexpr9ATuintptr17ATconstexpr_int31_164(state_, 0);
    TNode<BoolT> tmp62;
    USE(tmp62);
    tmp62 = CodeStubAssembler(state_).WordNotEqual(TNode<UintPtrT>{tmp60}, TNode<UintPtrT>{tmp61});
    ca_.Goto(&block18, tmp47, tmp48, tmp49, tmp50, tmp51, tmp52, tmp53, tmp55, tmp52, tmp53, tmp55, tmp55, tmp62);
  }

  if (block18.is_used()) {
    TNode<Context> tmp63;
    TNode<Map> tmp64;
    TNode<JSArrayBuffer> tmp65;
    TNode<Object> tmp66;
    TNode<Object> tmp67;
    TNode<UintPtrT> tmp68;
    TNode<Int32T> tmp69;
    TNode<UintPtrT> tmp70;
    TNode<UintPtrT> tmp71;
    TNode<Int32T> tmp72;
    TNode<UintPtrT> tmp73;
    TNode<UintPtrT> tmp74;
    TNode<BoolT> tmp75;
    ca_.Bind(&block18, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67, &tmp68, &tmp69, &tmp70, &tmp71, &tmp72, &tmp73, &tmp74, &tmp75);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 225);
    ca_.Branch(tmp75, &block16, &block17, tmp63, tmp64, tmp65, tmp66, tmp67, tmp68, tmp69, tmp70);
  }

  if (block16.is_used()) {
    TNode<Context> tmp76;
    TNode<Map> tmp77;
    TNode<JSArrayBuffer> tmp78;
    TNode<Object> tmp79;
    TNode<Object> tmp80;
    TNode<UintPtrT> tmp81;
    TNode<Int32T> tmp82;
    TNode<UintPtrT> tmp83;
    ca_.Bind(&block16, &tmp76, &tmp77, &tmp78, &tmp79, &tmp80, &tmp81, &tmp82, &tmp83);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 226);
    TNode<String> tmp84;
    USE(tmp84);
    tmp84 = FromConstexpr6String18ATconstexpr_string_156(state_, "start offset");
    ca_.Goto(&block9, tmp76, tmp77, tmp78, tmp79, tmp80, tmp81, tmp82, tmp84);
  }

  if (block17.is_used()) {
    TNode<Context> tmp85;
    TNode<Map> tmp86;
    TNode<JSArrayBuffer> tmp87;
    TNode<Object> tmp88;
    TNode<Object> tmp89;
    TNode<UintPtrT> tmp90;
    TNode<Int32T> tmp91;
    TNode<UintPtrT> tmp92;
    ca_.Bind(&block17, &tmp85, &tmp86, &tmp87, &tmp88, &tmp89, &tmp90, &tmp91, &tmp92);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 218);
    ca_.Goto(&block11, tmp85, tmp86, tmp87, tmp88, tmp89, tmp90, tmp91, tmp92);
  }

  if (block11.is_used()) {
    TNode<Context> tmp93;
    TNode<Map> tmp94;
    TNode<JSArrayBuffer> tmp95;
    TNode<Object> tmp96;
    TNode<Object> tmp97;
    TNode<UintPtrT> tmp98;
    TNode<Int32T> tmp99;
    TNode<UintPtrT> tmp100;
    ca_.Bind(&block11, &tmp93, &tmp94, &tmp95, &tmp96, &tmp97, &tmp98, &tmp99, &tmp100);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 230);
    TNode<Smi> tmp101;
    USE(tmp101);
    tmp101 = FromConstexpr13ATPositiveSmi17ATconstexpr_int31_155(state_, 0);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 231);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 233);
    TNode<Oddball> tmp102;
    USE(tmp102);
    tmp102 = Undefined_64(state_);
    TNode<BoolT> tmp103;
    USE(tmp103);
    tmp103 = CodeStubAssembler(state_).TaggedNotEqual(TNode<Object>{tmp97}, TNode<HeapObject>{tmp102});
    ca_.Branch(tmp103, &block19, &block20, tmp93, tmp94, tmp95, tmp96, tmp97, tmp98, tmp99, tmp100, tmp101, ca_.Uninitialized<UintPtrT>());
  }

  if (block19.is_used()) {
    TNode<Context> tmp104;
    TNode<Map> tmp105;
    TNode<JSArrayBuffer> tmp106;
    TNode<Object> tmp107;
    TNode<Object> tmp108;
    TNode<UintPtrT> tmp109;
    TNode<Int32T> tmp110;
    TNode<UintPtrT> tmp111;
    TNode<Smi> tmp112;
    TNode<UintPtrT> tmp113;
    ca_.Bind(&block19, &tmp104, &tmp105, &tmp106, &tmp107, &tmp108, &tmp109, &tmp110, &tmp111, &tmp112, &tmp113);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 235);
    TNode<Smi> tmp114;
    USE(tmp114);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp114 = CodeStubAssembler(state_).ToSmiIndex(TNode<Context>{tmp104}, TNode<Object>{tmp108}, &label0);
    ca_.Goto(&block21, tmp104, tmp105, tmp106, tmp107, tmp108, tmp109, tmp110, tmp111, tmp112, tmp113, tmp108, tmp114);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block22, tmp104, tmp105, tmp106, tmp107, tmp108, tmp109, tmp110, tmp111, tmp112, tmp113, tmp108);
    }
  }

  if (block22.is_used()) {
    TNode<Context> tmp115;
    TNode<Map> tmp116;
    TNode<JSArrayBuffer> tmp117;
    TNode<Object> tmp118;
    TNode<Object> tmp119;
    TNode<UintPtrT> tmp120;
    TNode<Int32T> tmp121;
    TNode<UintPtrT> tmp122;
    TNode<Smi> tmp123;
    TNode<UintPtrT> tmp124;
    TNode<Object> tmp125;
    ca_.Bind(&block22, &tmp115, &tmp116, &tmp117, &tmp118, &tmp119, &tmp120, &tmp121, &tmp122, &tmp123, &tmp124, &tmp125);
    ca_.Goto(&block5, tmp115, tmp116, tmp117, tmp118, tmp119, tmp120, tmp121);
  }

  if (block21.is_used()) {
    TNode<Context> tmp126;
    TNode<Map> tmp127;
    TNode<JSArrayBuffer> tmp128;
    TNode<Object> tmp129;
    TNode<Object> tmp130;
    TNode<UintPtrT> tmp131;
    TNode<Int32T> tmp132;
    TNode<UintPtrT> tmp133;
    TNode<Smi> tmp134;
    TNode<UintPtrT> tmp135;
    TNode<Object> tmp136;
    TNode<Smi> tmp137;
    ca_.Bind(&block21, &tmp126, &tmp127, &tmp128, &tmp129, &tmp130, &tmp131, &tmp132, &tmp133, &tmp134, &tmp135, &tmp136, &tmp137);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 233);
    ca_.Goto(&block20, tmp126, tmp127, tmp128, tmp129, tmp130, tmp131, tmp132, tmp133, tmp137, tmp135);
  }

  if (block20.is_used()) {
    TNode<Context> tmp138;
    TNode<Map> tmp139;
    TNode<JSArrayBuffer> tmp140;
    TNode<Object> tmp141;
    TNode<Object> tmp142;
    TNode<UintPtrT> tmp143;
    TNode<Int32T> tmp144;
    TNode<UintPtrT> tmp145;
    TNode<Smi> tmp146;
    TNode<UintPtrT> tmp147;
    ca_.Bind(&block20, &tmp138, &tmp139, &tmp140, &tmp141, &tmp142, &tmp143, &tmp144, &tmp145, &tmp146, &tmp147);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 239);
    TNode<BoolT> tmp148;
    USE(tmp148);
    tmp148 = CodeStubAssembler(state_).IsDetachedBuffer(TNode<JSArrayBuffer>{tmp140});
    ca_.Branch(tmp148, &block23, &block24, tmp138, tmp139, tmp140, tmp141, tmp142, tmp143, tmp144, tmp145, tmp146, tmp147);
  }

  if (block23.is_used()) {
    TNode<Context> tmp149;
    TNode<Map> tmp150;
    TNode<JSArrayBuffer> tmp151;
    TNode<Object> tmp152;
    TNode<Object> tmp153;
    TNode<UintPtrT> tmp154;
    TNode<Int32T> tmp155;
    TNode<UintPtrT> tmp156;
    TNode<Smi> tmp157;
    TNode<UintPtrT> tmp158;
    ca_.Bind(&block23, &tmp149, &tmp150, &tmp151, &tmp152, &tmp153, &tmp154, &tmp155, &tmp156, &tmp157, &tmp158);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 240);
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{tmp149}, MessageTemplate::kDetachedOperation, "Construct");
  }

  if (block24.is_used()) {
    TNode<Context> tmp159;
    TNode<Map> tmp160;
    TNode<JSArrayBuffer> tmp161;
    TNode<Object> tmp162;
    TNode<Object> tmp163;
    TNode<UintPtrT> tmp164;
    TNode<Int32T> tmp165;
    TNode<UintPtrT> tmp166;
    TNode<Smi> tmp167;
    TNode<UintPtrT> tmp168;
    ca_.Bind(&block24, &tmp159, &tmp160, &tmp161, &tmp162, &tmp163, &tmp164, &tmp165, &tmp166, &tmp167, &tmp168);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 244);
    TNode<IntPtrT> tmp169 = ca_.IntPtrConstant(JSArrayBuffer::kByteLengthOffset);
    USE(tmp169);
    TNode<UintPtrT>tmp170 = CodeStubAssembler(state_).LoadReference<UintPtrT>(CodeStubAssembler::Reference{tmp161, tmp169});
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 247);
    TNode<Oddball> tmp171;
    USE(tmp171);
    tmp171 = Undefined_64(state_);
    TNode<BoolT> tmp172;
    USE(tmp172);
    tmp172 = CodeStubAssembler(state_).TaggedEqual(TNode<Object>{tmp163}, TNode<HeapObject>{tmp171});
    ca_.Branch(tmp172, &block25, &block26, tmp159, tmp160, tmp161, tmp162, tmp163, tmp164, tmp165, tmp166, tmp167, tmp168, tmp170);
  }

  if (block25.is_used()) {
    TNode<Context> tmp173;
    TNode<Map> tmp174;
    TNode<JSArrayBuffer> tmp175;
    TNode<Object> tmp176;
    TNode<Object> tmp177;
    TNode<UintPtrT> tmp178;
    TNode<Int32T> tmp179;
    TNode<UintPtrT> tmp180;
    TNode<Smi> tmp181;
    TNode<UintPtrT> tmp182;
    TNode<UintPtrT> tmp183;
    ca_.Bind(&block25, &tmp173, &tmp174, &tmp175, &tmp176, &tmp177, &tmp178, &tmp179, &tmp180, &tmp181, &tmp182, &tmp183);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 250);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 48);
    TNode<UintPtrT> tmp184;
    USE(tmp184);
    tmp184 = FromConstexpr9ATuintptr17ATconstexpr_int31_164(state_, 1);
    TNode<UintPtrT> tmp185;
    USE(tmp185);
    tmp185 = CodeStubAssembler(state_).WordShl(TNode<UintPtrT>{tmp184}, TNode<UintPtrT>{tmp178});
    TNode<UintPtrT> tmp186;
    USE(tmp186);
    tmp186 = FromConstexpr9ATuintptr17ATconstexpr_int31_164(state_, 1);
    TNode<UintPtrT> tmp187;
    USE(tmp187);
    tmp187 = CodeStubAssembler(state_).UintPtrSub(TNode<UintPtrT>{tmp185}, TNode<UintPtrT>{tmp186});
    TNode<UintPtrT> tmp188;
    USE(tmp188);
    tmp188 = CodeStubAssembler(state_).WordAnd(TNode<UintPtrT>{tmp183}, TNode<UintPtrT>{tmp187});
    TNode<UintPtrT> tmp189;
    USE(tmp189);
    tmp189 = FromConstexpr9ATuintptr17ATconstexpr_int31_164(state_, 0);
    TNode<BoolT> tmp190;
    USE(tmp190);
    tmp190 = CodeStubAssembler(state_).WordNotEqual(TNode<UintPtrT>{tmp188}, TNode<UintPtrT>{tmp189});
    ca_.Goto(&block30, tmp173, tmp174, tmp175, tmp176, tmp177, tmp178, tmp179, tmp180, tmp181, tmp182, tmp183, tmp178, tmp179, tmp183, tmp183, tmp190);
  }

  if (block30.is_used()) {
    TNode<Context> tmp191;
    TNode<Map> tmp192;
    TNode<JSArrayBuffer> tmp193;
    TNode<Object> tmp194;
    TNode<Object> tmp195;
    TNode<UintPtrT> tmp196;
    TNode<Int32T> tmp197;
    TNode<UintPtrT> tmp198;
    TNode<Smi> tmp199;
    TNode<UintPtrT> tmp200;
    TNode<UintPtrT> tmp201;
    TNode<UintPtrT> tmp202;
    TNode<Int32T> tmp203;
    TNode<UintPtrT> tmp204;
    TNode<UintPtrT> tmp205;
    TNode<BoolT> tmp206;
    ca_.Bind(&block30, &tmp191, &tmp192, &tmp193, &tmp194, &tmp195, &tmp196, &tmp197, &tmp198, &tmp199, &tmp200, &tmp201, &tmp202, &tmp203, &tmp204, &tmp205, &tmp206);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 250);
    ca_.Branch(tmp206, &block28, &block29, tmp191, tmp192, tmp193, tmp194, tmp195, tmp196, tmp197, tmp198, tmp199, tmp200, tmp201);
  }

  if (block28.is_used()) {
    TNode<Context> tmp207;
    TNode<Map> tmp208;
    TNode<JSArrayBuffer> tmp209;
    TNode<Object> tmp210;
    TNode<Object> tmp211;
    TNode<UintPtrT> tmp212;
    TNode<Int32T> tmp213;
    TNode<UintPtrT> tmp214;
    TNode<Smi> tmp215;
    TNode<UintPtrT> tmp216;
    TNode<UintPtrT> tmp217;
    ca_.Bind(&block28, &tmp207, &tmp208, &tmp209, &tmp210, &tmp211, &tmp212, &tmp213, &tmp214, &tmp215, &tmp216, &tmp217);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 251);
    TNode<String> tmp218;
    USE(tmp218);
    tmp218 = FromConstexpr6String18ATconstexpr_string_156(state_, "byte length");
    ca_.Goto(&block9, tmp207, tmp208, tmp209, tmp210, tmp211, tmp212, tmp213, tmp218);
  }

  if (block29.is_used()) {
    TNode<Context> tmp219;
    TNode<Map> tmp220;
    TNode<JSArrayBuffer> tmp221;
    TNode<Object> tmp222;
    TNode<Object> tmp223;
    TNode<UintPtrT> tmp224;
    TNode<Int32T> tmp225;
    TNode<UintPtrT> tmp226;
    TNode<Smi> tmp227;
    TNode<UintPtrT> tmp228;
    TNode<UintPtrT> tmp229;
    ca_.Bind(&block29, &tmp219, &tmp220, &tmp221, &tmp222, &tmp223, &tmp224, &tmp225, &tmp226, &tmp227, &tmp228, &tmp229);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 256);
    TNode<BoolT> tmp230;
    USE(tmp230);
    tmp230 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp229}, TNode<UintPtrT>{tmp226});
    ca_.Branch(tmp230, &block31, &block32, tmp219, tmp220, tmp221, tmp222, tmp223, tmp224, tmp225, tmp226, tmp227, tmp228, tmp229);
  }

  if (block31.is_used()) {
    TNode<Context> tmp231;
    TNode<Map> tmp232;
    TNode<JSArrayBuffer> tmp233;
    TNode<Object> tmp234;
    TNode<Object> tmp235;
    TNode<UintPtrT> tmp236;
    TNode<Int32T> tmp237;
    TNode<UintPtrT> tmp238;
    TNode<Smi> tmp239;
    TNode<UintPtrT> tmp240;
    TNode<UintPtrT> tmp241;
    ca_.Bind(&block31, &tmp231, &tmp232, &tmp233, &tmp234, &tmp235, &tmp236, &tmp237, &tmp238, &tmp239, &tmp240, &tmp241);
    ca_.Goto(&block3, tmp231, tmp232, tmp233, tmp234, tmp235, tmp236, tmp237);
  }

  if (block32.is_used()) {
    TNode<Context> tmp242;
    TNode<Map> tmp243;
    TNode<JSArrayBuffer> tmp244;
    TNode<Object> tmp245;
    TNode<Object> tmp246;
    TNode<UintPtrT> tmp247;
    TNode<Int32T> tmp248;
    TNode<UintPtrT> tmp249;
    TNode<Smi> tmp250;
    TNode<UintPtrT> tmp251;
    TNode<UintPtrT> tmp252;
    ca_.Bind(&block32, &tmp242, &tmp243, &tmp244, &tmp245, &tmp246, &tmp247, &tmp248, &tmp249, &tmp250, &tmp251, &tmp252);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 260);
    TNode<UintPtrT> tmp253;
    USE(tmp253);
    tmp253 = CodeStubAssembler(state_).UintPtrSub(TNode<UintPtrT>{tmp252}, TNode<UintPtrT>{tmp249});
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 261);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 37);
    TNode<UintPtrT> tmp254;
    USE(tmp254);
    tmp254 = CodeStubAssembler(state_).WordShr(TNode<UintPtrT>{tmp253}, TNode<UintPtrT>{tmp247});
    TNode<Smi> tmp255;
    USE(tmp255);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp255 = Convert13ATPositiveSmi9ATuintptr_192(state_, TNode<UintPtrT>{tmp254}, &label0);
    ca_.Goto(&block34, tmp242, tmp243, tmp244, tmp245, tmp246, tmp247, tmp248, tmp249, tmp250, tmp253, tmp252, tmp247, tmp248, tmp253, tmp253, tmp254, tmp255);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block35, tmp242, tmp243, tmp244, tmp245, tmp246, tmp247, tmp248, tmp249, tmp250, tmp253, tmp252, tmp247, tmp248, tmp253, tmp253, tmp254);
    }
  }

  if (block35.is_used()) {
    TNode<Context> tmp256;
    TNode<Map> tmp257;
    TNode<JSArrayBuffer> tmp258;
    TNode<Object> tmp259;
    TNode<Object> tmp260;
    TNode<UintPtrT> tmp261;
    TNode<Int32T> tmp262;
    TNode<UintPtrT> tmp263;
    TNode<Smi> tmp264;
    TNode<UintPtrT> tmp265;
    TNode<UintPtrT> tmp266;
    TNode<UintPtrT> tmp267;
    TNode<Int32T> tmp268;
    TNode<UintPtrT> tmp269;
    TNode<UintPtrT> tmp270;
    TNode<UintPtrT> tmp271;
    ca_.Bind(&block35, &tmp256, &tmp257, &tmp258, &tmp259, &tmp260, &tmp261, &tmp262, &tmp263, &tmp264, &tmp265, &tmp266, &tmp267, &tmp268, &tmp269, &tmp270, &tmp271);
    ca_.Goto(&block3, tmp256, tmp257, tmp258, tmp259, tmp260, tmp261, tmp262);
  }

  if (block34.is_used()) {
    TNode<Context> tmp272;
    TNode<Map> tmp273;
    TNode<JSArrayBuffer> tmp274;
    TNode<Object> tmp275;
    TNode<Object> tmp276;
    TNode<UintPtrT> tmp277;
    TNode<Int32T> tmp278;
    TNode<UintPtrT> tmp279;
    TNode<Smi> tmp280;
    TNode<UintPtrT> tmp281;
    TNode<UintPtrT> tmp282;
    TNode<UintPtrT> tmp283;
    TNode<Int32T> tmp284;
    TNode<UintPtrT> tmp285;
    TNode<UintPtrT> tmp286;
    TNode<UintPtrT> tmp287;
    TNode<Smi> tmp288;
    ca_.Bind(&block34, &tmp272, &tmp273, &tmp274, &tmp275, &tmp276, &tmp277, &tmp278, &tmp279, &tmp280, &tmp281, &tmp282, &tmp283, &tmp284, &tmp285, &tmp286, &tmp287, &tmp288);
    ca_.Goto(&block33, tmp272, tmp273, tmp274, tmp275, tmp276, tmp277, tmp278, tmp279, tmp280, tmp281, tmp282, tmp283, tmp284, tmp285, tmp286, tmp288);
  }

  if (block33.is_used()) {
    TNode<Context> tmp289;
    TNode<Map> tmp290;
    TNode<JSArrayBuffer> tmp291;
    TNode<Object> tmp292;
    TNode<Object> tmp293;
    TNode<UintPtrT> tmp294;
    TNode<Int32T> tmp295;
    TNode<UintPtrT> tmp296;
    TNode<Smi> tmp297;
    TNode<UintPtrT> tmp298;
    TNode<UintPtrT> tmp299;
    TNode<UintPtrT> tmp300;
    TNode<Int32T> tmp301;
    TNode<UintPtrT> tmp302;
    TNode<UintPtrT> tmp303;
    TNode<Smi> tmp304;
    ca_.Bind(&block33, &tmp289, &tmp290, &tmp291, &tmp292, &tmp293, &tmp294, &tmp295, &tmp296, &tmp297, &tmp298, &tmp299, &tmp300, &tmp301, &tmp302, &tmp303, &tmp304);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 261);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 247);
    ca_.Goto(&block27, tmp289, tmp290, tmp291, tmp292, tmp293, tmp294, tmp295, tmp296, tmp304, tmp298, tmp299);
  }

  if (block26.is_used()) {
    TNode<Context> tmp305;
    TNode<Map> tmp306;
    TNode<JSArrayBuffer> tmp307;
    TNode<Object> tmp308;
    TNode<Object> tmp309;
    TNode<UintPtrT> tmp310;
    TNode<Int32T> tmp311;
    TNode<UintPtrT> tmp312;
    TNode<Smi> tmp313;
    TNode<UintPtrT> tmp314;
    TNode<UintPtrT> tmp315;
    ca_.Bind(&block26, &tmp305, &tmp306, &tmp307, &tmp308, &tmp309, &tmp310, &tmp311, &tmp312, &tmp313, &tmp314, &tmp315);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 267);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 26);
    TNode<UintPtrT> tmp316;
    USE(tmp316);
    tmp316 = Convert9ATuintptr13ATPositiveSmi_189(state_, TNode<Smi>{tmp313});
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 27);
    TNode<UintPtrT> tmp317;
    USE(tmp317);
    tmp317 = CodeStubAssembler(state_).WordShl(TNode<UintPtrT>{tmp316}, TNode<UintPtrT>{tmp310});
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 30);
    TNode<UintPtrT> tmp318;
    USE(tmp318);
    tmp318 = CodeStubAssembler(state_).WordShr(TNode<UintPtrT>{tmp317}, TNode<UintPtrT>{tmp310});
    TNode<BoolT> tmp319;
    USE(tmp319);
    tmp319 = CodeStubAssembler(state_).WordNotEqual(TNode<UintPtrT>{tmp318}, TNode<UintPtrT>{tmp316});
    ca_.Branch(tmp319, &block37, &block38, tmp305, tmp306, tmp307, tmp308, tmp309, tmp310, tmp311, tmp312, tmp313, tmp314, tmp315, tmp310, tmp311, tmp313, tmp313, tmp316, tmp317);
  }

  if (block37.is_used()) {
    TNode<Context> tmp320;
    TNode<Map> tmp321;
    TNode<JSArrayBuffer> tmp322;
    TNode<Object> tmp323;
    TNode<Object> tmp324;
    TNode<UintPtrT> tmp325;
    TNode<Int32T> tmp326;
    TNode<UintPtrT> tmp327;
    TNode<Smi> tmp328;
    TNode<UintPtrT> tmp329;
    TNode<UintPtrT> tmp330;
    TNode<UintPtrT> tmp331;
    TNode<Int32T> tmp332;
    TNode<Smi> tmp333;
    TNode<Smi> tmp334;
    TNode<UintPtrT> tmp335;
    TNode<UintPtrT> tmp336;
    ca_.Bind(&block37, &tmp320, &tmp321, &tmp322, &tmp323, &tmp324, &tmp325, &tmp326, &tmp327, &tmp328, &tmp329, &tmp330, &tmp331, &tmp332, &tmp333, &tmp334, &tmp335, &tmp336);
    ca_.Goto(&block7, tmp320, tmp321, tmp322, tmp323, tmp324, tmp325, tmp326);
  }

  if (block38.is_used()) {
    TNode<Context> tmp337;
    TNode<Map> tmp338;
    TNode<JSArrayBuffer> tmp339;
    TNode<Object> tmp340;
    TNode<Object> tmp341;
    TNode<UintPtrT> tmp342;
    TNode<Int32T> tmp343;
    TNode<UintPtrT> tmp344;
    TNode<Smi> tmp345;
    TNode<UintPtrT> tmp346;
    TNode<UintPtrT> tmp347;
    TNode<UintPtrT> tmp348;
    TNode<Int32T> tmp349;
    TNode<Smi> tmp350;
    TNode<Smi> tmp351;
    TNode<UintPtrT> tmp352;
    TNode<UintPtrT> tmp353;
    ca_.Bind(&block38, &tmp337, &tmp338, &tmp339, &tmp340, &tmp341, &tmp342, &tmp343, &tmp344, &tmp345, &tmp346, &tmp347, &tmp348, &tmp349, &tmp350, &tmp351, &tmp352, &tmp353);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 31);
    ca_.Goto(&block36, tmp337, tmp338, tmp339, tmp340, tmp341, tmp342, tmp343, tmp344, tmp345, tmp346, tmp347, tmp348, tmp349, tmp350, tmp351, tmp353);
  }

  if (block36.is_used()) {
    TNode<Context> tmp354;
    TNode<Map> tmp355;
    TNode<JSArrayBuffer> tmp356;
    TNode<Object> tmp357;
    TNode<Object> tmp358;
    TNode<UintPtrT> tmp359;
    TNode<Int32T> tmp360;
    TNode<UintPtrT> tmp361;
    TNode<Smi> tmp362;
    TNode<UintPtrT> tmp363;
    TNode<UintPtrT> tmp364;
    TNode<UintPtrT> tmp365;
    TNode<Int32T> tmp366;
    TNode<Smi> tmp367;
    TNode<Smi> tmp368;
    TNode<UintPtrT> tmp369;
    ca_.Bind(&block36, &tmp354, &tmp355, &tmp356, &tmp357, &tmp358, &tmp359, &tmp360, &tmp361, &tmp362, &tmp363, &tmp364, &tmp365, &tmp366, &tmp367, &tmp368, &tmp369);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 267);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 272);
    TNode<BoolT> tmp370;
    USE(tmp370);
    tmp370 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp364}, TNode<UintPtrT>{tmp369});
    ca_.Branch(tmp370, &block41, &block42, tmp354, tmp355, tmp356, tmp357, tmp358, tmp359, tmp360, tmp361, tmp362, tmp369, tmp364, tmp370);
  }

  if (block41.is_used()) {
    TNode<Context> tmp371;
    TNode<Map> tmp372;
    TNode<JSArrayBuffer> tmp373;
    TNode<Object> tmp374;
    TNode<Object> tmp375;
    TNode<UintPtrT> tmp376;
    TNode<Int32T> tmp377;
    TNode<UintPtrT> tmp378;
    TNode<Smi> tmp379;
    TNode<UintPtrT> tmp380;
    TNode<UintPtrT> tmp381;
    TNode<BoolT> tmp382;
    ca_.Bind(&block41, &tmp371, &tmp372, &tmp373, &tmp374, &tmp375, &tmp376, &tmp377, &tmp378, &tmp379, &tmp380, &tmp381, &tmp382);
    TNode<BoolT> tmp383;
    USE(tmp383);
    tmp383 = FromConstexpr6ATbool16ATconstexpr_bool_167(state_, true);
    ca_.Goto(&block43, tmp371, tmp372, tmp373, tmp374, tmp375, tmp376, tmp377, tmp378, tmp379, tmp380, tmp381, tmp382, tmp383);
  }

  if (block42.is_used()) {
    TNode<Context> tmp384;
    TNode<Map> tmp385;
    TNode<JSArrayBuffer> tmp386;
    TNode<Object> tmp387;
    TNode<Object> tmp388;
    TNode<UintPtrT> tmp389;
    TNode<Int32T> tmp390;
    TNode<UintPtrT> tmp391;
    TNode<Smi> tmp392;
    TNode<UintPtrT> tmp393;
    TNode<UintPtrT> tmp394;
    TNode<BoolT> tmp395;
    ca_.Bind(&block42, &tmp384, &tmp385, &tmp386, &tmp387, &tmp388, &tmp389, &tmp390, &tmp391, &tmp392, &tmp393, &tmp394, &tmp395);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 273);
    TNode<UintPtrT> tmp396;
    USE(tmp396);
    tmp396 = CodeStubAssembler(state_).UintPtrSub(TNode<UintPtrT>{tmp394}, TNode<UintPtrT>{tmp393});
    TNode<BoolT> tmp397;
    USE(tmp397);
    tmp397 = CodeStubAssembler(state_).UintPtrGreaterThan(TNode<UintPtrT>{tmp391}, TNode<UintPtrT>{tmp396});
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 272);
    ca_.Goto(&block43, tmp384, tmp385, tmp386, tmp387, tmp388, tmp389, tmp390, tmp391, tmp392, tmp393, tmp394, tmp395, tmp397);
  }

  if (block43.is_used()) {
    TNode<Context> tmp398;
    TNode<Map> tmp399;
    TNode<JSArrayBuffer> tmp400;
    TNode<Object> tmp401;
    TNode<Object> tmp402;
    TNode<UintPtrT> tmp403;
    TNode<Int32T> tmp404;
    TNode<UintPtrT> tmp405;
    TNode<Smi> tmp406;
    TNode<UintPtrT> tmp407;
    TNode<UintPtrT> tmp408;
    TNode<BoolT> tmp409;
    TNode<BoolT> tmp410;
    ca_.Bind(&block43, &tmp398, &tmp399, &tmp400, &tmp401, &tmp402, &tmp403, &tmp404, &tmp405, &tmp406, &tmp407, &tmp408, &tmp409, &tmp410);
    ca_.Branch(tmp410, &block39, &block40, tmp398, tmp399, tmp400, tmp401, tmp402, tmp403, tmp404, tmp405, tmp406, tmp407, tmp408);
  }

  if (block39.is_used()) {
    TNode<Context> tmp411;
    TNode<Map> tmp412;
    TNode<JSArrayBuffer> tmp413;
    TNode<Object> tmp414;
    TNode<Object> tmp415;
    TNode<UintPtrT> tmp416;
    TNode<Int32T> tmp417;
    TNode<UintPtrT> tmp418;
    TNode<Smi> tmp419;
    TNode<UintPtrT> tmp420;
    TNode<UintPtrT> tmp421;
    ca_.Bind(&block39, &tmp411, &tmp412, &tmp413, &tmp414, &tmp415, &tmp416, &tmp417, &tmp418, &tmp419, &tmp420, &tmp421);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 274);
    ca_.Goto(&block5, tmp411, tmp412, tmp413, tmp414, tmp415, tmp416, tmp417);
  }

  if (block40.is_used()) {
    TNode<Context> tmp422;
    TNode<Map> tmp423;
    TNode<JSArrayBuffer> tmp424;
    TNode<Object> tmp425;
    TNode<Object> tmp426;
    TNode<UintPtrT> tmp427;
    TNode<Int32T> tmp428;
    TNode<UintPtrT> tmp429;
    TNode<Smi> tmp430;
    TNode<UintPtrT> tmp431;
    TNode<UintPtrT> tmp432;
    ca_.Bind(&block40, &tmp422, &tmp423, &tmp424, &tmp425, &tmp426, &tmp427, &tmp428, &tmp429, &tmp430, &tmp431, &tmp432);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 247);
    ca_.Goto(&block27, tmp422, tmp423, tmp424, tmp425, tmp426, tmp427, tmp428, tmp429, tmp430, tmp431, tmp432);
  }

  if (block27.is_used()) {
    TNode<Context> tmp433;
    TNode<Map> tmp434;
    TNode<JSArrayBuffer> tmp435;
    TNode<Object> tmp436;
    TNode<Object> tmp437;
    TNode<UintPtrT> tmp438;
    TNode<Int32T> tmp439;
    TNode<UintPtrT> tmp440;
    TNode<Smi> tmp441;
    TNode<UintPtrT> tmp442;
    TNode<UintPtrT> tmp443;
    ca_.Bind(&block27, &tmp433, &tmp434, &tmp435, &tmp436, &tmp437, &tmp438, &tmp439, &tmp440, &tmp441, &tmp442, &tmp443);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 279);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 280);
    TNode<UintPtrT> tmp444;
    USE(tmp444);
    tmp444 = Convert9ATuintptr13ATPositiveSmi_189(state_, TNode<Smi>{tmp441});
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 278);
    TNode<JSTypedArray> tmp445;
    USE(tmp445);
    tmp445 = AllocateTypedArray_348(state_, TNode<Context>{tmp433}, false, TNode<Map>{tmp434}, TNode<JSArrayBuffer>{tmp435}, TNode<UintPtrT>{tmp440}, TNode<UintPtrT>{tmp442}, TNode<UintPtrT>{tmp444});
    ca_.Goto(&block1, tmp433, tmp434, tmp435, tmp436, tmp437, tmp438, tmp439, tmp445);
  }

  if (block9.is_used()) {
    TNode<Context> tmp446;
    TNode<Map> tmp447;
    TNode<JSArrayBuffer> tmp448;
    TNode<Object> tmp449;
    TNode<Object> tmp450;
    TNode<UintPtrT> tmp451;
    TNode<Int32T> tmp452;
    TNode<String> tmp453;
    ca_.Bind(&block9, &tmp446, &tmp447, &tmp448, &tmp449, &tmp450, &tmp451, &tmp452, &tmp453);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 283);
    CodeStubAssembler(state_).CallRuntime(Runtime::kThrowInvalidTypedArrayAlignment, tmp446, tmp447, tmp453);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block7.is_used()) {
    TNode<Context> tmp455;
    TNode<Map> tmp456;
    TNode<JSArrayBuffer> tmp457;
    TNode<Object> tmp458;
    TNode<Object> tmp459;
    TNode<UintPtrT> tmp460;
    TNode<Int32T> tmp461;
    ca_.Bind(&block7, &tmp455, &tmp456, &tmp457, &tmp458, &tmp459, &tmp460, &tmp461);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 286);
    CodeStubAssembler(state_).ThrowRangeError(TNode<Context>{tmp455}, MessageTemplate::kInvalidArrayBufferLength);
  }

  if (block5.is_used()) {
    TNode<Context> tmp462;
    TNode<Map> tmp463;
    TNode<JSArrayBuffer> tmp464;
    TNode<Object> tmp465;
    TNode<Object> tmp466;
    TNode<UintPtrT> tmp467;
    TNode<Int32T> tmp468;
    ca_.Bind(&block5, &tmp462, &tmp463, &tmp464, &tmp465, &tmp466, &tmp467, &tmp468);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 289);
    CodeStubAssembler(state_).ThrowRangeError(TNode<Context>{tmp462}, MessageTemplate::kInvalidTypedArrayLength, TNode<Object>{tmp466});
  }

  if (block3.is_used()) {
    TNode<Context> tmp469;
    TNode<Map> tmp470;
    TNode<JSArrayBuffer> tmp471;
    TNode<Object> tmp472;
    TNode<Object> tmp473;
    TNode<UintPtrT> tmp474;
    TNode<Int32T> tmp475;
    ca_.Bind(&block3, &tmp469, &tmp470, &tmp471, &tmp472, &tmp473, &tmp474, &tmp475);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 292);
    CodeStubAssembler(state_).ThrowRangeError(TNode<Context>{tmp469}, MessageTemplate::kInvalidOffset, TNode<Object>{tmp472});
  }

  if (block1.is_used()) {
    TNode<Context> tmp476;
    TNode<Map> tmp477;
    TNode<JSArrayBuffer> tmp478;
    TNode<Object> tmp479;
    TNode<Object> tmp480;
    TNode<UintPtrT> tmp481;
    TNode<Int32T> tmp482;
    TNode<JSTypedArray> tmp483;
    ca_.Bind(&block1, &tmp476, &tmp477, &tmp478, &tmp479, &tmp480, &tmp481, &tmp482, &tmp483);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 213);
    ca_.Goto(&block44, tmp476, tmp477, tmp478, tmp479, tmp480, tmp481, tmp482, tmp483);
  }

    TNode<Context> tmp484;
    TNode<Map> tmp485;
    TNode<JSArrayBuffer> tmp486;
    TNode<Object> tmp487;
    TNode<Object> tmp488;
    TNode<UintPtrT> tmp489;
    TNode<Int32T> tmp490;
    TNode<JSTypedArray> tmp491;
    ca_.Bind(&block44, &tmp484, &tmp485, &tmp486, &tmp487, &tmp488, &tmp489, &tmp490, &tmp491);
  return TNode<JSTypedArray>{tmp491};
}

void ConstructByJSReceiver_355(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSReceiver> p_obj, compiler::CodeAssemblerLabel* label_IfConstructByArrayLike, compiler::TypedCodeAssemblerVariable<JSReceiver>* label_IfConstructByArrayLike_parameter_0, compiler::TypedCodeAssemblerVariable<Number>* label_IfConstructByArrayLike_parameter_1, compiler::TypedCodeAssemblerVariable<JSReceiver>* label_IfConstructByArrayLike_parameter_2) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, JSReceiver> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, JSReceiver, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Object, Object> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Object, Object, JSReceiver> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Object> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Object, JSReceiver> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Object, JSReceiver, JSReceiver, JSReceiver, JSArray, Number, JSReceiver> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Object, Object> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Object, Object, Smi> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Object> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Object, Smi> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Object> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSReceiver, Number, JSReceiver> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_obj);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<JSReceiver> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 301);
    TNode<Object> tmp2;
    USE(tmp2);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp2 = CodeStubAssembler(state_).GetIteratorMethod(TNode<Context>{tmp0}, TNode<HeapObject>{tmp1}, &label0);
    ca_.Goto(&block6, tmp0, tmp1, tmp1, tmp2);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block7, tmp0, tmp1, tmp1);
    }
  }

  if (block7.is_used()) {
    TNode<Context> tmp3;
    TNode<JSReceiver> tmp4;
    TNode<JSReceiver> tmp5;
    ca_.Bind(&block7, &tmp3, &tmp4, &tmp5);
    ca_.Goto(&block5, tmp3, tmp4);
  }

  if (block6.is_used()) {
    TNode<Context> tmp6;
    TNode<JSReceiver> tmp7;
    TNode<JSReceiver> tmp8;
    TNode<Object> tmp9;
    ca_.Bind(&block6, &tmp6, &tmp7, &tmp8, &tmp9);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 300);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 302);
    TNode<JSReceiver> tmp10;
    USE(tmp10);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp10 = Cast71UT19ATCallableApiObject17ATCallableJSProxy15JSBoundFunction10JSFunction_1434(state_, TNode<Context>{tmp6}, TNode<Object>{tmp9}, &label0);
    ca_.Goto(&block10, tmp6, tmp7, tmp9, tmp9, tmp10);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block11, tmp6, tmp7, tmp9, tmp9);
    }
  }

  if (block11.is_used()) {
    TNode<Context> tmp11;
    TNode<JSReceiver> tmp12;
    TNode<Object> tmp13;
    TNode<Object> tmp14;
    ca_.Bind(&block11, &tmp11, &tmp12, &tmp13, &tmp14);
    ca_.Goto(&block9, tmp11, tmp12, tmp13);
  }

  if (block10.is_used()) {
    TNode<Context> tmp15;
    TNode<JSReceiver> tmp16;
    TNode<Object> tmp17;
    TNode<Object> tmp18;
    TNode<JSReceiver> tmp19;
    ca_.Bind(&block10, &tmp15, &tmp16, &tmp17, &tmp18, &tmp19);
    ca_.Goto(&block8, tmp15, tmp16, tmp17, tmp19);
  }

  if (block9.is_used()) {
    TNode<Context> tmp20;
    TNode<JSReceiver> tmp21;
    TNode<Object> tmp22;
    ca_.Bind(&block9, &tmp20, &tmp21, &tmp22);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 303);
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{tmp20}, MessageTemplate::kIteratorSymbolNonCallable);
  }

  if (block8.is_used()) {
    TNode<Context> tmp23;
    TNode<JSReceiver> tmp24;
    TNode<Object> tmp25;
    TNode<JSReceiver> tmp26;
    ca_.Bind(&block8, &tmp23, &tmp24, &tmp25, &tmp26);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 302);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 304);
    compiler::TypedCodeAssemblerVariable<JSArray> result_0_0(&ca_);
    compiler::TypedCodeAssemblerVariable<Number> result_0_1(&ca_);
    compiler::TypedCodeAssemblerVariable<JSReceiver> result_0_2(&ca_);
    compiler::CodeAssemblerLabel label0(&ca_);
    ConstructByIterable_352(state_, TNode<Context>{tmp23}, TNode<JSReceiver>{tmp24}, TNode<JSReceiver>{tmp26}, &label0, &result_0_0, &result_0_1, &result_0_2);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block12, tmp23, tmp24, tmp25, tmp26, tmp24, tmp26, result_0_0.value(), result_0_1.value(), result_0_2.value());
    }
  }

  if (block12.is_used()) {
    TNode<Context> tmp27;
    TNode<JSReceiver> tmp28;
    TNode<Object> tmp29;
    TNode<JSReceiver> tmp30;
    TNode<JSReceiver> tmp31;
    TNode<JSReceiver> tmp32;
    TNode<JSArray> tmp33;
    TNode<Number> tmp34;
    TNode<JSReceiver> tmp35;
    ca_.Bind(&block12, &tmp27, &tmp28, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33, &tmp34, &tmp35);
    ca_.Goto(&block1, tmp33, tmp34, tmp35);
  }

  if (block5.is_used()) {
    TNode<Context> tmp36;
    TNode<JSReceiver> tmp37;
    ca_.Bind(&block5, &tmp36, &tmp37);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 308);
    TNode<String> tmp38;
    USE(tmp38);
    tmp38 = kLengthString_68(state_);
    TNode<Object> tmp39;
    USE(tmp39);
    tmp39 = CodeStubAssembler(state_).GetProperty(TNode<Context>{tmp36}, TNode<Object>{tmp37}, TNode<Object>{tmp38});
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 309);
    TNode<Smi> tmp40;
    USE(tmp40);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp40 = CodeStubAssembler(state_).ToSmiLength(TNode<Context>{tmp36}, TNode<Object>{tmp39}, &label0);
    ca_.Goto(&block15, tmp36, tmp37, tmp39, tmp39, tmp40);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block16, tmp36, tmp37, tmp39, tmp39);
    }
  }

  if (block16.is_used()) {
    TNode<Context> tmp41;
    TNode<JSReceiver> tmp42;
    TNode<Object> tmp43;
    TNode<Object> tmp44;
    ca_.Bind(&block16, &tmp41, &tmp42, &tmp43, &tmp44);
    ca_.Goto(&block14, tmp41, tmp42, tmp43);
  }

  if (block15.is_used()) {
    TNode<Context> tmp45;
    TNode<JSReceiver> tmp46;
    TNode<Object> tmp47;
    TNode<Object> tmp48;
    TNode<Smi> tmp49;
    ca_.Bind(&block15, &tmp45, &tmp46, &tmp47, &tmp48, &tmp49);
    ca_.Goto(&block13, tmp45, tmp46, tmp47, tmp49);
  }

  if (block14.is_used()) {
    TNode<Context> tmp50;
    TNode<JSReceiver> tmp51;
    TNode<Object> tmp52;
    ca_.Bind(&block14, &tmp50, &tmp51, &tmp52);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 310);
    ca_.Goto(&block3, tmp50, tmp51, tmp52);
  }

  if (block13.is_used()) {
    TNode<Context> tmp53;
    TNode<JSReceiver> tmp54;
    TNode<Object> tmp55;
    TNode<Smi> tmp56;
    ca_.Bind(&block13, &tmp53, &tmp54, &tmp55, &tmp56);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 309);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 311);
    TNode<JSReceiver> tmp57;
    USE(tmp57);
    tmp57 = GetArrayBufferFunction_222(state_, TNode<Context>{tmp53});
    ca_.Goto(&block1, tmp54, tmp56, tmp57);
  }

  if (block3.is_used()) {
    TNode<Context> tmp58;
    TNode<JSReceiver> tmp59;
    TNode<Object> tmp60;
    ca_.Bind(&block3, &tmp58, &tmp59, &tmp60);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 314);
    CodeStubAssembler(state_).ThrowRangeError(TNode<Context>{tmp58}, MessageTemplate::kInvalidTypedArrayLength, TNode<Object>{tmp60});
  }

  if (block1.is_used()) {
    TNode<JSReceiver> tmp61;
    TNode<Number> tmp62;
    TNode<JSReceiver> tmp63;
    ca_.Bind(&block1, &tmp61, &tmp62, &tmp63);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 296);
    *label_IfConstructByArrayLike_parameter_2 = tmp63;
    *label_IfConstructByArrayLike_parameter_1 = tmp62;
    *label_IfConstructByArrayLike_parameter_0 = tmp61;
    ca_.Goto(label_IfConstructByArrayLike);
  }
}

TF_BUILTIN(CreateTypedArray, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  TNode<JSFunction> parameter1 = UncheckedCast<JSFunction>(Parameter(Descriptor::kTarget));
  USE(parameter1);
  TNode<JSReceiver> parameter2 = UncheckedCast<JSReceiver>(Parameter(Descriptor::kNewTarget));
  USE(parameter2);
  TNode<Object> parameter3 = UncheckedCast<Object>(Parameter(Descriptor::kArg1));
  USE(parameter3);
  TNode<Object> parameter4 = UncheckedCast<Object>(Parameter(Descriptor::kArg2));
  USE(parameter4);
  TNode<Object> parameter5 = UncheckedCast<Object>(Parameter(Descriptor::kArg3));
  USE(parameter5);
  compiler::CodeAssemblerParameterizedLabel<Context, JSFunction, JSReceiver, Object, Object, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSFunction, JSReceiver, Object, Object, Object, Map, UintPtrT, Int32T, Object, Object> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSFunction, JSReceiver, Object, Object, Object, Map, UintPtrT, Int32T, Object, Object, Smi> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSFunction, JSReceiver, Object, Object, Object, Map, UintPtrT, Int32T, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSFunction, JSReceiver, Object, Object, Object, Map, UintPtrT, Int32T, Object, HeapObject> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSFunction, JSReceiver, Object, Object, Object, Map, UintPtrT, Int32T, Object, HeapObject, JSArrayBuffer> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSFunction, JSReceiver, Object, Object, Object, Map, UintPtrT, Int32T, Object> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSFunction, JSReceiver, Object, Object, Object, Map, UintPtrT, Int32T, Object, HeapObject> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSFunction, JSReceiver, Object, Object, Object, Map, UintPtrT, Int32T, Object, HeapObject, JSTypedArray> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSFunction, JSReceiver, Object, Object, Object, Map, UintPtrT, Int32T, Object, JSTypedArray, JSTypedArray, JSTypedArray, Number, JSReceiver> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSFunction, JSReceiver, Object, Object, Object, Map, UintPtrT, Int32T, Object> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSFunction, JSReceiver, Object, Object, Object, Map, UintPtrT, Int32T, Object, HeapObject> block21(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSFunction, JSReceiver, Object, Object, Object, Map, UintPtrT, Int32T, Object, HeapObject, JSReceiver> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSFunction, JSReceiver, Object, Object, Object, Map, UintPtrT, Int32T, Object, JSReceiver, JSReceiver, JSReceiver, Number, JSReceiver> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSFunction, JSReceiver, Object, Object, Object, Map, UintPtrT, Int32T, Object> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSFunction, JSReceiver, Object, Object, Object, Map, UintPtrT, Int32T, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSFunction, JSReceiver, Object, Object, Object, Map, UintPtrT, Int32T, JSReceiver, Number, JSReceiver> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2, parameter3, parameter4, parameter5);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<JSFunction> tmp1;
    TNode<JSReceiver> tmp2;
    TNode<Object> tmp3;
    TNode<Object> tmp4;
    TNode<Object> tmp5;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4, &tmp5);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 326);
    TNode<Map> tmp6;
    USE(tmp6);
    tmp6 = GetDerivedMap_56(state_, TNode<Context>{tmp0}, TNode<JSFunction>{tmp1}, TNode<JSReceiver>{tmp2});
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 331);
    TNode<UintPtrT> tmp7;
    USE(tmp7);
    TNode<Int32T> tmp8;
    USE(tmp8);
    std::tie(tmp7, tmp8) = TypedArrayBuiltinsAssembler(state_).GetTypedArrayElementsInfo(TNode<Map>{tmp6}).Flatten();
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 330);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 334);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 335);
    TNode<Smi> tmp9;
    USE(tmp9);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp9 = Cast5ATSmi_83(state_, TNode<Object>{tmp3}, &label0);
    ca_.Goto(&block7, tmp0, tmp1, tmp2, tmp3, tmp4, tmp5, tmp6, tmp7, tmp8, tmp3, tmp3, tmp9);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block8, tmp0, tmp1, tmp2, tmp3, tmp4, tmp5, tmp6, tmp7, tmp8, tmp3, tmp3);
    }
  }

  if (block8.is_used()) {
    TNode<Context> tmp10;
    TNode<JSFunction> tmp11;
    TNode<JSReceiver> tmp12;
    TNode<Object> tmp13;
    TNode<Object> tmp14;
    TNode<Object> tmp15;
    TNode<Map> tmp16;
    TNode<UintPtrT> tmp17;
    TNode<Int32T> tmp18;
    TNode<Object> tmp19;
    TNode<Object> tmp20;
    ca_.Bind(&block8, &tmp10, &tmp11, &tmp12, &tmp13, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18, &tmp19, &tmp20);
    ca_.Goto(&block6, tmp10, tmp11, tmp12, tmp13, tmp14, tmp15, tmp16, tmp17, tmp18, tmp19);
  }

  if (block7.is_used()) {
    TNode<Context> tmp21;
    TNode<JSFunction> tmp22;
    TNode<JSReceiver> tmp23;
    TNode<Object> tmp24;
    TNode<Object> tmp25;
    TNode<Object> tmp26;
    TNode<Map> tmp27;
    TNode<UintPtrT> tmp28;
    TNode<Int32T> tmp29;
    TNode<Object> tmp30;
    TNode<Object> tmp31;
    TNode<Smi> tmp32;
    ca_.Bind(&block7, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26, &tmp27, &tmp28, &tmp29, &tmp30, &tmp31, &tmp32);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 336);
    ca_.Goto(&block4, tmp21, tmp22, tmp23, tmp24, tmp25, tmp26, tmp27, tmp28, tmp29, tmp32);
  }

  if (block6.is_used()) {
    TNode<Context> tmp33;
    TNode<JSFunction> tmp34;
    TNode<JSReceiver> tmp35;
    TNode<Object> tmp36;
    TNode<Object> tmp37;
    TNode<Object> tmp38;
    TNode<Map> tmp39;
    TNode<UintPtrT> tmp40;
    TNode<Int32T> tmp41;
    TNode<Object> tmp42;
    ca_.Bind(&block6, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40, &tmp41, &tmp42);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 338);
    TNode<JSArrayBuffer> tmp43;
    USE(tmp43);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp43 = Cast13JSArrayBuffer_114(state_, TNode<HeapObject>{ca_.UncheckedCast<HeapObject>(tmp42)}, &label0);
    ca_.Goto(&block11, tmp33, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39, tmp40, tmp41, tmp42, ca_.UncheckedCast<HeapObject>(tmp42), tmp43);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block12, tmp33, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39, tmp40, tmp41, tmp42, ca_.UncheckedCast<HeapObject>(tmp42));
    }
  }

  if (block12.is_used()) {
    TNode<Context> tmp44;
    TNode<JSFunction> tmp45;
    TNode<JSReceiver> tmp46;
    TNode<Object> tmp47;
    TNode<Object> tmp48;
    TNode<Object> tmp49;
    TNode<Map> tmp50;
    TNode<UintPtrT> tmp51;
    TNode<Int32T> tmp52;
    TNode<Object> tmp53;
    TNode<HeapObject> tmp54;
    ca_.Bind(&block12, &tmp44, &tmp45, &tmp46, &tmp47, &tmp48, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54);
    ca_.Goto(&block10, tmp44, tmp45, tmp46, tmp47, tmp48, tmp49, tmp50, tmp51, tmp52, tmp53);
  }

  if (block11.is_used()) {
    TNode<Context> tmp55;
    TNode<JSFunction> tmp56;
    TNode<JSReceiver> tmp57;
    TNode<Object> tmp58;
    TNode<Object> tmp59;
    TNode<Object> tmp60;
    TNode<Map> tmp61;
    TNode<UintPtrT> tmp62;
    TNode<Int32T> tmp63;
    TNode<Object> tmp64;
    TNode<HeapObject> tmp65;
    TNode<JSArrayBuffer> tmp66;
    ca_.Bind(&block11, &tmp55, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64, &tmp65, &tmp66);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 339);
    TNode<JSTypedArray> tmp67;
    USE(tmp67);
    tmp67 = ConstructByArrayBuffer_354(state_, TNode<Context>{tmp55}, TNode<Map>{tmp61}, TNode<JSArrayBuffer>{tmp66}, TNode<Object>{tmp59}, TNode<Object>{tmp60}, TorqueStructTypedArrayElementsInfo{TNode<UintPtrT>{tmp62}, TNode<Int32T>{tmp63}});
    CodeStubAssembler(state_).Return(tmp67);
  }

  if (block10.is_used()) {
    TNode<Context> tmp68;
    TNode<JSFunction> tmp69;
    TNode<JSReceiver> tmp70;
    TNode<Object> tmp71;
    TNode<Object> tmp72;
    TNode<Object> tmp73;
    TNode<Map> tmp74;
    TNode<UintPtrT> tmp75;
    TNode<Int32T> tmp76;
    TNode<Object> tmp77;
    ca_.Bind(&block10, &tmp68, &tmp69, &tmp70, &tmp71, &tmp72, &tmp73, &tmp74, &tmp75, &tmp76, &tmp77);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 341);
    TNode<JSTypedArray> tmp78;
    USE(tmp78);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp78 = Cast12JSTypedArray_109(state_, TNode<HeapObject>{ca_.UncheckedCast<HeapObject>(tmp77)}, &label0);
    ca_.Goto(&block15, tmp68, tmp69, tmp70, tmp71, tmp72, tmp73, tmp74, tmp75, tmp76, tmp77, ca_.UncheckedCast<HeapObject>(tmp77), tmp78);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block16, tmp68, tmp69, tmp70, tmp71, tmp72, tmp73, tmp74, tmp75, tmp76, tmp77, ca_.UncheckedCast<HeapObject>(tmp77));
    }
  }

  if (block16.is_used()) {
    TNode<Context> tmp79;
    TNode<JSFunction> tmp80;
    TNode<JSReceiver> tmp81;
    TNode<Object> tmp82;
    TNode<Object> tmp83;
    TNode<Object> tmp84;
    TNode<Map> tmp85;
    TNode<UintPtrT> tmp86;
    TNode<Int32T> tmp87;
    TNode<Object> tmp88;
    TNode<HeapObject> tmp89;
    ca_.Bind(&block16, &tmp79, &tmp80, &tmp81, &tmp82, &tmp83, &tmp84, &tmp85, &tmp86, &tmp87, &tmp88, &tmp89);
    ca_.Goto(&block14, tmp79, tmp80, tmp81, tmp82, tmp83, tmp84, tmp85, tmp86, tmp87, tmp88);
  }

  if (block15.is_used()) {
    TNode<Context> tmp90;
    TNode<JSFunction> tmp91;
    TNode<JSReceiver> tmp92;
    TNode<Object> tmp93;
    TNode<Object> tmp94;
    TNode<Object> tmp95;
    TNode<Map> tmp96;
    TNode<UintPtrT> tmp97;
    TNode<Int32T> tmp98;
    TNode<Object> tmp99;
    TNode<HeapObject> tmp100;
    TNode<JSTypedArray> tmp101;
    ca_.Bind(&block15, &tmp90, &tmp91, &tmp92, &tmp93, &tmp94, &tmp95, &tmp96, &tmp97, &tmp98, &tmp99, &tmp100, &tmp101);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 342);
    compiler::TypedCodeAssemblerVariable<JSTypedArray> result_0_0(&ca_);
    compiler::TypedCodeAssemblerVariable<Number> result_0_1(&ca_);
    compiler::TypedCodeAssemblerVariable<JSReceiver> result_0_2(&ca_);
    compiler::CodeAssemblerLabel label0(&ca_);
    ConstructByTypedArray_353(state_, TNode<Context>{tmp90}, TNode<JSTypedArray>{tmp101}, &label0, &result_0_0, &result_0_1, &result_0_2);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block17, tmp90, tmp91, tmp92, tmp93, tmp94, tmp95, tmp96, tmp97, tmp98, tmp99, tmp101, tmp101, result_0_0.value(), result_0_1.value(), result_0_2.value());
    }
  }

  if (block17.is_used()) {
    TNode<Context> tmp102;
    TNode<JSFunction> tmp103;
    TNode<JSReceiver> tmp104;
    TNode<Object> tmp105;
    TNode<Object> tmp106;
    TNode<Object> tmp107;
    TNode<Map> tmp108;
    TNode<UintPtrT> tmp109;
    TNode<Int32T> tmp110;
    TNode<Object> tmp111;
    TNode<JSTypedArray> tmp112;
    TNode<JSTypedArray> tmp113;
    TNode<JSTypedArray> tmp114;
    TNode<Number> tmp115;
    TNode<JSReceiver> tmp116;
    ca_.Bind(&block17, &tmp102, &tmp103, &tmp104, &tmp105, &tmp106, &tmp107, &tmp108, &tmp109, &tmp110, &tmp111, &tmp112, &tmp113, &tmp114, &tmp115, &tmp116);
    ca_.Goto(&block2, tmp102, tmp103, tmp104, tmp105, tmp106, tmp107, tmp108, tmp109, tmp110, tmp114, tmp115, tmp116);
  }

  if (block14.is_used()) {
    TNode<Context> tmp117;
    TNode<JSFunction> tmp118;
    TNode<JSReceiver> tmp119;
    TNode<Object> tmp120;
    TNode<Object> tmp121;
    TNode<Object> tmp122;
    TNode<Map> tmp123;
    TNode<UintPtrT> tmp124;
    TNode<Int32T> tmp125;
    TNode<Object> tmp126;
    ca_.Bind(&block14, &tmp117, &tmp118, &tmp119, &tmp120, &tmp121, &tmp122, &tmp123, &tmp124, &tmp125, &tmp126);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 344);
    TNode<JSReceiver> tmp127;
    USE(tmp127);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp127 = Cast10JSReceiver_142(state_, TNode<HeapObject>{ca_.UncheckedCast<HeapObject>(tmp126)}, &label0);
    ca_.Goto(&block20, tmp117, tmp118, tmp119, tmp120, tmp121, tmp122, tmp123, tmp124, tmp125, tmp126, ca_.UncheckedCast<HeapObject>(tmp126), tmp127);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block21, tmp117, tmp118, tmp119, tmp120, tmp121, tmp122, tmp123, tmp124, tmp125, tmp126, ca_.UncheckedCast<HeapObject>(tmp126));
    }
  }

  if (block21.is_used()) {
    TNode<Context> tmp128;
    TNode<JSFunction> tmp129;
    TNode<JSReceiver> tmp130;
    TNode<Object> tmp131;
    TNode<Object> tmp132;
    TNode<Object> tmp133;
    TNode<Map> tmp134;
    TNode<UintPtrT> tmp135;
    TNode<Int32T> tmp136;
    TNode<Object> tmp137;
    TNode<HeapObject> tmp138;
    ca_.Bind(&block21, &tmp128, &tmp129, &tmp130, &tmp131, &tmp132, &tmp133, &tmp134, &tmp135, &tmp136, &tmp137, &tmp138);
    ca_.Goto(&block19, tmp128, tmp129, tmp130, tmp131, tmp132, tmp133, tmp134, tmp135, tmp136, tmp137);
  }

  if (block20.is_used()) {
    TNode<Context> tmp139;
    TNode<JSFunction> tmp140;
    TNode<JSReceiver> tmp141;
    TNode<Object> tmp142;
    TNode<Object> tmp143;
    TNode<Object> tmp144;
    TNode<Map> tmp145;
    TNode<UintPtrT> tmp146;
    TNode<Int32T> tmp147;
    TNode<Object> tmp148;
    TNode<HeapObject> tmp149;
    TNode<JSReceiver> tmp150;
    ca_.Bind(&block20, &tmp139, &tmp140, &tmp141, &tmp142, &tmp143, &tmp144, &tmp145, &tmp146, &tmp147, &tmp148, &tmp149, &tmp150);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 345);
    compiler::TypedCodeAssemblerVariable<JSReceiver> result_0_0(&ca_);
    compiler::TypedCodeAssemblerVariable<Number> result_0_1(&ca_);
    compiler::TypedCodeAssemblerVariable<JSReceiver> result_0_2(&ca_);
    compiler::CodeAssemblerLabel label0(&ca_);
    ConstructByJSReceiver_355(state_, TNode<Context>{tmp139}, TNode<JSReceiver>{tmp150}, &label0, &result_0_0, &result_0_1, &result_0_2);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block22, tmp139, tmp140, tmp141, tmp142, tmp143, tmp144, tmp145, tmp146, tmp147, tmp148, tmp150, tmp150, result_0_0.value(), result_0_1.value(), result_0_2.value());
    }
  }

  if (block22.is_used()) {
    TNode<Context> tmp151;
    TNode<JSFunction> tmp152;
    TNode<JSReceiver> tmp153;
    TNode<Object> tmp154;
    TNode<Object> tmp155;
    TNode<Object> tmp156;
    TNode<Map> tmp157;
    TNode<UintPtrT> tmp158;
    TNode<Int32T> tmp159;
    TNode<Object> tmp160;
    TNode<JSReceiver> tmp161;
    TNode<JSReceiver> tmp162;
    TNode<JSReceiver> tmp163;
    TNode<Number> tmp164;
    TNode<JSReceiver> tmp165;
    ca_.Bind(&block22, &tmp151, &tmp152, &tmp153, &tmp154, &tmp155, &tmp156, &tmp157, &tmp158, &tmp159, &tmp160, &tmp161, &tmp162, &tmp163, &tmp164, &tmp165);
    ca_.Goto(&block2, tmp151, tmp152, tmp153, tmp154, tmp155, tmp156, tmp157, tmp158, tmp159, tmp163, tmp164, tmp165);
  }

  if (block19.is_used()) {
    TNode<Context> tmp166;
    TNode<JSFunction> tmp167;
    TNode<JSReceiver> tmp168;
    TNode<Object> tmp169;
    TNode<Object> tmp170;
    TNode<Object> tmp171;
    TNode<Map> tmp172;
    TNode<UintPtrT> tmp173;
    TNode<Int32T> tmp174;
    TNode<Object> tmp175;
    ca_.Bind(&block19, &tmp166, &tmp167, &tmp168, &tmp169, &tmp170, &tmp171, &tmp172, &tmp173, &tmp174, &tmp175);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 349);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 350);
    ca_.Goto(&block4, tmp166, tmp167, tmp168, tmp169, tmp170, tmp171, tmp172, tmp173, tmp174, ca_.UncheckedCast<HeapObject>(tmp175));
  }

  if (block4.is_used()) {
    TNode<Context> tmp176;
    TNode<JSFunction> tmp177;
    TNode<JSReceiver> tmp178;
    TNode<Object> tmp179;
    TNode<Object> tmp180;
    TNode<Object> tmp181;
    TNode<Map> tmp182;
    TNode<UintPtrT> tmp183;
    TNode<Int32T> tmp184;
    TNode<Object> tmp185;
    ca_.Bind(&block4, &tmp176, &tmp177, &tmp178, &tmp179, &tmp180, &tmp181, &tmp182, &tmp183, &tmp184, &tmp185);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 355);
    TNode<JSTypedArray> tmp186;
    USE(tmp186);
    tmp186 = ConstructByLength_350(state_, TNode<Context>{tmp176}, TNode<Map>{tmp182}, TNode<Object>{tmp185}, TorqueStructTypedArrayElementsInfo{TNode<UintPtrT>{tmp183}, TNode<Int32T>{tmp184}});
    CodeStubAssembler(state_).Return(tmp186);
  }

  if (block2.is_used()) {
    TNode<Context> tmp187;
    TNode<JSFunction> tmp188;
    TNode<JSReceiver> tmp189;
    TNode<Object> tmp190;
    TNode<Object> tmp191;
    TNode<Object> tmp192;
    TNode<Map> tmp193;
    TNode<UintPtrT> tmp194;
    TNode<Int32T> tmp195;
    TNode<JSReceiver> tmp196;
    TNode<Number> tmp197;
    TNode<JSReceiver> tmp198;
    ca_.Bind(&block2, &tmp187, &tmp188, &tmp189, &tmp190, &tmp191, &tmp192, &tmp193, &tmp194, &tmp195, &tmp196, &tmp197, &tmp198);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 360);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 359);
    TNode<JSTypedArray> tmp199;
    USE(tmp199);
    tmp199 = ConstructByArrayLike_351(state_, TNode<Context>{tmp187}, TNode<Map>{tmp193}, TNode<HeapObject>{tmp196}, TNode<Object>{tmp197}, TorqueStructTypedArrayElementsInfo{TNode<UintPtrT>{tmp194}, TNode<Int32T>{tmp195}}, TNode<JSReceiver>{tmp198});
    CodeStubAssembler(state_).Return(tmp199);
  }
}

TNode<JSTypedArray> TypedArraySpeciesCreate_356(compiler::CodeAssemblerState* state_, TNode<Context> p_context, const char* p_methodName, int31_t p_numArgs, TNode<JSTypedArray> p_exemplar, TNode<Object> p_arg0, TNode<Object> p_arg1, TNode<Object> p_arg2) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Object, Object, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Object, Object, Object, JSFunction> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Object, Object, Object, JSFunction> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Object, Object, Object, JSFunction> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Object, Object, Object, JSFunction> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Object, Object, Object, JSFunction> block3(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Object, Object, Object, JSFunction, JSReceiver> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Object, Object, Object, JSFunction, JSReceiver, JSReceiver> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Object, Object, Object, JSFunction> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Object, Object, Object, JSFunction, JSReceiver> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Object, Object, Object, JSFunction, JSReceiver, Object> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Object, Object, Object, JSFunction, JSReceiver, Object> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Object, Object, Object, JSFunction, JSReceiver, Object> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Object, Object, Object, JSTypedArray> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Object, Object, Object, JSTypedArray> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_exemplar, p_arg0, p_arg1, p_arg2);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<JSTypedArray> tmp1;
    TNode<Object> tmp2;
    TNode<Object> tmp3;
    TNode<Object> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 368);
    TNode<JSFunction> tmp5;
    USE(tmp5);
    tmp5 = TypedArrayBuiltinsAssembler(state_).GetDefaultConstructor(TNode<Context>{tmp0}, TNode<JSTypedArray>{tmp1});
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 371);
    TNode<IntPtrT> tmp6 = ca_.IntPtrConstant(HeapObject::kMapOffset);
    USE(tmp6);
    TNode<Map>tmp7 = CodeStubAssembler(state_).LoadReference<Map>(CodeStubAssembler::Reference{tmp1, tmp6});
    TNode<BoolT> tmp8;
    USE(tmp8);
    tmp8 = CodeStubAssembler(state_).IsPrototypeTypedArrayPrototype(TNode<Context>{tmp0}, TNode<Map>{tmp7});
    TNode<BoolT> tmp9;
    USE(tmp9);
    tmp9 = CodeStubAssembler(state_).Word32BinaryNot(TNode<BoolT>{tmp8});
    ca_.Branch(tmp9, &block4, &block5, tmp0, tmp1, tmp2, tmp3, tmp4, tmp5);
  }

  if (block4.is_used()) {
    TNode<Context> tmp10;
    TNode<JSTypedArray> tmp11;
    TNode<Object> tmp12;
    TNode<Object> tmp13;
    TNode<Object> tmp14;
    TNode<JSFunction> tmp15;
    ca_.Bind(&block4, &tmp10, &tmp11, &tmp12, &tmp13, &tmp14, &tmp15);
    ca_.Goto(&block3, tmp10, tmp11, tmp12, tmp13, tmp14, tmp15);
  }

  if (block5.is_used()) {
    TNode<Context> tmp16;
    TNode<JSTypedArray> tmp17;
    TNode<Object> tmp18;
    TNode<Object> tmp19;
    TNode<Object> tmp20;
    TNode<JSFunction> tmp21;
    ca_.Bind(&block5, &tmp16, &tmp17, &tmp18, &tmp19, &tmp20, &tmp21);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 372);
    TNode<BoolT> tmp22;
    USE(tmp22);
    tmp22 = CodeStubAssembler(state_).IsTypedArraySpeciesProtectorCellInvalid();
    ca_.Branch(tmp22, &block6, &block7, tmp16, tmp17, tmp18, tmp19, tmp20, tmp21);
  }

  if (block6.is_used()) {
    TNode<Context> tmp23;
    TNode<JSTypedArray> tmp24;
    TNode<Object> tmp25;
    TNode<Object> tmp26;
    TNode<Object> tmp27;
    TNode<JSFunction> tmp28;
    ca_.Bind(&block6, &tmp23, &tmp24, &tmp25, &tmp26, &tmp27, &tmp28);
    ca_.Goto(&block3, tmp23, tmp24, tmp25, tmp26, tmp27, tmp28);
  }

  if (block7.is_used()) {
    TNode<Context> tmp29;
    TNode<JSTypedArray> tmp30;
    TNode<Object> tmp31;
    TNode<Object> tmp32;
    TNode<Object> tmp33;
    TNode<JSFunction> tmp34;
    ca_.Bind(&block7, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33, &tmp34);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 375);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 374);
    TNode<JSTypedArray> tmp35;
    tmp35 = TORQUE_CAST(CodeStubAssembler(state_).CallBuiltin(Builtins::kCreateTypedArray, tmp29, tmp34, tmp34, tmp31, tmp32, tmp33));
    USE(tmp35);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 381);
    ca_.Goto(&block1, tmp29, tmp30, tmp31, tmp32, tmp33, tmp35);
  }

  if (block3.is_used()) {
    TNode<Context> tmp36;
    TNode<JSTypedArray> tmp37;
    TNode<Object> tmp38;
    TNode<Object> tmp39;
    TNode<Object> tmp40;
    TNode<JSFunction> tmp41;
    ca_.Bind(&block3, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40, &tmp41);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 385);
    TNode<JSReceiver> tmp42;
    USE(tmp42);
    tmp42 = CodeStubAssembler(state_).SpeciesConstructor(TNode<Context>{tmp36}, TNode<Object>{tmp37}, TNode<JSReceiver>{tmp41});
    TNode<JSReceiver> tmp43;
    USE(tmp43);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp43 = Cast13ATConstructor_127(state_, TNode<HeapObject>{tmp42}, &label0);
    ca_.Goto(&block10, tmp36, tmp37, tmp38, tmp39, tmp40, tmp41, tmp42, tmp43);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block11, tmp36, tmp37, tmp38, tmp39, tmp40, tmp41, tmp42);
    }
  }

  if (block11.is_used()) {
    TNode<Context> tmp44;
    TNode<JSTypedArray> tmp45;
    TNode<Object> tmp46;
    TNode<Object> tmp47;
    TNode<Object> tmp48;
    TNode<JSFunction> tmp49;
    TNode<JSReceiver> tmp50;
    ca_.Bind(&block11, &tmp44, &tmp45, &tmp46, &tmp47, &tmp48, &tmp49, &tmp50);
    ca_.Goto(&block9, tmp44, tmp45, tmp46, tmp47, tmp48, tmp49);
  }

  if (block10.is_used()) {
    TNode<Context> tmp51;
    TNode<JSTypedArray> tmp52;
    TNode<Object> tmp53;
    TNode<Object> tmp54;
    TNode<Object> tmp55;
    TNode<JSFunction> tmp56;
    TNode<JSReceiver> tmp57;
    TNode<JSReceiver> tmp58;
    ca_.Bind(&block10, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56, &tmp57, &tmp58);
    ca_.Goto(&block8, tmp51, tmp52, tmp53, tmp54, tmp55, tmp56, tmp58);
  }

  if (block9.is_used()) {
    TNode<Context> tmp59;
    TNode<JSTypedArray> tmp60;
    TNode<Object> tmp61;
    TNode<Object> tmp62;
    TNode<Object> tmp63;
    TNode<JSFunction> tmp64;
    ca_.Bind(&block9, &tmp59, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 386);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block8.is_used()) {
    TNode<Context> tmp65;
    TNode<JSTypedArray> tmp66;
    TNode<Object> tmp67;
    TNode<Object> tmp68;
    TNode<Object> tmp69;
    TNode<JSFunction> tmp70;
    TNode<JSReceiver> tmp71;
    ca_.Bind(&block8, &tmp65, &tmp66, &tmp67, &tmp68, &tmp69, &tmp70, &tmp71);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 390);
    TNode<Oddball> tmp72;
    USE(tmp72);
    tmp72 = Undefined_64(state_);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 391);
    if (((CodeStubAssembler(state_).ConstexprInt31Equal(p_numArgs, 1)))) {
      ca_.Goto(&block12, tmp65, tmp66, tmp67, tmp68, tmp69, tmp70, tmp71, tmp72);
    } else {
      ca_.Goto(&block13, tmp65, tmp66, tmp67, tmp68, tmp69, tmp70, tmp71, tmp72);
    }
  }

  if (block12.is_used()) {
    TNode<Context> tmp73;
    TNode<JSTypedArray> tmp74;
    TNode<Object> tmp75;
    TNode<Object> tmp76;
    TNode<Object> tmp77;
    TNode<JSFunction> tmp78;
    TNode<JSReceiver> tmp79;
    TNode<Object> tmp80;
    ca_.Bind(&block12, &tmp73, &tmp74, &tmp75, &tmp76, &tmp77, &tmp78, &tmp79, &tmp80);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 392);
    TNode<JSReceiver> tmp81;
    USE(tmp81);
    tmp81 = CodeStubAssembler(state_).Construct(TNode<Context>{tmp73}, TNode<JSReceiver>{tmp79}, TNode<Object>{tmp75});
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 391);
    ca_.Goto(&block14, tmp73, tmp74, tmp75, tmp76, tmp77, tmp78, tmp79, tmp81);
  }

  if (block13.is_used()) {
    TNode<Context> tmp82;
    TNode<JSTypedArray> tmp83;
    TNode<Object> tmp84;
    TNode<Object> tmp85;
    TNode<Object> tmp86;
    TNode<JSFunction> tmp87;
    TNode<JSReceiver> tmp88;
    TNode<Object> tmp89;
    ca_.Bind(&block13, &tmp82, &tmp83, &tmp84, &tmp85, &tmp86, &tmp87, &tmp88, &tmp89);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 395);
    TNode<JSReceiver> tmp90;
    USE(tmp90);
    tmp90 = CodeStubAssembler(state_).Construct(TNode<Context>{tmp82}, TNode<JSReceiver>{tmp88}, TNode<Object>{tmp84}, TNode<Object>{tmp85}, TNode<Object>{tmp86});
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 391);
    ca_.Goto(&block14, tmp82, tmp83, tmp84, tmp85, tmp86, tmp87, tmp88, tmp90);
  }

  if (block14.is_used()) {
    TNode<Context> tmp91;
    TNode<JSTypedArray> tmp92;
    TNode<Object> tmp93;
    TNode<Object> tmp94;
    TNode<Object> tmp95;
    TNode<JSFunction> tmp96;
    TNode<JSReceiver> tmp97;
    TNode<Object> tmp98;
    ca_.Bind(&block14, &tmp91, &tmp92, &tmp93, &tmp94, &tmp95, &tmp96, &tmp97, &tmp98);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 398);
    TNode<JSTypedArray> tmp99;
    USE(tmp99);
    tmp99 = TypedArrayBuiltinsAssembler(state_).ValidateTypedArray(TNode<Context>{tmp91}, TNode<Object>{tmp98}, p_methodName);
    ca_.Goto(&block1, tmp91, tmp92, tmp93, tmp94, tmp95, tmp99);
  }

  if (block1.is_used()) {
    TNode<Context> tmp100;
    TNode<JSTypedArray> tmp101;
    TNode<Object> tmp102;
    TNode<Object> tmp103;
    TNode<Object> tmp104;
    TNode<JSTypedArray> tmp105;
    ca_.Bind(&block1, &tmp100, &tmp101, &tmp102, &tmp103, &tmp104, &tmp105);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 364);
    ca_.Goto(&block15, tmp100, tmp101, tmp102, tmp103, tmp104, tmp105);
  }

    TNode<Context> tmp106;
    TNode<JSTypedArray> tmp107;
    TNode<Object> tmp108;
    TNode<Object> tmp109;
    TNode<Object> tmp110;
    TNode<JSTypedArray> tmp111;
    ca_.Bind(&block15, &tmp106, &tmp107, &tmp108, &tmp109, &tmp110, &tmp111);
  return TNode<JSTypedArray>{tmp111};
}

TNode<JSTypedArray> TypedArraySpeciesCreateByLength_357(compiler::CodeAssemblerState* state_, TNode<Context> p_context, const char* p_methodName, TNode<JSTypedArray> p_exemplar, TNode<Smi> p_length) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, JSTypedArray> block2(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, JSTypedArray> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, JSTypedArray> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, JSTypedArray> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_exemplar, p_length);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<JSTypedArray> tmp1;
    TNode<Smi> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 409);
    TNode<Oddball> tmp3;
    USE(tmp3);
    tmp3 = Undefined_64(state_);
    TNode<Oddball> tmp4;
    USE(tmp4);
    tmp4 = Undefined_64(state_);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 408);
    TNode<JSTypedArray> tmp5;
    USE(tmp5);
    tmp5 = TypedArraySpeciesCreate_356(state_, TNode<Context>{tmp0}, p_methodName, 1, TNode<JSTypedArray>{tmp1}, TNode<Object>{tmp2}, TNode<Object>{tmp3}, TNode<Object>{tmp4});
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 410);
    TNode<IntPtrT> tmp6 = ca_.IntPtrConstant(JSTypedArray::kLengthOffset);
    USE(tmp6);
    TNode<UintPtrT>tmp7 = CodeStubAssembler(state_).LoadReference<UintPtrT>(CodeStubAssembler::Reference{tmp5, tmp6});
    TNode<UintPtrT> tmp8;
    USE(tmp8);
    tmp8 = Convert9ATuintptr13ATPositiveSmi_189(state_, TNode<Smi>{tmp2});
    TNode<BoolT> tmp9;
    USE(tmp9);
    tmp9 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp7}, TNode<UintPtrT>{tmp8});
    ca_.Branch(tmp9, &block2, &block3, tmp0, tmp1, tmp2, tmp5);
  }

  if (block2.is_used()) {
    TNode<Context> tmp10;
    TNode<JSTypedArray> tmp11;
    TNode<Smi> tmp12;
    TNode<JSTypedArray> tmp13;
    ca_.Bind(&block2, &tmp10, &tmp11, &tmp12, &tmp13);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 411);
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{tmp10}, MessageTemplate::kTypedArrayTooShort);
  }

  if (block3.is_used()) {
    TNode<Context> tmp14;
    TNode<JSTypedArray> tmp15;
    TNode<Smi> tmp16;
    TNode<JSTypedArray> tmp17;
    ca_.Bind(&block3, &tmp14, &tmp15, &tmp16, &tmp17);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 414);
    ca_.Goto(&block1, tmp14, tmp15, tmp16, tmp17);
  }

  if (block1.is_used()) {
    TNode<Context> tmp18;
    TNode<JSTypedArray> tmp19;
    TNode<Smi> tmp20;
    TNode<JSTypedArray> tmp21;
    ca_.Bind(&block1, &tmp18, &tmp19, &tmp20, &tmp21);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 402);
    ca_.Goto(&block4, tmp18, tmp19, tmp20, tmp21);
  }

    TNode<Context> tmp22;
    TNode<JSTypedArray> tmp23;
    TNode<Smi> tmp24;
    TNode<JSTypedArray> tmp25;
    ca_.Bind(&block4, &tmp22, &tmp23, &tmp24, &tmp25);
  return TNode<JSTypedArray>{tmp25};
}

TNode<JSArrayBuffer> Cast13JSArrayBuffer_1503(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, HeapObject> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject, JSArrayBuffer> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSArrayBuffer> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSArrayBuffer> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 2068);
    TNode<HeapObject> tmp2;
    USE(tmp2);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp2 = CodeStubAssembler(state_).TaggedToHeapObject(TNode<Object>{tmp1}, &label0);
    ca_.Goto(&block3, tmp0, tmp1, tmp1, tmp2);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1, tmp1);
    }
  }

  if (block4.is_used()) {
    TNode<Context> tmp3;
    TNode<Object> tmp4;
    TNode<Object> tmp5;
    ca_.Bind(&block4, &tmp3, &tmp4, &tmp5);
    ca_.Goto(&block1);
  }

  if (block3.is_used()) {
    TNode<Context> tmp6;
    TNode<Object> tmp7;
    TNode<Object> tmp8;
    TNode<HeapObject> tmp9;
    ca_.Bind(&block3, &tmp6, &tmp7, &tmp8, &tmp9);
    TNode<JSArrayBuffer> tmp10;
    USE(tmp10);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp10 = Cast13JSArrayBuffer_114(state_, TNode<HeapObject>{tmp9}, &label0);
    ca_.Goto(&block5, tmp6, tmp7, tmp9, tmp10);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp6, tmp7, tmp9);
    }
  }

  if (block6.is_used()) {
    TNode<Context> tmp11;
    TNode<Object> tmp12;
    TNode<HeapObject> tmp13;
    ca_.Bind(&block6, &tmp11, &tmp12, &tmp13);
    ca_.Goto(&block1);
  }

  if (block5.is_used()) {
    TNode<Context> tmp14;
    TNode<Object> tmp15;
    TNode<HeapObject> tmp16;
    TNode<JSArrayBuffer> tmp17;
    ca_.Bind(&block5, &tmp14, &tmp15, &tmp16, &tmp17);
    ca_.Goto(&block2, tmp14, tmp15, tmp17);
  }

  if (block2.is_used()) {
    TNode<Context> tmp18;
    TNode<Object> tmp19;
    TNode<JSArrayBuffer> tmp20;
    ca_.Bind(&block2, &tmp18, &tmp19, &tmp20);
    ca_.SetSourcePosition("../../src/builtins/typed-array-createtypedarray.tq", 115);
    ca_.Goto(&block7, tmp18, tmp19, tmp20);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    TNode<Context> tmp21;
    TNode<Object> tmp22;
    TNode<JSArrayBuffer> tmp23;
    ca_.Bind(&block7, &tmp21, &tmp22, &tmp23);
  return TNode<JSArrayBuffer>{tmp23};
}

}  // namespace internal
}  // namespace v8

