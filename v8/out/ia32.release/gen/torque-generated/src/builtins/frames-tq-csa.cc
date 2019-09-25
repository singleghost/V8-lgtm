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

TNode<Smi> FromConstexpr11ATFrameType21ATconstexpr_FrameType_293(compiler::CodeAssemblerState* state_, StackFrame::Type p_t) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../src/builtins/frames.tq", 21);
    TNode<UintPtrT> tmp0;
    USE(tmp0);
    tmp0 = FromConstexpr9ATuintptr19ATconstexpr_uintptr_153(state_, (CodeStubAssembler(state_).ConstexprUintPtrShl(static_cast<uintptr_t>(p_t), kSmiTagSize)));
    TNode<Smi> tmp1;
    USE(tmp1);
    tmp1 = CodeStubAssembler(state_).BitcastWordToTaggedSigned(TNode<UintPtrT>{tmp0});
    TNode<Smi> tmp2;
    USE(tmp2);
    tmp2 = (TNode<Smi>{tmp1});
    ca_.Goto(&block1, tmp2);
  }

  if (block1.is_used()) {
    TNode<Smi> tmp3;
    ca_.Bind(&block1, &tmp3);
    ca_.SetSourcePosition("../../src/builtins/frames.tq", 13);
    ca_.Goto(&block2, tmp3);
  }

    TNode<Smi> tmp4;
    ca_.Bind(&block2, &tmp4);
  return TNode<Smi>{tmp4};
}

TNode<Smi> Cast11ATFrameType_294(compiler::CodeAssemblerState* state_, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Smi> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    TNode<Object> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../src/builtins/frames.tq", 25);
    TNode<BoolT> tmp1;
    USE(tmp1);
    tmp1 = CodeStubAssembler(state_).TaggedIsNotSmi(TNode<Object>{tmp0});
    ca_.Branch(tmp1, &block3, &block4, tmp0);
  }

  if (block3.is_used()) {
    TNode<Object> tmp2;
    ca_.Bind(&block3, &tmp2);
    ca_.Goto(&block1);
  }

  if (block4.is_used()) {
    TNode<Object> tmp3;
    ca_.Bind(&block4, &tmp3);
    ca_.SetSourcePosition("../../src/builtins/frames.tq", 29);
    TNode<Smi> tmp4;
    USE(tmp4);
    tmp4 = TORQUE_CAST(TNode<Object>{tmp3});
    ca_.Goto(&block2, tmp3, tmp4);
  }

  if (block2.is_used()) {
    TNode<Object> tmp5;
    TNode<Smi> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
    ca_.SetSourcePosition("../../src/builtins/frames.tq", 23);
    ca_.Goto(&block5, tmp5, tmp6);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    TNode<Object> tmp7;
    TNode<Smi> tmp8;
    ca_.Bind(&block5, &tmp7, &tmp8);
  return TNode<Smi>{tmp8};
}

TNode<Object> LoadObjectFromFrame_295(compiler::CodeAssemblerState* state_, TNode<RawPtrT> p_f, int32_t p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_f);

  if (block0.is_used()) {
    TNode<RawPtrT> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../src/builtins/frames.tq", 44);
    TNode<Object> tmp1;
    USE(tmp1);
    tmp1 = CodeStubAssembler(state_).LoadBufferObject(TNode<RawPtrT>{tmp0}, p_o);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    TNode<RawPtrT> tmp2;
    TNode<Object> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../src/builtins/frames.tq", 43);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    TNode<RawPtrT> tmp4;
    TNode<Object> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
  return TNode<Object>{tmp5};
}

TNode<RawPtrT> LoadPointerFromFrame_296(compiler::CodeAssemblerState* state_, TNode<RawPtrT> p_f, int32_t p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_f);

  if (block0.is_used()) {
    TNode<RawPtrT> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../src/builtins/frames.tq", 47);
    TNode<RawPtrT> tmp1;
    USE(tmp1);
    tmp1 = CodeStubAssembler(state_).LoadBufferPointer(TNode<RawPtrT>{tmp0}, p_o);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    TNode<RawPtrT> tmp2;
    TNode<RawPtrT> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../src/builtins/frames.tq", 46);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    TNode<RawPtrT> tmp4;
    TNode<RawPtrT> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
  return TNode<RawPtrT>{tmp5};
}

TNode<Smi> LoadSmiFromFrame_297(compiler::CodeAssemblerState* state_, TNode<RawPtrT> p_f, int32_t p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_f);

  if (block0.is_used()) {
    TNode<RawPtrT> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../src/builtins/frames.tq", 50);
    TNode<Smi> tmp1;
    USE(tmp1);
    tmp1 = CodeStubAssembler(state_).LoadBufferSmi(TNode<RawPtrT>{tmp0}, p_o);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    TNode<RawPtrT> tmp2;
    TNode<Smi> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../src/builtins/frames.tq", 49);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    TNode<RawPtrT> tmp4;
    TNode<Smi> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
  return TNode<Smi>{tmp5};
}

TNode<JSFunction> LoadFunctionFromFrame_298(compiler::CodeAssemblerState* state_, TNode<RawPtrT> p_f) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, JSFunction> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, JSFunction> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_f);

  if (block0.is_used()) {
    TNode<RawPtrT> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../src/builtins/frames.tq", 59);
    TNode<Object> tmp1;
    USE(tmp1);
    tmp1 = LoadObjectFromFrame_295(state_, TNode<RawPtrT>{tmp0}, StandardFrameConstants::kFunctionOffset);
    ca_.SetSourcePosition("../../src/builtins/frames.tq", 60);
    TNode<JSFunction> tmp2;
    USE(tmp2);
    tmp2 = TORQUE_CAST(TNode<Object>{tmp1});
    ca_.Goto(&block1, tmp0, tmp2);
  }

  if (block1.is_used()) {
    TNode<RawPtrT> tmp3;
    TNode<JSFunction> tmp4;
    ca_.Bind(&block1, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../src/builtins/frames.tq", 55);
    ca_.Goto(&block2, tmp3, tmp4);
  }

    TNode<RawPtrT> tmp5;
    TNode<JSFunction> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
  return TNode<JSFunction>{tmp6};
}

TNode<RawPtrT> LoadCallerFromFrame_299(compiler::CodeAssemblerState* state_, TNode<RawPtrT> p_f) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_f);

  if (block0.is_used()) {
    TNode<RawPtrT> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../src/builtins/frames.tq", 66);
    TNode<RawPtrT> tmp1;
    USE(tmp1);
    tmp1 = LoadPointerFromFrame_296(state_, TNode<RawPtrT>{tmp0}, StandardFrameConstants::kCallerFPOffset);
    ca_.SetSourcePosition("../../src/builtins/frames.tq", 67);
    TNode<RawPtrT> tmp2;
    USE(tmp2);
    tmp2 = (TNode<RawPtrT>{tmp1});
    ca_.Goto(&block1, tmp0, tmp2);
  }

  if (block1.is_used()) {
    TNode<RawPtrT> tmp3;
    TNode<RawPtrT> tmp4;
    ca_.Bind(&block1, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../src/builtins/frames.tq", 65);
    ca_.Goto(&block2, tmp3, tmp4);
  }

    TNode<RawPtrT> tmp5;
    TNode<RawPtrT> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
  return TNode<RawPtrT>{tmp6};
}

TNode<Object> Cast23UT11ATFrameType7Context_300(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Context> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Smi> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../src/builtins/frames.tq", 74);
    ca_.SetSourcePosition("../../src/builtins/frames.tq", 75);
    TNode<Context> tmp2;
    USE(tmp2);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp2 = Cast7Context_1483(state_, TNode<Context>{tmp0}, TNode<Object>{tmp1}, &label0);
    ca_.Goto(&block5, tmp0, tmp1, tmp1, tmp1, tmp2);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp0, tmp1, tmp1, tmp1);
    }
  }

  if (block6.is_used()) {
    TNode<Context> tmp3;
    TNode<Object> tmp4;
    TNode<Object> tmp5;
    TNode<Object> tmp6;
    ca_.Bind(&block6, &tmp3, &tmp4, &tmp5, &tmp6);
    ca_.Goto(&block4, tmp3, tmp4, tmp5);
  }

  if (block5.is_used()) {
    TNode<Context> tmp7;
    TNode<Object> tmp8;
    TNode<Object> tmp9;
    TNode<Object> tmp10;
    TNode<Context> tmp11;
    ca_.Bind(&block5, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11);
    ca_.SetSourcePosition("../../src/builtins/frames.tq", 76);
    ca_.Goto(&block2, tmp7, tmp8, tmp11);
  }

  if (block4.is_used()) {
    TNode<Context> tmp12;
    TNode<Object> tmp13;
    TNode<Object> tmp14;
    ca_.Bind(&block4, &tmp12, &tmp13, &tmp14);
    ca_.SetSourcePosition("../../src/builtins/frames.tq", 78);
    TNode<Smi> tmp15;
    USE(tmp15);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp15 = Cast11ATFrameType_294(state_, TNode<Object>{ca_.UncheckedCast<Object>(tmp14)}, &label0);
    ca_.Goto(&block9, tmp12, tmp13, tmp14, ca_.UncheckedCast<Object>(tmp14), tmp15);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block10, tmp12, tmp13, tmp14, ca_.UncheckedCast<Object>(tmp14));
    }
  }

  if (block10.is_used()) {
    TNode<Context> tmp16;
    TNode<Object> tmp17;
    TNode<Object> tmp18;
    TNode<Object> tmp19;
    ca_.Bind(&block10, &tmp16, &tmp17, &tmp18, &tmp19);
    ca_.Goto(&block8, tmp16, tmp17, tmp18);
  }

  if (block9.is_used()) {
    TNode<Context> tmp20;
    TNode<Object> tmp21;
    TNode<Object> tmp22;
    TNode<Object> tmp23;
    TNode<Smi> tmp24;
    ca_.Bind(&block9, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24);
    ca_.SetSourcePosition("../../src/builtins/frames.tq", 79);
    ca_.Goto(&block2, tmp20, tmp21, tmp24);
  }

  if (block8.is_used()) {
    TNode<Context> tmp25;
    TNode<Object> tmp26;
    TNode<Object> tmp27;
    ca_.Bind(&block8, &tmp25, &tmp26, &tmp27);
    ca_.SetSourcePosition("../../src/builtins/frames.tq", 81);
    ca_.SetSourcePosition("../../src/builtins/frames.tq", 82);
    ca_.Goto(&block1);
  }

  if (block2.is_used()) {
    TNode<Context> tmp28;
    TNode<Object> tmp29;
    TNode<Object> tmp30;
    ca_.Bind(&block2, &tmp28, &tmp29, &tmp30);
    ca_.SetSourcePosition("../../src/builtins/frames.tq", 71);
    ca_.Goto(&block11, tmp28, tmp29, tmp30);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    TNode<Context> tmp31;
    TNode<Object> tmp32;
    TNode<Object> tmp33;
    ca_.Bind(&block11, &tmp31, &tmp32, &tmp33);
  return TNode<Object>{tmp33};
}

TNode<Object> LoadContextOrFrameTypeFromFrame_301(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<RawPtrT> p_f) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_f);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<RawPtrT> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../src/builtins/frames.tq", 93);
    TNode<Object> tmp2;
    USE(tmp2);
    tmp2 = LoadObjectFromFrame_295(state_, TNode<RawPtrT>{tmp1}, StandardFrameConstants::kContextOrFrameTypeOffset);
    ca_.SetSourcePosition("../../src/builtins/frames.tq", 92);
    TNode<Object> tmp3;
    USE(tmp3);
    tmp3 = UnsafeCast23UT11ATFrameType7Context_1484(state_, TNode<Context>{tmp0}, TNode<Object>{tmp2});
    ca_.Goto(&block1, tmp0, tmp1, tmp3);
  }

  if (block1.is_used()) {
    TNode<Context> tmp4;
    TNode<RawPtrT> tmp5;
    TNode<Object> tmp6;
    ca_.Bind(&block1, &tmp4, &tmp5, &tmp6);
    ca_.SetSourcePosition("../../src/builtins/frames.tq", 89);
    ca_.Goto(&block2, tmp4, tmp5, tmp6);
  }

    TNode<Context> tmp7;
    TNode<RawPtrT> tmp8;
    TNode<Object> tmp9;
    ca_.Bind(&block2, &tmp7, &tmp8, &tmp9);
  return TNode<Object>{tmp9};
}

TNode<Smi> LoadLengthFromAdapterFrame_302(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<RawPtrT> p_f) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_f);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<RawPtrT> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../src/builtins/frames.tq", 101);
    TNode<Smi> tmp2;
    USE(tmp2);
    tmp2 = LoadSmiFromFrame_297(state_, TNode<RawPtrT>{tmp1}, ArgumentsAdaptorFrameConstants::kLengthOffset);
    ca_.Goto(&block1, tmp0, tmp1, tmp2);
  }

  if (block1.is_used()) {
    TNode<Context> tmp3;
    TNode<RawPtrT> tmp4;
    TNode<Smi> tmp5;
    ca_.Bind(&block1, &tmp3, &tmp4, &tmp5);
    ca_.SetSourcePosition("../../src/builtins/frames.tq", 98);
    ca_.Goto(&block2, tmp3, tmp4, tmp5);
  }

    TNode<Context> tmp6;
    TNode<RawPtrT> tmp7;
    TNode<Smi> tmp8;
    ca_.Bind(&block2, &tmp6, &tmp7, &tmp8);
  return TNode<Smi>{tmp8};
}

TNode<BoolT> FrameTypeEquals_303(compiler::CodeAssemblerState* state_, TNode<Smi> p_f1, TNode<Smi> p_f2) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, BoolT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, BoolT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_f1, p_f2);

  if (block0.is_used()) {
    TNode<Smi> tmp0;
    TNode<Smi> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../src/builtins/frames.tq", 105);
    TNode<BoolT> tmp2;
    USE(tmp2);
    tmp2 = CodeStubAssembler(state_).TaggedEqual(TNode<Object>{tmp0}, TNode<Object>{tmp1});
    ca_.Goto(&block1, tmp0, tmp1, tmp2);
  }

  if (block1.is_used()) {
    TNode<Smi> tmp3;
    TNode<Smi> tmp4;
    TNode<BoolT> tmp5;
    ca_.Bind(&block1, &tmp3, &tmp4, &tmp5);
    ca_.SetSourcePosition("../../src/builtins/frames.tq", 104);
    ca_.Goto(&block2, tmp3, tmp4, tmp5);
  }

    TNode<Smi> tmp6;
    TNode<Smi> tmp7;
    TNode<BoolT> tmp8;
    ca_.Bind(&block2, &tmp6, &tmp7, &tmp8);
  return TNode<BoolT>{tmp8};
}

TNode<RawPtrT> Cast15ATStandardFrame_304(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<RawPtrT> p_f, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, Object, HeapObject> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, HeapObject> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, HeapObject> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_f);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<RawPtrT> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../src/builtins/frames.tq", 112);
    TNode<Object> tmp2;
    USE(tmp2);
    tmp2 = LoadContextOrFrameTypeFromFrame_301(state_, TNode<Context>{tmp0}, TNode<RawPtrT>{tmp1});
    TNode<HeapObject> tmp3;
    USE(tmp3);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp3 = Cast10HeapObject_1464(state_, TNode<Context>{tmp0}, TNode<Object>{tmp2}, &label0);
    ca_.Goto(&block3, tmp0, tmp1, tmp2, tmp3);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1, tmp2);
    }
  }

  if (block4.is_used()) {
    TNode<Context> tmp4;
    TNode<RawPtrT> tmp5;
    TNode<Object> tmp6;
    ca_.Bind(&block4, &tmp4, &tmp5, &tmp6);
    ca_.Goto(&block1);
  }

  if (block3.is_used()) {
    TNode<Context> tmp7;
    TNode<RawPtrT> tmp8;
    TNode<Object> tmp9;
    TNode<HeapObject> tmp10;
    ca_.Bind(&block3, &tmp7, &tmp8, &tmp9, &tmp10);
    ca_.SetSourcePosition("../../src/builtins/frames.tq", 111);
    ca_.SetSourcePosition("../../src/builtins/frames.tq", 122);
    TNode<BoolT> tmp11;
    USE(tmp11);
    tmp11 = CodeStubAssembler(state_).IsContext(TNode<HeapObject>{tmp10});
    ca_.Branch(tmp11, &block5, &block6, tmp7, tmp8, tmp10);
  }

  if (block5.is_used()) {
    TNode<Context> tmp12;
    TNode<RawPtrT> tmp13;
    TNode<HeapObject> tmp14;
    ca_.Bind(&block5, &tmp12, &tmp13, &tmp14);
    ca_.SetSourcePosition("../../src/builtins/frames.tq", 123);
    TNode<RawPtrT> tmp15;
    USE(tmp15);
    tmp15 = (TNode<RawPtrT>{tmp13});
    ca_.Goto(&block2, tmp12, tmp13, tmp15);
  }

  if (block6.is_used()) {
    TNode<Context> tmp16;
    TNode<RawPtrT> tmp17;
    TNode<HeapObject> tmp18;
    ca_.Bind(&block6, &tmp16, &tmp17, &tmp18);
    ca_.SetSourcePosition("../../src/builtins/frames.tq", 125);
    ca_.Goto(&block1);
  }

  if (block2.is_used()) {
    TNode<Context> tmp19;
    TNode<RawPtrT> tmp20;
    TNode<RawPtrT> tmp21;
    ca_.Bind(&block2, &tmp19, &tmp20, &tmp21);
    ca_.SetSourcePosition("../../src/builtins/frames.tq", 109);
    ca_.Goto(&block7, tmp19, tmp20, tmp21);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    TNode<Context> tmp22;
    TNode<RawPtrT> tmp23;
    TNode<RawPtrT> tmp24;
    ca_.Bind(&block7, &tmp22, &tmp23, &tmp24);
  return TNode<RawPtrT>{tmp24};
}

TNode<RawPtrT> Cast23ATArgumentsAdaptorFrame_305(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<RawPtrT> p_f, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, Object, Smi> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, Smi> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, Smi> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, RawPtrT> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_f);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<RawPtrT> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../src/builtins/frames.tq", 131);
    TNode<Object> tmp2;
    USE(tmp2);
    tmp2 = LoadContextOrFrameTypeFromFrame_301(state_, TNode<Context>{tmp0}, TNode<RawPtrT>{tmp1});
    TNode<Smi> tmp3;
    USE(tmp3);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp3 = Cast11ATFrameType_294(state_, TNode<Object>{tmp2}, &label0);
    ca_.Goto(&block3, tmp0, tmp1, tmp2, tmp3);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1, tmp2);
    }
  }

  if (block4.is_used()) {
    TNode<Context> tmp4;
    TNode<RawPtrT> tmp5;
    TNode<Object> tmp6;
    ca_.Bind(&block4, &tmp4, &tmp5, &tmp6);
    ca_.Goto(&block1);
  }

  if (block3.is_used()) {
    TNode<Context> tmp7;
    TNode<RawPtrT> tmp8;
    TNode<Object> tmp9;
    TNode<Smi> tmp10;
    ca_.Bind(&block3, &tmp7, &tmp8, &tmp9, &tmp10);
    ca_.SetSourcePosition("../../src/builtins/frames.tq", 130);
    ca_.SetSourcePosition("../../src/builtins/frames.tq", 132);
    TNode<Smi> tmp11;
    USE(tmp11);
    tmp11 = FromConstexpr11ATFrameType21ATconstexpr_FrameType_293(state_, StackFrame::ARGUMENTS_ADAPTOR);
    TNode<BoolT> tmp12;
    USE(tmp12);
    tmp12 = FrameTypeEquals_303(state_, TNode<Smi>{tmp10}, TNode<Smi>{tmp11});
    ca_.Branch(tmp12, &block5, &block6, tmp7, tmp8, tmp10);
  }

  if (block5.is_used()) {
    TNode<Context> tmp13;
    TNode<RawPtrT> tmp14;
    TNode<Smi> tmp15;
    ca_.Bind(&block5, &tmp13, &tmp14, &tmp15);
    ca_.SetSourcePosition("../../src/builtins/frames.tq", 133);
    TNode<RawPtrT> tmp16;
    USE(tmp16);
    tmp16 = (TNode<RawPtrT>{tmp14});
    ca_.Goto(&block2, tmp13, tmp14, tmp16);
  }

  if (block6.is_used()) {
    TNode<Context> tmp17;
    TNode<RawPtrT> tmp18;
    TNode<Smi> tmp19;
    ca_.Bind(&block6, &tmp17, &tmp18, &tmp19);
    ca_.SetSourcePosition("../../src/builtins/frames.tq", 135);
    ca_.Goto(&block1);
  }

  if (block2.is_used()) {
    TNode<Context> tmp20;
    TNode<RawPtrT> tmp21;
    TNode<RawPtrT> tmp22;
    ca_.Bind(&block2, &tmp20, &tmp21, &tmp22);
    ca_.SetSourcePosition("../../src/builtins/frames.tq", 128);
    ca_.Goto(&block7, tmp20, tmp21, tmp22);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    TNode<Context> tmp23;
    TNode<RawPtrT> tmp24;
    TNode<RawPtrT> tmp25;
    ca_.Bind(&block7, &tmp23, &tmp24, &tmp25);
  return TNode<RawPtrT>{tmp25};
}

TNode<JSFunction> LoadTargetFromFrame_306(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSFunction> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSFunction> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../src/builtins/frames.tq", 146);
    TNode<RawPtrT> tmp0;
    USE(tmp0);
    tmp0 = CodeStubAssembler(state_).LoadFramePointer();
    TNode<JSFunction> tmp1;
    USE(tmp1);
    tmp1 = LoadFunctionFromFrame_298(state_, TNode<RawPtrT>{tmp0});
    ca_.Goto(&block1, tmp1);
  }

  if (block1.is_used()) {
    TNode<JSFunction> tmp2;
    ca_.Bind(&block1, &tmp2);
    ca_.SetSourcePosition("../../src/builtins/frames.tq", 144);
    ca_.Goto(&block2, tmp2);
  }

    TNode<JSFunction> tmp3;
    ca_.Bind(&block2, &tmp3);
  return TNode<JSFunction>{tmp3};
}

TNode<Context> Cast7Context_1483(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, HeapObject> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject, Context> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Context> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Context> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
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
    TNode<Context> tmp10;
    USE(tmp10);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp10 = Cast7Context_115(state_, TNode<HeapObject>{tmp9}, &label0);
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
    TNode<Context> tmp17;
    ca_.Bind(&block5, &tmp14, &tmp15, &tmp16, &tmp17);
    ca_.Goto(&block2, tmp14, tmp15, tmp17);
  }

  if (block2.is_used()) {
    TNode<Context> tmp18;
    TNode<Object> tmp19;
    TNode<Context> tmp20;
    ca_.Bind(&block2, &tmp18, &tmp19, &tmp20);
    ca_.SetSourcePosition("../../src/builtins/frames.tq", 75);
    ca_.Goto(&block7, tmp18, tmp19, tmp20);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    TNode<Context> tmp21;
    TNode<Object> tmp22;
    TNode<Context> tmp23;
    ca_.Bind(&block7, &tmp21, &tmp22, &tmp23);
  return TNode<Context>{tmp23};
}

TNode<Object> UnsafeCast23UT11ATFrameType7Context_1484(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 2846);
    TNode<Object> tmp2;
    USE(tmp2);
    tmp2 = (TNode<Object>{tmp1});
    ca_.Goto(&block1, tmp0, tmp1, tmp2);
  }

  if (block1.is_used()) {
    TNode<Context> tmp3;
    TNode<Object> tmp4;
    TNode<Object> tmp5;
    ca_.Bind(&block1, &tmp3, &tmp4, &tmp5);
    ca_.SetSourcePosition("../../src/builtins/frames.tq", 92);
    ca_.Goto(&block2, tmp3, tmp4, tmp5);
  }

    TNode<Context> tmp6;
    TNode<Object> tmp7;
    TNode<Object> tmp8;
    ca_.Bind(&block2, &tmp6, &tmp7, &tmp8);
  return TNode<Object>{tmp8};
}

}  // namespace internal
}  // namespace v8

