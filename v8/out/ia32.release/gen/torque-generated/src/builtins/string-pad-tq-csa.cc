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

int31_t kStringPadStart_341(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

    ca_.Bind(&block0);
return 0;
}

int31_t kStringPadEnd_342(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

    ca_.Bind(&block0);
return 1;
}

TNode<String> StringPad_343(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_receiver, TorqueStructArguments p_arguments, const char* p_methodName, int31_t p_variant) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, String, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, String, Smi> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, String, Smi, Number, Number, Number> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, String, Smi, Number, Number, Number, Smi> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, String, Smi, Number, Number, Smi> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, String, Smi, Number, Number, Smi> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, String, Smi, Number, Number> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, String, Smi, Number, Number> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, String, Smi, Number, String, IntPtrT> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, String, Smi, Number, String, IntPtrT, Object> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, String, Smi, Number, String, IntPtrT, Object> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, String, Smi, Number, String, IntPtrT, Object> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, String, Smi, Number, String, IntPtrT, Object> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, String, Smi, Number, String, IntPtrT> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, String, Smi, Number, String, IntPtrT> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, String, Smi, Number, String, IntPtrT> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, String, Smi, Number, String, IntPtrT, Smi> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, String, Smi, Number, String, IntPtrT, Smi> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, String, Smi, Number, String, IntPtrT, Smi, Smi, String> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, String, Smi, Number, String, IntPtrT, Smi, Smi, String> block21(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, String, Smi, Number, String, IntPtrT, Smi, Smi, String, Int32T, Int32T, Int32T, Int32T> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, String, Smi, Number, String, IntPtrT, Smi, Smi, String, Int32T, Int32T, Int32T, Int32T> block24(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, String, Smi, Number, String, IntPtrT, Smi, Smi, String> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, String, Smi, Number, String, IntPtrT, Smi, Smi, String> block25(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, String, Smi, Number, String, IntPtrT, Smi, Smi, String> block26(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, String> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, RawPtrT, RawPtrT, IntPtrT, String> block27(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_receiver, p_arguments.frame, p_arguments.base, p_arguments.length);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Object> tmp1;
    TNode<RawPtrT> tmp2;
    TNode<RawPtrT> tmp3;
    TNode<IntPtrT> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../src/builtins/string-pad.tq", 18);
    TNode<String> tmp5;
    USE(tmp5);
    tmp5 = FromConstexpr6String18ATconstexpr_string_156(state_, p_methodName);
    TNode<String> tmp6;
    USE(tmp6);
    tmp6 = CodeStubAssembler(state_).ToThisString(TNode<Context>{tmp0}, TNode<Object>{tmp1}, TNode<String>{tmp5});
    ca_.SetSourcePosition("../../src/builtins/string-pad.tq", 19);
    TNode<Smi> tmp7;
    USE(tmp7);
    tmp7 = CodeStubAssembler(state_).LoadStringLengthAsSmi(TNode<String>{tmp6});
    ca_.SetSourcePosition("../../src/builtins/string-pad.tq", 21);
    TNode<IntPtrT> tmp8;
    USE(tmp8);
    tmp8 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 0);
    TNode<BoolT> tmp9;
    USE(tmp9);
    tmp9 = CodeStubAssembler(state_).WordEqual(TNode<IntPtrT>{tmp4}, TNode<IntPtrT>{tmp8});
    ca_.Branch(tmp9, &block2, &block3, tmp0, tmp1, tmp2, tmp3, tmp4, tmp6, tmp7);
  }

  if (block2.is_used()) {
    TNode<Context> tmp10;
    TNode<Object> tmp11;
    TNode<RawPtrT> tmp12;
    TNode<RawPtrT> tmp13;
    TNode<IntPtrT> tmp14;
    TNode<String> tmp15;
    TNode<Smi> tmp16;
    ca_.Bind(&block2, &tmp10, &tmp11, &tmp12, &tmp13, &tmp14, &tmp15, &tmp16);
    ca_.SetSourcePosition("../../src/builtins/string-pad.tq", 22);
    ca_.Goto(&block1, tmp10, tmp11, tmp12, tmp13, tmp14, tmp15);
  }

  if (block3.is_used()) {
    TNode<Context> tmp17;
    TNode<Object> tmp18;
    TNode<RawPtrT> tmp19;
    TNode<RawPtrT> tmp20;
    TNode<IntPtrT> tmp21;
    TNode<String> tmp22;
    TNode<Smi> tmp23;
    ca_.Bind(&block3, &tmp17, &tmp18, &tmp19, &tmp20, &tmp21, &tmp22, &tmp23);
    ca_.SetSourcePosition("../../src/builtins/string-pad.tq", 24);
    TNode<IntPtrT> tmp24;
    USE(tmp24);
    tmp24 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 0);
    TNode<Object> tmp25;
    USE(tmp25);
    tmp25 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{tmp19}, TNode<RawPtrT>{tmp20}, TNode<IntPtrT>{tmp21}}, TNode<IntPtrT>{tmp24});
    TNode<Number> tmp26;
    USE(tmp26);
    tmp26 = CodeStubAssembler(state_).ToLength_Inline(TNode<Context>{tmp17}, TNode<Object>{tmp25});
    ca_.SetSourcePosition("../../src/builtins/string-pad.tq", 27);
    ca_.SetSourcePosition("../../src/builtins/string-pad.tq", 28);
    TNode<Smi> tmp27;
    USE(tmp27);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp27 = Cast5ATSmi_83(state_, TNode<Object>{tmp26}, &label0);
    ca_.Goto(&block6, tmp17, tmp18, tmp19, tmp20, tmp21, tmp22, tmp23, tmp26, tmp26, tmp26, tmp27);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block7, tmp17, tmp18, tmp19, tmp20, tmp21, tmp22, tmp23, tmp26, tmp26, tmp26);
    }
  }

  if (block7.is_used()) {
    TNode<Context> tmp28;
    TNode<Object> tmp29;
    TNode<RawPtrT> tmp30;
    TNode<RawPtrT> tmp31;
    TNode<IntPtrT> tmp32;
    TNode<String> tmp33;
    TNode<Smi> tmp34;
    TNode<Number> tmp35;
    TNode<Number> tmp36;
    TNode<Number> tmp37;
    ca_.Bind(&block7, &tmp28, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37);
    ca_.Goto(&block5, tmp28, tmp29, tmp30, tmp31, tmp32, tmp33, tmp34, tmp35, tmp36);
  }

  if (block6.is_used()) {
    TNode<Context> tmp38;
    TNode<Object> tmp39;
    TNode<RawPtrT> tmp40;
    TNode<RawPtrT> tmp41;
    TNode<IntPtrT> tmp42;
    TNode<String> tmp43;
    TNode<Smi> tmp44;
    TNode<Number> tmp45;
    TNode<Number> tmp46;
    TNode<Number> tmp47;
    TNode<Smi> tmp48;
    ca_.Bind(&block6, &tmp38, &tmp39, &tmp40, &tmp41, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47, &tmp48);
    ca_.SetSourcePosition("../../src/builtins/string-pad.tq", 29);
    TNode<BoolT> tmp49;
    USE(tmp49);
    tmp49 = CodeStubAssembler(state_).SmiLessThanOrEqual(TNode<Smi>{tmp48}, TNode<Smi>{tmp44});
    ca_.Branch(tmp49, &block8, &block9, tmp38, tmp39, tmp40, tmp41, tmp42, tmp43, tmp44, tmp45, tmp46, tmp48);
  }

  if (block8.is_used()) {
    TNode<Context> tmp50;
    TNode<Object> tmp51;
    TNode<RawPtrT> tmp52;
    TNode<RawPtrT> tmp53;
    TNode<IntPtrT> tmp54;
    TNode<String> tmp55;
    TNode<Smi> tmp56;
    TNode<Number> tmp57;
    TNode<Number> tmp58;
    TNode<Smi> tmp59;
    ca_.Bind(&block8, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56, &tmp57, &tmp58, &tmp59);
    ca_.SetSourcePosition("../../src/builtins/string-pad.tq", 30);
    ca_.Goto(&block1, tmp50, tmp51, tmp52, tmp53, tmp54, tmp55);
  }

  if (block9.is_used()) {
    TNode<Context> tmp60;
    TNode<Object> tmp61;
    TNode<RawPtrT> tmp62;
    TNode<RawPtrT> tmp63;
    TNode<IntPtrT> tmp64;
    TNode<String> tmp65;
    TNode<Smi> tmp66;
    TNode<Number> tmp67;
    TNode<Number> tmp68;
    TNode<Smi> tmp69;
    ca_.Bind(&block9, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67, &tmp68, &tmp69);
    ca_.SetSourcePosition("../../src/builtins/string-pad.tq", 28);
    ca_.Goto(&block4, tmp60, tmp61, tmp62, tmp63, tmp64, tmp65, tmp66, tmp67, tmp68);
  }

  if (block5.is_used()) {
    TNode<Context> tmp70;
    TNode<Object> tmp71;
    TNode<RawPtrT> tmp72;
    TNode<RawPtrT> tmp73;
    TNode<IntPtrT> tmp74;
    TNode<String> tmp75;
    TNode<Smi> tmp76;
    TNode<Number> tmp77;
    TNode<Number> tmp78;
    ca_.Bind(&block5, &tmp70, &tmp71, &tmp72, &tmp73, &tmp74, &tmp75, &tmp76, &tmp77, &tmp78);
    ca_.SetSourcePosition("../../src/builtins/string-pad.tq", 33);
    ca_.SetSourcePosition("../../src/builtins/string-pad.tq", 28);
    ca_.Goto(&block4, tmp70, tmp71, tmp72, tmp73, tmp74, tmp75, tmp76, tmp77, tmp78);
  }

  if (block4.is_used()) {
    TNode<Context> tmp79;
    TNode<Object> tmp80;
    TNode<RawPtrT> tmp81;
    TNode<RawPtrT> tmp82;
    TNode<IntPtrT> tmp83;
    TNode<String> tmp84;
    TNode<Smi> tmp85;
    TNode<Number> tmp86;
    TNode<Number> tmp87;
    ca_.Bind(&block4, &tmp79, &tmp80, &tmp81, &tmp82, &tmp83, &tmp84, &tmp85, &tmp86, &tmp87);
    ca_.SetSourcePosition("../../src/builtins/string-pad.tq", 27);
    ca_.SetSourcePosition("../../src/builtins/string-pad.tq", 37);
    TNode<String> tmp88;
    USE(tmp88);
    tmp88 = FromConstexpr6String18ATconstexpr_string_156(state_, " ");
    ca_.SetSourcePosition("../../src/builtins/string-pad.tq", 38);
    TNode<IntPtrT> tmp89;
    USE(tmp89);
    tmp89 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 1);
    ca_.SetSourcePosition("../../src/builtins/string-pad.tq", 40);
    TNode<IntPtrT> tmp90;
    USE(tmp90);
    tmp90 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 1);
    TNode<BoolT> tmp91;
    USE(tmp91);
    tmp91 = CodeStubAssembler(state_).WordNotEqual(TNode<IntPtrT>{tmp83}, TNode<IntPtrT>{tmp90});
    ca_.Branch(tmp91, &block10, &block11, tmp79, tmp80, tmp81, tmp82, tmp83, tmp84, tmp85, tmp86, tmp88, tmp89);
  }

  if (block10.is_used()) {
    TNode<Context> tmp92;
    TNode<Object> tmp93;
    TNode<RawPtrT> tmp94;
    TNode<RawPtrT> tmp95;
    TNode<IntPtrT> tmp96;
    TNode<String> tmp97;
    TNode<Smi> tmp98;
    TNode<Number> tmp99;
    TNode<String> tmp100;
    TNode<IntPtrT> tmp101;
    ca_.Bind(&block10, &tmp92, &tmp93, &tmp94, &tmp95, &tmp96, &tmp97, &tmp98, &tmp99, &tmp100, &tmp101);
    ca_.SetSourcePosition("../../src/builtins/string-pad.tq", 41);
    TNode<IntPtrT> tmp102;
    USE(tmp102);
    tmp102 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 1);
    TNode<Object> tmp103;
    USE(tmp103);
    tmp103 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{tmp94}, TNode<RawPtrT>{tmp95}, TNode<IntPtrT>{tmp96}}, TNode<IntPtrT>{tmp102});
    ca_.SetSourcePosition("../../src/builtins/string-pad.tq", 42);
    TNode<Oddball> tmp104;
    USE(tmp104);
    tmp104 = Undefined_64(state_);
    TNode<BoolT> tmp105;
    USE(tmp105);
    tmp105 = CodeStubAssembler(state_).TaggedNotEqual(TNode<Object>{tmp103}, TNode<HeapObject>{tmp104});
    ca_.Branch(tmp105, &block12, &block13, tmp92, tmp93, tmp94, tmp95, tmp96, tmp97, tmp98, tmp99, tmp100, tmp101, tmp103);
  }

  if (block12.is_used()) {
    TNode<Context> tmp106;
    TNode<Object> tmp107;
    TNode<RawPtrT> tmp108;
    TNode<RawPtrT> tmp109;
    TNode<IntPtrT> tmp110;
    TNode<String> tmp111;
    TNode<Smi> tmp112;
    TNode<Number> tmp113;
    TNode<String> tmp114;
    TNode<IntPtrT> tmp115;
    TNode<Object> tmp116;
    ca_.Bind(&block12, &tmp106, &tmp107, &tmp108, &tmp109, &tmp110, &tmp111, &tmp112, &tmp113, &tmp114, &tmp115, &tmp116);
    ca_.SetSourcePosition("../../src/builtins/string-pad.tq", 43);
    TNode<String> tmp117;
    USE(tmp117);
    tmp117 = CodeStubAssembler(state_).ToString_Inline(TNode<Context>{tmp106}, TNode<Object>{tmp116});
    ca_.SetSourcePosition("../../src/builtins/string-pad.tq", 44);
    TNode<IntPtrT> tmp118;
    USE(tmp118);
    tmp118 = CodeStubAssembler(state_).LoadStringLengthAsWord(TNode<String>{tmp117});
    ca_.SetSourcePosition("../../src/builtins/string-pad.tq", 45);
    TNode<IntPtrT> tmp119;
    USE(tmp119);
    tmp119 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 0);
    TNode<BoolT> tmp120;
    USE(tmp120);
    tmp120 = CodeStubAssembler(state_).WordEqual(TNode<IntPtrT>{tmp118}, TNode<IntPtrT>{tmp119});
    ca_.Branch(tmp120, &block14, &block15, tmp106, tmp107, tmp108, tmp109, tmp110, tmp111, tmp112, tmp113, tmp117, tmp118, tmp116);
  }

  if (block14.is_used()) {
    TNode<Context> tmp121;
    TNode<Object> tmp122;
    TNode<RawPtrT> tmp123;
    TNode<RawPtrT> tmp124;
    TNode<IntPtrT> tmp125;
    TNode<String> tmp126;
    TNode<Smi> tmp127;
    TNode<Number> tmp128;
    TNode<String> tmp129;
    TNode<IntPtrT> tmp130;
    TNode<Object> tmp131;
    ca_.Bind(&block14, &tmp121, &tmp122, &tmp123, &tmp124, &tmp125, &tmp126, &tmp127, &tmp128, &tmp129, &tmp130, &tmp131);
    ca_.SetSourcePosition("../../src/builtins/string-pad.tq", 46);
    ca_.Goto(&block1, tmp121, tmp122, tmp123, tmp124, tmp125, tmp126);
  }

  if (block15.is_used()) {
    TNode<Context> tmp132;
    TNode<Object> tmp133;
    TNode<RawPtrT> tmp134;
    TNode<RawPtrT> tmp135;
    TNode<IntPtrT> tmp136;
    TNode<String> tmp137;
    TNode<Smi> tmp138;
    TNode<Number> tmp139;
    TNode<String> tmp140;
    TNode<IntPtrT> tmp141;
    TNode<Object> tmp142;
    ca_.Bind(&block15, &tmp132, &tmp133, &tmp134, &tmp135, &tmp136, &tmp137, &tmp138, &tmp139, &tmp140, &tmp141, &tmp142);
    ca_.SetSourcePosition("../../src/builtins/string-pad.tq", 42);
    ca_.Goto(&block13, tmp132, tmp133, tmp134, tmp135, tmp136, tmp137, tmp138, tmp139, tmp140, tmp141, tmp142);
  }

  if (block13.is_used()) {
    TNode<Context> tmp143;
    TNode<Object> tmp144;
    TNode<RawPtrT> tmp145;
    TNode<RawPtrT> tmp146;
    TNode<IntPtrT> tmp147;
    TNode<String> tmp148;
    TNode<Smi> tmp149;
    TNode<Number> tmp150;
    TNode<String> tmp151;
    TNode<IntPtrT> tmp152;
    TNode<Object> tmp153;
    ca_.Bind(&block13, &tmp143, &tmp144, &tmp145, &tmp146, &tmp147, &tmp148, &tmp149, &tmp150, &tmp151, &tmp152, &tmp153);
    ca_.SetSourcePosition("../../src/builtins/string-pad.tq", 40);
    ca_.Goto(&block11, tmp143, tmp144, tmp145, tmp146, tmp147, tmp148, tmp149, tmp150, tmp151, tmp152);
  }

  if (block11.is_used()) {
    TNode<Context> tmp154;
    TNode<Object> tmp155;
    TNode<RawPtrT> tmp156;
    TNode<RawPtrT> tmp157;
    TNode<IntPtrT> tmp158;
    TNode<String> tmp159;
    TNode<Smi> tmp160;
    TNode<Number> tmp161;
    TNode<String> tmp162;
    TNode<IntPtrT> tmp163;
    ca_.Bind(&block11, &tmp154, &tmp155, &tmp156, &tmp157, &tmp158, &tmp159, &tmp160, &tmp161, &tmp162, &tmp163);
    ca_.SetSourcePosition("../../src/builtins/string-pad.tq", 54);
    TNode<BoolT> tmp164;
    USE(tmp164);
    tmp164 = CodeStubAssembler(state_).TaggedIsSmi(TNode<Object>{tmp161});
    TNode<BoolT> tmp165;
    USE(tmp165);
    tmp165 = CodeStubAssembler(state_).Word32BinaryNot(TNode<BoolT>{tmp164});
    ca_.Branch(tmp165, &block16, &block17, tmp154, tmp155, tmp156, tmp157, tmp158, tmp159, tmp160, tmp161, tmp162, tmp163);
  }

  if (block16.is_used()) {
    TNode<Context> tmp166;
    TNode<Object> tmp167;
    TNode<RawPtrT> tmp168;
    TNode<RawPtrT> tmp169;
    TNode<IntPtrT> tmp170;
    TNode<String> tmp171;
    TNode<Smi> tmp172;
    TNode<Number> tmp173;
    TNode<String> tmp174;
    TNode<IntPtrT> tmp175;
    ca_.Bind(&block16, &tmp166, &tmp167, &tmp168, &tmp169, &tmp170, &tmp171, &tmp172, &tmp173, &tmp174, &tmp175);
    ca_.SetSourcePosition("../../src/builtins/string-pad.tq", 55);
    CodeStubAssembler(state_).CallRuntime(Runtime::kThrowInvalidStringLength, tmp166);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block17.is_used()) {
    TNode<Context> tmp177;
    TNode<Object> tmp178;
    TNode<RawPtrT> tmp179;
    TNode<RawPtrT> tmp180;
    TNode<IntPtrT> tmp181;
    TNode<String> tmp182;
    TNode<Smi> tmp183;
    TNode<Number> tmp184;
    TNode<String> tmp185;
    TNode<IntPtrT> tmp186;
    ca_.Bind(&block17, &tmp177, &tmp178, &tmp179, &tmp180, &tmp181, &tmp182, &tmp183, &tmp184, &tmp185, &tmp186);
    ca_.SetSourcePosition("../../src/builtins/string-pad.tq", 58);
    TNode<Smi> tmp187;
    USE(tmp187);
    tmp187 = UnsafeCast5ATSmi_1433(state_, TNode<Context>{tmp177}, TNode<Object>{tmp184});
    ca_.SetSourcePosition("../../src/builtins/string-pad.tq", 59);
    TNode<Smi> tmp188;
    USE(tmp188);
    tmp188 = CodeStubAssembler(state_).SmiConstant(String::kMaxLength);
    TNode<BoolT> tmp189;
    USE(tmp189);
    tmp189 = CodeStubAssembler(state_).SmiGreaterThan(TNode<Smi>{tmp187}, TNode<Smi>{tmp188});
    ca_.Branch(tmp189, &block18, &block19, tmp177, tmp178, tmp179, tmp180, tmp181, tmp182, tmp183, tmp184, tmp185, tmp186, tmp187);
  }

  if (block18.is_used()) {
    TNode<Context> tmp190;
    TNode<Object> tmp191;
    TNode<RawPtrT> tmp192;
    TNode<RawPtrT> tmp193;
    TNode<IntPtrT> tmp194;
    TNode<String> tmp195;
    TNode<Smi> tmp196;
    TNode<Number> tmp197;
    TNode<String> tmp198;
    TNode<IntPtrT> tmp199;
    TNode<Smi> tmp200;
    ca_.Bind(&block18, &tmp190, &tmp191, &tmp192, &tmp193, &tmp194, &tmp195, &tmp196, &tmp197, &tmp198, &tmp199, &tmp200);
    ca_.SetSourcePosition("../../src/builtins/string-pad.tq", 60);
    CodeStubAssembler(state_).CallRuntime(Runtime::kThrowInvalidStringLength, tmp190);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block19.is_used()) {
    TNode<Context> tmp202;
    TNode<Object> tmp203;
    TNode<RawPtrT> tmp204;
    TNode<RawPtrT> tmp205;
    TNode<IntPtrT> tmp206;
    TNode<String> tmp207;
    TNode<Smi> tmp208;
    TNode<Number> tmp209;
    TNode<String> tmp210;
    TNode<IntPtrT> tmp211;
    TNode<Smi> tmp212;
    ca_.Bind(&block19, &tmp202, &tmp203, &tmp204, &tmp205, &tmp206, &tmp207, &tmp208, &tmp209, &tmp210, &tmp211, &tmp212);
    ca_.SetSourcePosition("../../src/builtins/string-pad.tq", 63);
    TNode<Smi> tmp213;
    USE(tmp213);
    tmp213 = CodeStubAssembler(state_).SmiSub(TNode<Smi>{tmp212}, TNode<Smi>{tmp208});
    ca_.SetSourcePosition("../../src/builtins/string-pad.tq", 65);
    ca_.SetSourcePosition("../../src/builtins/string-pad.tq", 66);
    TNode<IntPtrT> tmp214;
    USE(tmp214);
    tmp214 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 1);
    TNode<BoolT> tmp215;
    USE(tmp215);
    tmp215 = CodeStubAssembler(state_).WordEqual(TNode<IntPtrT>{tmp211}, TNode<IntPtrT>{tmp214});
    ca_.Branch(tmp215, &block20, &block21, tmp202, tmp203, tmp204, tmp205, tmp206, tmp207, tmp208, tmp209, tmp210, tmp211, tmp212, tmp213, ca_.Uninitialized<String>());
  }

  if (block20.is_used()) {
    TNode<Context> tmp216;
    TNode<Object> tmp217;
    TNode<RawPtrT> tmp218;
    TNode<RawPtrT> tmp219;
    TNode<IntPtrT> tmp220;
    TNode<String> tmp221;
    TNode<Smi> tmp222;
    TNode<Number> tmp223;
    TNode<String> tmp224;
    TNode<IntPtrT> tmp225;
    TNode<Smi> tmp226;
    TNode<Smi> tmp227;
    TNode<String> tmp228;
    ca_.Bind(&block20, &tmp216, &tmp217, &tmp218, &tmp219, &tmp220, &tmp221, &tmp222, &tmp223, &tmp224, &tmp225, &tmp226, &tmp227, &tmp228);
    ca_.SetSourcePosition("../../src/builtins/string-pad.tq", 70);
    TNode<String> tmp229;
    tmp229 = TORQUE_CAST(CodeStubAssembler(state_).CallBuiltin(Builtins::kStringRepeat, tmp216, tmp224, tmp227));
    USE(tmp229);
    ca_.SetSourcePosition("../../src/builtins/string-pad.tq", 66);
    ca_.Goto(&block22, tmp216, tmp217, tmp218, tmp219, tmp220, tmp221, tmp222, tmp223, tmp224, tmp225, tmp226, tmp227, tmp229);
  }

  if (block21.is_used()) {
    TNode<Context> tmp230;
    TNode<Object> tmp231;
    TNode<RawPtrT> tmp232;
    TNode<RawPtrT> tmp233;
    TNode<IntPtrT> tmp234;
    TNode<String> tmp235;
    TNode<Smi> tmp236;
    TNode<Number> tmp237;
    TNode<String> tmp238;
    TNode<IntPtrT> tmp239;
    TNode<Smi> tmp240;
    TNode<Smi> tmp241;
    TNode<String> tmp242;
    ca_.Bind(&block21, &tmp230, &tmp231, &tmp232, &tmp233, &tmp234, &tmp235, &tmp236, &tmp237, &tmp238, &tmp239, &tmp240, &tmp241, &tmp242);
    ca_.SetSourcePosition("../../src/builtins/string-pad.tq", 73);
    TNode<Int32T> tmp243;
    USE(tmp243);
    tmp243 = CodeStubAssembler(state_).TruncateIntPtrToInt32(TNode<IntPtrT>{tmp239});
    ca_.SetSourcePosition("../../src/builtins/string-pad.tq", 74);
    TNode<Int32T> tmp244;
    USE(tmp244);
    tmp244 = Convert7ATint325ATSmi_194(state_, TNode<Smi>{tmp241});
    ca_.SetSourcePosition("../../src/builtins/string-pad.tq", 75);
    TNode<Int32T> tmp245;
    USE(tmp245);
    tmp245 = CodeStubAssembler(state_).Int32Div(TNode<Int32T>{tmp244}, TNode<Int32T>{tmp243});
    ca_.SetSourcePosition("../../src/builtins/string-pad.tq", 76);
    TNode<Int32T> tmp246;
    USE(tmp246);
    tmp246 = CodeStubAssembler(state_).Int32Mod(TNode<Int32T>{tmp244}, TNode<Int32T>{tmp243});
    ca_.SetSourcePosition("../../src/builtins/string-pad.tq", 78);
    TNode<Smi> tmp247;
    USE(tmp247);
    tmp247 = Convert5ATSmi7ATint32_178(state_, TNode<Int32T>{tmp245});
    TNode<String> tmp248;
    tmp248 = TORQUE_CAST(CodeStubAssembler(state_).CallBuiltin(Builtins::kStringRepeat, tmp230, tmp238, tmp247));
    USE(tmp248);
    ca_.SetSourcePosition("../../src/builtins/string-pad.tq", 77);
    ca_.SetSourcePosition("../../src/builtins/string-pad.tq", 80);
    TNode<Int32T> tmp249;
    USE(tmp249);
    tmp249 = FromConstexpr7ATint3217ATconstexpr_int31_148(state_, 0);
    TNode<BoolT> tmp250;
    USE(tmp250);
    tmp250 = CodeStubAssembler(state_).Word32NotEqual(TNode<Int32T>{tmp246}, TNode<Int32T>{tmp249});
    ca_.Branch(tmp250, &block23, &block24, tmp230, tmp231, tmp232, tmp233, tmp234, tmp235, tmp236, tmp237, tmp238, tmp239, tmp240, tmp241, tmp248, tmp243, tmp244, tmp245, tmp246);
  }

  if (block23.is_used()) {
    TNode<Context> tmp251;
    TNode<Object> tmp252;
    TNode<RawPtrT> tmp253;
    TNode<RawPtrT> tmp254;
    TNode<IntPtrT> tmp255;
    TNode<String> tmp256;
    TNode<Smi> tmp257;
    TNode<Number> tmp258;
    TNode<String> tmp259;
    TNode<IntPtrT> tmp260;
    TNode<Smi> tmp261;
    TNode<Smi> tmp262;
    TNode<String> tmp263;
    TNode<Int32T> tmp264;
    TNode<Int32T> tmp265;
    TNode<Int32T> tmp266;
    TNode<Int32T> tmp267;
    ca_.Bind(&block23, &tmp251, &tmp252, &tmp253, &tmp254, &tmp255, &tmp256, &tmp257, &tmp258, &tmp259, &tmp260, &tmp261, &tmp262, &tmp263, &tmp264, &tmp265, &tmp266, &tmp267);
    ca_.SetSourcePosition("../../src/builtins/string-pad.tq", 82);
    TNode<IntPtrT> tmp268;
    USE(tmp268);
    tmp268 = Convert8ATintptr7ATint32_176(state_, TNode<Int32T>{tmp267});
    TNode<IntPtrT> tmp269;
    USE(tmp269);
    tmp269 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 0);
    TNode<String> tmp270;
    tmp270 = TORQUE_CAST(CodeStubAssembler(state_).CallBuiltin(Builtins::kStringSubstring, tmp251, tmp259, tmp269, tmp268));
    USE(tmp270);
    ca_.SetSourcePosition("../../src/builtins/string-pad.tq", 83);
    TNode<String> tmp271;
    USE(tmp271);
    tmp271 = StringAdd_82(state_, TNode<Context>{tmp251}, TNode<String>{tmp263}, TNode<String>{tmp270});
    ca_.SetSourcePosition("../../src/builtins/string-pad.tq", 80);
    ca_.Goto(&block24, tmp251, tmp252, tmp253, tmp254, tmp255, tmp256, tmp257, tmp258, tmp259, tmp260, tmp261, tmp262, tmp271, tmp264, tmp265, tmp266, tmp267);
  }

  if (block24.is_used()) {
    TNode<Context> tmp272;
    TNode<Object> tmp273;
    TNode<RawPtrT> tmp274;
    TNode<RawPtrT> tmp275;
    TNode<IntPtrT> tmp276;
    TNode<String> tmp277;
    TNode<Smi> tmp278;
    TNode<Number> tmp279;
    TNode<String> tmp280;
    TNode<IntPtrT> tmp281;
    TNode<Smi> tmp282;
    TNode<Smi> tmp283;
    TNode<String> tmp284;
    TNode<Int32T> tmp285;
    TNode<Int32T> tmp286;
    TNode<Int32T> tmp287;
    TNode<Int32T> tmp288;
    ca_.Bind(&block24, &tmp272, &tmp273, &tmp274, &tmp275, &tmp276, &tmp277, &tmp278, &tmp279, &tmp280, &tmp281, &tmp282, &tmp283, &tmp284, &tmp285, &tmp286, &tmp287, &tmp288);
    ca_.SetSourcePosition("../../src/builtins/string-pad.tq", 71);
    ca_.SetSourcePosition("../../src/builtins/string-pad.tq", 66);
    ca_.Goto(&block22, tmp272, tmp273, tmp274, tmp275, tmp276, tmp277, tmp278, tmp279, tmp280, tmp281, tmp282, tmp283, tmp284);
  }

  if (block22.is_used()) {
    TNode<Context> tmp289;
    TNode<Object> tmp290;
    TNode<RawPtrT> tmp291;
    TNode<RawPtrT> tmp292;
    TNode<IntPtrT> tmp293;
    TNode<String> tmp294;
    TNode<Smi> tmp295;
    TNode<Number> tmp296;
    TNode<String> tmp297;
    TNode<IntPtrT> tmp298;
    TNode<Smi> tmp299;
    TNode<Smi> tmp300;
    TNode<String> tmp301;
    ca_.Bind(&block22, &tmp289, &tmp290, &tmp291, &tmp292, &tmp293, &tmp294, &tmp295, &tmp296, &tmp297, &tmp298, &tmp299, &tmp300, &tmp301);
    ca_.SetSourcePosition("../../src/builtins/string-pad.tq", 89);
    TNode<BoolT> tmp302;
    USE(tmp302);
    tmp302 = FromConstexpr6ATbool16ATconstexpr_bool_167(state_, (CodeStubAssembler(state_).ConstexprInt31Equal(p_variant, kStringPadStart_341(state_))));
    ca_.Branch(tmp302, &block25, &block26, tmp289, tmp290, tmp291, tmp292, tmp293, tmp294, tmp295, tmp296, tmp297, tmp298, tmp299, tmp300, tmp301);
  }

  if (block25.is_used()) {
    TNode<Context> tmp303;
    TNode<Object> tmp304;
    TNode<RawPtrT> tmp305;
    TNode<RawPtrT> tmp306;
    TNode<IntPtrT> tmp307;
    TNode<String> tmp308;
    TNode<Smi> tmp309;
    TNode<Number> tmp310;
    TNode<String> tmp311;
    TNode<IntPtrT> tmp312;
    TNode<Smi> tmp313;
    TNode<Smi> tmp314;
    TNode<String> tmp315;
    ca_.Bind(&block25, &tmp303, &tmp304, &tmp305, &tmp306, &tmp307, &tmp308, &tmp309, &tmp310, &tmp311, &tmp312, &tmp313, &tmp314, &tmp315);
    ca_.SetSourcePosition("../../src/builtins/string-pad.tq", 90);
    TNode<String> tmp316;
    USE(tmp316);
    tmp316 = StringAdd_82(state_, TNode<Context>{tmp303}, TNode<String>{tmp315}, TNode<String>{tmp308});
    ca_.Goto(&block1, tmp303, tmp304, tmp305, tmp306, tmp307, tmp316);
  }

  if (block26.is_used()) {
    TNode<Context> tmp317;
    TNode<Object> tmp318;
    TNode<RawPtrT> tmp319;
    TNode<RawPtrT> tmp320;
    TNode<IntPtrT> tmp321;
    TNode<String> tmp322;
    TNode<Smi> tmp323;
    TNode<Number> tmp324;
    TNode<String> tmp325;
    TNode<IntPtrT> tmp326;
    TNode<Smi> tmp327;
    TNode<Smi> tmp328;
    TNode<String> tmp329;
    ca_.Bind(&block26, &tmp317, &tmp318, &tmp319, &tmp320, &tmp321, &tmp322, &tmp323, &tmp324, &tmp325, &tmp326, &tmp327, &tmp328, &tmp329);
    ca_.SetSourcePosition("../../src/builtins/string-pad.tq", 93);
    TNode<String> tmp330;
    USE(tmp330);
    tmp330 = StringAdd_82(state_, TNode<Context>{tmp317}, TNode<String>{tmp322}, TNode<String>{tmp329});
    ca_.Goto(&block1, tmp317, tmp318, tmp319, tmp320, tmp321, tmp330);
  }

  if (block1.is_used()) {
    TNode<Context> tmp331;
    TNode<Object> tmp332;
    TNode<RawPtrT> tmp333;
    TNode<RawPtrT> tmp334;
    TNode<IntPtrT> tmp335;
    TNode<String> tmp336;
    ca_.Bind(&block1, &tmp331, &tmp332, &tmp333, &tmp334, &tmp335, &tmp336);
    ca_.SetSourcePosition("../../src/builtins/string-pad.tq", 15);
    ca_.Goto(&block27, tmp331, tmp332, tmp333, tmp334, tmp335, tmp336);
  }

    TNode<Context> tmp337;
    TNode<Object> tmp338;
    TNode<RawPtrT> tmp339;
    TNode<RawPtrT> tmp340;
    TNode<IntPtrT> tmp341;
    TNode<String> tmp342;
    ca_.Bind(&block27, &tmp337, &tmp338, &tmp339, &tmp340, &tmp341, &tmp342);
  return TNode<String>{tmp342};
}

TF_BUILTIN(StringPrototypePadStart, CodeStubAssembler) {
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
    ca_.Goto(&block0, torque_arguments.frame, torque_arguments.base, torque_arguments.length, parameter0, parameter1);

  if (block0.is_used()) {
    TNode<RawPtrT> tmp0;
    TNode<RawPtrT> tmp1;
    TNode<IntPtrT> tmp2;
    TNode<Context> tmp3;
    TNode<Object> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../src/builtins/string-pad.tq", 101);
    TNode<String> tmp5;
    USE(tmp5);
    tmp5 = StringPad_343(state_, TNode<Context>{tmp3}, TNode<Object>{tmp4}, TorqueStructArguments{TNode<RawPtrT>{tmp0}, TNode<RawPtrT>{tmp1}, TNode<IntPtrT>{tmp2}}, "String.prototype.padStart", kStringPadStart_341(state_));
    arguments.PopAndReturn(tmp5);
  }
}

TF_BUILTIN(StringPrototypePadEnd, CodeStubAssembler) {
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
    ca_.Goto(&block0, torque_arguments.frame, torque_arguments.base, torque_arguments.length, parameter0, parameter1);

  if (block0.is_used()) {
    TNode<RawPtrT> tmp0;
    TNode<RawPtrT> tmp1;
    TNode<IntPtrT> tmp2;
    TNode<Context> tmp3;
    TNode<Object> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../src/builtins/string-pad.tq", 109);
    TNode<String> tmp5;
    USE(tmp5);
    tmp5 = StringPad_343(state_, TNode<Context>{tmp3}, TNode<Object>{tmp4}, TorqueStructArguments{TNode<RawPtrT>{tmp0}, TNode<RawPtrT>{tmp1}, TNode<IntPtrT>{tmp2}}, "String.prototype.padEnd", kStringPadEnd_342(state_));
    arguments.PopAndReturn(tmp5);
  }
}

}  // namespace internal
}  // namespace v8

