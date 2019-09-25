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

TNode<Smi> ToSmiBetweenZeroAnd_345(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_value, TNode<Smi> p_limit) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Smi, Number, Number, Number> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Smi, Number, Number, Number, Smi> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Smi, Number, Number, Smi> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Smi, Number, Number, Smi> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Smi, Number, Number, Smi> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Smi, Number, Number, Smi> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Smi, Number, Number, Smi, Smi> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Smi, Number, Number, Smi> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Smi, Number, Number> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Smi, Number, Number, HeapNumber, Float64T> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Smi, Number, Number, HeapNumber, Float64T> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Smi, Number, Number, HeapNumber, Float64T> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Smi, Number, Number, HeapNumber, Float64T, Smi> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Smi, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Smi, Smi> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_value, p_limit);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Object> tmp1;
    TNode<Smi> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../src/builtins/string-substring.tq", 12);
    TNode<Number> tmp3;
    USE(tmp3);
    tmp3 = CodeStubAssembler(state_).ToInteger_Inline(TNode<Context>{tmp0}, TNode<Object>{tmp1}, CodeStubAssembler::ToIntegerTruncationMode::kTruncateMinusZero);
    ca_.SetSourcePosition("../../src/builtins/string-substring.tq", 11);
    ca_.SetSourcePosition("../../src/builtins/string-substring.tq", 13);
    ca_.SetSourcePosition("../../src/builtins/string-substring.tq", 14);
    TNode<Smi> tmp4;
    USE(tmp4);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp4 = Cast5ATSmi_83(state_, TNode<Object>{tmp3}, &label0);
    ca_.Goto(&block4, tmp0, tmp1, tmp2, tmp3, tmp3, tmp3, tmp4);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block5, tmp0, tmp1, tmp2, tmp3, tmp3, tmp3);
    }
  }

  if (block5.is_used()) {
    TNode<Context> tmp5;
    TNode<Object> tmp6;
    TNode<Smi> tmp7;
    TNode<Number> tmp8;
    TNode<Number> tmp9;
    TNode<Number> tmp10;
    ca_.Bind(&block5, &tmp5, &tmp6, &tmp7, &tmp8, &tmp9, &tmp10);
    ca_.Goto(&block3, tmp5, tmp6, tmp7, tmp8, tmp9);
  }

  if (block4.is_used()) {
    TNode<Context> tmp11;
    TNode<Object> tmp12;
    TNode<Smi> tmp13;
    TNode<Number> tmp14;
    TNode<Number> tmp15;
    TNode<Number> tmp16;
    TNode<Smi> tmp17;
    ca_.Bind(&block4, &tmp11, &tmp12, &tmp13, &tmp14, &tmp15, &tmp16, &tmp17);
    ca_.SetSourcePosition("../../src/builtins/string-substring.tq", 15);
    TNode<BoolT> tmp18;
    USE(tmp18);
    tmp18 = CodeStubAssembler(state_).SmiAbove(TNode<Smi>{tmp17}, TNode<Smi>{tmp13});
    ca_.Branch(tmp18, &block6, &block7, tmp11, tmp12, tmp13, tmp14, tmp15, tmp17);
  }

  if (block6.is_used()) {
    TNode<Context> tmp19;
    TNode<Object> tmp20;
    TNode<Smi> tmp21;
    TNode<Number> tmp22;
    TNode<Number> tmp23;
    TNode<Smi> tmp24;
    ca_.Bind(&block6, &tmp19, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24);
    ca_.SetSourcePosition("../../src/builtins/string-substring.tq", 16);
    TNode<Smi> tmp25;
    USE(tmp25);
    tmp25 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 0);
    TNode<BoolT> tmp26;
    USE(tmp26);
    tmp26 = CodeStubAssembler(state_).SmiLessThan(TNode<Smi>{tmp24}, TNode<Smi>{tmp25});
    ca_.Branch(tmp26, &block8, &block9, tmp19, tmp20, tmp21, tmp22, tmp23, tmp24);
  }

  if (block8.is_used()) {
    TNode<Context> tmp27;
    TNode<Object> tmp28;
    TNode<Smi> tmp29;
    TNode<Number> tmp30;
    TNode<Number> tmp31;
    TNode<Smi> tmp32;
    ca_.Bind(&block8, &tmp27, &tmp28, &tmp29, &tmp30, &tmp31, &tmp32);
    ca_.Goto(&block11, tmp27, tmp28, tmp29, tmp30, tmp31, tmp32);
  }

  if (block9.is_used()) {
    TNode<Context> tmp33;
    TNode<Object> tmp34;
    TNode<Smi> tmp35;
    TNode<Number> tmp36;
    TNode<Number> tmp37;
    TNode<Smi> tmp38;
    ca_.Bind(&block9, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38);
    ca_.Goto(&block10, tmp33, tmp34, tmp35, tmp36, tmp37, tmp38, tmp35);
  }

  if (block11.is_used()) {
    TNode<Context> tmp39;
    TNode<Object> tmp40;
    TNode<Smi> tmp41;
    TNode<Number> tmp42;
    TNode<Number> tmp43;
    TNode<Smi> tmp44;
    ca_.Bind(&block11, &tmp39, &tmp40, &tmp41, &tmp42, &tmp43, &tmp44);
    TNode<Smi> tmp45;
    USE(tmp45);
    tmp45 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 0);
    ca_.Goto(&block10, tmp39, tmp40, tmp41, tmp42, tmp43, tmp44, tmp45);
  }

  if (block10.is_used()) {
    TNode<Context> tmp46;
    TNode<Object> tmp47;
    TNode<Smi> tmp48;
    TNode<Number> tmp49;
    TNode<Number> tmp50;
    TNode<Smi> tmp51;
    TNode<Smi> tmp52;
    ca_.Bind(&block10, &tmp46, &tmp47, &tmp48, &tmp49, &tmp50, &tmp51, &tmp52);
    ca_.Goto(&block1, tmp46, tmp47, tmp48, tmp52);
  }

  if (block7.is_used()) {
    TNode<Context> tmp53;
    TNode<Object> tmp54;
    TNode<Smi> tmp55;
    TNode<Number> tmp56;
    TNode<Number> tmp57;
    TNode<Smi> tmp58;
    ca_.Bind(&block7, &tmp53, &tmp54, &tmp55, &tmp56, &tmp57, &tmp58);
    ca_.SetSourcePosition("../../src/builtins/string-substring.tq", 18);
    ca_.Goto(&block1, tmp53, tmp54, tmp55, tmp58);
  }

  if (block3.is_used()) {
    TNode<Context> tmp59;
    TNode<Object> tmp60;
    TNode<Smi> tmp61;
    TNode<Number> tmp62;
    TNode<Number> tmp63;
    ca_.Bind(&block3, &tmp59, &tmp60, &tmp61, &tmp62, &tmp63);
    ca_.SetSourcePosition("../../src/builtins/string-substring.tq", 22);
    ca_.SetSourcePosition("../../src/builtins/string-substring.tq", 23);
    TNode<Float64T> tmp64;
    USE(tmp64);
    tmp64 = LoadHeapNumberValue_511(state_, TNode<HeapNumber>{ca_.UncheckedCast<HeapNumber>(tmp63)});
    ca_.SetSourcePosition("../../src/builtins/string-substring.tq", 24);
    TNode<Float64T> tmp65;
    USE(tmp65);
    tmp65 = FromConstexpr9ATfloat6417ATconstexpr_int31_165(state_, 0.);
    TNode<BoolT> tmp66;
    USE(tmp66);
    tmp66 = CodeStubAssembler(state_).Float64LessThan(TNode<Float64T>{tmp64}, TNode<Float64T>{tmp65});
    ca_.Branch(tmp66, &block12, &block13, tmp59, tmp60, tmp61, tmp62, tmp63, ca_.UncheckedCast<HeapNumber>(tmp63), tmp64);
  }

  if (block12.is_used()) {
    TNode<Context> tmp67;
    TNode<Object> tmp68;
    TNode<Smi> tmp69;
    TNode<Number> tmp70;
    TNode<Number> tmp71;
    TNode<HeapNumber> tmp72;
    TNode<Float64T> tmp73;
    ca_.Bind(&block12, &tmp67, &tmp68, &tmp69, &tmp70, &tmp71, &tmp72, &tmp73);
    ca_.Goto(&block15, tmp67, tmp68, tmp69, tmp70, tmp71, tmp72, tmp73);
  }

  if (block13.is_used()) {
    TNode<Context> tmp74;
    TNode<Object> tmp75;
    TNode<Smi> tmp76;
    TNode<Number> tmp77;
    TNode<Number> tmp78;
    TNode<HeapNumber> tmp79;
    TNode<Float64T> tmp80;
    ca_.Bind(&block13, &tmp74, &tmp75, &tmp76, &tmp77, &tmp78, &tmp79, &tmp80);
    ca_.Goto(&block14, tmp74, tmp75, tmp76, tmp77, tmp78, tmp79, tmp80, tmp76);
  }

  if (block15.is_used()) {
    TNode<Context> tmp81;
    TNode<Object> tmp82;
    TNode<Smi> tmp83;
    TNode<Number> tmp84;
    TNode<Number> tmp85;
    TNode<HeapNumber> tmp86;
    TNode<Float64T> tmp87;
    ca_.Bind(&block15, &tmp81, &tmp82, &tmp83, &tmp84, &tmp85, &tmp86, &tmp87);
    TNode<Smi> tmp88;
    USE(tmp88);
    tmp88 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 0);
    ca_.Goto(&block14, tmp81, tmp82, tmp83, tmp84, tmp85, tmp86, tmp87, tmp88);
  }

  if (block14.is_used()) {
    TNode<Context> tmp89;
    TNode<Object> tmp90;
    TNode<Smi> tmp91;
    TNode<Number> tmp92;
    TNode<Number> tmp93;
    TNode<HeapNumber> tmp94;
    TNode<Float64T> tmp95;
    TNode<Smi> tmp96;
    ca_.Bind(&block14, &tmp89, &tmp90, &tmp91, &tmp92, &tmp93, &tmp94, &tmp95, &tmp96);
    ca_.Goto(&block1, tmp89, tmp90, tmp91, tmp96);
  }

  if (block1.is_used()) {
    TNode<Context> tmp97;
    TNode<Object> tmp98;
    TNode<Smi> tmp99;
    TNode<Smi> tmp100;
    ca_.Bind(&block1, &tmp97, &tmp98, &tmp99, &tmp100);
    ca_.SetSourcePosition("../../src/builtins/string-substring.tq", 9);
    ca_.Goto(&block16, tmp97, tmp98, tmp99, tmp100);
  }

    TNode<Context> tmp101;
    TNode<Object> tmp102;
    TNode<Smi> tmp103;
    TNode<Smi> tmp104;
    ca_.Bind(&block16, &tmp101, &tmp102, &tmp103, &tmp104);
  return TNode<Smi>{tmp104};
}

TF_BUILTIN(StringPrototypeSubstring, CodeStubAssembler) {
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
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, String, Smi, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, String, Smi, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, String, Smi, Smi, Smi> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, String, Smi, Smi, Smi> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, String, Smi, Smi, Smi> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, String, Smi, Smi, Smi> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, torque_arguments.frame, torque_arguments.base, torque_arguments.length, parameter0, parameter1);

  if (block0.is_used()) {
    TNode<RawPtrT> tmp0;
    TNode<RawPtrT> tmp1;
    TNode<IntPtrT> tmp2;
    TNode<Context> tmp3;
    TNode<Object> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../src/builtins/string-substring.tq", 33);
    TNode<String> tmp5;
    USE(tmp5);
    tmp5 = FromConstexpr6String18ATconstexpr_string_156(state_, "String.prototype.substring");
    TNode<String> tmp6;
    USE(tmp6);
    tmp6 = CodeStubAssembler(state_).ToThisString(TNode<Context>{tmp3}, TNode<Object>{tmp4}, TNode<String>{tmp5});
    ca_.SetSourcePosition("../../src/builtins/string-substring.tq", 34);
    TNode<Smi> tmp7;
    USE(tmp7);
    tmp7 = CodeStubAssembler(state_).LoadStringLengthAsSmi(TNode<String>{tmp6});
    ca_.SetSourcePosition("../../src/builtins/string-substring.tq", 37);
    TNode<IntPtrT> tmp8;
    USE(tmp8);
    tmp8 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 0);
    TNode<Object> tmp9;
    USE(tmp9);
    tmp9 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{tmp0}, TNode<RawPtrT>{tmp1}, TNode<IntPtrT>{tmp2}}, TNode<IntPtrT>{tmp8});
    TNode<Smi> tmp10;
    USE(tmp10);
    tmp10 = ToSmiBetweenZeroAnd_345(state_, TNode<Context>{tmp3}, TNode<Object>{tmp9}, TNode<Smi>{tmp7});
    ca_.SetSourcePosition("../../src/builtins/string-substring.tq", 40);
    TNode<IntPtrT> tmp11;
    USE(tmp11);
    tmp11 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 1);
    TNode<Object> tmp12;
    USE(tmp12);
    tmp12 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{tmp0}, TNode<RawPtrT>{tmp1}, TNode<IntPtrT>{tmp2}}, TNode<IntPtrT>{tmp11});
    TNode<Oddball> tmp13;
    USE(tmp13);
    tmp13 = Undefined_64(state_);
    TNode<BoolT> tmp14;
    USE(tmp14);
    tmp14 = CodeStubAssembler(state_).TaggedEqual(TNode<Object>{tmp12}, TNode<HeapObject>{tmp13});
    ca_.Branch(tmp14, &block1, &block2, tmp0, tmp1, tmp2, tmp3, tmp4, tmp6, tmp7, tmp10);
  }

  if (block1.is_used()) {
    TNode<RawPtrT> tmp15;
    TNode<RawPtrT> tmp16;
    TNode<IntPtrT> tmp17;
    TNode<Context> tmp18;
    TNode<Object> tmp19;
    TNode<String> tmp20;
    TNode<Smi> tmp21;
    TNode<Smi> tmp22;
    ca_.Bind(&block1, &tmp15, &tmp16, &tmp17, &tmp18, &tmp19, &tmp20, &tmp21, &tmp22);
    ca_.SetSourcePosition("../../src/builtins/string-substring.tq", 41);
    ca_.SetSourcePosition("../../src/builtins/string-substring.tq", 40);
    ca_.Goto(&block4, tmp15, tmp16, tmp17, tmp18, tmp19, tmp20, tmp21, tmp22, tmp21);
  }

  if (block2.is_used()) {
    TNode<RawPtrT> tmp23;
    TNode<RawPtrT> tmp24;
    TNode<IntPtrT> tmp25;
    TNode<Context> tmp26;
    TNode<Object> tmp27;
    TNode<String> tmp28;
    TNode<Smi> tmp29;
    TNode<Smi> tmp30;
    ca_.Bind(&block2, &tmp23, &tmp24, &tmp25, &tmp26, &tmp27, &tmp28, &tmp29, &tmp30);
    ca_.SetSourcePosition("../../src/builtins/string-substring.tq", 42);
    TNode<IntPtrT> tmp31;
    USE(tmp31);
    tmp31 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 1);
    TNode<Object> tmp32;
    USE(tmp32);
    tmp32 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{tmp23}, TNode<RawPtrT>{tmp24}, TNode<IntPtrT>{tmp25}}, TNode<IntPtrT>{tmp31});
    TNode<Smi> tmp33;
    USE(tmp33);
    tmp33 = ToSmiBetweenZeroAnd_345(state_, TNode<Context>{tmp26}, TNode<Object>{tmp32}, TNode<Smi>{tmp29});
    ca_.SetSourcePosition("../../src/builtins/string-substring.tq", 40);
    ca_.Goto(&block3, tmp23, tmp24, tmp25, tmp26, tmp27, tmp28, tmp29, tmp30, tmp33);
  }

  if (block4.is_used()) {
    TNode<RawPtrT> tmp34;
    TNode<RawPtrT> tmp35;
    TNode<IntPtrT> tmp36;
    TNode<Context> tmp37;
    TNode<Object> tmp38;
    TNode<String> tmp39;
    TNode<Smi> tmp40;
    TNode<Smi> tmp41;
    TNode<Smi> tmp42;
    ca_.Bind(&block4, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40, &tmp41, &tmp42);
    ca_.Goto(&block3, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39, tmp40, tmp41, tmp42);
  }

  if (block3.is_used()) {
    TNode<RawPtrT> tmp43;
    TNode<RawPtrT> tmp44;
    TNode<IntPtrT> tmp45;
    TNode<Context> tmp46;
    TNode<Object> tmp47;
    TNode<String> tmp48;
    TNode<Smi> tmp49;
    TNode<Smi> tmp50;
    TNode<Smi> tmp51;
    ca_.Bind(&block3, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47, &tmp48, &tmp49, &tmp50, &tmp51);
    ca_.SetSourcePosition("../../src/builtins/string-substring.tq", 43);
    TNode<BoolT> tmp52;
    USE(tmp52);
    tmp52 = CodeStubAssembler(state_).SmiLessThan(TNode<Smi>{tmp51}, TNode<Smi>{tmp50});
    ca_.Branch(tmp52, &block5, &block6, tmp43, tmp44, tmp45, tmp46, tmp47, tmp48, tmp49, tmp50, tmp51);
  }

  if (block5.is_used()) {
    TNode<RawPtrT> tmp53;
    TNode<RawPtrT> tmp54;
    TNode<IntPtrT> tmp55;
    TNode<Context> tmp56;
    TNode<Object> tmp57;
    TNode<String> tmp58;
    TNode<Smi> tmp59;
    TNode<Smi> tmp60;
    TNode<Smi> tmp61;
    ca_.Bind(&block5, &tmp53, &tmp54, &tmp55, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61);
    ca_.SetSourcePosition("../../src/builtins/string-substring.tq", 44);
    ca_.SetSourcePosition("../../src/builtins/string-substring.tq", 45);
    ca_.SetSourcePosition("../../src/builtins/string-substring.tq", 46);
    ca_.SetSourcePosition("../../src/builtins/string-substring.tq", 43);
    ca_.Goto(&block6, tmp53, tmp54, tmp55, tmp56, tmp57, tmp58, tmp59, tmp61, tmp60);
  }

  if (block6.is_used()) {
    TNode<RawPtrT> tmp62;
    TNode<RawPtrT> tmp63;
    TNode<IntPtrT> tmp64;
    TNode<Context> tmp65;
    TNode<Object> tmp66;
    TNode<String> tmp67;
    TNode<Smi> tmp68;
    TNode<Smi> tmp69;
    TNode<Smi> tmp70;
    ca_.Bind(&block6, &tmp62, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67, &tmp68, &tmp69, &tmp70);
    ca_.SetSourcePosition("../../src/builtins/string-substring.tq", 48);
    TNode<IntPtrT> tmp71;
    USE(tmp71);
    tmp71 = CodeStubAssembler(state_).SmiUntag(TNode<Smi>{tmp69});
    TNode<IntPtrT> tmp72;
    USE(tmp72);
    tmp72 = CodeStubAssembler(state_).SmiUntag(TNode<Smi>{tmp70});
    TNode<String> tmp73;
    USE(tmp73);
    tmp73 = CodeStubAssembler(state_).SubString(TNode<String>{tmp67}, TNode<IntPtrT>{tmp71}, TNode<IntPtrT>{tmp72});
    arguments.PopAndReturn(tmp73);
  }
}

}  // namespace internal
}  // namespace v8

