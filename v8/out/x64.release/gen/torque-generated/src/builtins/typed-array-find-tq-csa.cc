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

const char* kBuiltinName_361(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

    ca_.Bind(&block0);
return "%TypedArray%.prototype.find";
}

TNode<Object> FindAllElements_362(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSTypedArray> p_array, TNode<JSReceiver> p_callbackfn, TNode<Object> p_thisArg) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, Object, JSTypedArray, JSTypedArray, BuiltinPtr, JSTypedArray> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, Object, JSTypedArray, JSTypedArray, BuiltinPtr, Number> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, Object, JSTypedArray, JSTypedArray, BuiltinPtr, Number, Smi> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, Object, JSTypedArray, JSTypedArray, BuiltinPtr> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, Object, JSTypedArray, JSTypedArray, BuiltinPtr, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, Object, JSTypedArray, JSTypedArray, BuiltinPtr, Smi, Smi> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, Object, JSTypedArray, JSTypedArray, BuiltinPtr, Smi, Smi> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, Object, JSTypedArray, JSTypedArray, BuiltinPtr, Smi, Smi> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, Object, JSTypedArray, JSTypedArray, BuiltinPtr, Smi, Smi> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, Object, JSTypedArray, JSTypedArray, BuiltinPtr, Smi, Smi> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, Object, JSTypedArray, JSTypedArray, BuiltinPtr, Smi, Smi> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, Object, JSTypedArray, JSTypedArray, BuiltinPtr, Smi, Smi> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, Object, JSTypedArray, JSTypedArray, BuiltinPtr, Smi, Smi, Smi, Context, Smi, Object> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, Object, JSTypedArray, JSTypedArray, BuiltinPtr, Smi, Smi, Object, Context, JSReceiver, Object, Object, Smi, JSTypedArray> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, Object, JSTypedArray, JSTypedArray, BuiltinPtr, Smi, Smi, Object, Object> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, Object, JSTypedArray, JSTypedArray, BuiltinPtr, Smi, Smi, Object, Object> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, Object, JSTypedArray, JSTypedArray, BuiltinPtr, Smi, Smi> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, Object, JSTypedArray, JSTypedArray, BuiltinPtr, Smi, Smi> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, Object, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, Object, Object> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_array, p_callbackfn, p_thisArg);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<JSTypedArray> tmp1;
    TNode<JSReceiver> tmp2;
    TNode<Object> tmp3;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../src/builtins/typed-array-find.tq", 13);
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
    ca_.SetSourcePosition("../../src/builtins/typed-array-find.tq", 16);
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
    ca_.SetSourcePosition("../../src/builtins/typed-array-find.tq", 17);
    TNode<Smi> tmp51;
    USE(tmp51);
    tmp51 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 0);
    ca_.Goto(&block9, tmp43, tmp44, tmp45, tmp46, tmp47, tmp48, tmp49, tmp50, tmp51);
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
    TNode<Smi> tmp60;
    ca_.Bind(&block9, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60);
    TNode<BoolT> tmp61;
    USE(tmp61);
    tmp61 = CodeStubAssembler(state_).SmiLessThan(TNode<Smi>{tmp60}, TNode<Smi>{tmp59});
    ca_.Branch(tmp61, &block7, &block8, tmp52, tmp53, tmp54, tmp55, tmp56, tmp57, tmp58, tmp59, tmp60);
  }

  if (block7.is_used()) {
    TNode<Context> tmp62;
    TNode<JSTypedArray> tmp63;
    TNode<JSReceiver> tmp64;
    TNode<Object> tmp65;
    TNode<JSTypedArray> tmp66;
    TNode<JSTypedArray> tmp67;
    TNode<BuiltinPtr> tmp68;
    TNode<Smi> tmp69;
    TNode<Smi> tmp70;
    ca_.Bind(&block7, &tmp62, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67, &tmp68, &tmp69, &tmp70);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 104);
    TNode<IntPtrT> tmp71 = ca_.IntPtrConstant(JSArrayBufferView::kBufferOffset);
    USE(tmp71);
    TNode<JSArrayBuffer>tmp72 = CodeStubAssembler(state_).LoadReference<JSArrayBuffer>(CodeStubAssembler::Reference{tmp66, tmp71});
    TNode<BoolT> tmp73;
    USE(tmp73);
    tmp73 = CodeStubAssembler(state_).IsDetachedBuffer(TNode<JSArrayBuffer>{tmp72});
    ca_.Branch(tmp73, &block14, &block15, tmp62, tmp63, tmp64, tmp65, tmp66, tmp67, tmp68, tmp69, tmp70);
  }

  if (block14.is_used()) {
    TNode<Context> tmp74;
    TNode<JSTypedArray> tmp75;
    TNode<JSReceiver> tmp76;
    TNode<Object> tmp77;
    TNode<JSTypedArray> tmp78;
    TNode<JSTypedArray> tmp79;
    TNode<BuiltinPtr> tmp80;
    TNode<Smi> tmp81;
    TNode<Smi> tmp82;
    ca_.Bind(&block14, &tmp74, &tmp75, &tmp76, &tmp77, &tmp78, &tmp79, &tmp80, &tmp81, &tmp82);
    ca_.Goto(&block12, tmp74, tmp75, tmp76, tmp77, tmp78, tmp79, tmp80, tmp81, tmp82);
  }

  if (block15.is_used()) {
    TNode<Context> tmp83;
    TNode<JSTypedArray> tmp84;
    TNode<JSReceiver> tmp85;
    TNode<Object> tmp86;
    TNode<JSTypedArray> tmp87;
    TNode<JSTypedArray> tmp88;
    TNode<BuiltinPtr> tmp89;
    TNode<Smi> tmp90;
    TNode<Smi> tmp91;
    ca_.Bind(&block15, &tmp83, &tmp84, &tmp85, &tmp86, &tmp87, &tmp88, &tmp89, &tmp90, &tmp91);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 105);
    TNode<JSTypedArray> tmp92;
    USE(tmp92);
    tmp92 = (TNode<JSTypedArray>{tmp87});
    ca_.SetSourcePosition("../../src/builtins/typed-array-find.tq", 19);
    ca_.Goto(&block13, tmp83, tmp84, tmp85, tmp86, tmp87, tmp92, tmp89, tmp90, tmp91);
  }

  if (block13.is_used()) {
    TNode<Context> tmp93;
    TNode<JSTypedArray> tmp94;
    TNode<JSReceiver> tmp95;
    TNode<Object> tmp96;
    TNode<JSTypedArray> tmp97;
    TNode<JSTypedArray> tmp98;
    TNode<BuiltinPtr> tmp99;
    TNode<Smi> tmp100;
    TNode<Smi> tmp101;
    ca_.Bind(&block13, &tmp93, &tmp94, &tmp95, &tmp96, &tmp97, &tmp98, &tmp99, &tmp100, &tmp101);
    ca_.Goto(&block11, tmp93, tmp94, tmp95, tmp96, tmp97, tmp98, tmp99, tmp100, tmp101);
  }

  if (block12.is_used()) {
    TNode<Context> tmp102;
    TNode<JSTypedArray> tmp103;
    TNode<JSReceiver> tmp104;
    TNode<Object> tmp105;
    TNode<JSTypedArray> tmp106;
    TNode<JSTypedArray> tmp107;
    TNode<BuiltinPtr> tmp108;
    TNode<Smi> tmp109;
    TNode<Smi> tmp110;
    ca_.Bind(&block12, &tmp102, &tmp103, &tmp104, &tmp105, &tmp106, &tmp107, &tmp108, &tmp109, &tmp110);
    ca_.Goto(&block8, tmp102, tmp103, tmp104, tmp105, tmp106, tmp107, tmp108, tmp109, tmp110);
  }

  if (block11.is_used()) {
    TNode<Context> tmp111;
    TNode<JSTypedArray> tmp112;
    TNode<JSReceiver> tmp113;
    TNode<Object> tmp114;
    TNode<JSTypedArray> tmp115;
    TNode<JSTypedArray> tmp116;
    TNode<BuiltinPtr> tmp117;
    TNode<Smi> tmp118;
    TNode<Smi> tmp119;
    ca_.Bind(&block11, &tmp111, &tmp112, &tmp113, &tmp114, &tmp115, &tmp116, &tmp117, &tmp118, &tmp119);
    ca_.SetSourcePosition("../../src/builtins/typed-array-find.tq", 20);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 109);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 110);
    TNode<Object> tmp120 = CodeStubAssembler(state_).CallBuiltinPointer(Builtins::CallableFor(ca_.isolate(),ExampleBuiltinForTorqueFunctionPointerType(1)).descriptor(), tmp117, tmp111, tmp116, tmp119); 
    USE(tmp120);
    ca_.Goto(&block16, tmp111, tmp112, tmp113, tmp114, tmp115, tmp116, tmp117, tmp118, tmp119, tmp119, tmp111, tmp119, tmp120);
  }

  if (block16.is_used()) {
    TNode<Context> tmp121;
    TNode<JSTypedArray> tmp122;
    TNode<JSReceiver> tmp123;
    TNode<Object> tmp124;
    TNode<JSTypedArray> tmp125;
    TNode<JSTypedArray> tmp126;
    TNode<BuiltinPtr> tmp127;
    TNode<Smi> tmp128;
    TNode<Smi> tmp129;
    TNode<Smi> tmp130;
    TNode<Context> tmp131;
    TNode<Smi> tmp132;
    TNode<Object> tmp133;
    ca_.Bind(&block16, &tmp121, &tmp122, &tmp123, &tmp124, &tmp125, &tmp126, &tmp127, &tmp128, &tmp129, &tmp130, &tmp131, &tmp132, &tmp133);
    ca_.SetSourcePosition("../../src/builtins/typed-array-find.tq", 20);
    ca_.SetSourcePosition("../../src/builtins/typed-array-find.tq", 22);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 100);
    ca_.Goto(&block17, tmp121, tmp122, tmp123, tmp124, tmp125, tmp126, tmp127, tmp128, tmp129, tmp133, tmp121, tmp123, tmp124, tmp133, tmp129, tmp125);
  }

  if (block17.is_used()) {
    TNode<Context> tmp134;
    TNode<JSTypedArray> tmp135;
    TNode<JSReceiver> tmp136;
    TNode<Object> tmp137;
    TNode<JSTypedArray> tmp138;
    TNode<JSTypedArray> tmp139;
    TNode<BuiltinPtr> tmp140;
    TNode<Smi> tmp141;
    TNode<Smi> tmp142;
    TNode<Object> tmp143;
    TNode<Context> tmp144;
    TNode<JSReceiver> tmp145;
    TNode<Object> tmp146;
    TNode<Object> tmp147;
    TNode<Smi> tmp148;
    TNode<JSTypedArray> tmp149;
    ca_.Bind(&block17, &tmp134, &tmp135, &tmp136, &tmp137, &tmp138, &tmp139, &tmp140, &tmp141, &tmp142, &tmp143, &tmp144, &tmp145, &tmp146, &tmp147, &tmp148, &tmp149);
    ca_.SetSourcePosition("../../src/builtins/typed-array-find.tq", 22);
    TNode<Object> tmp150;
    USE(tmp150);
    tmp150 = CodeStubAssembler(state_).Call(TNode<Context>{tmp144}, TNode<JSReceiver>{tmp145}, TNode<Object>{tmp146}, TNode<Object>{tmp147}, TNode<Object>{tmp148}, TNode<Object>{tmp149});
    ca_.SetSourcePosition("../../src/builtins/typed-array-find.tq", 23);
    TNode<BoolT> tmp151;
    USE(tmp151);
    tmp151 = ToBoolean_242(state_, TNode<Object>{tmp150});
    ca_.Branch(tmp151, &block18, &block19, tmp134, tmp135, tmp136, tmp137, tmp138, tmp139, tmp140, tmp141, tmp142, tmp143, tmp150);
  }

  if (block18.is_used()) {
    TNode<Context> tmp152;
    TNode<JSTypedArray> tmp153;
    TNode<JSReceiver> tmp154;
    TNode<Object> tmp155;
    TNode<JSTypedArray> tmp156;
    TNode<JSTypedArray> tmp157;
    TNode<BuiltinPtr> tmp158;
    TNode<Smi> tmp159;
    TNode<Smi> tmp160;
    TNode<Object> tmp161;
    TNode<Object> tmp162;
    ca_.Bind(&block18, &tmp152, &tmp153, &tmp154, &tmp155, &tmp156, &tmp157, &tmp158, &tmp159, &tmp160, &tmp161, &tmp162);
    ca_.SetSourcePosition("../../src/builtins/typed-array-find.tq", 24);
    ca_.Goto(&block1, tmp152, tmp153, tmp154, tmp155, tmp161);
  }

  if (block19.is_used()) {
    TNode<Context> tmp163;
    TNode<JSTypedArray> tmp164;
    TNode<JSReceiver> tmp165;
    TNode<Object> tmp166;
    TNode<JSTypedArray> tmp167;
    TNode<JSTypedArray> tmp168;
    TNode<BuiltinPtr> tmp169;
    TNode<Smi> tmp170;
    TNode<Smi> tmp171;
    TNode<Object> tmp172;
    TNode<Object> tmp173;
    ca_.Bind(&block19, &tmp163, &tmp164, &tmp165, &tmp166, &tmp167, &tmp168, &tmp169, &tmp170, &tmp171, &tmp172, &tmp173);
    ca_.SetSourcePosition("../../src/builtins/typed-array-find.tq", 17);
    ca_.Goto(&block10, tmp163, tmp164, tmp165, tmp166, tmp167, tmp168, tmp169, tmp170, tmp171);
  }

  if (block10.is_used()) {
    TNode<Context> tmp174;
    TNode<JSTypedArray> tmp175;
    TNode<JSReceiver> tmp176;
    TNode<Object> tmp177;
    TNode<JSTypedArray> tmp178;
    TNode<JSTypedArray> tmp179;
    TNode<BuiltinPtr> tmp180;
    TNode<Smi> tmp181;
    TNode<Smi> tmp182;
    ca_.Bind(&block10, &tmp174, &tmp175, &tmp176, &tmp177, &tmp178, &tmp179, &tmp180, &tmp181, &tmp182);
    TNode<Smi> tmp183;
    USE(tmp183);
    tmp183 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 1);
    TNode<Smi> tmp184;
    USE(tmp184);
    tmp184 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{tmp182}, TNode<Smi>{tmp183});
    ca_.Goto(&block9, tmp174, tmp175, tmp176, tmp177, tmp178, tmp179, tmp180, tmp181, tmp184);
  }

  if (block8.is_used()) {
    TNode<Context> tmp185;
    TNode<JSTypedArray> tmp186;
    TNode<JSReceiver> tmp187;
    TNode<Object> tmp188;
    TNode<JSTypedArray> tmp189;
    TNode<JSTypedArray> tmp190;
    TNode<BuiltinPtr> tmp191;
    TNode<Smi> tmp192;
    TNode<Smi> tmp193;
    ca_.Bind(&block8, &tmp185, &tmp186, &tmp187, &tmp188, &tmp189, &tmp190, &tmp191, &tmp192, &tmp193);
    ca_.SetSourcePosition("../../src/builtins/typed-array-find.tq", 27);
    TNode<Oddball> tmp194;
    USE(tmp194);
    tmp194 = Undefined_64(state_);
    ca_.Goto(&block1, tmp185, tmp186, tmp187, tmp188, tmp194);
  }

  if (block1.is_used()) {
    TNode<Context> tmp195;
    TNode<JSTypedArray> tmp196;
    TNode<JSReceiver> tmp197;
    TNode<Object> tmp198;
    TNode<Object> tmp199;
    ca_.Bind(&block1, &tmp195, &tmp196, &tmp197, &tmp198, &tmp199);
    ca_.SetSourcePosition("../../src/builtins/typed-array-find.tq", 10);
    ca_.Goto(&block20, tmp195, tmp196, tmp197, tmp198, tmp199);
  }

    TNode<Context> tmp200;
    TNode<JSTypedArray> tmp201;
    TNode<JSReceiver> tmp202;
    TNode<Object> tmp203;
    TNode<Object> tmp204;
    ca_.Bind(&block20, &tmp200, &tmp201, &tmp202, &tmp203, &tmp204);
  return TNode<Object>{tmp204};
}

TF_BUILTIN(TypedArrayPrototypeFind, CodeStubAssembler) {
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
    ca_.SetSourcePosition("../../src/builtins/typed-array-find.tq", 37);
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
    ca_.SetSourcePosition("../../src/builtins/typed-array-find.tq", 39);
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
    ca_.SetSourcePosition("../../src/builtins/typed-array-find.tq", 41);
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
    ca_.SetSourcePosition("../../src/builtins/typed-array-find.tq", 42);
    TNode<IntPtrT> tmp55;
    USE(tmp55);
    tmp55 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 1);
    TNode<Object> tmp56;
    USE(tmp56);
    tmp56 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{tmp46}, TNode<RawPtrT>{tmp47}, TNode<IntPtrT>{tmp48}}, TNode<IntPtrT>{tmp55});
    ca_.SetSourcePosition("../../src/builtins/typed-array-find.tq", 43);
    TNode<Object> tmp57;
    USE(tmp57);
    tmp57 = FindAllElements_362(state_, TNode<Context>{tmp49}, TNode<JSTypedArray>{tmp52}, TNode<JSReceiver>{tmp54}, TNode<Object>{tmp56});
    arguments.PopAndReturn(tmp57);
  }

  if (block6.is_used()) {
    TNode<RawPtrT> tmp58;
    TNode<RawPtrT> tmp59;
    TNode<IntPtrT> tmp60;
    TNode<Context> tmp61;
    TNode<Object> tmp62;
    ca_.Bind(&block6, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62);
    ca_.SetSourcePosition("../../src/builtins/typed-array-find.tq", 46);
    TNode<IntPtrT> tmp63;
    USE(tmp63);
    tmp63 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 0);
    TNode<Object> tmp64;
    USE(tmp64);
    tmp64 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{tmp58}, TNode<RawPtrT>{tmp59}, TNode<IntPtrT>{tmp60}}, TNode<IntPtrT>{tmp63});
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{tmp61}, MessageTemplate::kCalledNonCallable, TNode<Object>{tmp64});
  }

  if (block4.is_used()) {
    TNode<RawPtrT> tmp65;
    TNode<RawPtrT> tmp66;
    TNode<IntPtrT> tmp67;
    TNode<Context> tmp68;
    TNode<Object> tmp69;
    ca_.Bind(&block4, &tmp65, &tmp66, &tmp67, &tmp68, &tmp69);
    ca_.SetSourcePosition("../../src/builtins/typed-array-find.tq", 49);
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{tmp68}, MessageTemplate::kNotTypedArray, kBuiltinName_361(state_));
  }

  if (block2.is_used()) {
    TNode<RawPtrT> tmp70;
    TNode<RawPtrT> tmp71;
    TNode<IntPtrT> tmp72;
    TNode<Context> tmp73;
    TNode<Object> tmp74;
    ca_.Bind(&block2, &tmp70, &tmp71, &tmp72, &tmp73, &tmp74);
    ca_.SetSourcePosition("../../src/builtins/typed-array-find.tq", 52);
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{tmp73}, MessageTemplate::kDetachedOperation, kBuiltinName_361(state_));
  }
}

}  // namespace internal
}  // namespace v8

