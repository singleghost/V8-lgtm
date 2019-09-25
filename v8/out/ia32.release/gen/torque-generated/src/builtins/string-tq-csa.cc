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

TF_BUILTIN(StringPrototypeToString, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  TNode<Object> parameter1 = UncheckedCast<Object>(Parameter(Descriptor::kReceiver));
USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../src/builtins/string.tq", 12);
    TNode<Object> tmp2;
    USE(tmp2);
    tmp2 = CodeStubAssembler(state_).ToThisValue(TNode<Context>{tmp0}, TNode<Object>{tmp1}, PrimitiveType::kString, "String.prototype.toString");
    CodeStubAssembler(state_).Return(tmp2);
  }
}

TF_BUILTIN(StringPrototypeValueOf, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  TNode<Object> parameter1 = UncheckedCast<Object>(Parameter(Descriptor::kReceiver));
USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../src/builtins/string.tq", 19);
    TNode<Object> tmp2;
    USE(tmp2);
    tmp2 = CodeStubAssembler(state_).ToThisValue(TNode<Context>{tmp0}, TNode<Object>{tmp1}, PrimitiveType::kString, "String.prototype.valueOf");
    CodeStubAssembler(state_).Return(tmp2);
  }
}

TF_BUILTIN(StringToList, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  TNode<String> parameter1 = UncheckedCast<String>(Parameter(Descriptor::kString));
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<Context, String> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, String, IntPtrT, NativeContext, Map, JSArray, FixedArray, Smi, IntPtrT> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, String, IntPtrT, NativeContext, Map, JSArray, FixedArray, Smi, IntPtrT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, String, IntPtrT, NativeContext, Map, JSArray, FixedArray, Smi, IntPtrT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<String> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../src/builtins/string.tq", 31);
    TNode<IntPtrT> tmp2;
    USE(tmp2);
    tmp2 = CodeStubAssembler(state_).LoadStringLengthAsWord(TNode<String>{tmp1});
    ca_.SetSourcePosition("../../src/builtins/string.tq", 33);
    TNode<NativeContext> tmp3;
    USE(tmp3);
    tmp3 = CodeStubAssembler(state_).LoadNativeContext(TNode<Context>{tmp0});
    ca_.SetSourcePosition("../../src/builtins/string.tq", 34);
    TNode<Map> tmp4;
    USE(tmp4);
    tmp4 = CodeStubAssembler(state_).LoadJSArrayElementsMap(PACKED_ELEMENTS, TNode<NativeContext>{tmp3});
    ca_.SetSourcePosition("../../src/builtins/string.tq", 36);
    TNode<Smi> tmp5;
    USE(tmp5);
    tmp5 = CodeStubAssembler(state_).SmiTag(TNode<IntPtrT>{tmp2});
    ca_.SetSourcePosition("../../src/builtins/string.tq", 35);
    TNode<JSArray> tmp6;
    USE(tmp6);
    tmp6 = CodeStubAssembler(state_).AllocateJSArray(PACKED_ELEMENTS, TNode<Map>{tmp4}, TNode<IntPtrT>{tmp2}, TNode<Smi>{tmp5}, CodeStubAssembler::kAllowLargeObjectAllocation);
    ca_.SetSourcePosition("../../src/builtins/string.tq", 38);
    TNode<IntPtrT> tmp7 = ca_.IntPtrConstant(JSObject::kElementsOffset);
    USE(tmp7);
    TNode<FixedArrayBase>tmp8 = CodeStubAssembler(state_).LoadReference<FixedArrayBase>(CodeStubAssembler::Reference{tmp6, tmp7});
    TNode<FixedArray> tmp9;
    USE(tmp9);
    tmp9 = UnsafeCast10FixedArray_1432(state_, TNode<Context>{tmp0}, TNode<Object>{tmp8});
    ca_.SetSourcePosition("../../src/builtins/string.tq", 40);
    TNode<Smi> tmp10;
    USE(tmp10);
    tmp10 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 0);
    ca_.SetSourcePosition("../../src/builtins/string.tq", 41);
    TNode<IntPtrT> tmp11;
    USE(tmp11);
    tmp11 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 0);
    ca_.SetSourcePosition("../../src/builtins/string.tq", 42);
    ca_.Goto(&block3, tmp0, tmp1, tmp2, tmp3, tmp4, tmp6, tmp9, tmp10, tmp11);
  }

  if (block3.is_used()) {
    TNode<Context> tmp12;
    TNode<String> tmp13;
    TNode<IntPtrT> tmp14;
    TNode<NativeContext> tmp15;
    TNode<Map> tmp16;
    TNode<JSArray> tmp17;
    TNode<FixedArray> tmp18;
    TNode<Smi> tmp19;
    TNode<IntPtrT> tmp20;
    ca_.Bind(&block3, &tmp12, &tmp13, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18, &tmp19, &tmp20);
    TNode<BoolT> tmp21;
    USE(tmp21);
    tmp21 = CodeStubAssembler(state_).IntPtrLessThan(TNode<IntPtrT>{tmp20}, TNode<IntPtrT>{tmp14});
    ca_.Branch(tmp21, &block1, &block2, tmp12, tmp13, tmp14, tmp15, tmp16, tmp17, tmp18, tmp19, tmp20);
  }

  if (block1.is_used()) {
    TNode<Context> tmp22;
    TNode<String> tmp23;
    TNode<IntPtrT> tmp24;
    TNode<NativeContext> tmp25;
    TNode<Map> tmp26;
    TNode<JSArray> tmp27;
    TNode<FixedArray> tmp28;
    TNode<Smi> tmp29;
    TNode<IntPtrT> tmp30;
    ca_.Bind(&block1, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26, &tmp27, &tmp28, &tmp29, &tmp30);
    ca_.SetSourcePosition("../../src/builtins/string.tq", 43);
    TNode<Int32T> tmp31;
    USE(tmp31);
    tmp31 = StringBuiltinsAssembler(state_).LoadSurrogatePairAt(TNode<String>{tmp23}, TNode<IntPtrT>{tmp24}, TNode<IntPtrT>{tmp30}, UnicodeEncoding::UTF16);
    ca_.SetSourcePosition("../../src/builtins/string.tq", 44);
    TNode<String> tmp32;
    USE(tmp32);
    tmp32 = StringBuiltinsAssembler(state_).StringFromSingleUTF16EncodedCodePoint(TNode<Int32T>{tmp31});
    ca_.SetSourcePosition("../../src/builtins/string.tq", 45);
    StoreFixedArrayDirect_217(state_, TNode<FixedArray>{tmp28}, TNode<Smi>{tmp29}, TNode<Object>{tmp32});
    ca_.SetSourcePosition("../../src/builtins/string.tq", 47);
    TNode<IntPtrT> tmp33;
    USE(tmp33);
    tmp33 = CodeStubAssembler(state_).LoadStringLengthAsWord(TNode<String>{tmp32});
    TNode<IntPtrT> tmp34;
    USE(tmp34);
    tmp34 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp30}, TNode<IntPtrT>{tmp33});
    ca_.SetSourcePosition("../../src/builtins/string.tq", 48);
    TNode<Smi> tmp35;
    USE(tmp35);
    tmp35 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 1);
    TNode<Smi> tmp36;
    USE(tmp36);
    tmp36 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{tmp29}, TNode<Smi>{tmp35});
    ca_.SetSourcePosition("../../src/builtins/string.tq", 42);
    ca_.Goto(&block3, tmp22, tmp23, tmp24, tmp25, tmp26, tmp27, tmp28, tmp36, tmp34);
  }

  if (block2.is_used()) {
    TNode<Context> tmp37;
    TNode<String> tmp38;
    TNode<IntPtrT> tmp39;
    TNode<NativeContext> tmp40;
    TNode<Map> tmp41;
    TNode<JSArray> tmp42;
    TNode<FixedArray> tmp43;
    TNode<Smi> tmp44;
    TNode<IntPtrT> tmp45;
    ca_.Bind(&block2, &tmp37, &tmp38, &tmp39, &tmp40, &tmp41, &tmp42, &tmp43, &tmp44, &tmp45);
    ca_.SetSourcePosition("../../src/builtins/string.tq", 52);
    TNode<IntPtrT> tmp46 = ca_.IntPtrConstant(JSArray::kLengthOffset);
    USE(tmp46);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp42, tmp46}, tmp44);
    ca_.SetSourcePosition("../../src/builtins/string.tq", 54);
    CodeStubAssembler(state_).Return(tmp42);
  }
}

void GenerateStringAt_338(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_receiver, TNode<Object> p_position, const char* p_methodName, compiler::CodeAssemblerLabel* label_IfInBounds, compiler::TypedCodeAssemblerVariable<String>* label_IfInBounds_parameter_0, compiler::TypedCodeAssemblerVariable<IntPtrT>* label_IfInBounds_parameter_1, compiler::TypedCodeAssemblerVariable<IntPtrT>* label_IfInBounds_parameter_2, compiler::CodeAssemblerLabel* label_IfOutOfBounds) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, String, Number> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, String, Number> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, String, Number, IntPtrT, IntPtrT> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, String, Number, IntPtrT, IntPtrT> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<String, IntPtrT, IntPtrT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_receiver, p_position);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Object> tmp1;
    TNode<Object> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../src/builtins/string.tq", 62);
    TNode<String> tmp3;
    USE(tmp3);
    tmp3 = FromConstexpr6String18ATconstexpr_string_156(state_, p_methodName);
    TNode<String> tmp4;
    USE(tmp4);
    tmp4 = CodeStubAssembler(state_).ToThisString(TNode<Context>{tmp0}, TNode<Object>{tmp1}, TNode<String>{tmp3});
    ca_.SetSourcePosition("../../src/builtins/string.tq", 66);
    TNode<Number> tmp5;
    USE(tmp5);
    tmp5 = CodeStubAssembler(state_).ToInteger_Inline(TNode<Context>{tmp0}, TNode<Object>{tmp2}, CodeStubAssembler::ToIntegerTruncationMode::kTruncateMinusZero);
    ca_.SetSourcePosition("../../src/builtins/string.tq", 65);
    ca_.SetSourcePosition("../../src/builtins/string.tq", 67);
    TNode<BoolT> tmp6;
    USE(tmp6);
    tmp6 = CodeStubAssembler(state_).TaggedIsNotSmi(TNode<Object>{tmp5});
    ca_.Branch(tmp6, &block3, &block4, tmp0, tmp1, tmp2, tmp4, tmp5);
  }

  if (block3.is_used()) {
    TNode<Context> tmp7;
    TNode<Object> tmp8;
    TNode<Object> tmp9;
    TNode<String> tmp10;
    TNode<Number> tmp11;
    ca_.Bind(&block3, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11);
    ca_.Goto(&block2);
  }

  if (block4.is_used()) {
    TNode<Context> tmp12;
    TNode<Object> tmp13;
    TNode<Object> tmp14;
    TNode<String> tmp15;
    TNode<Number> tmp16;
    ca_.Bind(&block4, &tmp12, &tmp13, &tmp14, &tmp15, &tmp16);
    ca_.SetSourcePosition("../../src/builtins/string.tq", 68);
    TNode<Smi> tmp17;
    USE(tmp17);
    tmp17 = UnsafeCast5ATSmi_1433(state_, TNode<Context>{tmp12}, TNode<Object>{tmp16});
    TNode<IntPtrT> tmp18;
    USE(tmp18);
    tmp18 = CodeStubAssembler(state_).SmiUntag(TNode<Smi>{tmp17});
    ca_.SetSourcePosition("../../src/builtins/string.tq", 69);
    TNode<IntPtrT> tmp19;
    USE(tmp19);
    tmp19 = CodeStubAssembler(state_).LoadStringLengthAsWord(TNode<String>{tmp15});
    ca_.SetSourcePosition("../../src/builtins/string.tq", 70);
    TNode<UintPtrT> tmp20;
    USE(tmp20);
    tmp20 = Convert9ATuintptr8ATintptr_205(state_, TNode<IntPtrT>{tmp18});
    TNode<UintPtrT> tmp21;
    USE(tmp21);
    tmp21 = Convert9ATuintptr8ATintptr_205(state_, TNode<IntPtrT>{tmp19});
    TNode<BoolT> tmp22;
    USE(tmp22);
    tmp22 = CodeStubAssembler(state_).UintPtrGreaterThanOrEqual(TNode<UintPtrT>{tmp20}, TNode<UintPtrT>{tmp21});
    ca_.Branch(tmp22, &block5, &block6, tmp12, tmp13, tmp14, tmp15, tmp16, tmp18, tmp19);
  }

  if (block5.is_used()) {
    TNode<Context> tmp23;
    TNode<Object> tmp24;
    TNode<Object> tmp25;
    TNode<String> tmp26;
    TNode<Number> tmp27;
    TNode<IntPtrT> tmp28;
    TNode<IntPtrT> tmp29;
    ca_.Bind(&block5, &tmp23, &tmp24, &tmp25, &tmp26, &tmp27, &tmp28, &tmp29);
    ca_.Goto(&block2);
  }

  if (block6.is_used()) {
    TNode<Context> tmp30;
    TNode<Object> tmp31;
    TNode<Object> tmp32;
    TNode<String> tmp33;
    TNode<Number> tmp34;
    TNode<IntPtrT> tmp35;
    TNode<IntPtrT> tmp36;
    ca_.Bind(&block6, &tmp30, &tmp31, &tmp32, &tmp33, &tmp34, &tmp35, &tmp36);
    ca_.SetSourcePosition("../../src/builtins/string.tq", 71);
    ca_.Goto(&block1, tmp33, tmp35, tmp36);
  }

  if (block1.is_used()) {
    TNode<String> tmp37;
    TNode<IntPtrT> tmp38;
    TNode<IntPtrT> tmp39;
    ca_.Bind(&block1, &tmp37, &tmp38, &tmp39);
    ca_.SetSourcePosition("../../src/builtins/string.tq", 57);
    *label_IfInBounds_parameter_2 = tmp39;
    *label_IfInBounds_parameter_1 = tmp38;
    *label_IfInBounds_parameter_0 = tmp37;
    ca_.Goto(label_IfInBounds);
  }

  if (block2.is_used()) {
    ca_.Bind(&block2);
    ca_.Goto(label_IfOutOfBounds);
  }
}

TF_BUILTIN(StringPrototypeCharAt, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  TNode<Object> parameter1 = UncheckedCast<Object>(Parameter(Descriptor::kReceiver));
USE(parameter1);
  TNode<Object> parameter2 = UncheckedCast<Object>(Parameter(Descriptor::kPosition));
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, String, IntPtrT, IntPtrT> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, String, IntPtrT, IntPtrT> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Object> tmp1;
    TNode<Object> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../src/builtins/string.tq", 78);
    compiler::TypedCodeAssemblerVariable<String> result_0_0(&ca_);
    compiler::TypedCodeAssemblerVariable<IntPtrT> result_0_1(&ca_);
    compiler::TypedCodeAssemblerVariable<IntPtrT> result_0_2(&ca_);
    compiler::CodeAssemblerLabel label0(&ca_);
    compiler::CodeAssemblerLabel label1(&ca_);
    GenerateStringAt_338(state_, TNode<Context>{tmp0}, TNode<Object>{tmp1}, TNode<Object>{tmp2}, "String.prototype.charAt", &label0, &result_0_0, &result_0_1, &result_0_2, &label1);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block5, tmp0, tmp1, tmp2, tmp1, tmp2, result_0_0.value(), result_0_1.value(), result_0_2.value());
    }
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block6, tmp0, tmp1, tmp2, tmp1, tmp2);
    }
  }

  if (block5.is_used()) {
    TNode<Context> tmp3;
    TNode<Object> tmp4;
    TNode<Object> tmp5;
    TNode<Object> tmp6;
    TNode<Object> tmp7;
    TNode<String> tmp8;
    TNode<IntPtrT> tmp9;
    TNode<IntPtrT> tmp10;
    ca_.Bind(&block5, &tmp3, &tmp4, &tmp5, &tmp6, &tmp7, &tmp8, &tmp9, &tmp10);
    ca_.Goto(&block4, tmp3, tmp4, tmp5, tmp8, tmp9, tmp10);
  }

  if (block6.is_used()) {
    TNode<Context> tmp11;
    TNode<Object> tmp12;
    TNode<Object> tmp13;
    TNode<Object> tmp14;
    TNode<Object> tmp15;
    ca_.Bind(&block6, &tmp11, &tmp12, &tmp13, &tmp14, &tmp15);
    ca_.Goto(&block2, tmp11, tmp12, tmp13);
  }

  if (block4.is_used()) {
    TNode<Context> tmp16;
    TNode<Object> tmp17;
    TNode<Object> tmp18;
    TNode<String> tmp19;
    TNode<IntPtrT> tmp20;
    TNode<IntPtrT> tmp21;
    ca_.Bind(&block4, &tmp16, &tmp17, &tmp18, &tmp19, &tmp20, &tmp21);
    ca_.SetSourcePosition("../../src/builtins/string.tq", 82);
    TNode<Int32T> tmp22;
    USE(tmp22);
    tmp22 = CodeStubAssembler(state_).StringCharCodeAt(TNode<String>{tmp19}, TNode<IntPtrT>{tmp20});
    ca_.SetSourcePosition("../../src/builtins/string.tq", 83);
    TNode<String> tmp23;
    USE(tmp23);
    tmp23 = CodeStubAssembler(state_).StringFromSingleCharCode(TNode<Int32T>{tmp22});
    CodeStubAssembler(state_).Return(tmp23);
  }

  if (block2.is_used()) {
    TNode<Context> tmp24;
    TNode<Object> tmp25;
    TNode<Object> tmp26;
    ca_.Bind(&block2, &tmp24, &tmp25, &tmp26);
    ca_.SetSourcePosition("../../src/builtins/string.tq", 86);
    TNode<String> tmp27;
    USE(tmp27);
    tmp27 = kEmptyString_67(state_);
    CodeStubAssembler(state_).Return(tmp27);
  }
}

TF_BUILTIN(StringPrototypeCharCodeAt, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  TNode<Object> parameter1 = UncheckedCast<Object>(Parameter(Descriptor::kReceiver));
USE(parameter1);
  TNode<Object> parameter2 = UncheckedCast<Object>(Parameter(Descriptor::kPosition));
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, String, IntPtrT, IntPtrT> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, String, IntPtrT, IntPtrT> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Object> tmp1;
    TNode<Object> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../src/builtins/string.tq", 94);
    compiler::TypedCodeAssemblerVariable<String> result_0_0(&ca_);
    compiler::TypedCodeAssemblerVariable<IntPtrT> result_0_1(&ca_);
    compiler::TypedCodeAssemblerVariable<IntPtrT> result_0_2(&ca_);
    compiler::CodeAssemblerLabel label0(&ca_);
    compiler::CodeAssemblerLabel label1(&ca_);
    GenerateStringAt_338(state_, TNode<Context>{tmp0}, TNode<Object>{tmp1}, TNode<Object>{tmp2}, "String.prototype.charCodeAt", &label0, &result_0_0, &result_0_1, &result_0_2, &label1);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block5, tmp0, tmp1, tmp2, tmp1, tmp2, result_0_0.value(), result_0_1.value(), result_0_2.value());
    }
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block6, tmp0, tmp1, tmp2, tmp1, tmp2);
    }
  }

  if (block5.is_used()) {
    TNode<Context> tmp3;
    TNode<Object> tmp4;
    TNode<Object> tmp5;
    TNode<Object> tmp6;
    TNode<Object> tmp7;
    TNode<String> tmp8;
    TNode<IntPtrT> tmp9;
    TNode<IntPtrT> tmp10;
    ca_.Bind(&block5, &tmp3, &tmp4, &tmp5, &tmp6, &tmp7, &tmp8, &tmp9, &tmp10);
    ca_.Goto(&block4, tmp3, tmp4, tmp5, tmp8, tmp9, tmp10);
  }

  if (block6.is_used()) {
    TNode<Context> tmp11;
    TNode<Object> tmp12;
    TNode<Object> tmp13;
    TNode<Object> tmp14;
    TNode<Object> tmp15;
    ca_.Bind(&block6, &tmp11, &tmp12, &tmp13, &tmp14, &tmp15);
    ca_.Goto(&block2, tmp11, tmp12, tmp13);
  }

  if (block4.is_used()) {
    TNode<Context> tmp16;
    TNode<Object> tmp17;
    TNode<Object> tmp18;
    TNode<String> tmp19;
    TNode<IntPtrT> tmp20;
    TNode<IntPtrT> tmp21;
    ca_.Bind(&block4, &tmp16, &tmp17, &tmp18, &tmp19, &tmp20, &tmp21);
    ca_.SetSourcePosition("../../src/builtins/string.tq", 98);
    TNode<Int32T> tmp22;
    USE(tmp22);
    tmp22 = CodeStubAssembler(state_).StringCharCodeAt(TNode<String>{tmp19}, TNode<IntPtrT>{tmp20});
    ca_.SetSourcePosition("../../src/builtins/string.tq", 99);
    TNode<Smi> tmp23;
    USE(tmp23);
    tmp23 = Convert5ATSmi7ATint32_178(state_, TNode<Int32T>{tmp22});
    CodeStubAssembler(state_).Return(tmp23);
  }

  if (block2.is_used()) {
    TNode<Context> tmp24;
    TNode<Object> tmp25;
    TNode<Object> tmp26;
    ca_.Bind(&block2, &tmp24, &tmp25, &tmp26);
    ca_.SetSourcePosition("../../src/builtins/string.tq", 102);
    TNode<HeapNumber> tmp27;
    USE(tmp27);
    tmp27 = kNaN_69(state_);
    CodeStubAssembler(state_).Return(tmp27);
  }
}

TF_BUILTIN(StringPrototypeCodePointAt, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  TNode<Object> parameter1 = UncheckedCast<Object>(Parameter(Descriptor::kReceiver));
USE(parameter1);
  TNode<Object> parameter2 = UncheckedCast<Object>(Parameter(Descriptor::kPosition));
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, String, IntPtrT, IntPtrT> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, String, IntPtrT, IntPtrT> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Object> tmp1;
    TNode<Object> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../src/builtins/string.tq", 110);
    compiler::TypedCodeAssemblerVariable<String> result_0_0(&ca_);
    compiler::TypedCodeAssemblerVariable<IntPtrT> result_0_1(&ca_);
    compiler::TypedCodeAssemblerVariable<IntPtrT> result_0_2(&ca_);
    compiler::CodeAssemblerLabel label0(&ca_);
    compiler::CodeAssemblerLabel label1(&ca_);
    GenerateStringAt_338(state_, TNode<Context>{tmp0}, TNode<Object>{tmp1}, TNode<Object>{tmp2}, "String.prototype.codePointAt", &label0, &result_0_0, &result_0_1, &result_0_2, &label1);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block5, tmp0, tmp1, tmp2, tmp1, tmp2, result_0_0.value(), result_0_1.value(), result_0_2.value());
    }
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block6, tmp0, tmp1, tmp2, tmp1, tmp2);
    }
  }

  if (block5.is_used()) {
    TNode<Context> tmp3;
    TNode<Object> tmp4;
    TNode<Object> tmp5;
    TNode<Object> tmp6;
    TNode<Object> tmp7;
    TNode<String> tmp8;
    TNode<IntPtrT> tmp9;
    TNode<IntPtrT> tmp10;
    ca_.Bind(&block5, &tmp3, &tmp4, &tmp5, &tmp6, &tmp7, &tmp8, &tmp9, &tmp10);
    ca_.Goto(&block4, tmp3, tmp4, tmp5, tmp8, tmp9, tmp10);
  }

  if (block6.is_used()) {
    TNode<Context> tmp11;
    TNode<Object> tmp12;
    TNode<Object> tmp13;
    TNode<Object> tmp14;
    TNode<Object> tmp15;
    ca_.Bind(&block6, &tmp11, &tmp12, &tmp13, &tmp14, &tmp15);
    ca_.Goto(&block2, tmp11, tmp12, tmp13);
  }

  if (block4.is_used()) {
    TNode<Context> tmp16;
    TNode<Object> tmp17;
    TNode<Object> tmp18;
    TNode<String> tmp19;
    TNode<IntPtrT> tmp20;
    TNode<IntPtrT> tmp21;
    ca_.Bind(&block4, &tmp16, &tmp17, &tmp18, &tmp19, &tmp20, &tmp21);
    ca_.SetSourcePosition("../../src/builtins/string.tq", 116);
    TNode<Int32T> tmp22;
    USE(tmp22);
    tmp22 = StringBuiltinsAssembler(state_).LoadSurrogatePairAt(TNode<String>{tmp19}, TNode<IntPtrT>{tmp21}, TNode<IntPtrT>{tmp20}, UnicodeEncoding::UTF32);
    ca_.SetSourcePosition("../../src/builtins/string.tq", 117);
    TNode<Smi> tmp23;
    USE(tmp23);
    tmp23 = Convert5ATSmi7ATint32_178(state_, TNode<Int32T>{tmp22});
    CodeStubAssembler(state_).Return(tmp23);
  }

  if (block2.is_used()) {
    TNode<Context> tmp24;
    TNode<Object> tmp25;
    TNode<Object> tmp26;
    ca_.Bind(&block2, &tmp24, &tmp25, &tmp26);
    ca_.SetSourcePosition("../../src/builtins/string.tq", 120);
    TNode<Oddball> tmp27;
    USE(tmp27);
    tmp27 = Undefined_64(state_);
    CodeStubAssembler(state_).Return(tmp27);
  }
}

TF_BUILTIN(StringPrototypeConcat, CodeStubAssembler) {
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
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, String, IntPtrT, IntPtrT> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, String, IntPtrT, IntPtrT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, String, IntPtrT, IntPtrT> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, String, IntPtrT, IntPtrT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, torque_arguments.frame, torque_arguments.base, torque_arguments.length, parameter0, parameter1);

  if (block0.is_used()) {
    TNode<RawPtrT> tmp0;
    TNode<RawPtrT> tmp1;
    TNode<IntPtrT> tmp2;
    TNode<Context> tmp3;
    TNode<Object> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../src/builtins/string.tq", 129);
    TNode<String> tmp5;
    USE(tmp5);
    tmp5 = FromConstexpr6String18ATconstexpr_string_156(state_, "String.prototype.concat");
    TNode<String> tmp6;
    USE(tmp6);
    tmp6 = CodeStubAssembler(state_).ToThisString(TNode<Context>{tmp3}, TNode<Object>{tmp4}, TNode<String>{tmp5});
    ca_.SetSourcePosition("../../src/builtins/string.tq", 132);
    TNode<IntPtrT> tmp7;
    USE(tmp7);
    tmp7 = Convert8ATintptr8ATintptr_1494(state_, TNode<IntPtrT>{tmp2});
    ca_.SetSourcePosition("../../src/builtins/string.tq", 133);
    TNode<IntPtrT> tmp8;
    USE(tmp8);
    tmp8 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 0);
    ca_.Goto(&block3, tmp0, tmp1, tmp2, tmp3, tmp4, tmp6, tmp7, tmp8);
  }

  if (block3.is_used()) {
    TNode<RawPtrT> tmp9;
    TNode<RawPtrT> tmp10;
    TNode<IntPtrT> tmp11;
    TNode<Context> tmp12;
    TNode<Object> tmp13;
    TNode<String> tmp14;
    TNode<IntPtrT> tmp15;
    TNode<IntPtrT> tmp16;
    ca_.Bind(&block3, &tmp9, &tmp10, &tmp11, &tmp12, &tmp13, &tmp14, &tmp15, &tmp16);
    TNode<BoolT> tmp17;
    USE(tmp17);
    tmp17 = CodeStubAssembler(state_).IntPtrLessThan(TNode<IntPtrT>{tmp16}, TNode<IntPtrT>{tmp15});
    ca_.Branch(tmp17, &block1, &block2, tmp9, tmp10, tmp11, tmp12, tmp13, tmp14, tmp15, tmp16);
  }

  if (block1.is_used()) {
    TNode<RawPtrT> tmp18;
    TNode<RawPtrT> tmp19;
    TNode<IntPtrT> tmp20;
    TNode<Context> tmp21;
    TNode<Object> tmp22;
    TNode<String> tmp23;
    TNode<IntPtrT> tmp24;
    TNode<IntPtrT> tmp25;
    ca_.Bind(&block1, &tmp18, &tmp19, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25);
    ca_.SetSourcePosition("../../src/builtins/string.tq", 134);
    TNode<Object> tmp26;
    USE(tmp26);
    tmp26 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{tmp18}, TNode<RawPtrT>{tmp19}, TNode<IntPtrT>{tmp20}}, TNode<IntPtrT>{tmp25});
    TNode<String> tmp27;
    USE(tmp27);
    tmp27 = CodeStubAssembler(state_).ToString_Inline(TNode<Context>{tmp21}, TNode<Object>{tmp26});
    ca_.SetSourcePosition("../../src/builtins/string.tq", 135);
    TNode<String> tmp28;
    USE(tmp28);
    tmp28 = StringAdd_82(state_, TNode<Context>{tmp21}, TNode<String>{tmp23}, TNode<String>{tmp27});
    ca_.SetSourcePosition("../../src/builtins/string.tq", 133);
    ca_.Goto(&block4, tmp18, tmp19, tmp20, tmp21, tmp22, tmp28, tmp24, tmp25);
  }

  if (block4.is_used()) {
    TNode<RawPtrT> tmp29;
    TNode<RawPtrT> tmp30;
    TNode<IntPtrT> tmp31;
    TNode<Context> tmp32;
    TNode<Object> tmp33;
    TNode<String> tmp34;
    TNode<IntPtrT> tmp35;
    TNode<IntPtrT> tmp36;
    ca_.Bind(&block4, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33, &tmp34, &tmp35, &tmp36);
    TNode<IntPtrT> tmp37;
    USE(tmp37);
    tmp37 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 1);
    TNode<IntPtrT> tmp38;
    USE(tmp38);
    tmp38 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp36}, TNode<IntPtrT>{tmp37});
    ca_.Goto(&block3, tmp29, tmp30, tmp31, tmp32, tmp33, tmp34, tmp35, tmp38);
  }

  if (block2.is_used()) {
    TNode<RawPtrT> tmp39;
    TNode<RawPtrT> tmp40;
    TNode<IntPtrT> tmp41;
    TNode<Context> tmp42;
    TNode<Object> tmp43;
    TNode<String> tmp44;
    TNode<IntPtrT> tmp45;
    TNode<IntPtrT> tmp46;
    ca_.Bind(&block2, &tmp39, &tmp40, &tmp41, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46);
    ca_.SetSourcePosition("../../src/builtins/string.tq", 137);
    arguments.PopAndReturn(tmp44);
  }
}

TF_BUILTIN(StringConstructor, CodeStubAssembler) {
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
  TNode<Object> parameter2 = UncheckedCast<Object>(Parameter(Descriptor::kJSNewTarget));
USE(parameter2);
  TNode<JSFunction> parameter3 = UncheckedCast<JSFunction>(Parameter(Descriptor::kJSTarget));
USE(parameter3);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, JSFunction> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, JSFunction, IntPtrT, String> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, JSFunction, IntPtrT, String> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, JSFunction, IntPtrT, String> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, JSFunction, IntPtrT, String, Object, Object> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, JSFunction, IntPtrT, String, Object, Object, Symbol> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, JSFunction, IntPtrT, String, Object> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, JSFunction, IntPtrT, String, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, JSFunction, IntPtrT, String> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, JSFunction, IntPtrT, String> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, JSFunction, IntPtrT, String> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, JSFunction, IntPtrT, String> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, torque_arguments.frame, torque_arguments.base, torque_arguments.length, parameter0, parameter1, parameter2, parameter3);

  if (block0.is_used()) {
    TNode<RawPtrT> tmp0;
    TNode<RawPtrT> tmp1;
    TNode<IntPtrT> tmp2;
    TNode<Context> tmp3;
    TNode<Object> tmp4;
    TNode<Object> tmp5;
    TNode<JSFunction> tmp6;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4, &tmp5, &tmp6);
    ca_.SetSourcePosition("../../src/builtins/string.tq", 148);
    TNode<IntPtrT> tmp7;
    USE(tmp7);
    tmp7 = Convert8ATintptr8ATintptr_1494(state_, TNode<IntPtrT>{tmp2});
    ca_.SetSourcePosition("../../src/builtins/string.tq", 149);
    ca_.SetSourcePosition("../../src/builtins/string.tq", 151);
    TNode<IntPtrT> tmp8;
    USE(tmp8);
    tmp8 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 0);
    TNode<BoolT> tmp9;
    USE(tmp9);
    tmp9 = CodeStubAssembler(state_).WordEqual(TNode<IntPtrT>{tmp7}, TNode<IntPtrT>{tmp8});
    ca_.Branch(tmp9, &block1, &block2, tmp0, tmp1, tmp2, tmp3, tmp4, tmp5, tmp6, tmp7, ca_.Uninitialized<String>());
  }

  if (block1.is_used()) {
    TNode<RawPtrT> tmp10;
    TNode<RawPtrT> tmp11;
    TNode<IntPtrT> tmp12;
    TNode<Context> tmp13;
    TNode<Object> tmp14;
    TNode<Object> tmp15;
    TNode<JSFunction> tmp16;
    TNode<IntPtrT> tmp17;
    TNode<String> tmp18;
    ca_.Bind(&block1, &tmp10, &tmp11, &tmp12, &tmp13, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18);
    ca_.SetSourcePosition("../../src/builtins/string.tq", 152);
    TNode<String> tmp19;
    USE(tmp19);
    tmp19 = CodeStubAssembler(state_).EmptyStringConstant();
    ca_.SetSourcePosition("../../src/builtins/string.tq", 151);
    ca_.Goto(&block3, tmp10, tmp11, tmp12, tmp13, tmp14, tmp15, tmp16, tmp17, tmp19);
  }

  if (block2.is_used()) {
    TNode<RawPtrT> tmp20;
    TNode<RawPtrT> tmp21;
    TNode<IntPtrT> tmp22;
    TNode<Context> tmp23;
    TNode<Object> tmp24;
    TNode<Object> tmp25;
    TNode<JSFunction> tmp26;
    TNode<IntPtrT> tmp27;
    TNode<String> tmp28;
    ca_.Bind(&block2, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26, &tmp27, &tmp28);
    ca_.SetSourcePosition("../../src/builtins/string.tq", 157);
    TNode<Oddball> tmp29;
    USE(tmp29);
    tmp29 = Undefined_64(state_);
    TNode<BoolT> tmp30;
    USE(tmp30);
    tmp30 = CodeStubAssembler(state_).TaggedEqual(TNode<Object>{tmp25}, TNode<HeapObject>{tmp29});
    ca_.Branch(tmp30, &block4, &block5, tmp20, tmp21, tmp22, tmp23, tmp24, tmp25, tmp26, tmp27, tmp28);
  }

  if (block4.is_used()) {
    TNode<RawPtrT> tmp31;
    TNode<RawPtrT> tmp32;
    TNode<IntPtrT> tmp33;
    TNode<Context> tmp34;
    TNode<Object> tmp35;
    TNode<Object> tmp36;
    TNode<JSFunction> tmp37;
    TNode<IntPtrT> tmp38;
    TNode<String> tmp39;
    ca_.Bind(&block4, &tmp31, &tmp32, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39);
    ca_.SetSourcePosition("../../src/builtins/string.tq", 158);
    TNode<IntPtrT> tmp40;
    USE(tmp40);
    tmp40 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 0);
    TNode<Object> tmp41;
    USE(tmp41);
    tmp41 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{tmp31}, TNode<RawPtrT>{tmp32}, TNode<IntPtrT>{tmp33}}, TNode<IntPtrT>{tmp40});
    ca_.SetSourcePosition("../../src/builtins/string.tq", 159);
    TNode<Symbol> tmp42;
    USE(tmp42);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp42 = Cast6Symbol_1495(state_, TNode<Context>{tmp34}, TNode<Object>{tmp41}, &label0);
    ca_.Goto(&block8, tmp31, tmp32, tmp33, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39, tmp41, tmp41, tmp42);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block9, tmp31, tmp32, tmp33, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39, tmp41, tmp41);
    }
  }

  if (block9.is_used()) {
    TNode<RawPtrT> tmp43;
    TNode<RawPtrT> tmp44;
    TNode<IntPtrT> tmp45;
    TNode<Context> tmp46;
    TNode<Object> tmp47;
    TNode<Object> tmp48;
    TNode<JSFunction> tmp49;
    TNode<IntPtrT> tmp50;
    TNode<String> tmp51;
    TNode<Object> tmp52;
    TNode<Object> tmp53;
    ca_.Bind(&block9, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47, &tmp48, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53);
    ca_.Goto(&block7, tmp43, tmp44, tmp45, tmp46, tmp47, tmp48, tmp49, tmp50, tmp51, tmp52);
  }

  if (block8.is_used()) {
    TNode<RawPtrT> tmp54;
    TNode<RawPtrT> tmp55;
    TNode<IntPtrT> tmp56;
    TNode<Context> tmp57;
    TNode<Object> tmp58;
    TNode<Object> tmp59;
    TNode<JSFunction> tmp60;
    TNode<IntPtrT> tmp61;
    TNode<String> tmp62;
    TNode<Object> tmp63;
    TNode<Object> tmp64;
    TNode<Symbol> tmp65;
    ca_.Bind(&block8, &tmp54, &tmp55, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64, &tmp65);
    ca_.SetSourcePosition("../../src/builtins/string.tq", 160);
    TNode<String> tmp66;
    tmp66 = TORQUE_CAST(CodeStubAssembler(state_).CallRuntime(Runtime::kSymbolDescriptiveString, tmp57, tmp65)); 
    USE(tmp66);
    arguments.PopAndReturn(tmp66);
  }

  if (block7.is_used()) {
    TNode<RawPtrT> tmp67;
    TNode<RawPtrT> tmp68;
    TNode<IntPtrT> tmp69;
    TNode<Context> tmp70;
    TNode<Object> tmp71;
    TNode<Object> tmp72;
    TNode<JSFunction> tmp73;
    TNode<IntPtrT> tmp74;
    TNode<String> tmp75;
    TNode<Object> tmp76;
    ca_.Bind(&block7, &tmp67, &tmp68, &tmp69, &tmp70, &tmp71, &tmp72, &tmp73, &tmp74, &tmp75, &tmp76);
    ca_.SetSourcePosition("../../src/builtins/string.tq", 162);
    ca_.SetSourcePosition("../../src/builtins/string.tq", 159);
    ca_.Goto(&block6, tmp67, tmp68, tmp69, tmp70, tmp71, tmp72, tmp73, tmp74, tmp75, tmp76);
  }

  if (block6.is_used()) {
    TNode<RawPtrT> tmp77;
    TNode<RawPtrT> tmp78;
    TNode<IntPtrT> tmp79;
    TNode<Context> tmp80;
    TNode<Object> tmp81;
    TNode<Object> tmp82;
    TNode<JSFunction> tmp83;
    TNode<IntPtrT> tmp84;
    TNode<String> tmp85;
    TNode<Object> tmp86;
    ca_.Bind(&block6, &tmp77, &tmp78, &tmp79, &tmp80, &tmp81, &tmp82, &tmp83, &tmp84, &tmp85, &tmp86);
    ca_.SetSourcePosition("../../src/builtins/string.tq", 158);
    ca_.SetSourcePosition("../../src/builtins/string.tq", 157);
    ca_.Goto(&block5, tmp77, tmp78, tmp79, tmp80, tmp81, tmp82, tmp83, tmp84, tmp85);
  }

  if (block5.is_used()) {
    TNode<RawPtrT> tmp87;
    TNode<RawPtrT> tmp88;
    TNode<IntPtrT> tmp89;
    TNode<Context> tmp90;
    TNode<Object> tmp91;
    TNode<Object> tmp92;
    TNode<JSFunction> tmp93;
    TNode<IntPtrT> tmp94;
    TNode<String> tmp95;
    ca_.Bind(&block5, &tmp87, &tmp88, &tmp89, &tmp90, &tmp91, &tmp92, &tmp93, &tmp94, &tmp95);
    ca_.SetSourcePosition("../../src/builtins/string.tq", 167);
    TNode<IntPtrT> tmp96;
    USE(tmp96);
    tmp96 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 0);
    TNode<Object> tmp97;
    USE(tmp97);
    tmp97 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{tmp87}, TNode<RawPtrT>{tmp88}, TNode<IntPtrT>{tmp89}}, TNode<IntPtrT>{tmp96});
    TNode<String> tmp98;
    USE(tmp98);
    tmp98 = CodeStubAssembler(state_).ToString_Inline(TNode<Context>{tmp90}, TNode<Object>{tmp97});
    ca_.SetSourcePosition("../../src/builtins/string.tq", 151);
    ca_.Goto(&block3, tmp87, tmp88, tmp89, tmp90, tmp91, tmp92, tmp93, tmp94, tmp98);
  }

  if (block3.is_used()) {
    TNode<RawPtrT> tmp99;
    TNode<RawPtrT> tmp100;
    TNode<IntPtrT> tmp101;
    TNode<Context> tmp102;
    TNode<Object> tmp103;
    TNode<Object> tmp104;
    TNode<JSFunction> tmp105;
    TNode<IntPtrT> tmp106;
    TNode<String> tmp107;
    ca_.Bind(&block3, &tmp99, &tmp100, &tmp101, &tmp102, &tmp103, &tmp104, &tmp105, &tmp106, &tmp107);
    ca_.SetSourcePosition("../../src/builtins/string.tq", 170);
    TNode<Oddball> tmp108;
    USE(tmp108);
    tmp108 = Undefined_64(state_);
    TNode<BoolT> tmp109;
    USE(tmp109);
    tmp109 = CodeStubAssembler(state_).TaggedEqual(TNode<Object>{tmp104}, TNode<HeapObject>{tmp108});
    ca_.Branch(tmp109, &block10, &block11, tmp99, tmp100, tmp101, tmp102, tmp103, tmp104, tmp105, tmp106, tmp107);
  }

  if (block10.is_used()) {
    TNode<RawPtrT> tmp110;
    TNode<RawPtrT> tmp111;
    TNode<IntPtrT> tmp112;
    TNode<Context> tmp113;
    TNode<Object> tmp114;
    TNode<Object> tmp115;
    TNode<JSFunction> tmp116;
    TNode<IntPtrT> tmp117;
    TNode<String> tmp118;
    ca_.Bind(&block10, &tmp110, &tmp111, &tmp112, &tmp113, &tmp114, &tmp115, &tmp116, &tmp117, &tmp118);
    ca_.SetSourcePosition("../../src/builtins/string.tq", 171);
    arguments.PopAndReturn(tmp118);
  }

  if (block11.is_used()) {
    TNode<RawPtrT> tmp119;
    TNode<RawPtrT> tmp120;
    TNode<IntPtrT> tmp121;
    TNode<Context> tmp122;
    TNode<Object> tmp123;
    TNode<Object> tmp124;
    TNode<JSFunction> tmp125;
    TNode<IntPtrT> tmp126;
    TNode<String> tmp127;
    ca_.Bind(&block11, &tmp119, &tmp120, &tmp121, &tmp122, &tmp123, &tmp124, &tmp125, &tmp126, &tmp127);
    ca_.SetSourcePosition("../../src/builtins/string.tq", 175);
    TNode<JSReceiver> tmp128;
    USE(tmp128);
    tmp128 = UnsafeCast10JSReceiver_1480(state_, TNode<Context>{tmp122}, TNode<Object>{tmp124});
    TNode<Map> tmp129;
    USE(tmp129);
    tmp129 = GetDerivedMap_56(state_, TNode<Context>{tmp122}, TNode<JSFunction>{tmp125}, TNode<JSReceiver>{tmp128});
    ca_.SetSourcePosition("../../src/builtins/string.tq", 177);
    TNode<JSObject> tmp130;
    USE(tmp130);
    tmp130 = AllocateFastOrSlowJSObjectFromMap_57(state_, TNode<Context>{tmp122}, TNode<Map>{tmp129});
    TNode<JSPrimitiveWrapper> tmp131;
    USE(tmp131);
    tmp131 = UnsafeCast18JSPrimitiveWrapper_1481(state_, TNode<Context>{tmp122}, TNode<Object>{tmp130});
    ca_.SetSourcePosition("../../src/builtins/string.tq", 178);
    TNode<IntPtrT> tmp132 = ca_.IntPtrConstant(JSPrimitiveWrapper::kValueOffset);
    USE(tmp132);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp131, tmp132}, tmp127);
    ca_.SetSourcePosition("../../src/builtins/string.tq", 179);
    arguments.PopAndReturn(tmp131);
  }
}

TF_BUILTIN(StringAddConvertLeft, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  TNode<Object> parameter1 = UncheckedCast<Object>(Parameter(Descriptor::kLeft));
  USE(parameter1);
  TNode<String> parameter2 = UncheckedCast<String>(Parameter(Descriptor::kRight));
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, String> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Object> tmp1;
    TNode<String> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../src/builtins/string.tq", 184);
    TNode<Object> tmp3;
    USE(tmp3);
    tmp3 = ToPrimitiveDefault_71(state_, TNode<Context>{tmp0}, TNode<Object>{tmp1});
    TNode<String> tmp4;
    USE(tmp4);
    tmp4 = ToStringImpl_253(state_, TNode<Context>{tmp0}, TNode<Object>{tmp3});
    TNode<String> tmp5;
    USE(tmp5);
    tmp5 = StringAdd_82(state_, TNode<Context>{tmp0}, TNode<String>{tmp4}, TNode<String>{tmp2});
    CodeStubAssembler(state_).Return(tmp5);
  }
}

TF_BUILTIN(StringAddConvertRight, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  TNode<String> parameter1 = UncheckedCast<String>(Parameter(Descriptor::kLeft));
  USE(parameter1);
  TNode<Object> parameter2 = UncheckedCast<Object>(Parameter(Descriptor::kRight));
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<Context, String, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<String> tmp1;
    TNode<Object> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../src/builtins/string.tq", 189);
    TNode<Object> tmp3;
    USE(tmp3);
    tmp3 = ToPrimitiveDefault_71(state_, TNode<Context>{tmp0}, TNode<Object>{tmp2});
    TNode<String> tmp4;
    USE(tmp4);
    tmp4 = ToStringImpl_253(state_, TNode<Context>{tmp0}, TNode<Object>{tmp3});
    TNode<String> tmp5;
    USE(tmp5);
    tmp5 = StringAdd_82(state_, TNode<Context>{tmp0}, TNode<String>{tmp1}, TNode<String>{tmp4});
    CodeStubAssembler(state_).Return(tmp5);
  }
}

TNode<IntPtrT> Convert8ATintptr8ATintptr_1494(compiler::CodeAssemblerState* state_, TNode<IntPtrT> p_i) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_i);

  if (block0.is_used()) {
    TNode<IntPtrT> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 2706);
    ca_.Goto(&block1, tmp0, tmp0);
  }

  if (block1.is_used()) {
    TNode<IntPtrT> tmp1;
    TNode<IntPtrT> tmp2;
    ca_.Bind(&block1, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../src/builtins/string.tq", 132);
    ca_.Goto(&block2, tmp1, tmp2);
  }

    TNode<IntPtrT> tmp3;
    TNode<IntPtrT> tmp4;
    ca_.Bind(&block2, &tmp3, &tmp4);
  return TNode<IntPtrT>{tmp4};
}

TNode<Symbol> Cast6Symbol_1495(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, HeapObject> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject, Symbol> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Symbol> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Symbol> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
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
    TNode<Symbol> tmp10;
    USE(tmp10);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp10 = Cast6Symbol_121(state_, TNode<HeapObject>{tmp9}, &label0);
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
    TNode<Symbol> tmp17;
    ca_.Bind(&block5, &tmp14, &tmp15, &tmp16, &tmp17);
    ca_.Goto(&block2, tmp14, tmp15, tmp17);
  }

  if (block2.is_used()) {
    TNode<Context> tmp18;
    TNode<Object> tmp19;
    TNode<Symbol> tmp20;
    ca_.Bind(&block2, &tmp18, &tmp19, &tmp20);
    ca_.SetSourcePosition("../../src/builtins/string.tq", 159);
    ca_.Goto(&block7, tmp18, tmp19, tmp20);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    TNode<Context> tmp21;
    TNode<Object> tmp22;
    TNode<Symbol> tmp23;
    ca_.Bind(&block7, &tmp21, &tmp22, &tmp23);
  return TNode<Symbol>{tmp23};
}

}  // namespace internal
}  // namespace v8

