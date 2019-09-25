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

TF_BUILTIN(MathAcos, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  TNode<Object> parameter1 = UncheckedCast<Object>(Parameter(Descriptor::kX));
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../src/builtins/math.tq", 11);
    TNode<Number> tmp2;
    USE(tmp2);
    tmp2 = CodeStubAssembler(state_).ToNumber_Inline(TNode<Context>{tmp0}, TNode<Object>{tmp1});
    TNode<Float64T> tmp3;
    USE(tmp3);
    tmp3 = Convert9ATfloat6420UT5ATSmi10HeapNumber_196(state_, TNode<Number>{tmp2});
    ca_.SetSourcePosition("../../src/builtins/math.tq", 12);
    TNode<Float64T> tmp4;
    USE(tmp4);
    tmp4 = CodeStubAssembler(state_).Float64Acos(TNode<Float64T>{tmp3});
    TNode<Number> tmp5;
    USE(tmp5);
    tmp5 = Convert20UT5ATSmi10HeapNumber9ATfloat64_201(state_, TNode<Float64T>{tmp4});
    CodeStubAssembler(state_).Return(tmp5);
  }
}

TF_BUILTIN(MathAcosh, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  TNode<Object> parameter1 = UncheckedCast<Object>(Parameter(Descriptor::kX));
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../src/builtins/math.tq", 20);
    TNode<Number> tmp2;
    USE(tmp2);
    tmp2 = CodeStubAssembler(state_).ToNumber_Inline(TNode<Context>{tmp0}, TNode<Object>{tmp1});
    TNode<Float64T> tmp3;
    USE(tmp3);
    tmp3 = Convert9ATfloat6420UT5ATSmi10HeapNumber_196(state_, TNode<Number>{tmp2});
    ca_.SetSourcePosition("../../src/builtins/math.tq", 21);
    TNode<Float64T> tmp4;
    USE(tmp4);
    tmp4 = CodeStubAssembler(state_).Float64Acosh(TNode<Float64T>{tmp3});
    TNode<Number> tmp5;
    USE(tmp5);
    tmp5 = Convert20UT5ATSmi10HeapNumber9ATfloat64_201(state_, TNode<Float64T>{tmp4});
    CodeStubAssembler(state_).Return(tmp5);
  }
}

TF_BUILTIN(MathAsin, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  TNode<Object> parameter1 = UncheckedCast<Object>(Parameter(Descriptor::kX));
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../src/builtins/math.tq", 29);
    TNode<Number> tmp2;
    USE(tmp2);
    tmp2 = CodeStubAssembler(state_).ToNumber_Inline(TNode<Context>{tmp0}, TNode<Object>{tmp1});
    TNode<Float64T> tmp3;
    USE(tmp3);
    tmp3 = Convert9ATfloat6420UT5ATSmi10HeapNumber_196(state_, TNode<Number>{tmp2});
    ca_.SetSourcePosition("../../src/builtins/math.tq", 30);
    TNode<Float64T> tmp4;
    USE(tmp4);
    tmp4 = CodeStubAssembler(state_).Float64Asin(TNode<Float64T>{tmp3});
    TNode<Number> tmp5;
    USE(tmp5);
    tmp5 = Convert20UT5ATSmi10HeapNumber9ATfloat64_201(state_, TNode<Float64T>{tmp4});
    CodeStubAssembler(state_).Return(tmp5);
  }
}

TF_BUILTIN(MathAsinh, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  TNode<Object> parameter1 = UncheckedCast<Object>(Parameter(Descriptor::kX));
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../src/builtins/math.tq", 38);
    TNode<Number> tmp2;
    USE(tmp2);
    tmp2 = CodeStubAssembler(state_).ToNumber_Inline(TNode<Context>{tmp0}, TNode<Object>{tmp1});
    TNode<Float64T> tmp3;
    USE(tmp3);
    tmp3 = Convert9ATfloat6420UT5ATSmi10HeapNumber_196(state_, TNode<Number>{tmp2});
    ca_.SetSourcePosition("../../src/builtins/math.tq", 39);
    TNode<Float64T> tmp4;
    USE(tmp4);
    tmp4 = CodeStubAssembler(state_).Float64Asinh(TNode<Float64T>{tmp3});
    TNode<Number> tmp5;
    USE(tmp5);
    tmp5 = Convert20UT5ATSmi10HeapNumber9ATfloat64_201(state_, TNode<Float64T>{tmp4});
    CodeStubAssembler(state_).Return(tmp5);
  }
}

TF_BUILTIN(MathAtan, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  TNode<Object> parameter1 = UncheckedCast<Object>(Parameter(Descriptor::kX));
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../src/builtins/math.tq", 47);
    TNode<Number> tmp2;
    USE(tmp2);
    tmp2 = CodeStubAssembler(state_).ToNumber_Inline(TNode<Context>{tmp0}, TNode<Object>{tmp1});
    TNode<Float64T> tmp3;
    USE(tmp3);
    tmp3 = Convert9ATfloat6420UT5ATSmi10HeapNumber_196(state_, TNode<Number>{tmp2});
    ca_.SetSourcePosition("../../src/builtins/math.tq", 48);
    TNode<Float64T> tmp4;
    USE(tmp4);
    tmp4 = CodeStubAssembler(state_).Float64Atan(TNode<Float64T>{tmp3});
    TNode<Number> tmp5;
    USE(tmp5);
    tmp5 = Convert20UT5ATSmi10HeapNumber9ATfloat64_201(state_, TNode<Float64T>{tmp4});
    CodeStubAssembler(state_).Return(tmp5);
  }
}

TF_BUILTIN(MathAtan2, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  TNode<Object> parameter1 = UncheckedCast<Object>(Parameter(Descriptor::kY));
  USE(parameter1);
  TNode<Object> parameter2 = UncheckedCast<Object>(Parameter(Descriptor::kX));
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Object> tmp1;
    TNode<Object> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../src/builtins/math.tq", 56);
    TNode<Number> tmp3;
    USE(tmp3);
    tmp3 = CodeStubAssembler(state_).ToNumber_Inline(TNode<Context>{tmp0}, TNode<Object>{tmp1});
    TNode<Float64T> tmp4;
    USE(tmp4);
    tmp4 = Convert9ATfloat6420UT5ATSmi10HeapNumber_196(state_, TNode<Number>{tmp3});
    ca_.SetSourcePosition("../../src/builtins/math.tq", 57);
    TNode<Number> tmp5;
    USE(tmp5);
    tmp5 = CodeStubAssembler(state_).ToNumber_Inline(TNode<Context>{tmp0}, TNode<Object>{tmp2});
    TNode<Float64T> tmp6;
    USE(tmp6);
    tmp6 = Convert9ATfloat6420UT5ATSmi10HeapNumber_196(state_, TNode<Number>{tmp5});
    ca_.SetSourcePosition("../../src/builtins/math.tq", 58);
    TNode<Float64T> tmp7;
    USE(tmp7);
    tmp7 = CodeStubAssembler(state_).Float64Atan2(TNode<Float64T>{tmp4}, TNode<Float64T>{tmp6});
    TNode<Number> tmp8;
    USE(tmp8);
    tmp8 = Convert20UT5ATSmi10HeapNumber9ATfloat64_201(state_, TNode<Float64T>{tmp7});
    CodeStubAssembler(state_).Return(tmp8);
  }
}

TF_BUILTIN(MathAtanh, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  TNode<Object> parameter1 = UncheckedCast<Object>(Parameter(Descriptor::kX));
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../src/builtins/math.tq", 66);
    TNode<Number> tmp2;
    USE(tmp2);
    tmp2 = CodeStubAssembler(state_).ToNumber_Inline(TNode<Context>{tmp0}, TNode<Object>{tmp1});
    TNode<Float64T> tmp3;
    USE(tmp3);
    tmp3 = Convert9ATfloat6420UT5ATSmi10HeapNumber_196(state_, TNode<Number>{tmp2});
    ca_.SetSourcePosition("../../src/builtins/math.tq", 67);
    TNode<Float64T> tmp4;
    USE(tmp4);
    tmp4 = CodeStubAssembler(state_).Float64Atanh(TNode<Float64T>{tmp3});
    TNode<Number> tmp5;
    USE(tmp5);
    tmp5 = Convert20UT5ATSmi10HeapNumber9ATfloat64_201(state_, TNode<Float64T>{tmp4});
    CodeStubAssembler(state_).Return(tmp5);
  }
}

TF_BUILTIN(MathCbrt, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  TNode<Object> parameter1 = UncheckedCast<Object>(Parameter(Descriptor::kX));
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../src/builtins/math.tq", 75);
    TNode<Number> tmp2;
    USE(tmp2);
    tmp2 = CodeStubAssembler(state_).ToNumber_Inline(TNode<Context>{tmp0}, TNode<Object>{tmp1});
    TNode<Float64T> tmp3;
    USE(tmp3);
    tmp3 = Convert9ATfloat6420UT5ATSmi10HeapNumber_196(state_, TNode<Number>{tmp2});
    ca_.SetSourcePosition("../../src/builtins/math.tq", 76);
    TNode<Float64T> tmp4;
    USE(tmp4);
    tmp4 = CodeStubAssembler(state_).Float64Cbrt(TNode<Float64T>{tmp3});
    TNode<Number> tmp5;
    USE(tmp5);
    tmp5 = Convert20UT5ATSmi10HeapNumber9ATfloat64_201(state_, TNode<Float64T>{tmp4});
    CodeStubAssembler(state_).Return(tmp5);
  }
}

TF_BUILTIN(MathClz32, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  TNode<Object> parameter1 = UncheckedCast<Object>(Parameter(Descriptor::kX));
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Number, Int32T, Number, Number> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Number, Int32T, Number, Number, Smi> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Number, Int32T, Number> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Number, Int32T, Number> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../src/builtins/math.tq", 84);
    TNode<Number> tmp2;
    USE(tmp2);
    tmp2 = CodeStubAssembler(state_).ToNumber_Inline(TNode<Context>{tmp0}, TNode<Object>{tmp1});
    ca_.SetSourcePosition("../../src/builtins/math.tq", 86);
    ca_.SetSourcePosition("../../src/builtins/math.tq", 87);
    ca_.SetSourcePosition("../../src/builtins/math.tq", 88);
    TNode<Smi> tmp3;
    USE(tmp3);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp3 = Cast5ATSmi_83(state_, TNode<Object>{tmp2}, &label0);
    ca_.Goto(&block3, tmp0, tmp1, tmp2, ca_.Uninitialized<Int32T>(), tmp2, tmp2, tmp3);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1, tmp2, ca_.Uninitialized<Int32T>(), tmp2, tmp2);
    }
  }

  if (block4.is_used()) {
    TNode<Context> tmp4;
    TNode<Object> tmp5;
    TNode<Number> tmp6;
    TNode<Int32T> tmp7;
    TNode<Number> tmp8;
    TNode<Number> tmp9;
    ca_.Bind(&block4, &tmp4, &tmp5, &tmp6, &tmp7, &tmp8, &tmp9);
    ca_.Goto(&block2, tmp4, tmp5, tmp6, tmp7, tmp8);
  }

  if (block3.is_used()) {
    TNode<Context> tmp10;
    TNode<Object> tmp11;
    TNode<Number> tmp12;
    TNode<Int32T> tmp13;
    TNode<Number> tmp14;
    TNode<Number> tmp15;
    TNode<Smi> tmp16;
    ca_.Bind(&block3, &tmp10, &tmp11, &tmp12, &tmp13, &tmp14, &tmp15, &tmp16);
    ca_.SetSourcePosition("../../src/builtins/math.tq", 89);
    TNode<Int32T> tmp17;
    USE(tmp17);
    tmp17 = Convert7ATint325ATSmi_194(state_, TNode<Smi>{tmp16});
    ca_.SetSourcePosition("../../src/builtins/math.tq", 88);
    ca_.Goto(&block1, tmp10, tmp11, tmp12, tmp17, tmp14);
  }

  if (block2.is_used()) {
    TNode<Context> tmp18;
    TNode<Object> tmp19;
    TNode<Number> tmp20;
    TNode<Int32T> tmp21;
    TNode<Number> tmp22;
    ca_.Bind(&block2, &tmp18, &tmp19, &tmp20, &tmp21, &tmp22);
    ca_.SetSourcePosition("../../src/builtins/math.tq", 91);
    ca_.SetSourcePosition("../../src/builtins/math.tq", 92);
    TNode<Int32T> tmp23;
    USE(tmp23);
    tmp23 = CodeStubAssembler(state_).TruncateHeapNumberValueToWord32(TNode<HeapNumber>{ca_.UncheckedCast<HeapNumber>(tmp22)});
    ca_.SetSourcePosition("../../src/builtins/math.tq", 88);
    ca_.Goto(&block1, tmp18, tmp19, tmp20, tmp23, tmp22);
  }

  if (block1.is_used()) {
    TNode<Context> tmp24;
    TNode<Object> tmp25;
    TNode<Number> tmp26;
    TNode<Int32T> tmp27;
    TNode<Number> tmp28;
    ca_.Bind(&block1, &tmp24, &tmp25, &tmp26, &tmp27, &tmp28);
    ca_.SetSourcePosition("../../src/builtins/math.tq", 87);
    ca_.SetSourcePosition("../../src/builtins/math.tq", 96);
    TNode<Int32T> tmp29;
    USE(tmp29);
    tmp29 = CodeStubAssembler(state_).Word32Clz(TNode<Int32T>{tmp27});
    TNode<Number> tmp30;
    USE(tmp30);
    tmp30 = Convert20UT5ATSmi10HeapNumber7ATint32_175(state_, TNode<Int32T>{tmp29});
    CodeStubAssembler(state_).Return(tmp30);
  }
}

TF_BUILTIN(MathCos, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  TNode<Object> parameter1 = UncheckedCast<Object>(Parameter(Descriptor::kX));
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../src/builtins/math.tq", 104);
    TNode<Number> tmp2;
    USE(tmp2);
    tmp2 = CodeStubAssembler(state_).ToNumber_Inline(TNode<Context>{tmp0}, TNode<Object>{tmp1});
    TNode<Float64T> tmp3;
    USE(tmp3);
    tmp3 = Convert9ATfloat6420UT5ATSmi10HeapNumber_196(state_, TNode<Number>{tmp2});
    ca_.SetSourcePosition("../../src/builtins/math.tq", 105);
    TNode<Float64T> tmp4;
    USE(tmp4);
    tmp4 = CodeStubAssembler(state_).Float64Cos(TNode<Float64T>{tmp3});
    TNode<Number> tmp5;
    USE(tmp5);
    tmp5 = Convert20UT5ATSmi10HeapNumber9ATfloat64_201(state_, TNode<Float64T>{tmp4});
    CodeStubAssembler(state_).Return(tmp5);
  }
}

TF_BUILTIN(MathCosh, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  TNode<Object> parameter1 = UncheckedCast<Object>(Parameter(Descriptor::kX));
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../src/builtins/math.tq", 113);
    TNode<Number> tmp2;
    USE(tmp2);
    tmp2 = CodeStubAssembler(state_).ToNumber_Inline(TNode<Context>{tmp0}, TNode<Object>{tmp1});
    TNode<Float64T> tmp3;
    USE(tmp3);
    tmp3 = Convert9ATfloat6420UT5ATSmi10HeapNumber_196(state_, TNode<Number>{tmp2});
    ca_.SetSourcePosition("../../src/builtins/math.tq", 114);
    TNode<Float64T> tmp4;
    USE(tmp4);
    tmp4 = CodeStubAssembler(state_).Float64Cosh(TNode<Float64T>{tmp3});
    TNode<Number> tmp5;
    USE(tmp5);
    tmp5 = Convert20UT5ATSmi10HeapNumber9ATfloat64_201(state_, TNode<Float64T>{tmp4});
    CodeStubAssembler(state_).Return(tmp5);
  }
}

TF_BUILTIN(MathExp, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  TNode<Object> parameter1 = UncheckedCast<Object>(Parameter(Descriptor::kX));
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../src/builtins/math.tq", 122);
    TNode<Number> tmp2;
    USE(tmp2);
    tmp2 = CodeStubAssembler(state_).ToNumber_Inline(TNode<Context>{tmp0}, TNode<Object>{tmp1});
    TNode<Float64T> tmp3;
    USE(tmp3);
    tmp3 = Convert9ATfloat6420UT5ATSmi10HeapNumber_196(state_, TNode<Number>{tmp2});
    ca_.SetSourcePosition("../../src/builtins/math.tq", 123);
    TNode<Float64T> tmp4;
    USE(tmp4);
    tmp4 = CodeStubAssembler(state_).Float64Exp(TNode<Float64T>{tmp3});
    TNode<Number> tmp5;
    USE(tmp5);
    tmp5 = Convert20UT5ATSmi10HeapNumber9ATfloat64_201(state_, TNode<Float64T>{tmp4});
    CodeStubAssembler(state_).Return(tmp5);
  }
}

TF_BUILTIN(MathExpm1, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  TNode<Object> parameter1 = UncheckedCast<Object>(Parameter(Descriptor::kX));
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../src/builtins/math.tq", 131);
    TNode<Number> tmp2;
    USE(tmp2);
    tmp2 = CodeStubAssembler(state_).ToNumber_Inline(TNode<Context>{tmp0}, TNode<Object>{tmp1});
    TNode<Float64T> tmp3;
    USE(tmp3);
    tmp3 = Convert9ATfloat6420UT5ATSmi10HeapNumber_196(state_, TNode<Number>{tmp2});
    ca_.SetSourcePosition("../../src/builtins/math.tq", 132);
    TNode<Float64T> tmp4;
    USE(tmp4);
    tmp4 = CodeStubAssembler(state_).Float64Expm1(TNode<Float64T>{tmp3});
    TNode<Number> tmp5;
    USE(tmp5);
    tmp5 = Convert20UT5ATSmi10HeapNumber9ATfloat64_201(state_, TNode<Float64T>{tmp4});
    CodeStubAssembler(state_).Return(tmp5);
  }
}

TF_BUILTIN(MathFround, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  TNode<Object> parameter1 = UncheckedCast<Object>(Parameter(Descriptor::kX));
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../src/builtins/math.tq", 138);
    TNode<Number> tmp2;
    USE(tmp2);
    tmp2 = CodeStubAssembler(state_).ToNumber_Inline(TNode<Context>{tmp0}, TNode<Object>{tmp1});
    TNode<Float32T> tmp3;
    USE(tmp3);
    tmp3 = Convert9ATfloat3220UT5ATSmi10HeapNumber_200(state_, TNode<Number>{tmp2});
    ca_.SetSourcePosition("../../src/builtins/math.tq", 139);
    TNode<Float64T> tmp4;
    USE(tmp4);
    tmp4 = Convert9ATfloat649ATfloat32_198(state_, TNode<Float32T>{tmp3});
    ca_.SetSourcePosition("../../src/builtins/math.tq", 140);
    TNode<Number> tmp5;
    USE(tmp5);
    tmp5 = Convert20UT5ATSmi10HeapNumber9ATfloat64_201(state_, TNode<Float64T>{tmp4});
    CodeStubAssembler(state_).Return(tmp5);
  }
}

TF_BUILTIN(MathLog, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  TNode<Object> parameter1 = UncheckedCast<Object>(Parameter(Descriptor::kX));
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../src/builtins/math.tq", 148);
    TNode<Number> tmp2;
    USE(tmp2);
    tmp2 = CodeStubAssembler(state_).ToNumber_Inline(TNode<Context>{tmp0}, TNode<Object>{tmp1});
    TNode<Float64T> tmp3;
    USE(tmp3);
    tmp3 = Convert9ATfloat6420UT5ATSmi10HeapNumber_196(state_, TNode<Number>{tmp2});
    ca_.SetSourcePosition("../../src/builtins/math.tq", 149);
    TNode<Float64T> tmp4;
    USE(tmp4);
    tmp4 = CodeStubAssembler(state_).Float64Log(TNode<Float64T>{tmp3});
    TNode<Number> tmp5;
    USE(tmp5);
    tmp5 = Convert20UT5ATSmi10HeapNumber9ATfloat64_201(state_, TNode<Float64T>{tmp4});
    CodeStubAssembler(state_).Return(tmp5);
  }
}

TF_BUILTIN(MathLog1p, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  TNode<Object> parameter1 = UncheckedCast<Object>(Parameter(Descriptor::kX));
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../src/builtins/math.tq", 157);
    TNode<Number> tmp2;
    USE(tmp2);
    tmp2 = CodeStubAssembler(state_).ToNumber_Inline(TNode<Context>{tmp0}, TNode<Object>{tmp1});
    TNode<Float64T> tmp3;
    USE(tmp3);
    tmp3 = Convert9ATfloat6420UT5ATSmi10HeapNumber_196(state_, TNode<Number>{tmp2});
    ca_.SetSourcePosition("../../src/builtins/math.tq", 158);
    TNode<Float64T> tmp4;
    USE(tmp4);
    tmp4 = CodeStubAssembler(state_).Float64Log1p(TNode<Float64T>{tmp3});
    TNode<Number> tmp5;
    USE(tmp5);
    tmp5 = Convert20UT5ATSmi10HeapNumber9ATfloat64_201(state_, TNode<Float64T>{tmp4});
    CodeStubAssembler(state_).Return(tmp5);
  }
}

TF_BUILTIN(MathLog10, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  TNode<Object> parameter1 = UncheckedCast<Object>(Parameter(Descriptor::kX));
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../src/builtins/math.tq", 166);
    TNode<Number> tmp2;
    USE(tmp2);
    tmp2 = CodeStubAssembler(state_).ToNumber_Inline(TNode<Context>{tmp0}, TNode<Object>{tmp1});
    TNode<Float64T> tmp3;
    USE(tmp3);
    tmp3 = Convert9ATfloat6420UT5ATSmi10HeapNumber_196(state_, TNode<Number>{tmp2});
    ca_.SetSourcePosition("../../src/builtins/math.tq", 167);
    TNode<Float64T> tmp4;
    USE(tmp4);
    tmp4 = CodeStubAssembler(state_).Float64Log10(TNode<Float64T>{tmp3});
    TNode<Number> tmp5;
    USE(tmp5);
    tmp5 = Convert20UT5ATSmi10HeapNumber9ATfloat64_201(state_, TNode<Float64T>{tmp4});
    CodeStubAssembler(state_).Return(tmp5);
  }
}

TF_BUILTIN(MathLog2, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  TNode<Object> parameter1 = UncheckedCast<Object>(Parameter(Descriptor::kX));
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../src/builtins/math.tq", 175);
    TNode<Number> tmp2;
    USE(tmp2);
    tmp2 = CodeStubAssembler(state_).ToNumber_Inline(TNode<Context>{tmp0}, TNode<Object>{tmp1});
    TNode<Float64T> tmp3;
    USE(tmp3);
    tmp3 = Convert9ATfloat6420UT5ATSmi10HeapNumber_196(state_, TNode<Number>{tmp2});
    ca_.SetSourcePosition("../../src/builtins/math.tq", 176);
    TNode<Float64T> tmp4;
    USE(tmp4);
    tmp4 = CodeStubAssembler(state_).Float64Log2(TNode<Float64T>{tmp3});
    TNode<Number> tmp5;
    USE(tmp5);
    tmp5 = Convert20UT5ATSmi10HeapNumber9ATfloat64_201(state_, TNode<Float64T>{tmp4});
    CodeStubAssembler(state_).Return(tmp5);
  }
}

TF_BUILTIN(MathSin, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  TNode<Object> parameter1 = UncheckedCast<Object>(Parameter(Descriptor::kX));
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../src/builtins/math.tq", 184);
    TNode<Number> tmp2;
    USE(tmp2);
    tmp2 = CodeStubAssembler(state_).ToNumber_Inline(TNode<Context>{tmp0}, TNode<Object>{tmp1});
    TNode<Float64T> tmp3;
    USE(tmp3);
    tmp3 = Convert9ATfloat6420UT5ATSmi10HeapNumber_196(state_, TNode<Number>{tmp2});
    ca_.SetSourcePosition("../../src/builtins/math.tq", 185);
    TNode<Float64T> tmp4;
    USE(tmp4);
    tmp4 = CodeStubAssembler(state_).Float64Sin(TNode<Float64T>{tmp3});
    TNode<Number> tmp5;
    USE(tmp5);
    tmp5 = Convert20UT5ATSmi10HeapNumber9ATfloat64_201(state_, TNode<Float64T>{tmp4});
    CodeStubAssembler(state_).Return(tmp5);
  }
}

TF_BUILTIN(MathSign, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  TNode<Object> parameter1 = UncheckedCast<Object>(Parameter(Descriptor::kX));
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Number, Float64T> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Number, Float64T> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Number, Float64T> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Number, Float64T> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../src/builtins/math.tq", 191);
    TNode<Number> tmp2;
    USE(tmp2);
    tmp2 = CodeStubAssembler(state_).ToNumber_Inline(TNode<Context>{tmp0}, TNode<Object>{tmp1});
    ca_.SetSourcePosition("../../src/builtins/math.tq", 192);
    TNode<Float64T> tmp3;
    USE(tmp3);
    tmp3 = Convert9ATfloat6420UT5ATSmi10HeapNumber_196(state_, TNode<Number>{tmp2});
    ca_.SetSourcePosition("../../src/builtins/math.tq", 194);
    TNode<Float64T> tmp4;
    USE(tmp4);
    tmp4 = FromConstexpr9ATfloat6417ATconstexpr_int31_165(state_, 0);
    TNode<BoolT> tmp5;
    USE(tmp5);
    tmp5 = CodeStubAssembler(state_).Float64LessThan(TNode<Float64T>{tmp3}, TNode<Float64T>{tmp4});
    ca_.Branch(tmp5, &block1, &block2, tmp0, tmp1, tmp2, tmp3);
  }

  if (block1.is_used()) {
    TNode<Context> tmp6;
    TNode<Object> tmp7;
    TNode<Number> tmp8;
    TNode<Float64T> tmp9;
    ca_.Bind(&block1, &tmp6, &tmp7, &tmp8, &tmp9);
    ca_.SetSourcePosition("../../src/builtins/math.tq", 195);
    TNode<Number> tmp10;
    USE(tmp10);
    tmp10 = FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_160(state_, -1);
    CodeStubAssembler(state_).Return(tmp10);
  }

  if (block2.is_used()) {
    TNode<Context> tmp11;
    TNode<Object> tmp12;
    TNode<Number> tmp13;
    TNode<Float64T> tmp14;
    ca_.Bind(&block2, &tmp11, &tmp12, &tmp13, &tmp14);
    ca_.SetSourcePosition("../../src/builtins/math.tq", 196);
    TNode<Float64T> tmp15;
    USE(tmp15);
    tmp15 = FromConstexpr9ATfloat6417ATconstexpr_int31_165(state_, 0);
    TNode<BoolT> tmp16;
    USE(tmp16);
    tmp16 = CodeStubAssembler(state_).Float64GreaterThan(TNode<Float64T>{tmp14}, TNode<Float64T>{tmp15});
    ca_.Branch(tmp16, &block4, &block5, tmp11, tmp12, tmp13, tmp14);
  }

  if (block4.is_used()) {
    TNode<Context> tmp17;
    TNode<Object> tmp18;
    TNode<Number> tmp19;
    TNode<Float64T> tmp20;
    ca_.Bind(&block4, &tmp17, &tmp18, &tmp19, &tmp20);
    ca_.SetSourcePosition("../../src/builtins/math.tq", 197);
    TNode<Number> tmp21;
    USE(tmp21);
    tmp21 = FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_160(state_, 1);
    CodeStubAssembler(state_).Return(tmp21);
  }

  if (block5.is_used()) {
    TNode<Context> tmp22;
    TNode<Object> tmp23;
    TNode<Number> tmp24;
    TNode<Float64T> tmp25;
    ca_.Bind(&block5, &tmp22, &tmp23, &tmp24, &tmp25);
    ca_.SetSourcePosition("../../src/builtins/math.tq", 199);
    CodeStubAssembler(state_).Return(tmp24);
  }
}

TF_BUILTIN(MathSinh, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  TNode<Object> parameter1 = UncheckedCast<Object>(Parameter(Descriptor::kX));
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../src/builtins/math.tq", 208);
    TNode<Number> tmp2;
    USE(tmp2);
    tmp2 = CodeStubAssembler(state_).ToNumber_Inline(TNode<Context>{tmp0}, TNode<Object>{tmp1});
    TNode<Float64T> tmp3;
    USE(tmp3);
    tmp3 = Convert9ATfloat6420UT5ATSmi10HeapNumber_196(state_, TNode<Number>{tmp2});
    ca_.SetSourcePosition("../../src/builtins/math.tq", 209);
    TNode<Float64T> tmp4;
    USE(tmp4);
    tmp4 = CodeStubAssembler(state_).Float64Sinh(TNode<Float64T>{tmp3});
    TNode<Number> tmp5;
    USE(tmp5);
    tmp5 = Convert20UT5ATSmi10HeapNumber9ATfloat64_201(state_, TNode<Float64T>{tmp4});
    CodeStubAssembler(state_).Return(tmp5);
  }
}

TF_BUILTIN(MathSqrt, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  TNode<Object> parameter1 = UncheckedCast<Object>(Parameter(Descriptor::kX));
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../src/builtins/math.tq", 217);
    TNode<Number> tmp2;
    USE(tmp2);
    tmp2 = CodeStubAssembler(state_).ToNumber_Inline(TNode<Context>{tmp0}, TNode<Object>{tmp1});
    TNode<Float64T> tmp3;
    USE(tmp3);
    tmp3 = Convert9ATfloat6420UT5ATSmi10HeapNumber_196(state_, TNode<Number>{tmp2});
    ca_.SetSourcePosition("../../src/builtins/math.tq", 218);
    TNode<Float64T> tmp4;
    USE(tmp4);
    tmp4 = CodeStubAssembler(state_).Float64Sqrt(TNode<Float64T>{tmp3});
    TNode<Number> tmp5;
    USE(tmp5);
    tmp5 = Convert20UT5ATSmi10HeapNumber9ATfloat64_201(state_, TNode<Float64T>{tmp4});
    CodeStubAssembler(state_).Return(tmp5);
  }
}

TF_BUILTIN(MathTan, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  TNode<Object> parameter1 = UncheckedCast<Object>(Parameter(Descriptor::kX));
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../src/builtins/math.tq", 226);
    TNode<Number> tmp2;
    USE(tmp2);
    tmp2 = CodeStubAssembler(state_).ToNumber_Inline(TNode<Context>{tmp0}, TNode<Object>{tmp1});
    TNode<Float64T> tmp3;
    USE(tmp3);
    tmp3 = Convert9ATfloat6420UT5ATSmi10HeapNumber_196(state_, TNode<Number>{tmp2});
    ca_.SetSourcePosition("../../src/builtins/math.tq", 227);
    TNode<Float64T> tmp4;
    USE(tmp4);
    tmp4 = CodeStubAssembler(state_).Float64Tan(TNode<Float64T>{tmp3});
    TNode<Number> tmp5;
    USE(tmp5);
    tmp5 = Convert20UT5ATSmi10HeapNumber9ATfloat64_201(state_, TNode<Float64T>{tmp4});
    CodeStubAssembler(state_).Return(tmp5);
  }
}

TF_BUILTIN(MathTanh, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  TNode<Object> parameter1 = UncheckedCast<Object>(Parameter(Descriptor::kX));
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../src/builtins/math.tq", 235);
    TNode<Number> tmp2;
    USE(tmp2);
    tmp2 = CodeStubAssembler(state_).ToNumber_Inline(TNode<Context>{tmp0}, TNode<Object>{tmp1});
    TNode<Float64T> tmp3;
    USE(tmp3);
    tmp3 = Convert9ATfloat6420UT5ATSmi10HeapNumber_196(state_, TNode<Number>{tmp2});
    ca_.SetSourcePosition("../../src/builtins/math.tq", 236);
    TNode<Float64T> tmp4;
    USE(tmp4);
    tmp4 = CodeStubAssembler(state_).Float64Tanh(TNode<Float64T>{tmp3});
    TNode<Number> tmp5;
    USE(tmp5);
    tmp5 = Convert20UT5ATSmi10HeapNumber9ATfloat64_201(state_, TNode<Float64T>{tmp4});
    CodeStubAssembler(state_).Return(tmp5);
  }
}

TF_BUILTIN(MathHypot, CodeStubAssembler) {
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
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, IntPtrT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, IntPtrT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, IntPtrT, FixedDoubleArray, BoolT, Float64T, IntPtrT> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, IntPtrT, FixedDoubleArray, BoolT, Float64T, IntPtrT> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, IntPtrT, FixedDoubleArray, BoolT, Float64T, IntPtrT, Float64T> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, IntPtrT, FixedDoubleArray, BoolT, Float64T, IntPtrT, Float64T> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, IntPtrT, FixedDoubleArray, BoolT, Float64T, IntPtrT, Float64T, Float64T, FixedDoubleArray, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, IntPtrT, FixedDoubleArray, BoolT, Float64T, IntPtrT, Float64T, Float64T, FixedDoubleArray, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, IntPtrT, FixedDoubleArray, BoolT, Float64T, IntPtrT, Float64T, Float64T, FixedDoubleArray, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, IntPtrT, FixedDoubleArray, BoolT, Float64T, IntPtrT, Float64T, Float64T, FixedDoubleArray, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, IntPtrT, FixedDoubleArray, BoolT, Float64T, IntPtrT, Float64T, Float64T, FixedDoubleArray, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, IntPtrT, FixedDoubleArray, BoolT, Float64T, IntPtrT, Float64T, Float64T, FixedDoubleArray, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, IntPtrT, FixedDoubleArray, BoolT, Float64T, IntPtrT, Float64T, Float64T> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, IntPtrT, FixedDoubleArray, BoolT, Float64T, IntPtrT, Float64T, Float64T> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, IntPtrT, FixedDoubleArray, BoolT, Float64T, IntPtrT, Float64T> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, IntPtrT, FixedDoubleArray, BoolT, Float64T, IntPtrT> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, IntPtrT, FixedDoubleArray, BoolT, Float64T, IntPtrT> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, IntPtrT, FixedDoubleArray, BoolT, Float64T> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, IntPtrT, FixedDoubleArray, BoolT, Float64T> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, IntPtrT, FixedDoubleArray, BoolT, Float64T> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, IntPtrT, FixedDoubleArray, BoolT, Float64T> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, IntPtrT, FixedDoubleArray, BoolT, Float64T> block25(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, IntPtrT, FixedDoubleArray, BoolT, Float64T> block26(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, IntPtrT, FixedDoubleArray, BoolT, Float64T> block24(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, IntPtrT, FixedDoubleArray, BoolT, Float64T> block21(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, IntPtrT, FixedDoubleArray, BoolT, Float64T, Float64T, Float64T, IntPtrT> block29(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, IntPtrT, FixedDoubleArray, BoolT, Float64T, Float64T, Float64T, IntPtrT> block27(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, IntPtrT, FixedDoubleArray, BoolT, Float64T, Float64T, Float64T, IntPtrT, FixedDoubleArray, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block35(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, IntPtrT, FixedDoubleArray, BoolT, Float64T, Float64T, Float64T, IntPtrT, FixedDoubleArray, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block36(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, IntPtrT, FixedDoubleArray, BoolT, Float64T, Float64T, Float64T, IntPtrT, FixedDoubleArray, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT> block34(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, IntPtrT, FixedDoubleArray, BoolT, Float64T, Float64T, Float64T, IntPtrT, FixedDoubleArray, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block33(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, IntPtrT, FixedDoubleArray, BoolT, Float64T, Float64T, Float64T, IntPtrT, FixedDoubleArray, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT> block32(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, IntPtrT, FixedDoubleArray, BoolT, Float64T, Float64T, Float64T, IntPtrT, FixedDoubleArray, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT> block31(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, IntPtrT, FixedDoubleArray, BoolT, Float64T, Float64T, Float64T, IntPtrT> block30(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, IntPtrT, FixedDoubleArray, BoolT, Float64T, Float64T, Float64T, IntPtrT> block28(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, torque_arguments.frame, torque_arguments.base, torque_arguments.length, parameter0, parameter1);

  if (block0.is_used()) {
    TNode<RawPtrT> tmp0;
    TNode<RawPtrT> tmp1;
    TNode<IntPtrT> tmp2;
    TNode<Context> tmp3;
    TNode<Object> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../src/builtins/math.tq", 245);
    ca_.SetSourcePosition("../../src/builtins/math.tq", 246);
    TNode<IntPtrT> tmp5;
    USE(tmp5);
    tmp5 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 0);
    TNode<BoolT> tmp6;
    USE(tmp6);
    tmp6 = CodeStubAssembler(state_).WordEqual(TNode<IntPtrT>{tmp2}, TNode<IntPtrT>{tmp5});
    ca_.Branch(tmp6, &block1, &block2, tmp0, tmp1, tmp2, tmp3, tmp4, tmp2);
  }

  if (block1.is_used()) {
    TNode<RawPtrT> tmp7;
    TNode<RawPtrT> tmp8;
    TNode<IntPtrT> tmp9;
    TNode<Context> tmp10;
    TNode<Object> tmp11;
    TNode<IntPtrT> tmp12;
    ca_.Bind(&block1, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11, &tmp12);
    ca_.SetSourcePosition("../../src/builtins/math.tq", 247);
    TNode<Number> tmp13;
    USE(tmp13);
    tmp13 = FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_160(state_, 0);
    arguments.PopAndReturn(tmp13);
  }

  if (block2.is_used()) {
    TNode<RawPtrT> tmp14;
    TNode<RawPtrT> tmp15;
    TNode<IntPtrT> tmp16;
    TNode<Context> tmp17;
    TNode<Object> tmp18;
    TNode<IntPtrT> tmp19;
    ca_.Bind(&block2, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18, &tmp19);
    ca_.SetSourcePosition("../../src/builtins/math.tq", 249);
    TNode<FixedDoubleArray> tmp20;
    USE(tmp20);
    tmp20 = CodeStubAssembler(state_).AllocateZeroedFixedDoubleArray(TNode<IntPtrT>{tmp19});
    ca_.SetSourcePosition("../../src/builtins/math.tq", 250);
    TNode<BoolT> tmp21;
    USE(tmp21);
    tmp21 = FromConstexpr6ATbool16ATconstexpr_bool_167(state_, false);
    ca_.SetSourcePosition("../../src/builtins/math.tq", 251);
    TNode<Float64T> tmp22;
    USE(tmp22);
    tmp22 = FromConstexpr9ATfloat6417ATconstexpr_int31_165(state_, 0);
    ca_.SetSourcePosition("../../src/builtins/math.tq", 252);
    TNode<IntPtrT> tmp23;
    USE(tmp23);
    tmp23 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 0);
    ca_.Goto(&block5, tmp14, tmp15, tmp16, tmp17, tmp18, tmp19, tmp20, tmp21, tmp22, tmp23);
  }

  if (block5.is_used()) {
    TNode<RawPtrT> tmp24;
    TNode<RawPtrT> tmp25;
    TNode<IntPtrT> tmp26;
    TNode<Context> tmp27;
    TNode<Object> tmp28;
    TNode<IntPtrT> tmp29;
    TNode<FixedDoubleArray> tmp30;
    TNode<BoolT> tmp31;
    TNode<Float64T> tmp32;
    TNode<IntPtrT> tmp33;
    ca_.Bind(&block5, &tmp24, &tmp25, &tmp26, &tmp27, &tmp28, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33);
    TNode<BoolT> tmp34;
    USE(tmp34);
    tmp34 = CodeStubAssembler(state_).IntPtrLessThan(TNode<IntPtrT>{tmp33}, TNode<IntPtrT>{tmp29});
    ca_.Branch(tmp34, &block3, &block4, tmp24, tmp25, tmp26, tmp27, tmp28, tmp29, tmp30, tmp31, tmp32, tmp33);
  }

  if (block3.is_used()) {
    TNode<RawPtrT> tmp35;
    TNode<RawPtrT> tmp36;
    TNode<IntPtrT> tmp37;
    TNode<Context> tmp38;
    TNode<Object> tmp39;
    TNode<IntPtrT> tmp40;
    TNode<FixedDoubleArray> tmp41;
    TNode<BoolT> tmp42;
    TNode<Float64T> tmp43;
    TNode<IntPtrT> tmp44;
    ca_.Bind(&block3, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40, &tmp41, &tmp42, &tmp43, &tmp44);
    ca_.SetSourcePosition("../../src/builtins/math.tq", 253);
    TNode<Object> tmp45;
    USE(tmp45);
    tmp45 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{tmp35}, TNode<RawPtrT>{tmp36}, TNode<IntPtrT>{tmp37}}, TNode<IntPtrT>{tmp44});
    TNode<Number> tmp46;
    USE(tmp46);
    tmp46 = CodeStubAssembler(state_).ToNumber_Inline(TNode<Context>{tmp38}, TNode<Object>{tmp45});
    TNode<Float64T> tmp47;
    USE(tmp47);
    tmp47 = Convert9ATfloat6420UT5ATSmi10HeapNumber_196(state_, TNode<Number>{tmp46});
    ca_.SetSourcePosition("../../src/builtins/math.tq", 254);
    TNode<BoolT> tmp48;
    USE(tmp48);
    tmp48 = Float64IsNaN_79(state_, TNode<Float64T>{tmp47});
    ca_.Branch(tmp48, &block7, &block8, tmp35, tmp36, tmp37, tmp38, tmp39, tmp40, tmp41, tmp42, tmp43, tmp44, tmp47);
  }

  if (block7.is_used()) {
    TNode<RawPtrT> tmp49;
    TNode<RawPtrT> tmp50;
    TNode<IntPtrT> tmp51;
    TNode<Context> tmp52;
    TNode<Object> tmp53;
    TNode<IntPtrT> tmp54;
    TNode<FixedDoubleArray> tmp55;
    TNode<BoolT> tmp56;
    TNode<Float64T> tmp57;
    TNode<IntPtrT> tmp58;
    TNode<Float64T> tmp59;
    ca_.Bind(&block7, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56, &tmp57, &tmp58, &tmp59);
    ca_.SetSourcePosition("../../src/builtins/math.tq", 255);
    TNode<BoolT> tmp60;
    USE(tmp60);
    tmp60 = FromConstexpr6ATbool16ATconstexpr_bool_167(state_, true);
    ca_.SetSourcePosition("../../src/builtins/math.tq", 254);
    ca_.Goto(&block9, tmp49, tmp50, tmp51, tmp52, tmp53, tmp54, tmp55, tmp60, tmp57, tmp58, tmp59);
  }

  if (block8.is_used()) {
    TNode<RawPtrT> tmp61;
    TNode<RawPtrT> tmp62;
    TNode<IntPtrT> tmp63;
    TNode<Context> tmp64;
    TNode<Object> tmp65;
    TNode<IntPtrT> tmp66;
    TNode<FixedDoubleArray> tmp67;
    TNode<BoolT> tmp68;
    TNode<Float64T> tmp69;
    TNode<IntPtrT> tmp70;
    TNode<Float64T> tmp71;
    ca_.Bind(&block8, &tmp61, &tmp62, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67, &tmp68, &tmp69, &tmp70, &tmp71);
    ca_.SetSourcePosition("../../src/builtins/math.tq", 257);
    TNode<Float64T> tmp72;
    USE(tmp72);
    tmp72 = CodeStubAssembler(state_).Float64Abs(TNode<Float64T>{tmp71});
    ca_.SetSourcePosition("../../src/builtins/math.tq", 258);
    TNode<IntPtrT> tmp73 = ca_.IntPtrConstant(FixedDoubleArray::kFloatsOffset);
    USE(tmp73);
    TNode<IntPtrT> tmp74 = ca_.IntPtrConstant(FixedArrayBase::kLengthOffset);
    USE(tmp74);
    TNode<Smi>tmp75 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp67, tmp74});
    TNode<IntPtrT> tmp76;
    USE(tmp76);
    tmp76 = Convert8ATintptr5ATSmi_188(state_, TNode<Smi>{tmp75});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 46);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 37);
    TNode<UintPtrT> tmp77;
    USE(tmp77);
    tmp77 = Convert9ATuintptr8ATintptr_205(state_, TNode<IntPtrT>{tmp70});
    TNode<UintPtrT> tmp78;
    USE(tmp78);
    tmp78 = Convert9ATuintptr8ATintptr_205(state_, TNode<IntPtrT>{tmp76});
    TNode<BoolT> tmp79;
    USE(tmp79);
    tmp79 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp77}, TNode<UintPtrT>{tmp78});
    ca_.Branch(tmp79, &block14, &block15, tmp61, tmp62, tmp63, tmp64, tmp65, tmp66, tmp67, tmp68, tmp69, tmp70, tmp71, tmp72, tmp67, tmp73, tmp76, tmp70, tmp70, tmp67, tmp73, tmp76, tmp70, tmp70);
  }

  if (block14.is_used()) {
    TNode<RawPtrT> tmp80;
    TNode<RawPtrT> tmp81;
    TNode<IntPtrT> tmp82;
    TNode<Context> tmp83;
    TNode<Object> tmp84;
    TNode<IntPtrT> tmp85;
    TNode<FixedDoubleArray> tmp86;
    TNode<BoolT> tmp87;
    TNode<Float64T> tmp88;
    TNode<IntPtrT> tmp89;
    TNode<Float64T> tmp90;
    TNode<Float64T> tmp91;
    TNode<FixedDoubleArray> tmp92;
    TNode<IntPtrT> tmp93;
    TNode<IntPtrT> tmp94;
    TNode<IntPtrT> tmp95;
    TNode<IntPtrT> tmp96;
    TNode<HeapObject> tmp97;
    TNode<IntPtrT> tmp98;
    TNode<IntPtrT> tmp99;
    TNode<IntPtrT> tmp100;
    TNode<IntPtrT> tmp101;
    ca_.Bind(&block14, &tmp80, &tmp81, &tmp82, &tmp83, &tmp84, &tmp85, &tmp86, &tmp87, &tmp88, &tmp89, &tmp90, &tmp91, &tmp92, &tmp93, &tmp94, &tmp95, &tmp96, &tmp97, &tmp98, &tmp99, &tmp100, &tmp101);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 39);
    TNode<IntPtrT> tmp102;
    USE(tmp102);
    tmp102 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, (SizeOf9ATfloat64_347(state_)));
    TNode<IntPtrT> tmp103;
    USE(tmp103);
    tmp103 = CodeStubAssembler(state_).IntPtrMul(TNode<IntPtrT>{tmp101}, TNode<IntPtrT>{tmp102});
    TNode<IntPtrT> tmp104;
    USE(tmp104);
    tmp104 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp98}, TNode<IntPtrT>{tmp103});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 38);
    TNode<HeapObject> tmp105;
    USE(tmp105);
    TNode<IntPtrT> tmp106;
    USE(tmp106);
    std::tie(tmp105, tmp106) = UnsafeNewReference9ATfloat64_1455(state_, TNode<HeapObject>{tmp97}, TNode<IntPtrT>{tmp104}).Flatten();
    ca_.Goto(&block13, tmp80, tmp81, tmp82, tmp83, tmp84, tmp85, tmp86, tmp87, tmp88, tmp89, tmp90, tmp91, tmp92, tmp93, tmp94, tmp95, tmp96, tmp97, tmp98, tmp99, tmp100, tmp101, tmp105, tmp106);
  }

  if (block15.is_used()) {
    TNode<RawPtrT> tmp107;
    TNode<RawPtrT> tmp108;
    TNode<IntPtrT> tmp109;
    TNode<Context> tmp110;
    TNode<Object> tmp111;
    TNode<IntPtrT> tmp112;
    TNode<FixedDoubleArray> tmp113;
    TNode<BoolT> tmp114;
    TNode<Float64T> tmp115;
    TNode<IntPtrT> tmp116;
    TNode<Float64T> tmp117;
    TNode<Float64T> tmp118;
    TNode<FixedDoubleArray> tmp119;
    TNode<IntPtrT> tmp120;
    TNode<IntPtrT> tmp121;
    TNode<IntPtrT> tmp122;
    TNode<IntPtrT> tmp123;
    TNode<HeapObject> tmp124;
    TNode<IntPtrT> tmp125;
    TNode<IntPtrT> tmp126;
    TNode<IntPtrT> tmp127;
    TNode<IntPtrT> tmp128;
    ca_.Bind(&block15, &tmp107, &tmp108, &tmp109, &tmp110, &tmp111, &tmp112, &tmp113, &tmp114, &tmp115, &tmp116, &tmp117, &tmp118, &tmp119, &tmp120, &tmp121, &tmp122, &tmp123, &tmp124, &tmp125, &tmp126, &tmp127, &tmp128);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 41);
    ca_.Goto(&block12, tmp107, tmp108, tmp109, tmp110, tmp111, tmp112, tmp113, tmp114, tmp115, tmp116, tmp117, tmp118, tmp119, tmp120, tmp121, tmp122, tmp123);
  }

  if (block13.is_used()) {
    TNode<RawPtrT> tmp129;
    TNode<RawPtrT> tmp130;
    TNode<IntPtrT> tmp131;
    TNode<Context> tmp132;
    TNode<Object> tmp133;
    TNode<IntPtrT> tmp134;
    TNode<FixedDoubleArray> tmp135;
    TNode<BoolT> tmp136;
    TNode<Float64T> tmp137;
    TNode<IntPtrT> tmp138;
    TNode<Float64T> tmp139;
    TNode<Float64T> tmp140;
    TNode<FixedDoubleArray> tmp141;
    TNode<IntPtrT> tmp142;
    TNode<IntPtrT> tmp143;
    TNode<IntPtrT> tmp144;
    TNode<IntPtrT> tmp145;
    TNode<HeapObject> tmp146;
    TNode<IntPtrT> tmp147;
    TNode<IntPtrT> tmp148;
    TNode<IntPtrT> tmp149;
    TNode<IntPtrT> tmp150;
    TNode<HeapObject> tmp151;
    TNode<IntPtrT> tmp152;
    ca_.Bind(&block13, &tmp129, &tmp130, &tmp131, &tmp132, &tmp133, &tmp134, &tmp135, &tmp136, &tmp137, &tmp138, &tmp139, &tmp140, &tmp141, &tmp142, &tmp143, &tmp144, &tmp145, &tmp146, &tmp147, &tmp148, &tmp149, &tmp150, &tmp151, &tmp152);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 46);
    ca_.Goto(&block11, tmp129, tmp130, tmp131, tmp132, tmp133, tmp134, tmp135, tmp136, tmp137, tmp138, tmp139, tmp140, tmp141, tmp142, tmp143, tmp144, tmp145, tmp151, tmp152);
  }

  if (block12.is_used()) {
    TNode<RawPtrT> tmp153;
    TNode<RawPtrT> tmp154;
    TNode<IntPtrT> tmp155;
    TNode<Context> tmp156;
    TNode<Object> tmp157;
    TNode<IntPtrT> tmp158;
    TNode<FixedDoubleArray> tmp159;
    TNode<BoolT> tmp160;
    TNode<Float64T> tmp161;
    TNode<IntPtrT> tmp162;
    TNode<Float64T> tmp163;
    TNode<Float64T> tmp164;
    TNode<FixedDoubleArray> tmp165;
    TNode<IntPtrT> tmp166;
    TNode<IntPtrT> tmp167;
    TNode<IntPtrT> tmp168;
    TNode<IntPtrT> tmp169;
    ca_.Bind(&block12, &tmp153, &tmp154, &tmp155, &tmp156, &tmp157, &tmp158, &tmp159, &tmp160, &tmp161, &tmp162, &tmp163, &tmp164, &tmp165, &tmp166, &tmp167, &tmp168, &tmp169);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block11.is_used()) {
    TNode<RawPtrT> tmp170;
    TNode<RawPtrT> tmp171;
    TNode<IntPtrT> tmp172;
    TNode<Context> tmp173;
    TNode<Object> tmp174;
    TNode<IntPtrT> tmp175;
    TNode<FixedDoubleArray> tmp176;
    TNode<BoolT> tmp177;
    TNode<Float64T> tmp178;
    TNode<IntPtrT> tmp179;
    TNode<Float64T> tmp180;
    TNode<Float64T> tmp181;
    TNode<FixedDoubleArray> tmp182;
    TNode<IntPtrT> tmp183;
    TNode<IntPtrT> tmp184;
    TNode<IntPtrT> tmp185;
    TNode<IntPtrT> tmp186;
    TNode<HeapObject> tmp187;
    TNode<IntPtrT> tmp188;
    ca_.Bind(&block11, &tmp170, &tmp171, &tmp172, &tmp173, &tmp174, &tmp175, &tmp176, &tmp177, &tmp178, &tmp179, &tmp180, &tmp181, &tmp182, &tmp183, &tmp184, &tmp185, &tmp186, &tmp187, &tmp188);
    ca_.Goto(&block10, tmp170, tmp171, tmp172, tmp173, tmp174, tmp175, tmp176, tmp177, tmp178, tmp179, tmp180, tmp181, tmp182, tmp183, tmp184, tmp185, tmp186, tmp187, tmp188);
  }

  if (block10.is_used()) {
    TNode<RawPtrT> tmp189;
    TNode<RawPtrT> tmp190;
    TNode<IntPtrT> tmp191;
    TNode<Context> tmp192;
    TNode<Object> tmp193;
    TNode<IntPtrT> tmp194;
    TNode<FixedDoubleArray> tmp195;
    TNode<BoolT> tmp196;
    TNode<Float64T> tmp197;
    TNode<IntPtrT> tmp198;
    TNode<Float64T> tmp199;
    TNode<Float64T> tmp200;
    TNode<FixedDoubleArray> tmp201;
    TNode<IntPtrT> tmp202;
    TNode<IntPtrT> tmp203;
    TNode<IntPtrT> tmp204;
    TNode<IntPtrT> tmp205;
    TNode<HeapObject> tmp206;
    TNode<IntPtrT> tmp207;
    ca_.Bind(&block10, &tmp189, &tmp190, &tmp191, &tmp192, &tmp193, &tmp194, &tmp195, &tmp196, &tmp197, &tmp198, &tmp199, &tmp200, &tmp201, &tmp202, &tmp203, &tmp204, &tmp205, &tmp206, &tmp207);
    ca_.SetSourcePosition("../../src/builtins/math.tq", 258);
    TNode<Float64T> tmp208;
    USE(tmp208);
    tmp208 = CodeStubAssembler(state_).Float64SilenceNaN(TNode<Float64T>{tmp200});
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp206, tmp207}, tmp208);
    ca_.SetSourcePosition("../../src/builtins/math.tq", 259);
    TNode<BoolT> tmp209;
    USE(tmp209);
    tmp209 = CodeStubAssembler(state_).Float64GreaterThan(TNode<Float64T>{tmp200}, TNode<Float64T>{tmp197});
    ca_.Branch(tmp209, &block17, &block18, tmp189, tmp190, tmp191, tmp192, tmp193, tmp194, tmp195, tmp196, tmp197, tmp198, tmp199, tmp200);
  }

  if (block17.is_used()) {
    TNode<RawPtrT> tmp210;
    TNode<RawPtrT> tmp211;
    TNode<IntPtrT> tmp212;
    TNode<Context> tmp213;
    TNode<Object> tmp214;
    TNode<IntPtrT> tmp215;
    TNode<FixedDoubleArray> tmp216;
    TNode<BoolT> tmp217;
    TNode<Float64T> tmp218;
    TNode<IntPtrT> tmp219;
    TNode<Float64T> tmp220;
    TNode<Float64T> tmp221;
    ca_.Bind(&block17, &tmp210, &tmp211, &tmp212, &tmp213, &tmp214, &tmp215, &tmp216, &tmp217, &tmp218, &tmp219, &tmp220, &tmp221);
    ca_.SetSourcePosition("../../src/builtins/math.tq", 260);
    ca_.SetSourcePosition("../../src/builtins/math.tq", 259);
    ca_.Goto(&block18, tmp210, tmp211, tmp212, tmp213, tmp214, tmp215, tmp216, tmp217, tmp221, tmp219, tmp220, tmp221);
  }

  if (block18.is_used()) {
    TNode<RawPtrT> tmp222;
    TNode<RawPtrT> tmp223;
    TNode<IntPtrT> tmp224;
    TNode<Context> tmp225;
    TNode<Object> tmp226;
    TNode<IntPtrT> tmp227;
    TNode<FixedDoubleArray> tmp228;
    TNode<BoolT> tmp229;
    TNode<Float64T> tmp230;
    TNode<IntPtrT> tmp231;
    TNode<Float64T> tmp232;
    TNode<Float64T> tmp233;
    ca_.Bind(&block18, &tmp222, &tmp223, &tmp224, &tmp225, &tmp226, &tmp227, &tmp228, &tmp229, &tmp230, &tmp231, &tmp232, &tmp233);
    ca_.SetSourcePosition("../../src/builtins/math.tq", 256);
    ca_.SetSourcePosition("../../src/builtins/math.tq", 254);
    ca_.Goto(&block9, tmp222, tmp223, tmp224, tmp225, tmp226, tmp227, tmp228, tmp229, tmp230, tmp231, tmp232);
  }

  if (block9.is_used()) {
    TNode<RawPtrT> tmp234;
    TNode<RawPtrT> tmp235;
    TNode<IntPtrT> tmp236;
    TNode<Context> tmp237;
    TNode<Object> tmp238;
    TNode<IntPtrT> tmp239;
    TNode<FixedDoubleArray> tmp240;
    TNode<BoolT> tmp241;
    TNode<Float64T> tmp242;
    TNode<IntPtrT> tmp243;
    TNode<Float64T> tmp244;
    ca_.Bind(&block9, &tmp234, &tmp235, &tmp236, &tmp237, &tmp238, &tmp239, &tmp240, &tmp241, &tmp242, &tmp243, &tmp244);
    ca_.SetSourcePosition("../../src/builtins/math.tq", 252);
    ca_.Goto(&block6, tmp234, tmp235, tmp236, tmp237, tmp238, tmp239, tmp240, tmp241, tmp242, tmp243);
  }

  if (block6.is_used()) {
    TNode<RawPtrT> tmp245;
    TNode<RawPtrT> tmp246;
    TNode<IntPtrT> tmp247;
    TNode<Context> tmp248;
    TNode<Object> tmp249;
    TNode<IntPtrT> tmp250;
    TNode<FixedDoubleArray> tmp251;
    TNode<BoolT> tmp252;
    TNode<Float64T> tmp253;
    TNode<IntPtrT> tmp254;
    ca_.Bind(&block6, &tmp245, &tmp246, &tmp247, &tmp248, &tmp249, &tmp250, &tmp251, &tmp252, &tmp253, &tmp254);
    TNode<IntPtrT> tmp255;
    USE(tmp255);
    tmp255 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 1);
    TNode<IntPtrT> tmp256;
    USE(tmp256);
    tmp256 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp254}, TNode<IntPtrT>{tmp255});
    ca_.Goto(&block5, tmp245, tmp246, tmp247, tmp248, tmp249, tmp250, tmp251, tmp252, tmp253, tmp256);
  }

  if (block4.is_used()) {
    TNode<RawPtrT> tmp257;
    TNode<RawPtrT> tmp258;
    TNode<IntPtrT> tmp259;
    TNode<Context> tmp260;
    TNode<Object> tmp261;
    TNode<IntPtrT> tmp262;
    TNode<FixedDoubleArray> tmp263;
    TNode<BoolT> tmp264;
    TNode<Float64T> tmp265;
    TNode<IntPtrT> tmp266;
    ca_.Bind(&block4, &tmp257, &tmp258, &tmp259, &tmp260, &tmp261, &tmp262, &tmp263, &tmp264, &tmp265, &tmp266);
    ca_.SetSourcePosition("../../src/builtins/math.tq", 264);
    TNode<Float64T> tmp267;
    USE(tmp267);
    tmp267 = FromConstexpr9ATfloat6419ATconstexpr_float64_166(state_, V8_INFINITY);
    TNode<BoolT> tmp268;
    USE(tmp268);
    tmp268 = CodeStubAssembler(state_).Float64Equal(TNode<Float64T>{tmp265}, TNode<Float64T>{tmp267});
    ca_.Branch(tmp268, &block19, &block20, tmp257, tmp258, tmp259, tmp260, tmp261, tmp262, tmp263, tmp264, tmp265);
  }

  if (block19.is_used()) {
    TNode<RawPtrT> tmp269;
    TNode<RawPtrT> tmp270;
    TNode<IntPtrT> tmp271;
    TNode<Context> tmp272;
    TNode<Object> tmp273;
    TNode<IntPtrT> tmp274;
    TNode<FixedDoubleArray> tmp275;
    TNode<BoolT> tmp276;
    TNode<Float64T> tmp277;
    ca_.Bind(&block19, &tmp269, &tmp270, &tmp271, &tmp272, &tmp273, &tmp274, &tmp275, &tmp276, &tmp277);
    ca_.SetSourcePosition("../../src/builtins/math.tq", 265);
    TNode<Number> tmp278;
    USE(tmp278);
    tmp278 = FromConstexpr20UT5ATSmi10HeapNumber19ATconstexpr_float64_159(state_, V8_INFINITY);
    arguments.PopAndReturn(tmp278);
  }

  if (block20.is_used()) {
    TNode<RawPtrT> tmp279;
    TNode<RawPtrT> tmp280;
    TNode<IntPtrT> tmp281;
    TNode<Context> tmp282;
    TNode<Object> tmp283;
    TNode<IntPtrT> tmp284;
    TNode<FixedDoubleArray> tmp285;
    TNode<BoolT> tmp286;
    TNode<Float64T> tmp287;
    ca_.Bind(&block20, &tmp279, &tmp280, &tmp281, &tmp282, &tmp283, &tmp284, &tmp285, &tmp286, &tmp287);
    ca_.SetSourcePosition("../../src/builtins/math.tq", 266);
    ca_.Branch(tmp286, &block22, &block23, tmp279, tmp280, tmp281, tmp282, tmp283, tmp284, tmp285, tmp286, tmp287);
  }

  if (block22.is_used()) {
    TNode<RawPtrT> tmp288;
    TNode<RawPtrT> tmp289;
    TNode<IntPtrT> tmp290;
    TNode<Context> tmp291;
    TNode<Object> tmp292;
    TNode<IntPtrT> tmp293;
    TNode<FixedDoubleArray> tmp294;
    TNode<BoolT> tmp295;
    TNode<Float64T> tmp296;
    ca_.Bind(&block22, &tmp288, &tmp289, &tmp290, &tmp291, &tmp292, &tmp293, &tmp294, &tmp295, &tmp296);
    ca_.SetSourcePosition("../../src/builtins/math.tq", 267);
    TNode<HeapNumber> tmp297;
    USE(tmp297);
    tmp297 = kNaN_69(state_);
    arguments.PopAndReturn(tmp297);
  }

  if (block23.is_used()) {
    TNode<RawPtrT> tmp298;
    TNode<RawPtrT> tmp299;
    TNode<IntPtrT> tmp300;
    TNode<Context> tmp301;
    TNode<Object> tmp302;
    TNode<IntPtrT> tmp303;
    TNode<FixedDoubleArray> tmp304;
    TNode<BoolT> tmp305;
    TNode<Float64T> tmp306;
    ca_.Bind(&block23, &tmp298, &tmp299, &tmp300, &tmp301, &tmp302, &tmp303, &tmp304, &tmp305, &tmp306);
    ca_.SetSourcePosition("../../src/builtins/math.tq", 268);
    TNode<Float64T> tmp307;
    USE(tmp307);
    tmp307 = FromConstexpr9ATfloat6417ATconstexpr_int31_165(state_, 0);
    TNode<BoolT> tmp308;
    USE(tmp308);
    tmp308 = CodeStubAssembler(state_).Float64Equal(TNode<Float64T>{tmp306}, TNode<Float64T>{tmp307});
    ca_.Branch(tmp308, &block25, &block26, tmp298, tmp299, tmp300, tmp301, tmp302, tmp303, tmp304, tmp305, tmp306);
  }

  if (block25.is_used()) {
    TNode<RawPtrT> tmp309;
    TNode<RawPtrT> tmp310;
    TNode<IntPtrT> tmp311;
    TNode<Context> tmp312;
    TNode<Object> tmp313;
    TNode<IntPtrT> tmp314;
    TNode<FixedDoubleArray> tmp315;
    TNode<BoolT> tmp316;
    TNode<Float64T> tmp317;
    ca_.Bind(&block25, &tmp309, &tmp310, &tmp311, &tmp312, &tmp313, &tmp314, &tmp315, &tmp316, &tmp317);
    ca_.SetSourcePosition("../../src/builtins/math.tq", 269);
    TNode<Number> tmp318;
    USE(tmp318);
    tmp318 = FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_160(state_, 0);
    arguments.PopAndReturn(tmp318);
  }

  if (block26.is_used()) {
    TNode<RawPtrT> tmp319;
    TNode<RawPtrT> tmp320;
    TNode<IntPtrT> tmp321;
    TNode<Context> tmp322;
    TNode<Object> tmp323;
    TNode<IntPtrT> tmp324;
    TNode<FixedDoubleArray> tmp325;
    TNode<BoolT> tmp326;
    TNode<Float64T> tmp327;
    ca_.Bind(&block26, &tmp319, &tmp320, &tmp321, &tmp322, &tmp323, &tmp324, &tmp325, &tmp326, &tmp327);
    ca_.SetSourcePosition("../../src/builtins/math.tq", 266);
    ca_.Goto(&block24, tmp319, tmp320, tmp321, tmp322, tmp323, tmp324, tmp325, tmp326, tmp327);
  }

  if (block24.is_used()) {
    TNode<RawPtrT> tmp328;
    TNode<RawPtrT> tmp329;
    TNode<IntPtrT> tmp330;
    TNode<Context> tmp331;
    TNode<Object> tmp332;
    TNode<IntPtrT> tmp333;
    TNode<FixedDoubleArray> tmp334;
    TNode<BoolT> tmp335;
    TNode<Float64T> tmp336;
    ca_.Bind(&block24, &tmp328, &tmp329, &tmp330, &tmp331, &tmp332, &tmp333, &tmp334, &tmp335, &tmp336);
    ca_.SetSourcePosition("../../src/builtins/math.tq", 264);
    ca_.Goto(&block21, tmp328, tmp329, tmp330, tmp331, tmp332, tmp333, tmp334, tmp335, tmp336);
  }

  if (block21.is_used()) {
    TNode<RawPtrT> tmp337;
    TNode<RawPtrT> tmp338;
    TNode<IntPtrT> tmp339;
    TNode<Context> tmp340;
    TNode<Object> tmp341;
    TNode<IntPtrT> tmp342;
    TNode<FixedDoubleArray> tmp343;
    TNode<BoolT> tmp344;
    TNode<Float64T> tmp345;
    ca_.Bind(&block21, &tmp337, &tmp338, &tmp339, &tmp340, &tmp341, &tmp342, &tmp343, &tmp344, &tmp345);
    ca_.SetSourcePosition("../../src/builtins/math.tq", 275);
    TNode<Float64T> tmp346;
    USE(tmp346);
    tmp346 = FromConstexpr9ATfloat6417ATconstexpr_int31_165(state_, 0);
    ca_.SetSourcePosition("../../src/builtins/math.tq", 276);
    TNode<Float64T> tmp347;
    USE(tmp347);
    tmp347 = FromConstexpr9ATfloat6417ATconstexpr_int31_165(state_, 0);
    ca_.SetSourcePosition("../../src/builtins/math.tq", 277);
    TNode<IntPtrT> tmp348;
    USE(tmp348);
    tmp348 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 0);
    ca_.Goto(&block29, tmp337, tmp338, tmp339, tmp340, tmp341, tmp342, tmp343, tmp344, tmp345, tmp346, tmp347, tmp348);
  }

  if (block29.is_used()) {
    TNode<RawPtrT> tmp349;
    TNode<RawPtrT> tmp350;
    TNode<IntPtrT> tmp351;
    TNode<Context> tmp352;
    TNode<Object> tmp353;
    TNode<IntPtrT> tmp354;
    TNode<FixedDoubleArray> tmp355;
    TNode<BoolT> tmp356;
    TNode<Float64T> tmp357;
    TNode<Float64T> tmp358;
    TNode<Float64T> tmp359;
    TNode<IntPtrT> tmp360;
    ca_.Bind(&block29, &tmp349, &tmp350, &tmp351, &tmp352, &tmp353, &tmp354, &tmp355, &tmp356, &tmp357, &tmp358, &tmp359, &tmp360);
    TNode<BoolT> tmp361;
    USE(tmp361);
    tmp361 = CodeStubAssembler(state_).IntPtrLessThan(TNode<IntPtrT>{tmp360}, TNode<IntPtrT>{tmp354});
    ca_.Branch(tmp361, &block27, &block28, tmp349, tmp350, tmp351, tmp352, tmp353, tmp354, tmp355, tmp356, tmp357, tmp358, tmp359, tmp360);
  }

  if (block27.is_used()) {
    TNode<RawPtrT> tmp362;
    TNode<RawPtrT> tmp363;
    TNode<IntPtrT> tmp364;
    TNode<Context> tmp365;
    TNode<Object> tmp366;
    TNode<IntPtrT> tmp367;
    TNode<FixedDoubleArray> tmp368;
    TNode<BoolT> tmp369;
    TNode<Float64T> tmp370;
    TNode<Float64T> tmp371;
    TNode<Float64T> tmp372;
    TNode<IntPtrT> tmp373;
    ca_.Bind(&block27, &tmp362, &tmp363, &tmp364, &tmp365, &tmp366, &tmp367, &tmp368, &tmp369, &tmp370, &tmp371, &tmp372, &tmp373);
    ca_.SetSourcePosition("../../src/builtins/math.tq", 278);
    TNode<IntPtrT> tmp374 = ca_.IntPtrConstant(FixedDoubleArray::kFloatsOffset);
    USE(tmp374);
    TNode<IntPtrT> tmp375 = ca_.IntPtrConstant(FixedArrayBase::kLengthOffset);
    USE(tmp375);
    TNode<Smi>tmp376 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp368, tmp375});
    TNode<IntPtrT> tmp377;
    USE(tmp377);
    tmp377 = Convert8ATintptr5ATSmi_188(state_, TNode<Smi>{tmp376});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 46);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 37);
    TNode<UintPtrT> tmp378;
    USE(tmp378);
    tmp378 = Convert9ATuintptr8ATintptr_205(state_, TNode<IntPtrT>{tmp373});
    TNode<UintPtrT> tmp379;
    USE(tmp379);
    tmp379 = Convert9ATuintptr8ATintptr_205(state_, TNode<IntPtrT>{tmp377});
    TNode<BoolT> tmp380;
    USE(tmp380);
    tmp380 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp378}, TNode<UintPtrT>{tmp379});
    ca_.Branch(tmp380, &block35, &block36, tmp362, tmp363, tmp364, tmp365, tmp366, tmp367, tmp368, tmp369, tmp370, tmp371, tmp372, tmp373, tmp368, tmp374, tmp377, tmp373, tmp373, tmp368, tmp374, tmp377, tmp373, tmp373);
  }

  if (block35.is_used()) {
    TNode<RawPtrT> tmp381;
    TNode<RawPtrT> tmp382;
    TNode<IntPtrT> tmp383;
    TNode<Context> tmp384;
    TNode<Object> tmp385;
    TNode<IntPtrT> tmp386;
    TNode<FixedDoubleArray> tmp387;
    TNode<BoolT> tmp388;
    TNode<Float64T> tmp389;
    TNode<Float64T> tmp390;
    TNode<Float64T> tmp391;
    TNode<IntPtrT> tmp392;
    TNode<FixedDoubleArray> tmp393;
    TNode<IntPtrT> tmp394;
    TNode<IntPtrT> tmp395;
    TNode<IntPtrT> tmp396;
    TNode<IntPtrT> tmp397;
    TNode<HeapObject> tmp398;
    TNode<IntPtrT> tmp399;
    TNode<IntPtrT> tmp400;
    TNode<IntPtrT> tmp401;
    TNode<IntPtrT> tmp402;
    ca_.Bind(&block35, &tmp381, &tmp382, &tmp383, &tmp384, &tmp385, &tmp386, &tmp387, &tmp388, &tmp389, &tmp390, &tmp391, &tmp392, &tmp393, &tmp394, &tmp395, &tmp396, &tmp397, &tmp398, &tmp399, &tmp400, &tmp401, &tmp402);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 39);
    TNode<IntPtrT> tmp403;
    USE(tmp403);
    tmp403 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, (SizeOf9ATfloat64_347(state_)));
    TNode<IntPtrT> tmp404;
    USE(tmp404);
    tmp404 = CodeStubAssembler(state_).IntPtrMul(TNode<IntPtrT>{tmp402}, TNode<IntPtrT>{tmp403});
    TNode<IntPtrT> tmp405;
    USE(tmp405);
    tmp405 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp399}, TNode<IntPtrT>{tmp404});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 38);
    TNode<HeapObject> tmp406;
    USE(tmp406);
    TNode<IntPtrT> tmp407;
    USE(tmp407);
    std::tie(tmp406, tmp407) = UnsafeNewReference9ATfloat64_1455(state_, TNode<HeapObject>{tmp398}, TNode<IntPtrT>{tmp405}).Flatten();
    ca_.Goto(&block34, tmp381, tmp382, tmp383, tmp384, tmp385, tmp386, tmp387, tmp388, tmp389, tmp390, tmp391, tmp392, tmp393, tmp394, tmp395, tmp396, tmp397, tmp398, tmp399, tmp400, tmp401, tmp402, tmp406, tmp407);
  }

  if (block36.is_used()) {
    TNode<RawPtrT> tmp408;
    TNode<RawPtrT> tmp409;
    TNode<IntPtrT> tmp410;
    TNode<Context> tmp411;
    TNode<Object> tmp412;
    TNode<IntPtrT> tmp413;
    TNode<FixedDoubleArray> tmp414;
    TNode<BoolT> tmp415;
    TNode<Float64T> tmp416;
    TNode<Float64T> tmp417;
    TNode<Float64T> tmp418;
    TNode<IntPtrT> tmp419;
    TNode<FixedDoubleArray> tmp420;
    TNode<IntPtrT> tmp421;
    TNode<IntPtrT> tmp422;
    TNode<IntPtrT> tmp423;
    TNode<IntPtrT> tmp424;
    TNode<HeapObject> tmp425;
    TNode<IntPtrT> tmp426;
    TNode<IntPtrT> tmp427;
    TNode<IntPtrT> tmp428;
    TNode<IntPtrT> tmp429;
    ca_.Bind(&block36, &tmp408, &tmp409, &tmp410, &tmp411, &tmp412, &tmp413, &tmp414, &tmp415, &tmp416, &tmp417, &tmp418, &tmp419, &tmp420, &tmp421, &tmp422, &tmp423, &tmp424, &tmp425, &tmp426, &tmp427, &tmp428, &tmp429);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 41);
    ca_.Goto(&block33, tmp408, tmp409, tmp410, tmp411, tmp412, tmp413, tmp414, tmp415, tmp416, tmp417, tmp418, tmp419, tmp420, tmp421, tmp422, tmp423, tmp424);
  }

  if (block34.is_used()) {
    TNode<RawPtrT> tmp430;
    TNode<RawPtrT> tmp431;
    TNode<IntPtrT> tmp432;
    TNode<Context> tmp433;
    TNode<Object> tmp434;
    TNode<IntPtrT> tmp435;
    TNode<FixedDoubleArray> tmp436;
    TNode<BoolT> tmp437;
    TNode<Float64T> tmp438;
    TNode<Float64T> tmp439;
    TNode<Float64T> tmp440;
    TNode<IntPtrT> tmp441;
    TNode<FixedDoubleArray> tmp442;
    TNode<IntPtrT> tmp443;
    TNode<IntPtrT> tmp444;
    TNode<IntPtrT> tmp445;
    TNode<IntPtrT> tmp446;
    TNode<HeapObject> tmp447;
    TNode<IntPtrT> tmp448;
    TNode<IntPtrT> tmp449;
    TNode<IntPtrT> tmp450;
    TNode<IntPtrT> tmp451;
    TNode<HeapObject> tmp452;
    TNode<IntPtrT> tmp453;
    ca_.Bind(&block34, &tmp430, &tmp431, &tmp432, &tmp433, &tmp434, &tmp435, &tmp436, &tmp437, &tmp438, &tmp439, &tmp440, &tmp441, &tmp442, &tmp443, &tmp444, &tmp445, &tmp446, &tmp447, &tmp448, &tmp449, &tmp450, &tmp451, &tmp452, &tmp453);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 46);
    ca_.Goto(&block32, tmp430, tmp431, tmp432, tmp433, tmp434, tmp435, tmp436, tmp437, tmp438, tmp439, tmp440, tmp441, tmp442, tmp443, tmp444, tmp445, tmp446, tmp452, tmp453);
  }

  if (block33.is_used()) {
    TNode<RawPtrT> tmp454;
    TNode<RawPtrT> tmp455;
    TNode<IntPtrT> tmp456;
    TNode<Context> tmp457;
    TNode<Object> tmp458;
    TNode<IntPtrT> tmp459;
    TNode<FixedDoubleArray> tmp460;
    TNode<BoolT> tmp461;
    TNode<Float64T> tmp462;
    TNode<Float64T> tmp463;
    TNode<Float64T> tmp464;
    TNode<IntPtrT> tmp465;
    TNode<FixedDoubleArray> tmp466;
    TNode<IntPtrT> tmp467;
    TNode<IntPtrT> tmp468;
    TNode<IntPtrT> tmp469;
    TNode<IntPtrT> tmp470;
    ca_.Bind(&block33, &tmp454, &tmp455, &tmp456, &tmp457, &tmp458, &tmp459, &tmp460, &tmp461, &tmp462, &tmp463, &tmp464, &tmp465, &tmp466, &tmp467, &tmp468, &tmp469, &tmp470);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block32.is_used()) {
    TNode<RawPtrT> tmp471;
    TNode<RawPtrT> tmp472;
    TNode<IntPtrT> tmp473;
    TNode<Context> tmp474;
    TNode<Object> tmp475;
    TNode<IntPtrT> tmp476;
    TNode<FixedDoubleArray> tmp477;
    TNode<BoolT> tmp478;
    TNode<Float64T> tmp479;
    TNode<Float64T> tmp480;
    TNode<Float64T> tmp481;
    TNode<IntPtrT> tmp482;
    TNode<FixedDoubleArray> tmp483;
    TNode<IntPtrT> tmp484;
    TNode<IntPtrT> tmp485;
    TNode<IntPtrT> tmp486;
    TNode<IntPtrT> tmp487;
    TNode<HeapObject> tmp488;
    TNode<IntPtrT> tmp489;
    ca_.Bind(&block32, &tmp471, &tmp472, &tmp473, &tmp474, &tmp475, &tmp476, &tmp477, &tmp478, &tmp479, &tmp480, &tmp481, &tmp482, &tmp483, &tmp484, &tmp485, &tmp486, &tmp487, &tmp488, &tmp489);
    ca_.Goto(&block31, tmp471, tmp472, tmp473, tmp474, tmp475, tmp476, tmp477, tmp478, tmp479, tmp480, tmp481, tmp482, tmp483, tmp484, tmp485, tmp486, tmp487, tmp488, tmp489);
  }

  if (block31.is_used()) {
    TNode<RawPtrT> tmp490;
    TNode<RawPtrT> tmp491;
    TNode<IntPtrT> tmp492;
    TNode<Context> tmp493;
    TNode<Object> tmp494;
    TNode<IntPtrT> tmp495;
    TNode<FixedDoubleArray> tmp496;
    TNode<BoolT> tmp497;
    TNode<Float64T> tmp498;
    TNode<Float64T> tmp499;
    TNode<Float64T> tmp500;
    TNode<IntPtrT> tmp501;
    TNode<FixedDoubleArray> tmp502;
    TNode<IntPtrT> tmp503;
    TNode<IntPtrT> tmp504;
    TNode<IntPtrT> tmp505;
    TNode<IntPtrT> tmp506;
    TNode<HeapObject> tmp507;
    TNode<IntPtrT> tmp508;
    ca_.Bind(&block31, &tmp490, &tmp491, &tmp492, &tmp493, &tmp494, &tmp495, &tmp496, &tmp497, &tmp498, &tmp499, &tmp500, &tmp501, &tmp502, &tmp503, &tmp504, &tmp505, &tmp506, &tmp507, &tmp508);
    ca_.SetSourcePosition("../../src/builtins/math.tq", 278);
    TNode<Float64T>tmp509 = CodeStubAssembler(state_).LoadReference<Float64T>(CodeStubAssembler::Reference{tmp507, tmp508});
    TNode<Float64T> tmp510;
    USE(tmp510);
    tmp510 = CodeStubAssembler(state_).Float64Div(TNode<Float64T>{tmp509}, TNode<Float64T>{tmp498});
    ca_.SetSourcePosition("../../src/builtins/math.tq", 279);
    TNode<Float64T> tmp511;
    USE(tmp511);
    tmp511 = CodeStubAssembler(state_).Float64Mul(TNode<Float64T>{tmp510}, TNode<Float64T>{tmp510});
    TNode<Float64T> tmp512;
    USE(tmp512);
    tmp512 = CodeStubAssembler(state_).Float64Sub(TNode<Float64T>{tmp511}, TNode<Float64T>{tmp500});
    ca_.SetSourcePosition("../../src/builtins/math.tq", 280);
    TNode<Float64T> tmp513;
    USE(tmp513);
    tmp513 = CodeStubAssembler(state_).Float64Add(TNode<Float64T>{tmp499}, TNode<Float64T>{tmp512});
    ca_.SetSourcePosition("../../src/builtins/math.tq", 281);
    TNode<Float64T> tmp514;
    USE(tmp514);
    tmp514 = CodeStubAssembler(state_).Float64Sub(TNode<Float64T>{tmp513}, TNode<Float64T>{tmp499});
    TNode<Float64T> tmp515;
    USE(tmp515);
    tmp515 = CodeStubAssembler(state_).Float64Sub(TNode<Float64T>{tmp514}, TNode<Float64T>{tmp512});
    ca_.SetSourcePosition("../../src/builtins/math.tq", 282);
    ca_.SetSourcePosition("../../src/builtins/math.tq", 277);
    ca_.Goto(&block30, tmp490, tmp491, tmp492, tmp493, tmp494, tmp495, tmp496, tmp497, tmp498, tmp513, tmp515, tmp501);
  }

  if (block30.is_used()) {
    TNode<RawPtrT> tmp516;
    TNode<RawPtrT> tmp517;
    TNode<IntPtrT> tmp518;
    TNode<Context> tmp519;
    TNode<Object> tmp520;
    TNode<IntPtrT> tmp521;
    TNode<FixedDoubleArray> tmp522;
    TNode<BoolT> tmp523;
    TNode<Float64T> tmp524;
    TNode<Float64T> tmp525;
    TNode<Float64T> tmp526;
    TNode<IntPtrT> tmp527;
    ca_.Bind(&block30, &tmp516, &tmp517, &tmp518, &tmp519, &tmp520, &tmp521, &tmp522, &tmp523, &tmp524, &tmp525, &tmp526, &tmp527);
    TNode<IntPtrT> tmp528;
    USE(tmp528);
    tmp528 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 1);
    TNode<IntPtrT> tmp529;
    USE(tmp529);
    tmp529 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp527}, TNode<IntPtrT>{tmp528});
    ca_.Goto(&block29, tmp516, tmp517, tmp518, tmp519, tmp520, tmp521, tmp522, tmp523, tmp524, tmp525, tmp526, tmp529);
  }

  if (block28.is_used()) {
    TNode<RawPtrT> tmp530;
    TNode<RawPtrT> tmp531;
    TNode<IntPtrT> tmp532;
    TNode<Context> tmp533;
    TNode<Object> tmp534;
    TNode<IntPtrT> tmp535;
    TNode<FixedDoubleArray> tmp536;
    TNode<BoolT> tmp537;
    TNode<Float64T> tmp538;
    TNode<Float64T> tmp539;
    TNode<Float64T> tmp540;
    TNode<IntPtrT> tmp541;
    ca_.Bind(&block28, &tmp530, &tmp531, &tmp532, &tmp533, &tmp534, &tmp535, &tmp536, &tmp537, &tmp538, &tmp539, &tmp540, &tmp541);
    ca_.SetSourcePosition("../../src/builtins/math.tq", 284);
    TNode<Float64T> tmp542;
    USE(tmp542);
    tmp542 = CodeStubAssembler(state_).Float64Sqrt(TNode<Float64T>{tmp539});
    TNode<Float64T> tmp543;
    USE(tmp543);
    tmp543 = CodeStubAssembler(state_).Float64Mul(TNode<Float64T>{tmp542}, TNode<Float64T>{tmp538});
    TNode<Number> tmp544;
    USE(tmp544);
    tmp544 = Convert20UT5ATSmi10HeapNumber9ATfloat64_201(state_, TNode<Float64T>{tmp543});
    arguments.PopAndReturn(tmp544);
  }
}

}  // namespace internal
}  // namespace v8

