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

const char* kBuiltinName_367(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

    ca_.Bind(&block0);
return "%TypedArray%.prototype.reduce";
}

TNode<Object> ReduceAllElements_368(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSTypedArray> p_array, TNode<JSReceiver> p_callbackfn, TNode<Object> p_initialValue) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, Object, JSTypedArray, JSTypedArray, BuiltinPtr, JSTypedArray> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, Object, JSTypedArray, JSTypedArray, BuiltinPtr, Number> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, Object, JSTypedArray, JSTypedArray, BuiltinPtr, Number, Smi> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, Object, JSTypedArray, JSTypedArray, BuiltinPtr> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, Object, JSTypedArray, JSTypedArray, BuiltinPtr, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, Object, JSTypedArray, JSTypedArray, BuiltinPtr, Smi, Object, Smi> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, Object, JSTypedArray, JSTypedArray, BuiltinPtr, Smi, Object, Smi> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, Object, JSTypedArray, JSTypedArray, BuiltinPtr, Smi, Object, Smi> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, Object, JSTypedArray, JSTypedArray, BuiltinPtr, Smi, Object, Smi> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, Object, JSTypedArray, JSTypedArray, BuiltinPtr, Smi, Object, Smi> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, Object, JSTypedArray, JSTypedArray, BuiltinPtr, Smi, Object, Smi> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, Object, JSTypedArray, JSTypedArray, BuiltinPtr, Smi, Object, Smi> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, Object, JSTypedArray, JSTypedArray, BuiltinPtr, Smi, Object, Smi, Smi, Context, Smi, Object> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, Object, JSTypedArray, JSTypedArray, BuiltinPtr, Smi, Object, Smi, Object, Object, Object> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, Object, JSTypedArray, JSTypedArray, BuiltinPtr, Smi, Object, Smi, Object, Object, Object, Oddball> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, Object, JSTypedArray, JSTypedArray, BuiltinPtr, Smi, Object, Smi, Object, Object> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, Object, JSTypedArray, JSTypedArray, BuiltinPtr, Smi, Object, Smi, Object, Object, Object, Context, JSReceiver, Oddball, Object, Object, Smi, JSTypedArray> block21(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, Object, JSTypedArray, JSTypedArray, BuiltinPtr, Smi, Object, Smi, Object, Object> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, Object, JSTypedArray, JSTypedArray, BuiltinPtr, Smi, Object, Smi> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, Object, JSTypedArray, JSTypedArray, BuiltinPtr, Smi, Object, Smi> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, Object, JSTypedArray, JSTypedArray, BuiltinPtr, Smi, Object, Object, Object> block25(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, Object, JSTypedArray, JSTypedArray, BuiltinPtr, Smi, Object, Object, Object, Oddball> block24(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, Object, JSTypedArray, JSTypedArray, BuiltinPtr, Smi, Object, Object> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, Object, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, Object, Object> block26(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_array, p_callbackfn, p_initialValue);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<JSTypedArray> tmp1;
    TNode<JSReceiver> tmp2;
    TNode<Object> tmp3;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../src/builtins/typed-array-reduce.tq", 13);
    TNode<JSTypedArray> tmp4;
    USE(tmp4);
    TNode<JSTypedArray> tmp5;
    USE(tmp5);
    TNode<BuiltinPtr> tmp6;
    USE(tmp6);
    std::tie(tmp4, tmp5, tmp6) = NewAttachedJSTypedArrayWitness_377(state_, TNode<JSTypedArray>{tmp1}).Flatten();
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 96);
    ca_.Goto(&block4, tmp0, tmp1, tmp2, tmp3, tmp4, tmp5, tmp6, tmp5);
  }

  if (block4.is_used()) {
    TNode<Context> tmp7;
    TNode<JSTypedArray> tmp8;
    TNode<JSReceiver> tmp9;
    TNode<Object> tmp10;
    TNode<JSTypedArray> tmp11;
    TNode<JSTypedArray> tmp12;
    TNode<BuiltinPtr> tmp13;
    TNode<JSTypedArray> tmp14;
    ca_.Bind(&block4, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11, &tmp12, &tmp13, &tmp14);
    ca_.SetSourcePosition("../../src/builtins/typed-array-reduce.tq", 16);
    TNode<IntPtrT> tmp15 = ca_.IntPtrConstant(JSTypedArray::kLengthOffset);
    USE(tmp15);
    TNode<UintPtrT>tmp16 = CodeStubAssembler(state_).LoadReference<UintPtrT>(CodeStubAssembler::Reference{tmp14, tmp15});
    TNode<Number> tmp17;
    USE(tmp17);
    tmp17 = Convert20UT5ATSmi10HeapNumber9ATuintptr_203(state_, TNode<UintPtrT>{tmp16});
    TNode<Smi> tmp18;
    USE(tmp18);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp18 = Cast5ATSmi_83(state_, TNode<Object>{tmp17}, &label0);
    ca_.Goto(&block5, tmp7, tmp8, tmp9, tmp10, tmp11, tmp12, tmp13, tmp17, tmp18);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp7, tmp8, tmp9, tmp10, tmp11, tmp12, tmp13, tmp17);
    }
  }

  if (block6.is_used()) {
    TNode<Context> tmp19;
    TNode<JSTypedArray> tmp20;
    TNode<JSReceiver> tmp21;
    TNode<Object> tmp22;
    TNode<JSTypedArray> tmp23;
    TNode<JSTypedArray> tmp24;
    TNode<BuiltinPtr> tmp25;
    TNode<Number> tmp26;
    ca_.Bind(&block6, &tmp19, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26);
    ca_.Goto(&block3, tmp19, tmp20, tmp21, tmp22, tmp23, tmp24, tmp25);
  }

  if (block5.is_used()) {
    TNode<Context> tmp27;
    TNode<JSTypedArray> tmp28;
    TNode<JSReceiver> tmp29;
    TNode<Object> tmp30;
    TNode<JSTypedArray> tmp31;
    TNode<JSTypedArray> tmp32;
    TNode<BuiltinPtr> tmp33;
    TNode<Number> tmp34;
    TNode<Smi> tmp35;
    ca_.Bind(&block5, &tmp27, &tmp28, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33, &tmp34, &tmp35);
    ca_.Goto(&block2, tmp27, tmp28, tmp29, tmp30, tmp31, tmp32, tmp33, tmp35);
  }

  if (block3.is_used()) {
    TNode<Context> tmp36;
    TNode<JSTypedArray> tmp37;
    TNode<JSReceiver> tmp38;
    TNode<Object> tmp39;
    TNode<JSTypedArray> tmp40;
    TNode<JSTypedArray> tmp41;
    TNode<BuiltinPtr> tmp42;
    ca_.Bind(&block3, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40, &tmp41, &tmp42);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block2.is_used()) {
    TNode<Context> tmp43;
    TNode<JSTypedArray> tmp44;
    TNode<JSReceiver> tmp45;
    TNode<Object> tmp46;
    TNode<JSTypedArray> tmp47;
    TNode<JSTypedArray> tmp48;
    TNode<BuiltinPtr> tmp49;
    TNode<Smi> tmp50;
    ca_.Bind(&block2, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47, &tmp48, &tmp49, &tmp50);
    ca_.SetSourcePosition("../../src/builtins/typed-array-reduce.tq", 17);
    ca_.SetSourcePosition("../../src/builtins/typed-array-reduce.tq", 18);
    TNode<Smi> tmp51;
    USE(tmp51);
    tmp51 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 0);
    ca_.Goto(&block9, tmp43, tmp44, tmp45, tmp46, tmp47, tmp48, tmp49, tmp50, tmp46, tmp51);
  }

  if (block9.is_used()) {
    TNode<Context> tmp52;
    TNode<JSTypedArray> tmp53;
    TNode<JSReceiver> tmp54;
    TNode<Object> tmp55;
    TNode<JSTypedArray> tmp56;
    TNode<JSTypedArray> tmp57;
    TNode<BuiltinPtr> tmp58;
    TNode<Smi> tmp59;
    TNode<Object> tmp60;
    TNode<Smi> tmp61;
    ca_.Bind(&block9, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61);
    TNode<BoolT> tmp62;
    USE(tmp62);
    tmp62 = CodeStubAssembler(state_).SmiLessThan(TNode<Smi>{tmp61}, TNode<Smi>{tmp59});
    ca_.Branch(tmp62, &block7, &block8, tmp52, tmp53, tmp54, tmp55, tmp56, tmp57, tmp58, tmp59, tmp60, tmp61);
  }

  if (block7.is_used()) {
    TNode<Context> tmp63;
    TNode<JSTypedArray> tmp64;
    TNode<JSReceiver> tmp65;
    TNode<Object> tmp66;
    TNode<JSTypedArray> tmp67;
    TNode<JSTypedArray> tmp68;
    TNode<BuiltinPtr> tmp69;
    TNode<Smi> tmp70;
    TNode<Object> tmp71;
    TNode<Smi> tmp72;
    ca_.Bind(&block7, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67, &tmp68, &tmp69, &tmp70, &tmp71, &tmp72);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 104);
    TNode<IntPtrT> tmp73 = ca_.IntPtrConstant(JSArrayBufferView::kBufferOffset);
    USE(tmp73);
    TNode<JSArrayBuffer>tmp74 = CodeStubAssembler(state_).LoadReference<JSArrayBuffer>(CodeStubAssembler::Reference{tmp67, tmp73});
    TNode<BoolT> tmp75;
    USE(tmp75);
    tmp75 = CodeStubAssembler(state_).IsDetachedBuffer(TNode<JSArrayBuffer>{tmp74});
    ca_.Branch(tmp75, &block14, &block15, tmp63, tmp64, tmp65, tmp66, tmp67, tmp68, tmp69, tmp70, tmp71, tmp72);
  }

  if (block14.is_used()) {
    TNode<Context> tmp76;
    TNode<JSTypedArray> tmp77;
    TNode<JSReceiver> tmp78;
    TNode<Object> tmp79;
    TNode<JSTypedArray> tmp80;
    TNode<JSTypedArray> tmp81;
    TNode<BuiltinPtr> tmp82;
    TNode<Smi> tmp83;
    TNode<Object> tmp84;
    TNode<Smi> tmp85;
    ca_.Bind(&block14, &tmp76, &tmp77, &tmp78, &tmp79, &tmp80, &tmp81, &tmp82, &tmp83, &tmp84, &tmp85);
    ca_.Goto(&block12, tmp76, tmp77, tmp78, tmp79, tmp80, tmp81, tmp82, tmp83, tmp84, tmp85);
  }

  if (block15.is_used()) {
    TNode<Context> tmp86;
    TNode<JSTypedArray> tmp87;
    TNode<JSReceiver> tmp88;
    TNode<Object> tmp89;
    TNode<JSTypedArray> tmp90;
    TNode<JSTypedArray> tmp91;
    TNode<BuiltinPtr> tmp92;
    TNode<Smi> tmp93;
    TNode<Object> tmp94;
    TNode<Smi> tmp95;
    ca_.Bind(&block15, &tmp86, &tmp87, &tmp88, &tmp89, &tmp90, &tmp91, &tmp92, &tmp93, &tmp94, &tmp95);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 105);
    TNode<JSTypedArray> tmp96;
    USE(tmp96);
    tmp96 = (TNode<JSTypedArray>{tmp90});
    ca_.SetSourcePosition("../../src/builtins/typed-array-reduce.tq", 20);
    ca_.Goto(&block13, tmp86, tmp87, tmp88, tmp89, tmp90, tmp96, tmp92, tmp93, tmp94, tmp95);
  }

  if (block13.is_used()) {
    TNode<Context> tmp97;
    TNode<JSTypedArray> tmp98;
    TNode<JSReceiver> tmp99;
    TNode<Object> tmp100;
    TNode<JSTypedArray> tmp101;
    TNode<JSTypedArray> tmp102;
    TNode<BuiltinPtr> tmp103;
    TNode<Smi> tmp104;
    TNode<Object> tmp105;
    TNode<Smi> tmp106;
    ca_.Bind(&block13, &tmp97, &tmp98, &tmp99, &tmp100, &tmp101, &tmp102, &tmp103, &tmp104, &tmp105, &tmp106);
    ca_.Goto(&block11, tmp97, tmp98, tmp99, tmp100, tmp101, tmp102, tmp103, tmp104, tmp105, tmp106);
  }

  if (block12.is_used()) {
    TNode<Context> tmp107;
    TNode<JSTypedArray> tmp108;
    TNode<JSReceiver> tmp109;
    TNode<Object> tmp110;
    TNode<JSTypedArray> tmp111;
    TNode<JSTypedArray> tmp112;
    TNode<BuiltinPtr> tmp113;
    TNode<Smi> tmp114;
    TNode<Object> tmp115;
    TNode<Smi> tmp116;
    ca_.Bind(&block12, &tmp107, &tmp108, &tmp109, &tmp110, &tmp111, &tmp112, &tmp113, &tmp114, &tmp115, &tmp116);
    ca_.Goto(&block8, tmp107, tmp108, tmp109, tmp110, tmp111, tmp112, tmp113, tmp114, tmp115, tmp116);
  }

  if (block11.is_used()) {
    TNode<Context> tmp117;
    TNode<JSTypedArray> tmp118;
    TNode<JSReceiver> tmp119;
    TNode<Object> tmp120;
    TNode<JSTypedArray> tmp121;
    TNode<JSTypedArray> tmp122;
    TNode<BuiltinPtr> tmp123;
    TNode<Smi> tmp124;
    TNode<Object> tmp125;
    TNode<Smi> tmp126;
    ca_.Bind(&block11, &tmp117, &tmp118, &tmp119, &tmp120, &tmp121, &tmp122, &tmp123, &tmp124, &tmp125, &tmp126);
    ca_.SetSourcePosition("../../src/builtins/typed-array-reduce.tq", 21);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 109);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 110);
    TNode<Object> tmp127 = CodeStubAssembler(state_).CallBuiltinPointer(Builtins::CallableFor(ca_.isolate(),ExampleBuiltinForTorqueFunctionPointerType(1)).descriptor(), tmp123, tmp117, tmp122, tmp126); 
    USE(tmp127);
    ca_.Goto(&block16, tmp117, tmp118, tmp119, tmp120, tmp121, tmp122, tmp123, tmp124, tmp125, tmp126, tmp126, tmp117, tmp126, tmp127);
  }

  if (block16.is_used()) {
    TNode<Context> tmp128;
    TNode<JSTypedArray> tmp129;
    TNode<JSReceiver> tmp130;
    TNode<Object> tmp131;
    TNode<JSTypedArray> tmp132;
    TNode<JSTypedArray> tmp133;
    TNode<BuiltinPtr> tmp134;
    TNode<Smi> tmp135;
    TNode<Object> tmp136;
    TNode<Smi> tmp137;
    TNode<Smi> tmp138;
    TNode<Context> tmp139;
    TNode<Smi> tmp140;
    TNode<Object> tmp141;
    ca_.Bind(&block16, &tmp128, &tmp129, &tmp130, &tmp131, &tmp132, &tmp133, &tmp134, &tmp135, &tmp136, &tmp137, &tmp138, &tmp139, &tmp140, &tmp141);
    ca_.SetSourcePosition("../../src/builtins/typed-array-reduce.tq", 21);
    ca_.SetSourcePosition("../../src/builtins/typed-array-reduce.tq", 22);
    ca_.SetSourcePosition("../../src/builtins/typed-array-reduce.tq", 23);
    TNode<Oddball> tmp142;
    USE(tmp142);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp142 = Cast9ATTheHole_88(state_, TNode<Object>{tmp136}, &label0);
    ca_.Goto(&block19, tmp128, tmp129, tmp130, tmp131, tmp132, tmp133, tmp134, tmp135, tmp136, tmp137, tmp141, tmp136, tmp136, tmp142);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block20, tmp128, tmp129, tmp130, tmp131, tmp132, tmp133, tmp134, tmp135, tmp136, tmp137, tmp141, tmp136, tmp136);
    }
  }

  if (block20.is_used()) {
    TNode<Context> tmp143;
    TNode<JSTypedArray> tmp144;
    TNode<JSReceiver> tmp145;
    TNode<Object> tmp146;
    TNode<JSTypedArray> tmp147;
    TNode<JSTypedArray> tmp148;
    TNode<BuiltinPtr> tmp149;
    TNode<Smi> tmp150;
    TNode<Object> tmp151;
    TNode<Smi> tmp152;
    TNode<Object> tmp153;
    TNode<Object> tmp154;
    TNode<Object> tmp155;
    ca_.Bind(&block20, &tmp143, &tmp144, &tmp145, &tmp146, &tmp147, &tmp148, &tmp149, &tmp150, &tmp151, &tmp152, &tmp153, &tmp154, &tmp155);
    ca_.Goto(&block18, tmp143, tmp144, tmp145, tmp146, tmp147, tmp148, tmp149, tmp150, tmp151, tmp152, tmp153, tmp154);
  }

  if (block19.is_used()) {
    TNode<Context> tmp156;
    TNode<JSTypedArray> tmp157;
    TNode<JSReceiver> tmp158;
    TNode<Object> tmp159;
    TNode<JSTypedArray> tmp160;
    TNode<JSTypedArray> tmp161;
    TNode<BuiltinPtr> tmp162;
    TNode<Smi> tmp163;
    TNode<Object> tmp164;
    TNode<Smi> tmp165;
    TNode<Object> tmp166;
    TNode<Object> tmp167;
    TNode<Object> tmp168;
    TNode<Oddball> tmp169;
    ca_.Bind(&block19, &tmp156, &tmp157, &tmp158, &tmp159, &tmp160, &tmp161, &tmp162, &tmp163, &tmp164, &tmp165, &tmp166, &tmp167, &tmp168, &tmp169);
    ca_.SetSourcePosition("../../src/builtins/typed-array-reduce.tq", 24);
    ca_.SetSourcePosition("../../src/builtins/typed-array-reduce.tq", 23);
    ca_.Goto(&block17, tmp156, tmp157, tmp158, tmp159, tmp160, tmp161, tmp162, tmp163, tmp166, tmp165, tmp166, tmp167);
  }

  if (block18.is_used()) {
    TNode<Context> tmp170;
    TNode<JSTypedArray> tmp171;
    TNode<JSReceiver> tmp172;
    TNode<Object> tmp173;
    TNode<JSTypedArray> tmp174;
    TNode<JSTypedArray> tmp175;
    TNode<BuiltinPtr> tmp176;
    TNode<Smi> tmp177;
    TNode<Object> tmp178;
    TNode<Smi> tmp179;
    TNode<Object> tmp180;
    TNode<Object> tmp181;
    ca_.Bind(&block18, &tmp170, &tmp171, &tmp172, &tmp173, &tmp174, &tmp175, &tmp176, &tmp177, &tmp178, &tmp179, &tmp180, &tmp181);
    ca_.SetSourcePosition("../../src/builtins/typed-array-reduce.tq", 26);
    ca_.SetSourcePosition("../../src/builtins/typed-array-reduce.tq", 28);
    TNode<Oddball> tmp182;
    USE(tmp182);
    tmp182 = Undefined_64(state_);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 100);
    ca_.Goto(&block21, tmp170, tmp171, tmp172, tmp173, tmp174, tmp175, tmp176, tmp177, tmp178, tmp179, tmp180, tmp181, ca_.UncheckedCast<Object>(tmp181), tmp170, tmp172, tmp182, ca_.UncheckedCast<Object>(tmp181), tmp180, tmp179, tmp174);
  }

  if (block21.is_used()) {
    TNode<Context> tmp183;
    TNode<JSTypedArray> tmp184;
    TNode<JSReceiver> tmp185;
    TNode<Object> tmp186;
    TNode<JSTypedArray> tmp187;
    TNode<JSTypedArray> tmp188;
    TNode<BuiltinPtr> tmp189;
    TNode<Smi> tmp190;
    TNode<Object> tmp191;
    TNode<Smi> tmp192;
    TNode<Object> tmp193;
    TNode<Object> tmp194;
    TNode<Object> tmp195;
    TNode<Context> tmp196;
    TNode<JSReceiver> tmp197;
    TNode<Oddball> tmp198;
    TNode<Object> tmp199;
    TNode<Object> tmp200;
    TNode<Smi> tmp201;
    TNode<JSTypedArray> tmp202;
    ca_.Bind(&block21, &tmp183, &tmp184, &tmp185, &tmp186, &tmp187, &tmp188, &tmp189, &tmp190, &tmp191, &tmp192, &tmp193, &tmp194, &tmp195, &tmp196, &tmp197, &tmp198, &tmp199, &tmp200, &tmp201, &tmp202);
    ca_.SetSourcePosition("../../src/builtins/typed-array-reduce.tq", 27);
    TNode<Object> tmp203;
    USE(tmp203);
    tmp203 = CodeStubAssembler(state_).Call(TNode<Context>{tmp196}, TNode<JSReceiver>{tmp197}, TNode<Object>{tmp198}, TNode<Object>{tmp199}, TNode<Object>{tmp200}, TNode<Object>{tmp201}, TNode<Object>{tmp202});
    ca_.SetSourcePosition("../../src/builtins/typed-array-reduce.tq", 23);
    ca_.Goto(&block17, tmp183, tmp184, tmp185, tmp186, tmp187, tmp188, tmp189, tmp190, tmp203, tmp192, tmp193, tmp194);
  }

  if (block17.is_used()) {
    TNode<Context> tmp204;
    TNode<JSTypedArray> tmp205;
    TNode<JSReceiver> tmp206;
    TNode<Object> tmp207;
    TNode<JSTypedArray> tmp208;
    TNode<JSTypedArray> tmp209;
    TNode<BuiltinPtr> tmp210;
    TNode<Smi> tmp211;
    TNode<Object> tmp212;
    TNode<Smi> tmp213;
    TNode<Object> tmp214;
    TNode<Object> tmp215;
    ca_.Bind(&block17, &tmp204, &tmp205, &tmp206, &tmp207, &tmp208, &tmp209, &tmp210, &tmp211, &tmp212, &tmp213, &tmp214, &tmp215);
    ca_.SetSourcePosition("../../src/builtins/typed-array-reduce.tq", 22);
    ca_.SetSourcePosition("../../src/builtins/typed-array-reduce.tq", 18);
    ca_.Goto(&block10, tmp204, tmp205, tmp206, tmp207, tmp208, tmp209, tmp210, tmp211, tmp212, tmp213);
  }

  if (block10.is_used()) {
    TNode<Context> tmp216;
    TNode<JSTypedArray> tmp217;
    TNode<JSReceiver> tmp218;
    TNode<Object> tmp219;
    TNode<JSTypedArray> tmp220;
    TNode<JSTypedArray> tmp221;
    TNode<BuiltinPtr> tmp222;
    TNode<Smi> tmp223;
    TNode<Object> tmp224;
    TNode<Smi> tmp225;
    ca_.Bind(&block10, &tmp216, &tmp217, &tmp218, &tmp219, &tmp220, &tmp221, &tmp222, &tmp223, &tmp224, &tmp225);
    TNode<Smi> tmp226;
    USE(tmp226);
    tmp226 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 1);
    TNode<Smi> tmp227;
    USE(tmp227);
    tmp227 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{tmp225}, TNode<Smi>{tmp226});
    ca_.Goto(&block9, tmp216, tmp217, tmp218, tmp219, tmp220, tmp221, tmp222, tmp223, tmp224, tmp227);
  }

  if (block8.is_used()) {
    TNode<Context> tmp228;
    TNode<JSTypedArray> tmp229;
    TNode<JSReceiver> tmp230;
    TNode<Object> tmp231;
    TNode<JSTypedArray> tmp232;
    TNode<JSTypedArray> tmp233;
    TNode<BuiltinPtr> tmp234;
    TNode<Smi> tmp235;
    TNode<Object> tmp236;
    TNode<Smi> tmp237;
    ca_.Bind(&block8, &tmp228, &tmp229, &tmp230, &tmp231, &tmp232, &tmp233, &tmp234, &tmp235, &tmp236, &tmp237);
    ca_.SetSourcePosition("../../src/builtins/typed-array-reduce.tq", 33);
    ca_.SetSourcePosition("../../src/builtins/typed-array-reduce.tq", 34);
    TNode<Oddball> tmp238;
    USE(tmp238);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp238 = Cast9ATTheHole_88(state_, TNode<Object>{tmp236}, &label0);
    ca_.Goto(&block24, tmp228, tmp229, tmp230, tmp231, tmp232, tmp233, tmp234, tmp235, tmp236, tmp236, tmp236, tmp238);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block25, tmp228, tmp229, tmp230, tmp231, tmp232, tmp233, tmp234, tmp235, tmp236, tmp236, tmp236);
    }
  }

  if (block25.is_used()) {
    TNode<Context> tmp239;
    TNode<JSTypedArray> tmp240;
    TNode<JSReceiver> tmp241;
    TNode<Object> tmp242;
    TNode<JSTypedArray> tmp243;
    TNode<JSTypedArray> tmp244;
    TNode<BuiltinPtr> tmp245;
    TNode<Smi> tmp246;
    TNode<Object> tmp247;
    TNode<Object> tmp248;
    TNode<Object> tmp249;
    ca_.Bind(&block25, &tmp239, &tmp240, &tmp241, &tmp242, &tmp243, &tmp244, &tmp245, &tmp246, &tmp247, &tmp248, &tmp249);
    ca_.Goto(&block23, tmp239, tmp240, tmp241, tmp242, tmp243, tmp244, tmp245, tmp246, tmp247, tmp248);
  }

  if (block24.is_used()) {
    TNode<Context> tmp250;
    TNode<JSTypedArray> tmp251;
    TNode<JSReceiver> tmp252;
    TNode<Object> tmp253;
    TNode<JSTypedArray> tmp254;
    TNode<JSTypedArray> tmp255;
    TNode<BuiltinPtr> tmp256;
    TNode<Smi> tmp257;
    TNode<Object> tmp258;
    TNode<Object> tmp259;
    TNode<Object> tmp260;
    TNode<Oddball> tmp261;
    ca_.Bind(&block24, &tmp250, &tmp251, &tmp252, &tmp253, &tmp254, &tmp255, &tmp256, &tmp257, &tmp258, &tmp259, &tmp260, &tmp261);
    ca_.SetSourcePosition("../../src/builtins/typed-array-reduce.tq", 35);
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{tmp250}, MessageTemplate::kReduceNoInitial, kBuiltinName_367(state_));
  }

  if (block23.is_used()) {
    TNode<Context> tmp262;
    TNode<JSTypedArray> tmp263;
    TNode<JSReceiver> tmp264;
    TNode<Object> tmp265;
    TNode<JSTypedArray> tmp266;
    TNode<JSTypedArray> tmp267;
    TNode<BuiltinPtr> tmp268;
    TNode<Smi> tmp269;
    TNode<Object> tmp270;
    TNode<Object> tmp271;
    ca_.Bind(&block23, &tmp262, &tmp263, &tmp264, &tmp265, &tmp266, &tmp267, &tmp268, &tmp269, &tmp270, &tmp271);
    ca_.SetSourcePosition("../../src/builtins/typed-array-reduce.tq", 37);
    ca_.SetSourcePosition("../../src/builtins/typed-array-reduce.tq", 38);
    ca_.Goto(&block1, tmp262, tmp263, tmp264, tmp265, ca_.UncheckedCast<Object>(tmp271));
  }

  if (block1.is_used()) {
    TNode<Context> tmp272;
    TNode<JSTypedArray> tmp273;
    TNode<JSReceiver> tmp274;
    TNode<Object> tmp275;
    TNode<Object> tmp276;
    ca_.Bind(&block1, &tmp272, &tmp273, &tmp274, &tmp275, &tmp276);
    ca_.SetSourcePosition("../../src/builtins/typed-array-reduce.tq", 10);
    ca_.Goto(&block26, tmp272, tmp273, tmp274, tmp275, tmp276);
  }

    TNode<Context> tmp277;
    TNode<JSTypedArray> tmp278;
    TNode<JSReceiver> tmp279;
    TNode<Object> tmp280;
    TNode<Object> tmp281;
    ca_.Bind(&block26, &tmp277, &tmp278, &tmp279, &tmp280, &tmp281);
  return TNode<Object>{tmp281};
}

TF_BUILTIN(TypedArrayPrototypeReduce, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  TNode<IntPtrT> arguments_length(ChangeInt32ToIntPtr(argc));
  TNode<RawPtrT> arguments_frame = UncheckedCast<RawPtrT>(LoadFramePointer());
  TorqueStructArguments torque_arguments(GetFrameArguments(arguments_frame, arguments_length));
  CodeStubArguments arguments(this, torque_arguments);
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  TNode<Object> parameter1 = arguments.GetReceiver();
USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, JSTypedArray> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSTypedArray, JSTypedArray> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSTypedArray, JSTypedArray, JSTypedArray> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSTypedArray, JSTypedArray, Object> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSTypedArray, JSTypedArray, Object, JSReceiver> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSTypedArray, JSTypedArray, JSReceiver> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSTypedArray, JSTypedArray, JSReceiver> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSTypedArray, JSTypedArray, JSReceiver, Object> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSTypedArray, JSTypedArray, JSReceiver, Object> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object> block6(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object> block4(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object> block2(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    ca_.Goto(&block0, torque_arguments.frame, torque_arguments.base, torque_arguments.length, parameter0, parameter1);

  if (block0.is_used()) {
    TNode<RawPtrT> tmp0;
    TNode<RawPtrT> tmp1;
    TNode<IntPtrT> tmp2;
    TNode<Context> tmp3;
    TNode<Object> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../src/builtins/typed-array-reduce.tq", 50);
    TNode<JSTypedArray> tmp5;
    USE(tmp5);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp5 = Cast12JSTypedArray_110(state_, TNode<Context>{tmp3}, TNode<Object>{tmp4}, &label0);
    ca_.Goto(&block7, tmp0, tmp1, tmp2, tmp3, tmp4, tmp4, tmp5);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block8, tmp0, tmp1, tmp2, tmp3, tmp4, tmp4);
    }
  }

  if (block8.is_used()) {
    TNode<RawPtrT> tmp6;
    TNode<RawPtrT> tmp7;
    TNode<IntPtrT> tmp8;
    TNode<Context> tmp9;
    TNode<Object> tmp10;
    TNode<Object> tmp11;
    ca_.Bind(&block8, &tmp6, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11);
    ca_.Goto(&block4, tmp6, tmp7, tmp8, tmp9, tmp10);
  }

  if (block7.is_used()) {
    TNode<RawPtrT> tmp12;
    TNode<RawPtrT> tmp13;
    TNode<IntPtrT> tmp14;
    TNode<Context> tmp15;
    TNode<Object> tmp16;
    TNode<Object> tmp17;
    TNode<JSTypedArray> tmp18;
    ca_.Bind(&block7, &tmp12, &tmp13, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18);
    ca_.SetSourcePosition("../../src/builtins/typed-array-reduce.tq", 52);
    TNode<JSTypedArray> tmp19;
    USE(tmp19);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp19 = EnsureAttached_376(state_, TNode<JSTypedArray>{tmp18}, &label0);
    ca_.Goto(&block9, tmp12, tmp13, tmp14, tmp15, tmp16, tmp18, tmp18, tmp19);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block10, tmp12, tmp13, tmp14, tmp15, tmp16, tmp18, tmp18);
    }
  }

  if (block10.is_used()) {
    TNode<RawPtrT> tmp20;
    TNode<RawPtrT> tmp21;
    TNode<IntPtrT> tmp22;
    TNode<Context> tmp23;
    TNode<Object> tmp24;
    TNode<JSTypedArray> tmp25;
    TNode<JSTypedArray> tmp26;
    ca_.Bind(&block10, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26);
    ca_.Goto(&block2, tmp20, tmp21, tmp22, tmp23, tmp24);
  }

  if (block9.is_used()) {
    TNode<RawPtrT> tmp27;
    TNode<RawPtrT> tmp28;
    TNode<IntPtrT> tmp29;
    TNode<Context> tmp30;
    TNode<Object> tmp31;
    TNode<JSTypedArray> tmp32;
    TNode<JSTypedArray> tmp33;
    TNode<JSTypedArray> tmp34;
    ca_.Bind(&block9, &tmp27, &tmp28, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33, &tmp34);
    ca_.SetSourcePosition("../../src/builtins/typed-array-reduce.tq", 54);
    TNode<IntPtrT> tmp35;
    USE(tmp35);
    tmp35 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 0);
    TNode<Object> tmp36;
    USE(tmp36);
    tmp36 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{tmp27}, TNode<RawPtrT>{tmp28}, TNode<IntPtrT>{tmp29}}, TNode<IntPtrT>{tmp35});
    TNode<JSReceiver> tmp37;
    USE(tmp37);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp37 = Cast71UT19ATCallableApiObject17ATCallableJSProxy15JSBoundFunction10JSFunction_1434(state_, TNode<Context>{tmp30}, TNode<Object>{tmp36}, &label0);
    ca_.Goto(&block11, tmp27, tmp28, tmp29, tmp30, tmp31, tmp32, tmp34, tmp36, tmp37);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block12, tmp27, tmp28, tmp29, tmp30, tmp31, tmp32, tmp34, tmp36);
    }
  }

  if (block12.is_used()) {
    TNode<RawPtrT> tmp38;
    TNode<RawPtrT> tmp39;
    TNode<IntPtrT> tmp40;
    TNode<Context> tmp41;
    TNode<Object> tmp42;
    TNode<JSTypedArray> tmp43;
    TNode<JSTypedArray> tmp44;
    TNode<Object> tmp45;
    ca_.Bind(&block12, &tmp38, &tmp39, &tmp40, &tmp41, &tmp42, &tmp43, &tmp44, &tmp45);
    ca_.Goto(&block6, tmp38, tmp39, tmp40, tmp41, tmp42);
  }

  if (block11.is_used()) {
    TNode<RawPtrT> tmp46;
    TNode<RawPtrT> tmp47;
    TNode<IntPtrT> tmp48;
    TNode<Context> tmp49;
    TNode<Object> tmp50;
    TNode<JSTypedArray> tmp51;
    TNode<JSTypedArray> tmp52;
    TNode<Object> tmp53;
    TNode<JSReceiver> tmp54;
    ca_.Bind(&block11, &tmp46, &tmp47, &tmp48, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54);
    ca_.SetSourcePosition("../../src/builtins/typed-array-reduce.tq", 55);
    TNode<IntPtrT> tmp55;
    USE(tmp55);
    tmp55 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 2);
    TNode<BoolT> tmp56;
    USE(tmp56);
    tmp56 = CodeStubAssembler(state_).IntPtrGreaterThanOrEqual(TNode<IntPtrT>{tmp48}, TNode<IntPtrT>{tmp55});
    ca_.Branch(tmp56, &block13, &block14, tmp46, tmp47, tmp48, tmp49, tmp50, tmp51, tmp52, tmp54);
  }

  if (block13.is_used()) {
    TNode<RawPtrT> tmp57;
    TNode<RawPtrT> tmp58;
    TNode<IntPtrT> tmp59;
    TNode<Context> tmp60;
    TNode<Object> tmp61;
    TNode<JSTypedArray> tmp62;
    TNode<JSTypedArray> tmp63;
    TNode<JSReceiver> tmp64;
    ca_.Bind(&block13, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64);
    TNode<IntPtrT> tmp65;
    USE(tmp65);
    tmp65 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 1);
    TNode<Object> tmp66;
    USE(tmp66);
    tmp66 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{tmp57}, TNode<RawPtrT>{tmp58}, TNode<IntPtrT>{tmp59}}, TNode<IntPtrT>{tmp65});
    ca_.Goto(&block16, tmp57, tmp58, tmp59, tmp60, tmp61, tmp62, tmp63, tmp64, tmp66);
  }

  if (block14.is_used()) {
    TNode<RawPtrT> tmp67;
    TNode<RawPtrT> tmp68;
    TNode<IntPtrT> tmp69;
    TNode<Context> tmp70;
    TNode<Object> tmp71;
    TNode<JSTypedArray> tmp72;
    TNode<JSTypedArray> tmp73;
    TNode<JSReceiver> tmp74;
    ca_.Bind(&block14, &tmp67, &tmp68, &tmp69, &tmp70, &tmp71, &tmp72, &tmp73, &tmp74);
    TNode<Oddball> tmp75;
    USE(tmp75);
    tmp75 = TheHole_62(state_);
    ca_.Goto(&block15, tmp67, tmp68, tmp69, tmp70, tmp71, tmp72, tmp73, tmp74, tmp75);
  }

  if (block16.is_used()) {
    TNode<RawPtrT> tmp76;
    TNode<RawPtrT> tmp77;
    TNode<IntPtrT> tmp78;
    TNode<Context> tmp79;
    TNode<Object> tmp80;
    TNode<JSTypedArray> tmp81;
    TNode<JSTypedArray> tmp82;
    TNode<JSReceiver> tmp83;
    TNode<Object> tmp84;
    ca_.Bind(&block16, &tmp76, &tmp77, &tmp78, &tmp79, &tmp80, &tmp81, &tmp82, &tmp83, &tmp84);
    ca_.Goto(&block15, tmp76, tmp77, tmp78, tmp79, tmp80, tmp81, tmp82, tmp83, tmp84);
  }

  if (block15.is_used()) {
    TNode<RawPtrT> tmp85;
    TNode<RawPtrT> tmp86;
    TNode<IntPtrT> tmp87;
    TNode<Context> tmp88;
    TNode<Object> tmp89;
    TNode<JSTypedArray> tmp90;
    TNode<JSTypedArray> tmp91;
    TNode<JSReceiver> tmp92;
    TNode<Object> tmp93;
    ca_.Bind(&block15, &tmp85, &tmp86, &tmp87, &tmp88, &tmp89, &tmp90, &tmp91, &tmp92, &tmp93);
    ca_.SetSourcePosition("../../src/builtins/typed-array-reduce.tq", 56);
    TNode<Object> tmp94;
    USE(tmp94);
    tmp94 = ReduceAllElements_368(state_, TNode<Context>{tmp88}, TNode<JSTypedArray>{tmp91}, TNode<JSReceiver>{tmp92}, TNode<Object>{tmp93});
    arguments.PopAndReturn(tmp94);
  }

  if (block6.is_used()) {
    TNode<RawPtrT> tmp95;
    TNode<RawPtrT> tmp96;
    TNode<IntPtrT> tmp97;
    TNode<Context> tmp98;
    TNode<Object> tmp99;
    ca_.Bind(&block6, &tmp95, &tmp96, &tmp97, &tmp98, &tmp99);
    ca_.SetSourcePosition("../../src/builtins/typed-array-reduce.tq", 59);
    TNode<IntPtrT> tmp100;
    USE(tmp100);
    tmp100 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 0);
    TNode<Object> tmp101;
    USE(tmp101);
    tmp101 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{tmp95}, TNode<RawPtrT>{tmp96}, TNode<IntPtrT>{tmp97}}, TNode<IntPtrT>{tmp100});
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{tmp98}, MessageTemplate::kCalledNonCallable, TNode<Object>{tmp101});
  }

  if (block4.is_used()) {
    TNode<RawPtrT> tmp102;
    TNode<RawPtrT> tmp103;
    TNode<IntPtrT> tmp104;
    TNode<Context> tmp105;
    TNode<Object> tmp106;
    ca_.Bind(&block4, &tmp102, &tmp103, &tmp104, &tmp105, &tmp106);
    ca_.SetSourcePosition("../../src/builtins/typed-array-reduce.tq", 62);
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{tmp105}, MessageTemplate::kNotTypedArray, kBuiltinName_367(state_));
  }

  if (block2.is_used()) {
    TNode<RawPtrT> tmp107;
    TNode<RawPtrT> tmp108;
    TNode<IntPtrT> tmp109;
    TNode<Context> tmp110;
    TNode<Object> tmp111;
    ca_.Bind(&block2, &tmp107, &tmp108, &tmp109, &tmp110, &tmp111);
    ca_.SetSourcePosition("../../src/builtins/typed-array-reduce.tq", 65);
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{tmp110}, MessageTemplate::kDetachedOperation, kBuiltinName_367(state_));
  }
}

}  // namespace internal
}  // namespace v8

