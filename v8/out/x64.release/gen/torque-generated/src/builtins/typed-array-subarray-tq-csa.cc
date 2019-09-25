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

TF_BUILTIN(TypedArrayPrototypeSubArray, CodeStubAssembler) {
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
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, JSTypedArray> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSTypedArray> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSTypedArray, JSArrayBuffer, IntPtrT, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSTypedArray, JSArrayBuffer, IntPtrT, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSTypedArray, JSArrayBuffer, IntPtrT, Object, IntPtrT> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSTypedArray, JSArrayBuffer, IntPtrT, Object, IntPtrT> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSTypedArray, JSArrayBuffer, IntPtrT, Object, IntPtrT, Object> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSTypedArray, JSArrayBuffer, IntPtrT, Object, IntPtrT, Object> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSTypedArray, JSArrayBuffer, IntPtrT, Object, IntPtrT, Object, IntPtrT> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSTypedArray, JSArrayBuffer, IntPtrT, Object, IntPtrT, Object, IntPtrT> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSTypedArray, JSArrayBuffer, IntPtrT, Object, IntPtrT, Object, IntPtrT, Smi, UintPtrT, Int32T, UintPtrT, UintPtrT, UintPtrT, Int32T, Smi, Smi, UintPtrT, UintPtrT> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSTypedArray, JSArrayBuffer, IntPtrT, Object, IntPtrT, Object, IntPtrT, Smi, UintPtrT, Int32T, UintPtrT, UintPtrT, UintPtrT, Int32T, Smi, Smi, UintPtrT, UintPtrT> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSTypedArray, JSArrayBuffer, IntPtrT, Object, IntPtrT, Object, IntPtrT, Smi, UintPtrT, Int32T, UintPtrT, UintPtrT, UintPtrT, Int32T, Smi, Smi, UintPtrT> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSTypedArray, JSArrayBuffer, IntPtrT, Object, IntPtrT, Object, IntPtrT, Smi, UintPtrT, Int32T, UintPtrT, UintPtrT> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSTypedArray, JSArrayBuffer, IntPtrT, Object, IntPtrT, Object, IntPtrT, Smi, UintPtrT, Int32T, UintPtrT, UintPtrT, UintPtrT> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, torque_arguments.frame, torque_arguments.base, torque_arguments.length, parameter0, parameter1);

  if (block0.is_used()) {
    TNode<RawPtrT> tmp0;
    TNode<RawPtrT> tmp1;
    TNode<IntPtrT> tmp2;
    TNode<Context> tmp3;
    TNode<Object> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../src/builtins/typed-array-subarray.tq", 15);
    TNode<JSTypedArray> tmp5;
    USE(tmp5);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp5 = Cast12JSTypedArray_110(state_, TNode<Context>{tmp3}, TNode<Object>{tmp4}, &label0);
    ca_.Goto(&block3, tmp0, tmp1, tmp2, tmp3, tmp4, tmp4, tmp5);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1, tmp2, tmp3, tmp4, tmp4);
    }
  }

  if (block4.is_used()) {
    TNode<RawPtrT> tmp6;
    TNode<RawPtrT> tmp7;
    TNode<IntPtrT> tmp8;
    TNode<Context> tmp9;
    TNode<Object> tmp10;
    TNode<Object> tmp11;
    ca_.Bind(&block4, &tmp6, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11);
    ca_.Goto(&block2, tmp6, tmp7, tmp8, tmp9, tmp10);
  }

  if (block3.is_used()) {
    TNode<RawPtrT> tmp12;
    TNode<RawPtrT> tmp13;
    TNode<IntPtrT> tmp14;
    TNode<Context> tmp15;
    TNode<Object> tmp16;
    TNode<Object> tmp17;
    TNode<JSTypedArray> tmp18;
    ca_.Bind(&block3, &tmp12, &tmp13, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18);
    ca_.Goto(&block1, tmp12, tmp13, tmp14, tmp15, tmp16, tmp18);
  }

  if (block2.is_used()) {
    TNode<RawPtrT> tmp19;
    TNode<RawPtrT> tmp20;
    TNode<IntPtrT> tmp21;
    TNode<Context> tmp22;
    TNode<Object> tmp23;
    ca_.Bind(&block2, &tmp19, &tmp20, &tmp21, &tmp22, &tmp23);
    ca_.SetSourcePosition("../../src/builtins/typed-array-subarray.tq", 16);
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{tmp22}, MessageTemplate::kIncompatibleMethodReceiver, "%TypedArray%.prototype.subarray");
  }

  if (block1.is_used()) {
    TNode<RawPtrT> tmp24;
    TNode<RawPtrT> tmp25;
    TNode<IntPtrT> tmp26;
    TNode<Context> tmp27;
    TNode<Object> tmp28;
    TNode<JSTypedArray> tmp29;
    ca_.Bind(&block1, &tmp24, &tmp25, &tmp26, &tmp27, &tmp28, &tmp29);
    ca_.SetSourcePosition("../../src/builtins/typed-array-subarray.tq", 19);
    TNode<JSArrayBuffer> tmp30;
    USE(tmp30);
    tmp30 = TypedArrayBuiltinsAssembler(state_).GetBuffer(TNode<Context>{tmp27}, TNode<JSTypedArray>{tmp29});
    ca_.SetSourcePosition("../../src/builtins/typed-array-subarray.tq", 22);
    TNode<IntPtrT> tmp31 = ca_.IntPtrConstant(JSTypedArray::kLengthOffset);
    USE(tmp31);
    TNode<UintPtrT>tmp32 = CodeStubAssembler(state_).LoadReference<UintPtrT>(CodeStubAssembler::Reference{tmp29, tmp31});
    TNode<IntPtrT> tmp33;
    USE(tmp33);
    tmp33 = Convert8ATintptr9ATuintptr_190(state_, TNode<UintPtrT>{tmp32});
    ca_.SetSourcePosition("../../src/builtins/typed-array-subarray.tq", 28);
    TNode<IntPtrT> tmp34;
    USE(tmp34);
    tmp34 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 0);
    TNode<Object> tmp35;
    USE(tmp35);
    tmp35 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{tmp24}, TNode<RawPtrT>{tmp25}, TNode<IntPtrT>{tmp26}}, TNode<IntPtrT>{tmp34});
    ca_.SetSourcePosition("../../src/builtins/typed-array-subarray.tq", 30);
    TNode<Oddball> tmp36;
    USE(tmp36);
    tmp36 = Undefined_64(state_);
    TNode<BoolT> tmp37;
    USE(tmp37);
    tmp37 = CodeStubAssembler(state_).TaggedNotEqual(TNode<Object>{tmp35}, TNode<HeapObject>{tmp36});
    ca_.Branch(tmp37, &block5, &block6, tmp24, tmp25, tmp26, tmp27, tmp28, tmp29, tmp30, tmp33, tmp35);
  }

  if (block5.is_used()) {
    TNode<RawPtrT> tmp38;
    TNode<RawPtrT> tmp39;
    TNode<IntPtrT> tmp40;
    TNode<Context> tmp41;
    TNode<Object> tmp42;
    TNode<JSTypedArray> tmp43;
    TNode<JSArrayBuffer> tmp44;
    TNode<IntPtrT> tmp45;
    TNode<Object> tmp46;
    ca_.Bind(&block5, &tmp38, &tmp39, &tmp40, &tmp41, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46);
    TNode<IntPtrT> tmp47;
    USE(tmp47);
    tmp47 = CodeStubAssembler(state_).ConvertToRelativeIndex(TNode<Context>{tmp41}, TNode<Object>{tmp46}, TNode<IntPtrT>{tmp45});
    ca_.Goto(&block8, tmp38, tmp39, tmp40, tmp41, tmp42, tmp43, tmp44, tmp45, tmp46, tmp47);
  }

  if (block6.is_used()) {
    TNode<RawPtrT> tmp48;
    TNode<RawPtrT> tmp49;
    TNode<IntPtrT> tmp50;
    TNode<Context> tmp51;
    TNode<Object> tmp52;
    TNode<JSTypedArray> tmp53;
    TNode<JSArrayBuffer> tmp54;
    TNode<IntPtrT> tmp55;
    TNode<Object> tmp56;
    ca_.Bind(&block6, &tmp48, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56);
    TNode<IntPtrT> tmp57;
    USE(tmp57);
    tmp57 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 0);
    ca_.Goto(&block7, tmp48, tmp49, tmp50, tmp51, tmp52, tmp53, tmp54, tmp55, tmp56, tmp57);
  }

  if (block8.is_used()) {
    TNode<RawPtrT> tmp58;
    TNode<RawPtrT> tmp59;
    TNode<IntPtrT> tmp60;
    TNode<Context> tmp61;
    TNode<Object> tmp62;
    TNode<JSTypedArray> tmp63;
    TNode<JSArrayBuffer> tmp64;
    TNode<IntPtrT> tmp65;
    TNode<Object> tmp66;
    TNode<IntPtrT> tmp67;
    ca_.Bind(&block8, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67);
    ca_.Goto(&block7, tmp58, tmp59, tmp60, tmp61, tmp62, tmp63, tmp64, tmp65, tmp66, tmp67);
  }

  if (block7.is_used()) {
    TNode<RawPtrT> tmp68;
    TNode<RawPtrT> tmp69;
    TNode<IntPtrT> tmp70;
    TNode<Context> tmp71;
    TNode<Object> tmp72;
    TNode<JSTypedArray> tmp73;
    TNode<JSArrayBuffer> tmp74;
    TNode<IntPtrT> tmp75;
    TNode<Object> tmp76;
    TNode<IntPtrT> tmp77;
    ca_.Bind(&block7, &tmp68, &tmp69, &tmp70, &tmp71, &tmp72, &tmp73, &tmp74, &tmp75, &tmp76, &tmp77);
    ca_.SetSourcePosition("../../src/builtins/typed-array-subarray.tq", 29);
    ca_.SetSourcePosition("../../src/builtins/typed-array-subarray.tq", 36);
    TNode<IntPtrT> tmp78;
    USE(tmp78);
    tmp78 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 1);
    TNode<Object> tmp79;
    USE(tmp79);
    tmp79 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{tmp68}, TNode<RawPtrT>{tmp69}, TNode<IntPtrT>{tmp70}}, TNode<IntPtrT>{tmp78});
    ca_.SetSourcePosition("../../src/builtins/typed-array-subarray.tq", 38);
    TNode<Oddball> tmp80;
    USE(tmp80);
    tmp80 = Undefined_64(state_);
    TNode<BoolT> tmp81;
    USE(tmp81);
    tmp81 = CodeStubAssembler(state_).TaggedNotEqual(TNode<Object>{tmp79}, TNode<HeapObject>{tmp80});
    ca_.Branch(tmp81, &block9, &block10, tmp68, tmp69, tmp70, tmp71, tmp72, tmp73, tmp74, tmp75, tmp76, tmp77, tmp79);
  }

  if (block9.is_used()) {
    TNode<RawPtrT> tmp82;
    TNode<RawPtrT> tmp83;
    TNode<IntPtrT> tmp84;
    TNode<Context> tmp85;
    TNode<Object> tmp86;
    TNode<JSTypedArray> tmp87;
    TNode<JSArrayBuffer> tmp88;
    TNode<IntPtrT> tmp89;
    TNode<Object> tmp90;
    TNode<IntPtrT> tmp91;
    TNode<Object> tmp92;
    ca_.Bind(&block9, &tmp82, &tmp83, &tmp84, &tmp85, &tmp86, &tmp87, &tmp88, &tmp89, &tmp90, &tmp91, &tmp92);
    TNode<IntPtrT> tmp93;
    USE(tmp93);
    tmp93 = CodeStubAssembler(state_).ConvertToRelativeIndex(TNode<Context>{tmp85}, TNode<Object>{tmp92}, TNode<IntPtrT>{tmp89});
    ca_.Goto(&block12, tmp82, tmp83, tmp84, tmp85, tmp86, tmp87, tmp88, tmp89, tmp90, tmp91, tmp92, tmp93);
  }

  if (block10.is_used()) {
    TNode<RawPtrT> tmp94;
    TNode<RawPtrT> tmp95;
    TNode<IntPtrT> tmp96;
    TNode<Context> tmp97;
    TNode<Object> tmp98;
    TNode<JSTypedArray> tmp99;
    TNode<JSArrayBuffer> tmp100;
    TNode<IntPtrT> tmp101;
    TNode<Object> tmp102;
    TNode<IntPtrT> tmp103;
    TNode<Object> tmp104;
    ca_.Bind(&block10, &tmp94, &tmp95, &tmp96, &tmp97, &tmp98, &tmp99, &tmp100, &tmp101, &tmp102, &tmp103, &tmp104);
    ca_.Goto(&block11, tmp94, tmp95, tmp96, tmp97, tmp98, tmp99, tmp100, tmp101, tmp102, tmp103, tmp104, tmp101);
  }

  if (block12.is_used()) {
    TNode<RawPtrT> tmp105;
    TNode<RawPtrT> tmp106;
    TNode<IntPtrT> tmp107;
    TNode<Context> tmp108;
    TNode<Object> tmp109;
    TNode<JSTypedArray> tmp110;
    TNode<JSArrayBuffer> tmp111;
    TNode<IntPtrT> tmp112;
    TNode<Object> tmp113;
    TNode<IntPtrT> tmp114;
    TNode<Object> tmp115;
    TNode<IntPtrT> tmp116;
    ca_.Bind(&block12, &tmp105, &tmp106, &tmp107, &tmp108, &tmp109, &tmp110, &tmp111, &tmp112, &tmp113, &tmp114, &tmp115, &tmp116);
    ca_.Goto(&block11, tmp105, tmp106, tmp107, tmp108, tmp109, tmp110, tmp111, tmp112, tmp113, tmp114, tmp115, tmp116);
  }

  if (block11.is_used()) {
    TNode<RawPtrT> tmp117;
    TNode<RawPtrT> tmp118;
    TNode<IntPtrT> tmp119;
    TNode<Context> tmp120;
    TNode<Object> tmp121;
    TNode<JSTypedArray> tmp122;
    TNode<JSArrayBuffer> tmp123;
    TNode<IntPtrT> tmp124;
    TNode<Object> tmp125;
    TNode<IntPtrT> tmp126;
    TNode<Object> tmp127;
    TNode<IntPtrT> tmp128;
    ca_.Bind(&block11, &tmp117, &tmp118, &tmp119, &tmp120, &tmp121, &tmp122, &tmp123, &tmp124, &tmp125, &tmp126, &tmp127, &tmp128);
    ca_.SetSourcePosition("../../src/builtins/typed-array-subarray.tq", 37);
    ca_.SetSourcePosition("../../src/builtins/typed-array-subarray.tq", 41);
    TNode<IntPtrT> tmp129;
    USE(tmp129);
    tmp129 = CodeStubAssembler(state_).IntPtrSub(TNode<IntPtrT>{tmp128}, TNode<IntPtrT>{tmp126});
    TNode<IntPtrT> tmp130;
    USE(tmp130);
    tmp130 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 0);
    TNode<IntPtrT> tmp131;
    USE(tmp131);
    tmp131 = CodeStubAssembler(state_).IntPtrMax(TNode<IntPtrT>{tmp129}, TNode<IntPtrT>{tmp130});
    TNode<Smi> tmp132;
    USE(tmp132);
    tmp132 = Convert13ATPositiveSmi8ATintptr_191(state_, TNode<IntPtrT>{tmp131});
    ca_.SetSourcePosition("../../src/builtins/typed-array-subarray.tq", 46);
    TNode<UintPtrT> tmp133;
    USE(tmp133);
    TNode<Int32T> tmp134;
    USE(tmp134);
    std::tie(tmp133, tmp134) = TypedArrayBuiltinsAssembler(state_).GetTypedArrayElementsInfo(TNode<JSTypedArray>{tmp122}).Flatten();
    ca_.SetSourcePosition("../../src/builtins/typed-array-subarray.tq", 49);
    TNode<IntPtrT> tmp135 = ca_.IntPtrConstant(JSArrayBufferView::kByteOffsetOffset);
    USE(tmp135);
    TNode<UintPtrT>tmp136 = CodeStubAssembler(state_).LoadReference<UintPtrT>(CodeStubAssembler::Reference{tmp122, tmp135});
    ca_.SetSourcePosition("../../src/builtins/typed-array-subarray.tq", 52);
    ca_.SetSourcePosition("../../src/builtins/typed-array-subarray.tq", 53);
    TNode<Smi> tmp137;
    USE(tmp137);
    tmp137 = Convert13ATPositiveSmi8ATintptr_191(state_, TNode<IntPtrT>{tmp126});
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 26);
    TNode<UintPtrT> tmp138;
    USE(tmp138);
    tmp138 = Convert9ATuintptr13ATPositiveSmi_189(state_, TNode<Smi>{tmp137});
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 27);
    TNode<UintPtrT> tmp139;
    USE(tmp139);
    tmp139 = CodeStubAssembler(state_).WordShl(TNode<UintPtrT>{tmp138}, TNode<UintPtrT>{tmp133});
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 30);
    TNode<UintPtrT> tmp140;
    USE(tmp140);
    tmp140 = CodeStubAssembler(state_).WordShr(TNode<UintPtrT>{tmp139}, TNode<UintPtrT>{tmp133});
    TNode<BoolT> tmp141;
    USE(tmp141);
    tmp141 = CodeStubAssembler(state_).WordNotEqual(TNode<UintPtrT>{tmp140}, TNode<UintPtrT>{tmp138});
    ca_.Branch(tmp141, &block16, &block17, tmp117, tmp118, tmp119, tmp120, tmp121, tmp122, tmp123, tmp124, tmp125, tmp126, tmp127, tmp128, tmp132, tmp133, tmp134, tmp136, tmp136, tmp133, tmp134, tmp137, tmp137, tmp138, tmp139);
  }

  if (block16.is_used()) {
    TNode<RawPtrT> tmp142;
    TNode<RawPtrT> tmp143;
    TNode<IntPtrT> tmp144;
    TNode<Context> tmp145;
    TNode<Object> tmp146;
    TNode<JSTypedArray> tmp147;
    TNode<JSArrayBuffer> tmp148;
    TNode<IntPtrT> tmp149;
    TNode<Object> tmp150;
    TNode<IntPtrT> tmp151;
    TNode<Object> tmp152;
    TNode<IntPtrT> tmp153;
    TNode<Smi> tmp154;
    TNode<UintPtrT> tmp155;
    TNode<Int32T> tmp156;
    TNode<UintPtrT> tmp157;
    TNode<UintPtrT> tmp158;
    TNode<UintPtrT> tmp159;
    TNode<Int32T> tmp160;
    TNode<Smi> tmp161;
    TNode<Smi> tmp162;
    TNode<UintPtrT> tmp163;
    TNode<UintPtrT> tmp164;
    ca_.Bind(&block16, &tmp142, &tmp143, &tmp144, &tmp145, &tmp146, &tmp147, &tmp148, &tmp149, &tmp150, &tmp151, &tmp152, &tmp153, &tmp154, &tmp155, &tmp156, &tmp157, &tmp158, &tmp159, &tmp160, &tmp161, &tmp162, &tmp163, &tmp164);
    ca_.Goto(&block14, tmp142, tmp143, tmp144, tmp145, tmp146, tmp147, tmp148, tmp149, tmp150, tmp151, tmp152, tmp153, tmp154, tmp155, tmp156, tmp157, tmp158);
  }

  if (block17.is_used()) {
    TNode<RawPtrT> tmp165;
    TNode<RawPtrT> tmp166;
    TNode<IntPtrT> tmp167;
    TNode<Context> tmp168;
    TNode<Object> tmp169;
    TNode<JSTypedArray> tmp170;
    TNode<JSArrayBuffer> tmp171;
    TNode<IntPtrT> tmp172;
    TNode<Object> tmp173;
    TNode<IntPtrT> tmp174;
    TNode<Object> tmp175;
    TNode<IntPtrT> tmp176;
    TNode<Smi> tmp177;
    TNode<UintPtrT> tmp178;
    TNode<Int32T> tmp179;
    TNode<UintPtrT> tmp180;
    TNode<UintPtrT> tmp181;
    TNode<UintPtrT> tmp182;
    TNode<Int32T> tmp183;
    TNode<Smi> tmp184;
    TNode<Smi> tmp185;
    TNode<UintPtrT> tmp186;
    TNode<UintPtrT> tmp187;
    ca_.Bind(&block17, &tmp165, &tmp166, &tmp167, &tmp168, &tmp169, &tmp170, &tmp171, &tmp172, &tmp173, &tmp174, &tmp175, &tmp176, &tmp177, &tmp178, &tmp179, &tmp180, &tmp181, &tmp182, &tmp183, &tmp184, &tmp185, &tmp186, &tmp187);
    ca_.SetSourcePosition("../../src/builtins/typed-array.tq", 31);
    ca_.Goto(&block15, tmp165, tmp166, tmp167, tmp168, tmp169, tmp170, tmp171, tmp172, tmp173, tmp174, tmp175, tmp176, tmp177, tmp178, tmp179, tmp180, tmp181, tmp182, tmp183, tmp184, tmp185, tmp187);
  }

  if (block15.is_used()) {
    TNode<RawPtrT> tmp188;
    TNode<RawPtrT> tmp189;
    TNode<IntPtrT> tmp190;
    TNode<Context> tmp191;
    TNode<Object> tmp192;
    TNode<JSTypedArray> tmp193;
    TNode<JSArrayBuffer> tmp194;
    TNode<IntPtrT> tmp195;
    TNode<Object> tmp196;
    TNode<IntPtrT> tmp197;
    TNode<Object> tmp198;
    TNode<IntPtrT> tmp199;
    TNode<Smi> tmp200;
    TNode<UintPtrT> tmp201;
    TNode<Int32T> tmp202;
    TNode<UintPtrT> tmp203;
    TNode<UintPtrT> tmp204;
    TNode<UintPtrT> tmp205;
    TNode<Int32T> tmp206;
    TNode<Smi> tmp207;
    TNode<Smi> tmp208;
    TNode<UintPtrT> tmp209;
    ca_.Bind(&block15, &tmp188, &tmp189, &tmp190, &tmp191, &tmp192, &tmp193, &tmp194, &tmp195, &tmp196, &tmp197, &tmp198, &tmp199, &tmp200, &tmp201, &tmp202, &tmp203, &tmp204, &tmp205, &tmp206, &tmp207, &tmp208, &tmp209);
    ca_.SetSourcePosition("../../src/builtins/typed-array-subarray.tq", 53);
    ca_.Goto(&block13, tmp188, tmp189, tmp190, tmp191, tmp192, tmp193, tmp194, tmp195, tmp196, tmp197, tmp198, tmp199, tmp200, tmp201, tmp202, tmp203, tmp204, tmp209);
  }

  if (block14.is_used()) {
    TNode<RawPtrT> tmp210;
    TNode<RawPtrT> tmp211;
    TNode<IntPtrT> tmp212;
    TNode<Context> tmp213;
    TNode<Object> tmp214;
    TNode<JSTypedArray> tmp215;
    TNode<JSArrayBuffer> tmp216;
    TNode<IntPtrT> tmp217;
    TNode<Object> tmp218;
    TNode<IntPtrT> tmp219;
    TNode<Object> tmp220;
    TNode<IntPtrT> tmp221;
    TNode<Smi> tmp222;
    TNode<UintPtrT> tmp223;
    TNode<Int32T> tmp224;
    TNode<UintPtrT> tmp225;
    TNode<UintPtrT> tmp226;
    ca_.Bind(&block14, &tmp210, &tmp211, &tmp212, &tmp213, &tmp214, &tmp215, &tmp216, &tmp217, &tmp218, &tmp219, &tmp220, &tmp221, &tmp222, &tmp223, &tmp224, &tmp225, &tmp226);
    ca_.SetSourcePosition("../../src/builtins/typed-array-subarray.tq", 54);
    CodeStubAssembler(state_).ThrowRangeError(TNode<Context>{tmp213}, MessageTemplate::kInvalidArrayBufferLength);
  }

  if (block13.is_used()) {
    TNode<RawPtrT> tmp227;
    TNode<RawPtrT> tmp228;
    TNode<IntPtrT> tmp229;
    TNode<Context> tmp230;
    TNode<Object> tmp231;
    TNode<JSTypedArray> tmp232;
    TNode<JSArrayBuffer> tmp233;
    TNode<IntPtrT> tmp234;
    TNode<Object> tmp235;
    TNode<IntPtrT> tmp236;
    TNode<Object> tmp237;
    TNode<IntPtrT> tmp238;
    TNode<Smi> tmp239;
    TNode<UintPtrT> tmp240;
    TNode<Int32T> tmp241;
    TNode<UintPtrT> tmp242;
    TNode<UintPtrT> tmp243;
    TNode<UintPtrT> tmp244;
    ca_.Bind(&block13, &tmp227, &tmp228, &tmp229, &tmp230, &tmp231, &tmp232, &tmp233, &tmp234, &tmp235, &tmp236, &tmp237, &tmp238, &tmp239, &tmp240, &tmp241, &tmp242, &tmp243, &tmp244);
    ca_.SetSourcePosition("../../src/builtins/typed-array-subarray.tq", 52);
    TNode<UintPtrT> tmp245;
    USE(tmp245);
    tmp245 = CodeStubAssembler(state_).UintPtrAdd(TNode<UintPtrT>{tmp243}, TNode<UintPtrT>{tmp244});
    ca_.SetSourcePosition("../../src/builtins/typed-array-subarray.tq", 57);
    TNode<Number> tmp246;
    USE(tmp246);
    tmp246 = Convert20UT5ATSmi10HeapNumber9ATuintptr_203(state_, TNode<UintPtrT>{tmp245});
    ca_.SetSourcePosition("../../src/builtins/typed-array-subarray.tq", 62);
    ca_.SetSourcePosition("../../src/builtins/typed-array-subarray.tq", 61);
    TNode<JSTypedArray> tmp247;
    USE(tmp247);
    tmp247 = TypedArraySpeciesCreate_356(state_, TNode<Context>{tmp230}, "%TypedArray%.prototype.subarray", 3, TNode<JSTypedArray>{tmp232}, TNode<Object>{tmp233}, TNode<Object>{tmp246}, TNode<Object>{tmp239});
    arguments.PopAndReturn(tmp247);
  }
}

}  // namespace internal
}  // namespace v8

