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

TF_BUILTIN(StringPrototypeStartsWith, CodeStubAssembler) {
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
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, Object, String> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, Object, String> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, Object, String, String, Number, Number, Number, Smi> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, Object, String, String, Number, Number, Number, Smi> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, Object, String, String, Number, Number, Number, Smi, String, String, Number, Smi> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, Object, String, String, Number, Number, Number, Smi, String, String, Number, Smi, Oddball> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, Object, String, String, Number, Number, Number, Smi> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, torque_arguments.frame, torque_arguments.base, torque_arguments.length, parameter0, parameter1);

  if (block0.is_used()) {
    TNode<RawPtrT> tmp0;
    TNode<RawPtrT> tmp1;
    TNode<IntPtrT> tmp2;
    TNode<Context> tmp3;
    TNode<Object> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../src/builtins/string-startswith.tq", 14);
    TNode<IntPtrT> tmp5;
    USE(tmp5);
    tmp5 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 0);
    TNode<Object> tmp6;
    USE(tmp6);
    tmp6 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{tmp0}, TNode<RawPtrT>{tmp1}, TNode<IntPtrT>{tmp2}}, TNode<IntPtrT>{tmp5});
    ca_.SetSourcePosition("../../src/builtins/string-startswith.tq", 15);
    TNode<IntPtrT> tmp7;
    USE(tmp7);
    tmp7 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 1);
    TNode<Object> tmp8;
    USE(tmp8);
    tmp8 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{tmp0}, TNode<RawPtrT>{tmp1}, TNode<IntPtrT>{tmp2}}, TNode<IntPtrT>{tmp7});
    ca_.SetSourcePosition("../../src/builtins/string-startswith.tq", 19);
    TNode<Object> tmp9;
    USE(tmp9);
    tmp9 = RequireObjectCoercible_243(state_, TNode<Context>{tmp3}, TNode<Object>{tmp4}, "String.prototype.startsWith");
    ca_.SetSourcePosition("../../src/builtins/string-startswith.tq", 22);
    TNode<String> tmp10;
    USE(tmp10);
    tmp10 = CodeStubAssembler(state_).ToString_Inline(TNode<Context>{tmp3}, TNode<Object>{tmp9});
    ca_.SetSourcePosition("../../src/builtins/string-startswith.tq", 26);
    TNode<BoolT> tmp11;
    USE(tmp11);
    tmp11 = RegExpBuiltinsAssembler(state_).IsRegExp(TNode<Context>{tmp3}, TNode<Object>{tmp6});
    ca_.Branch(tmp11, &block1, &block2, tmp0, tmp1, tmp2, tmp3, tmp4, tmp6, tmp8, tmp9, tmp10);
  }

  if (block1.is_used()) {
    TNode<RawPtrT> tmp12;
    TNode<RawPtrT> tmp13;
    TNode<IntPtrT> tmp14;
    TNode<Context> tmp15;
    TNode<Object> tmp16;
    TNode<Object> tmp17;
    TNode<Object> tmp18;
    TNode<Object> tmp19;
    TNode<String> tmp20;
    ca_.Bind(&block1, &tmp12, &tmp13, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18, &tmp19, &tmp20);
    ca_.SetSourcePosition("../../src/builtins/string-startswith.tq", 27);
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{tmp15}, MessageTemplate::kFirstArgumentNotRegExp, "String.prototype.startsWith");
  }

  if (block2.is_used()) {
    TNode<RawPtrT> tmp21;
    TNode<RawPtrT> tmp22;
    TNode<IntPtrT> tmp23;
    TNode<Context> tmp24;
    TNode<Object> tmp25;
    TNode<Object> tmp26;
    TNode<Object> tmp27;
    TNode<Object> tmp28;
    TNode<String> tmp29;
    ca_.Bind(&block2, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26, &tmp27, &tmp28, &tmp29);
    ca_.SetSourcePosition("../../src/builtins/string-startswith.tq", 31);
    TNode<String> tmp30;
    USE(tmp30);
    tmp30 = CodeStubAssembler(state_).ToString_Inline(TNode<Context>{tmp24}, TNode<Object>{tmp26});
    ca_.SetSourcePosition("../../src/builtins/string-startswith.tq", 34);
    TNode<Number> tmp31;
    USE(tmp31);
    tmp31 = CodeStubAssembler(state_).ToInteger_Inline(TNode<Context>{tmp24}, TNode<Object>{tmp27});
    ca_.SetSourcePosition("../../src/builtins/string-startswith.tq", 38);
    TNode<Smi> tmp32;
    USE(tmp32);
    tmp32 = CodeStubAssembler(state_).LoadStringLengthAsSmi(TNode<String>{tmp29});
    ca_.SetSourcePosition("../../src/builtins/string-startswith.tq", 41);
    TNode<Number> tmp33;
    USE(tmp33);
    tmp33 = FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_160(state_, 0);
    TNode<Number> tmp34;
    USE(tmp34);
    tmp34 = CodeStubAssembler(state_).NumberMax(TNode<Number>{tmp31}, TNode<Number>{tmp33});
    TNode<Number> tmp35;
    USE(tmp35);
    tmp35 = CodeStubAssembler(state_).NumberMin(TNode<Number>{tmp34}, TNode<Number>{tmp32});
    ca_.SetSourcePosition("../../src/builtins/string-startswith.tq", 44);
    TNode<Smi> tmp36;
    USE(tmp36);
    tmp36 = CodeStubAssembler(state_).LoadStringLengthAsSmi(TNode<String>{tmp30});
    ca_.SetSourcePosition("../../src/builtins/string-startswith.tq", 47);
    TNode<Number> tmp37;
    USE(tmp37);
    tmp37 = CodeStubAssembler(state_).NumberAdd(TNode<Number>{tmp36}, TNode<Number>{tmp35});
    TNode<BoolT> tmp38;
    USE(tmp38);
    tmp38 = NumberIsGreaterThan_77(state_, TNode<Number>{tmp37}, TNode<Number>{tmp32});
    ca_.Branch(tmp38, &block3, &block4, tmp21, tmp22, tmp23, tmp24, tmp25, tmp26, tmp27, tmp28, tmp29, tmp30, tmp31, tmp32, tmp35, tmp36);
  }

  if (block3.is_used()) {
    TNode<RawPtrT> tmp39;
    TNode<RawPtrT> tmp40;
    TNode<IntPtrT> tmp41;
    TNode<Context> tmp42;
    TNode<Object> tmp43;
    TNode<Object> tmp44;
    TNode<Object> tmp45;
    TNode<Object> tmp46;
    TNode<String> tmp47;
    TNode<String> tmp48;
    TNode<Number> tmp49;
    TNode<Number> tmp50;
    TNode<Number> tmp51;
    TNode<Smi> tmp52;
    ca_.Bind(&block3, &tmp39, &tmp40, &tmp41, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47, &tmp48, &tmp49, &tmp50, &tmp51, &tmp52);
    TNode<Oddball> tmp53;
    USE(tmp53);
    tmp53 = False_66(state_);
    arguments.PopAndReturn(tmp53);
  }

  if (block4.is_used()) {
    TNode<RawPtrT> tmp54;
    TNode<RawPtrT> tmp55;
    TNode<IntPtrT> tmp56;
    TNode<Context> tmp57;
    TNode<Object> tmp58;
    TNode<Object> tmp59;
    TNode<Object> tmp60;
    TNode<Object> tmp61;
    TNode<String> tmp62;
    TNode<String> tmp63;
    TNode<Number> tmp64;
    TNode<Number> tmp65;
    TNode<Number> tmp66;
    TNode<Smi> tmp67;
    ca_.Bind(&block4, &tmp54, &tmp55, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67);
    ca_.SetSourcePosition("../../src/builtins/string-startswith.tq", 56);
    ca_.SetSourcePosition("../../src/builtins/string-startswith.tq", 55);
    TNode<Oddball> tmp68;
    USE(tmp68);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp68 = TryFastStringCompareSequence_339(state_, TNode<String>{tmp62}, TNode<String>{tmp63}, TNode<Number>{tmp66}, TNode<Smi>{tmp67}, &label0);
    ca_.Goto(&block7, tmp54, tmp55, tmp56, tmp57, tmp58, tmp59, tmp60, tmp61, tmp62, tmp63, tmp64, tmp65, tmp66, tmp67, tmp62, tmp63, tmp66, tmp67, tmp68);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block8, tmp54, tmp55, tmp56, tmp57, tmp58, tmp59, tmp60, tmp61, tmp62, tmp63, tmp64, tmp65, tmp66, tmp67, tmp62, tmp63, tmp66, tmp67);
    }
  }

  if (block8.is_used()) {
    TNode<RawPtrT> tmp69;
    TNode<RawPtrT> tmp70;
    TNode<IntPtrT> tmp71;
    TNode<Context> tmp72;
    TNode<Object> tmp73;
    TNode<Object> tmp74;
    TNode<Object> tmp75;
    TNode<Object> tmp76;
    TNode<String> tmp77;
    TNode<String> tmp78;
    TNode<Number> tmp79;
    TNode<Number> tmp80;
    TNode<Number> tmp81;
    TNode<Smi> tmp82;
    TNode<String> tmp83;
    TNode<String> tmp84;
    TNode<Number> tmp85;
    TNode<Smi> tmp86;
    ca_.Bind(&block8, &tmp69, &tmp70, &tmp71, &tmp72, &tmp73, &tmp74, &tmp75, &tmp76, &tmp77, &tmp78, &tmp79, &tmp80, &tmp81, &tmp82, &tmp83, &tmp84, &tmp85, &tmp86);
    ca_.Goto(&block6, tmp69, tmp70, tmp71, tmp72, tmp73, tmp74, tmp75, tmp76, tmp77, tmp78, tmp79, tmp80, tmp81, tmp82);
  }

  if (block7.is_used()) {
    TNode<RawPtrT> tmp87;
    TNode<RawPtrT> tmp88;
    TNode<IntPtrT> tmp89;
    TNode<Context> tmp90;
    TNode<Object> tmp91;
    TNode<Object> tmp92;
    TNode<Object> tmp93;
    TNode<Object> tmp94;
    TNode<String> tmp95;
    TNode<String> tmp96;
    TNode<Number> tmp97;
    TNode<Number> tmp98;
    TNode<Number> tmp99;
    TNode<Smi> tmp100;
    TNode<String> tmp101;
    TNode<String> tmp102;
    TNode<Number> tmp103;
    TNode<Smi> tmp104;
    TNode<Oddball> tmp105;
    ca_.Bind(&block7, &tmp87, &tmp88, &tmp89, &tmp90, &tmp91, &tmp92, &tmp93, &tmp94, &tmp95, &tmp96, &tmp97, &tmp98, &tmp99, &tmp100, &tmp101, &tmp102, &tmp103, &tmp104, &tmp105);
    arguments.PopAndReturn(tmp105);
  }

  if (block6.is_used()) {
    TNode<RawPtrT> tmp106;
    TNode<RawPtrT> tmp107;
    TNode<IntPtrT> tmp108;
    TNode<Context> tmp109;
    TNode<Object> tmp110;
    TNode<Object> tmp111;
    TNode<Object> tmp112;
    TNode<Object> tmp113;
    TNode<String> tmp114;
    TNode<String> tmp115;
    TNode<Number> tmp116;
    TNode<Number> tmp117;
    TNode<Number> tmp118;
    TNode<Smi> tmp119;
    ca_.Bind(&block6, &tmp106, &tmp107, &tmp108, &tmp109, &tmp110, &tmp111, &tmp112, &tmp113, &tmp114, &tmp115, &tmp116, &tmp117, &tmp118, &tmp119);
    ca_.SetSourcePosition("../../src/builtins/string-startswith.tq", 60);
    TNode<Oddball> tmp120;
    tmp120 = TORQUE_CAST(CodeStubAssembler(state_).CallRuntime(Runtime::kStringCompareSequence, tmp109, tmp114, tmp115, tmp118)); 
    USE(tmp120);
    arguments.PopAndReturn(tmp120);
  }
}

}  // namespace internal
}  // namespace v8

