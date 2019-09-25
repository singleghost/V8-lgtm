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

const char* kBuiltinName_344(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

    ca_.Bind(&block0);
return "String.prototype.repeat";
}

TF_BUILTIN(StringRepeat, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  TNode<String> parameter1 = UncheckedCast<String>(Parameter(Descriptor::kString));
  USE(parameter1);
  TNode<Smi> parameter2 = UncheckedCast<Smi>(Parameter(Descriptor::kCount));
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<Context, String, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, String, Smi, String, String, IntPtrT> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, String, Smi, String, String, IntPtrT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, String, Smi, String, String, IntPtrT> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, String, Smi, String, String, IntPtrT> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, String, Smi, String, String, IntPtrT> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, String, Smi, String, String, IntPtrT> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, String, Smi, String, String, IntPtrT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<String> tmp1;
    TNode<Smi> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../src/builtins/string-repeat.tq", 13);
    TNode<String> tmp3;
    USE(tmp3);
    tmp3 = kEmptyString_67(state_);
    ca_.SetSourcePosition("../../src/builtins/string-repeat.tq", 14);
    ca_.SetSourcePosition("../../src/builtins/string-repeat.tq", 15);
    TNode<IntPtrT> tmp4;
    USE(tmp4);
    tmp4 = Convert8ATintptr5ATSmi_188(state_, TNode<Smi>{tmp2});
    ca_.SetSourcePosition("../../src/builtins/string-repeat.tq", 17);
    ca_.Goto(&block3, tmp0, tmp1, tmp2, tmp3, tmp1, tmp4);
  }

  if (block3.is_used()) {
    TNode<Context> tmp5;
    TNode<String> tmp6;
    TNode<Smi> tmp7;
    TNode<String> tmp8;
    TNode<String> tmp9;
    TNode<IntPtrT> tmp10;
    ca_.Bind(&block3, &tmp5, &tmp6, &tmp7, &tmp8, &tmp9, &tmp10);
    TNode<BoolT> tmp11;
    USE(tmp11);
    tmp11 = FromConstexpr6ATbool16ATconstexpr_bool_167(state_, true);
    ca_.Branch(tmp11, &block1, &block2, tmp5, tmp6, tmp7, tmp8, tmp9, tmp10);
  }

  if (block1.is_used()) {
    TNode<Context> tmp12;
    TNode<String> tmp13;
    TNode<Smi> tmp14;
    TNode<String> tmp15;
    TNode<String> tmp16;
    TNode<IntPtrT> tmp17;
    ca_.Bind(&block1, &tmp12, &tmp13, &tmp14, &tmp15, &tmp16, &tmp17);
    ca_.SetSourcePosition("../../src/builtins/string-repeat.tq", 18);
    TNode<IntPtrT> tmp18;
    USE(tmp18);
    tmp18 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 1);
    TNode<IntPtrT> tmp19;
    USE(tmp19);
    tmp19 = CodeStubAssembler(state_).WordAnd(TNode<IntPtrT>{tmp17}, TNode<IntPtrT>{tmp18});
    TNode<IntPtrT> tmp20;
    USE(tmp20);
    tmp20 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 1);
    TNode<BoolT> tmp21;
    USE(tmp21);
    tmp21 = CodeStubAssembler(state_).WordEqual(TNode<IntPtrT>{tmp19}, TNode<IntPtrT>{tmp20});
    ca_.Branch(tmp21, &block4, &block5, tmp12, tmp13, tmp14, tmp15, tmp16, tmp17);
  }

  if (block4.is_used()) {
    TNode<Context> tmp22;
    TNode<String> tmp23;
    TNode<Smi> tmp24;
    TNode<String> tmp25;
    TNode<String> tmp26;
    TNode<IntPtrT> tmp27;
    ca_.Bind(&block4, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26, &tmp27);
    TNode<String> tmp28;
    USE(tmp28);
    tmp28 = StringAdd_82(state_, TNode<Context>{tmp22}, TNode<String>{tmp25}, TNode<String>{tmp26});
    ca_.Goto(&block5, tmp22, tmp23, tmp24, tmp28, tmp26, tmp27);
  }

  if (block5.is_used()) {
    TNode<Context> tmp29;
    TNode<String> tmp30;
    TNode<Smi> tmp31;
    TNode<String> tmp32;
    TNode<String> tmp33;
    TNode<IntPtrT> tmp34;
    ca_.Bind(&block5, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33, &tmp34);
    ca_.SetSourcePosition("../../src/builtins/string-repeat.tq", 20);
    TNode<IntPtrT> tmp35;
    USE(tmp35);
    tmp35 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 1);
    TNode<IntPtrT> tmp36;
    USE(tmp36);
    tmp36 = CodeStubAssembler(state_).WordSar(TNode<IntPtrT>{tmp34}, TNode<IntPtrT>{tmp35});
    ca_.SetSourcePosition("../../src/builtins/string-repeat.tq", 21);
    TNode<IntPtrT> tmp37;
    USE(tmp37);
    tmp37 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 0);
    TNode<BoolT> tmp38;
    USE(tmp38);
    tmp38 = CodeStubAssembler(state_).WordEqual(TNode<IntPtrT>{tmp36}, TNode<IntPtrT>{tmp37});
    ca_.Branch(tmp38, &block6, &block7, tmp29, tmp30, tmp31, tmp32, tmp33, tmp36);
  }

  if (block6.is_used()) {
    TNode<Context> tmp39;
    TNode<String> tmp40;
    TNode<Smi> tmp41;
    TNode<String> tmp42;
    TNode<String> tmp43;
    TNode<IntPtrT> tmp44;
    ca_.Bind(&block6, &tmp39, &tmp40, &tmp41, &tmp42, &tmp43, &tmp44);
    ca_.Goto(&block2, tmp39, tmp40, tmp41, tmp42, tmp43, tmp44);
  }

  if (block7.is_used()) {
    TNode<Context> tmp45;
    TNode<String> tmp46;
    TNode<Smi> tmp47;
    TNode<String> tmp48;
    TNode<String> tmp49;
    TNode<IntPtrT> tmp50;
    ca_.Bind(&block7, &tmp45, &tmp46, &tmp47, &tmp48, &tmp49, &tmp50);
    ca_.SetSourcePosition("../../src/builtins/string-repeat.tq", 23);
    TNode<String> tmp51;
    USE(tmp51);
    tmp51 = StringAdd_82(state_, TNode<Context>{tmp45}, TNode<String>{tmp49}, TNode<String>{tmp49});
    ca_.SetSourcePosition("../../src/builtins/string-repeat.tq", 17);
    ca_.Goto(&block3, tmp45, tmp46, tmp47, tmp48, tmp51, tmp50);
  }

  if (block2.is_used()) {
    TNode<Context> tmp52;
    TNode<String> tmp53;
    TNode<Smi> tmp54;
    TNode<String> tmp55;
    TNode<String> tmp56;
    TNode<IntPtrT> tmp57;
    ca_.Bind(&block2, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56, &tmp57);
    ca_.SetSourcePosition("../../src/builtins/string-repeat.tq", 26);
    CodeStubAssembler(state_).Return(tmp55);
  }
}

TF_BUILTIN(StringPrototypeRepeat, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  TNode<Object> parameter1 = UncheckedCast<Object>(Parameter(Descriptor::kReceiver));
USE(parameter1);
  TNode<Object> parameter2 = UncheckedCast<Object>(Parameter(Descriptor::kCount));
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, String, Number, Number> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, String, Number, Number, Smi> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, String, Number, Smi> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, String, Number, Smi> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, String, Number, Smi, BoolT> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, String, Number, Smi, BoolT> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, String, Number, Smi, BoolT, BoolT> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, String, Number, Smi> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, String, Number, Smi> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, String, Number, Smi> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, String, Number, Smi> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, String, Number> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, String, Number, HeapNumber, Float64T, BoolT> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, String, Number, HeapNumber, Float64T, BoolT> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, String, Number, HeapNumber, Float64T, BoolT, BoolT> block24(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, String, Number, HeapNumber, Float64T> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, String, Number, HeapNumber, Float64T> block21(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, String, Number, HeapNumber, Float64T> block25(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, String, Number, HeapNumber, Float64T> block26(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, String> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, String> block4(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, String> block2(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Object> tmp1;
    TNode<Object> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../src/builtins/string-repeat.tq", 34);
    TNode<String> tmp3;
    USE(tmp3);
    tmp3 = FromConstexpr6String18ATconstexpr_string_156(state_, kBuiltinName_344(state_));
    TNode<String> tmp4;
    USE(tmp4);
    tmp4 = CodeStubAssembler(state_).ToThisString(TNode<Context>{tmp0}, TNode<Object>{tmp1}, TNode<String>{tmp3});
    ca_.SetSourcePosition("../../src/builtins/string-repeat.tq", 38);
    TNode<Number> tmp5;
    USE(tmp5);
    tmp5 = CodeStubAssembler(state_).ToInteger_Inline(TNode<Context>{tmp0}, TNode<Object>{tmp2}, CodeStubAssembler::ToIntegerTruncationMode::kTruncateMinusZero);
    ca_.SetSourcePosition("../../src/builtins/string-repeat.tq", 39);
    TNode<Smi> tmp6;
    USE(tmp6);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp6 = Cast5ATSmi_83(state_, TNode<Object>{tmp5}, &label0);
    ca_.Goto(&block9, tmp0, tmp1, tmp2, tmp4, tmp5, tmp5, tmp6);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block10, tmp0, tmp1, tmp2, tmp4, tmp5, tmp5);
    }
  }

  if (block10.is_used()) {
    TNode<Context> tmp7;
    TNode<Object> tmp8;
    TNode<Object> tmp9;
    TNode<String> tmp10;
    TNode<Number> tmp11;
    TNode<Number> tmp12;
    ca_.Bind(&block10, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11, &tmp12);
    ca_.Goto(&block8, tmp7, tmp8, tmp9, tmp10, tmp11);
  }

  if (block9.is_used()) {
    TNode<Context> tmp13;
    TNode<Object> tmp14;
    TNode<Object> tmp15;
    TNode<String> tmp16;
    TNode<Number> tmp17;
    TNode<Number> tmp18;
    TNode<Smi> tmp19;
    ca_.Bind(&block9, &tmp13, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18, &tmp19);
    ca_.SetSourcePosition("../../src/builtins/string-repeat.tq", 41);
    TNode<Smi> tmp20;
    USE(tmp20);
    tmp20 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 0);
    TNode<BoolT> tmp21;
    USE(tmp21);
    tmp21 = CodeStubAssembler(state_).SmiLessThan(TNode<Smi>{tmp19}, TNode<Smi>{tmp20});
    ca_.Branch(tmp21, &block11, &block12, tmp13, tmp14, tmp15, tmp16, tmp17, tmp19);
  }

  if (block11.is_used()) {
    TNode<Context> tmp22;
    TNode<Object> tmp23;
    TNode<Object> tmp24;
    TNode<String> tmp25;
    TNode<Number> tmp26;
    TNode<Smi> tmp27;
    ca_.Bind(&block11, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26, &tmp27);
    ca_.Goto(&block4, tmp22, tmp23, tmp24, tmp25);
  }

  if (block12.is_used()) {
    TNode<Context> tmp28;
    TNode<Object> tmp29;
    TNode<Object> tmp30;
    TNode<String> tmp31;
    TNode<Number> tmp32;
    TNode<Smi> tmp33;
    ca_.Bind(&block12, &tmp28, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33);
    ca_.SetSourcePosition("../../src/builtins/string-repeat.tq", 44);
    TNode<Smi> tmp34;
    USE(tmp34);
    tmp34 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 0);
    TNode<BoolT> tmp35;
    USE(tmp35);
    tmp35 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{tmp33}, TNode<Smi>{tmp34});
    ca_.Branch(tmp35, &block15, &block16, tmp28, tmp29, tmp30, tmp31, tmp32, tmp33, tmp35);
  }

  if (block15.is_used()) {
    TNode<Context> tmp36;
    TNode<Object> tmp37;
    TNode<Object> tmp38;
    TNode<String> tmp39;
    TNode<Number> tmp40;
    TNode<Smi> tmp41;
    TNode<BoolT> tmp42;
    ca_.Bind(&block15, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40, &tmp41, &tmp42);
    TNode<BoolT> tmp43;
    USE(tmp43);
    tmp43 = FromConstexpr6ATbool16ATconstexpr_bool_167(state_, true);
    ca_.Goto(&block17, tmp36, tmp37, tmp38, tmp39, tmp40, tmp41, tmp42, tmp43);
  }

  if (block16.is_used()) {
    TNode<Context> tmp44;
    TNode<Object> tmp45;
    TNode<Object> tmp46;
    TNode<String> tmp47;
    TNode<Number> tmp48;
    TNode<Smi> tmp49;
    TNode<BoolT> tmp50;
    ca_.Bind(&block16, &tmp44, &tmp45, &tmp46, &tmp47, &tmp48, &tmp49, &tmp50);
    TNode<Uint32T> tmp51;
    USE(tmp51);
    tmp51 = CodeStubAssembler(state_).LoadStringLengthAsWord32(TNode<String>{tmp47});
    TNode<Uint32T> tmp52;
    USE(tmp52);
    tmp52 = FromConstexpr8ATuint3217ATconstexpr_int31_163(state_, 0);
    TNode<BoolT> tmp53;
    USE(tmp53);
    tmp53 = CodeStubAssembler(state_).Word32Equal(TNode<Uint32T>{tmp51}, TNode<Uint32T>{tmp52});
    ca_.Goto(&block17, tmp44, tmp45, tmp46, tmp47, tmp48, tmp49, tmp50, tmp53);
  }

  if (block17.is_used()) {
    TNode<Context> tmp54;
    TNode<Object> tmp55;
    TNode<Object> tmp56;
    TNode<String> tmp57;
    TNode<Number> tmp58;
    TNode<Smi> tmp59;
    TNode<BoolT> tmp60;
    TNode<BoolT> tmp61;
    ca_.Bind(&block17, &tmp54, &tmp55, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61);
    ca_.Branch(tmp61, &block13, &block14, tmp54, tmp55, tmp56, tmp57, tmp58, tmp59);
  }

  if (block13.is_used()) {
    TNode<Context> tmp62;
    TNode<Object> tmp63;
    TNode<Object> tmp64;
    TNode<String> tmp65;
    TNode<Number> tmp66;
    TNode<Smi> tmp67;
    ca_.Bind(&block13, &tmp62, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67);
    ca_.Goto(&block6, tmp62, tmp63, tmp64, tmp65);
  }

  if (block14.is_used()) {
    TNode<Context> tmp68;
    TNode<Object> tmp69;
    TNode<Object> tmp70;
    TNode<String> tmp71;
    TNode<Number> tmp72;
    TNode<Smi> tmp73;
    ca_.Bind(&block14, &tmp68, &tmp69, &tmp70, &tmp71, &tmp72, &tmp73);
    ca_.SetSourcePosition("../../src/builtins/string-repeat.tq", 46);
    TNode<Smi> tmp74;
    USE(tmp74);
    tmp74 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, String::kMaxLength);
    TNode<BoolT> tmp75;
    USE(tmp75);
    tmp75 = CodeStubAssembler(state_).SmiGreaterThan(TNode<Smi>{tmp73}, TNode<Smi>{tmp74});
    ca_.Branch(tmp75, &block18, &block19, tmp68, tmp69, tmp70, tmp71, tmp72, tmp73);
  }

  if (block18.is_used()) {
    TNode<Context> tmp76;
    TNode<Object> tmp77;
    TNode<Object> tmp78;
    TNode<String> tmp79;
    TNode<Number> tmp80;
    TNode<Smi> tmp81;
    ca_.Bind(&block18, &tmp76, &tmp77, &tmp78, &tmp79, &tmp80, &tmp81);
    ca_.Goto(&block2, tmp76, tmp77, tmp78, tmp79);
  }

  if (block19.is_used()) {
    TNode<Context> tmp82;
    TNode<Object> tmp83;
    TNode<Object> tmp84;
    TNode<String> tmp85;
    TNode<Number> tmp86;
    TNode<Smi> tmp87;
    ca_.Bind(&block19, &tmp82, &tmp83, &tmp84, &tmp85, &tmp86, &tmp87);
    ca_.SetSourcePosition("../../src/builtins/string-repeat.tq", 50);
    TNode<String> tmp88;
    tmp88 = TORQUE_CAST(CodeStubAssembler(state_).CallBuiltin(Builtins::kStringRepeat, tmp82, tmp85, tmp87));
    USE(tmp88);
    CodeStubAssembler(state_).Return(tmp88);
  }

  if (block8.is_used()) {
    TNode<Context> tmp89;
    TNode<Object> tmp90;
    TNode<Object> tmp91;
    TNode<String> tmp92;
    TNode<Number> tmp93;
    ca_.Bind(&block8, &tmp89, &tmp90, &tmp91, &tmp92, &tmp93);
    ca_.SetSourcePosition("../../src/builtins/string-repeat.tq", 52);
    ca_.SetSourcePosition("../../src/builtins/string-repeat.tq", 54);
    TNode<Float64T> tmp94;
    USE(tmp94);
    tmp94 = LoadHeapNumberValue_511(state_, TNode<HeapNumber>{ca_.UncheckedCast<HeapNumber>(tmp93)});
    ca_.SetSourcePosition("../../src/builtins/string-repeat.tq", 58);
    TNode<Float64T> tmp95;
    USE(tmp95);
    tmp95 = FromConstexpr9ATfloat6419ATconstexpr_float64_166(state_, V8_INFINITY);
    TNode<BoolT> tmp96;
    USE(tmp96);
    tmp96 = CodeStubAssembler(state_).Float64Equal(TNode<Float64T>{tmp94}, TNode<Float64T>{tmp95});
    ca_.Branch(tmp96, &block22, &block23, tmp89, tmp90, tmp91, tmp92, tmp93, ca_.UncheckedCast<HeapNumber>(tmp93), tmp94, tmp96);
  }

  if (block22.is_used()) {
    TNode<Context> tmp97;
    TNode<Object> tmp98;
    TNode<Object> tmp99;
    TNode<String> tmp100;
    TNode<Number> tmp101;
    TNode<HeapNumber> tmp102;
    TNode<Float64T> tmp103;
    TNode<BoolT> tmp104;
    ca_.Bind(&block22, &tmp97, &tmp98, &tmp99, &tmp100, &tmp101, &tmp102, &tmp103, &tmp104);
    TNode<BoolT> tmp105;
    USE(tmp105);
    tmp105 = FromConstexpr6ATbool16ATconstexpr_bool_167(state_, true);
    ca_.Goto(&block24, tmp97, tmp98, tmp99, tmp100, tmp101, tmp102, tmp103, tmp104, tmp105);
  }

  if (block23.is_used()) {
    TNode<Context> tmp106;
    TNode<Object> tmp107;
    TNode<Object> tmp108;
    TNode<String> tmp109;
    TNode<Number> tmp110;
    TNode<HeapNumber> tmp111;
    TNode<Float64T> tmp112;
    TNode<BoolT> tmp113;
    ca_.Bind(&block23, &tmp106, &tmp107, &tmp108, &tmp109, &tmp110, &tmp111, &tmp112, &tmp113);
    TNode<Float64T> tmp114;
    USE(tmp114);
    tmp114 = FromConstexpr9ATfloat6417ATconstexpr_int31_165(state_, 0.0);
    TNode<BoolT> tmp115;
    USE(tmp115);
    tmp115 = CodeStubAssembler(state_).Float64LessThan(TNode<Float64T>{tmp112}, TNode<Float64T>{tmp114});
    ca_.Goto(&block24, tmp106, tmp107, tmp108, tmp109, tmp110, tmp111, tmp112, tmp113, tmp115);
  }

  if (block24.is_used()) {
    TNode<Context> tmp116;
    TNode<Object> tmp117;
    TNode<Object> tmp118;
    TNode<String> tmp119;
    TNode<Number> tmp120;
    TNode<HeapNumber> tmp121;
    TNode<Float64T> tmp122;
    TNode<BoolT> tmp123;
    TNode<BoolT> tmp124;
    ca_.Bind(&block24, &tmp116, &tmp117, &tmp118, &tmp119, &tmp120, &tmp121, &tmp122, &tmp123, &tmp124);
    ca_.Branch(tmp124, &block20, &block21, tmp116, tmp117, tmp118, tmp119, tmp120, tmp121, tmp122);
  }

  if (block20.is_used()) {
    TNode<Context> tmp125;
    TNode<Object> tmp126;
    TNode<Object> tmp127;
    TNode<String> tmp128;
    TNode<Number> tmp129;
    TNode<HeapNumber> tmp130;
    TNode<Float64T> tmp131;
    ca_.Bind(&block20, &tmp125, &tmp126, &tmp127, &tmp128, &tmp129, &tmp130, &tmp131);
    ca_.Goto(&block4, tmp125, tmp126, tmp127, tmp128);
  }

  if (block21.is_used()) {
    TNode<Context> tmp132;
    TNode<Object> tmp133;
    TNode<Object> tmp134;
    TNode<String> tmp135;
    TNode<Number> tmp136;
    TNode<HeapNumber> tmp137;
    TNode<Float64T> tmp138;
    ca_.Bind(&block21, &tmp132, &tmp133, &tmp134, &tmp135, &tmp136, &tmp137, &tmp138);
    ca_.SetSourcePosition("../../src/builtins/string-repeat.tq", 61);
    TNode<Uint32T> tmp139;
    USE(tmp139);
    tmp139 = CodeStubAssembler(state_).LoadStringLengthAsWord32(TNode<String>{tmp135});
    TNode<Uint32T> tmp140;
    USE(tmp140);
    tmp140 = FromConstexpr8ATuint3217ATconstexpr_int31_163(state_, 0);
    TNode<BoolT> tmp141;
    USE(tmp141);
    tmp141 = CodeStubAssembler(state_).Word32Equal(TNode<Uint32T>{tmp139}, TNode<Uint32T>{tmp140});
    ca_.Branch(tmp141, &block25, &block26, tmp132, tmp133, tmp134, tmp135, tmp136, tmp137, tmp138);
  }

  if (block25.is_used()) {
    TNode<Context> tmp142;
    TNode<Object> tmp143;
    TNode<Object> tmp144;
    TNode<String> tmp145;
    TNode<Number> tmp146;
    TNode<HeapNumber> tmp147;
    TNode<Float64T> tmp148;
    ca_.Bind(&block25, &tmp142, &tmp143, &tmp144, &tmp145, &tmp146, &tmp147, &tmp148);
    ca_.Goto(&block6, tmp142, tmp143, tmp144, tmp145);
  }

  if (block26.is_used()) {
    TNode<Context> tmp149;
    TNode<Object> tmp150;
    TNode<Object> tmp151;
    TNode<String> tmp152;
    TNode<Number> tmp153;
    TNode<HeapNumber> tmp154;
    TNode<Float64T> tmp155;
    ca_.Bind(&block26, &tmp149, &tmp150, &tmp151, &tmp152, &tmp153, &tmp154, &tmp155);
    ca_.SetSourcePosition("../../src/builtins/string-repeat.tq", 63);
    ca_.Goto(&block2, tmp149, tmp150, tmp151, tmp152);
  }

  if (block6.is_used()) {
    TNode<Context> tmp156;
    TNode<Object> tmp157;
    TNode<Object> tmp158;
    TNode<String> tmp159;
    ca_.Bind(&block6, &tmp156, &tmp157, &tmp158, &tmp159);
    ca_.SetSourcePosition("../../src/builtins/string-repeat.tq", 68);
    TNode<String> tmp160;
    USE(tmp160);
    tmp160 = kEmptyString_67(state_);
    CodeStubAssembler(state_).Return(tmp160);
  }

  if (block4.is_used()) {
    TNode<Context> tmp161;
    TNode<Object> tmp162;
    TNode<Object> tmp163;
    TNode<String> tmp164;
    ca_.Bind(&block4, &tmp161, &tmp162, &tmp163, &tmp164);
    ca_.SetSourcePosition("../../src/builtins/string-repeat.tq", 71);
    CodeStubAssembler(state_).ThrowRangeError(TNode<Context>{tmp161}, MessageTemplate::kInvalidCountValue, TNode<Object>{tmp163});
  }

  if (block2.is_used()) {
    TNode<Context> tmp165;
    TNode<Object> tmp166;
    TNode<Object> tmp167;
    TNode<String> tmp168;
    ca_.Bind(&block2, &tmp165, &tmp166, &tmp167, &tmp168);
    ca_.SetSourcePosition("../../src/builtins/string-repeat.tq", 74);
    CodeStubAssembler(state_).CallRuntime(Runtime::kThrowInvalidStringLength, tmp165);
    CodeStubAssembler(state_).Unreachable();
  }
}

}  // namespace internal
}  // namespace v8

