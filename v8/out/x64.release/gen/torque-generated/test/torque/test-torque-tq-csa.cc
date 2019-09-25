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

TNode<BoolT> ElementsKindTestHelper1_392(compiler::CodeAssemblerState* state_, ElementsKind p_kind) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 7);
    if ((((CodeStubAssembler(state_).ElementsKindEqual(p_kind, UINT8_ELEMENTS)) || (CodeStubAssembler(state_).ElementsKindEqual(p_kind, UINT16_ELEMENTS))))) {
      ca_.Goto(&block2);
    } else {
      ca_.Goto(&block3);
    }
  }

  if (block2.is_used()) {
    ca_.Bind(&block2);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 8);
    TNode<BoolT> tmp0;
    USE(tmp0);
    tmp0 = FromConstexpr6ATbool16ATconstexpr_bool_167(state_, true);
    ca_.Goto(&block1, tmp0);
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 10);
    TNode<BoolT> tmp1;
    USE(tmp1);
    tmp1 = FromConstexpr6ATbool16ATconstexpr_bool_167(state_, false);
    ca_.Goto(&block1, tmp1);
  }

  if (block1.is_used()) {
    TNode<BoolT> tmp2;
    ca_.Bind(&block1, &tmp2);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 6);
    ca_.Goto(&block5, tmp2);
  }

    TNode<BoolT> tmp3;
    ca_.Bind(&block5, &tmp3);
  return TNode<BoolT>{tmp3};
}

bool ElementsKindTestHelper2_393(compiler::CodeAssemblerState* state_, ElementsKind p_kind) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 15);
    ca_.Goto(&block1);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 14);
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
  return ((CodeStubAssembler(state_).ElementsKindEqual(p_kind, UINT8_ELEMENTS)) || (CodeStubAssembler(state_).ElementsKindEqual(p_kind, UINT16_ELEMENTS)));
}

void LabelTestHelper1_394(compiler::CodeAssemblerState* state_, compiler::CodeAssemblerLabel* label_Label1) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 20);
    ca_.Goto(&block1);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 18);
    ca_.Goto(label_Label1);
  }
}

void LabelTestHelper2_395(compiler::CodeAssemblerState* state_, compiler::CodeAssemblerLabel* label_Label2, compiler::TypedCodeAssemblerVariable<Smi>* label_Label2_parameter_0) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 25);
    TNode<Smi> tmp0;
    USE(tmp0);
    tmp0 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 42);
    ca_.Goto(&block1, tmp0);
  }

  if (block1.is_used()) {
    TNode<Smi> tmp1;
    ca_.Bind(&block1, &tmp1);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 23);
    *label_Label2_parameter_0 = tmp1;
    ca_.Goto(label_Label2);
  }
}

void LabelTestHelper3_396(compiler::CodeAssemblerState* state_, compiler::CodeAssemblerLabel* label_Label3, compiler::TypedCodeAssemblerVariable<Oddball>* label_Label3_parameter_0, compiler::TypedCodeAssemblerVariable<Smi>* label_Label3_parameter_1) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Oddball, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 30);
    TNode<Oddball> tmp0;
    USE(tmp0);
    tmp0 = Null_63(state_);
    TNode<Smi> tmp1;
    USE(tmp1);
    tmp1 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 7);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    TNode<Oddball> tmp2;
    TNode<Smi> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 28);
    *label_Label3_parameter_1 = tmp3;
    *label_Label3_parameter_0 = tmp2;
    ca_.Goto(label_Label3);
  }
}

void TestConstexpr1_397(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 35);
    TNode<BoolT> tmp0;
    USE(tmp0);
    tmp0 = FromConstexpr6ATbool16ATconstexpr_bool_167(state_, (CodeStubAssembler(state_).IsFastElementsKind(PACKED_SMI_ELEMENTS)));
    ca_.Branch(tmp0, &block2, &block3);
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    CodeStubAssembler(state_).FailAssert("Torque assert 'FromConstexpr<bool>(IsFastElementsKind(PACKED_SMI_ELEMENTS))' failed", "test/torque/test-torque.tq", 35);
  }

  if (block2.is_used()) {
    ca_.Bind(&block2);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 33);
    ca_.Goto(&block1);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(&block4);
  }

    ca_.Bind(&block4);
}

void TestConstexprIf_398(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 40);
    TNode<BoolT> tmp0;
    USE(tmp0);
    tmp0 = ElementsKindTestHelper1_392(state_, UINT8_ELEMENTS);
    ca_.Branch(tmp0, &block2, &block3);
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    CodeStubAssembler(state_).FailAssert("Torque assert 'ElementsKindTestHelper1(UINT8_ELEMENTS)' failed", "test/torque/test-torque.tq", 40);
  }

  if (block2.is_used()) {
    ca_.Bind(&block2);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 41);
    TNode<BoolT> tmp1;
    USE(tmp1);
    tmp1 = ElementsKindTestHelper1_392(state_, UINT16_ELEMENTS);
    ca_.Branch(tmp1, &block4, &block5);
  }

  if (block5.is_used()) {
    ca_.Bind(&block5);
    CodeStubAssembler(state_).FailAssert("Torque assert 'ElementsKindTestHelper1(UINT16_ELEMENTS)' failed", "test/torque/test-torque.tq", 41);
  }

  if (block4.is_used()) {
    ca_.Bind(&block4);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 42);
    TNode<BoolT> tmp2;
    USE(tmp2);
    tmp2 = ElementsKindTestHelper1_392(state_, UINT32_ELEMENTS);
    TNode<BoolT> tmp3;
    USE(tmp3);
    tmp3 = CodeStubAssembler(state_).Word32BinaryNot(TNode<BoolT>{tmp2});
    ca_.Branch(tmp3, &block6, &block7);
  }

  if (block7.is_used()) {
    ca_.Bind(&block7);
    CodeStubAssembler(state_).FailAssert("Torque assert '!ElementsKindTestHelper1(UINT32_ELEMENTS)' failed", "test/torque/test-torque.tq", 42);
  }

  if (block6.is_used()) {
    ca_.Bind(&block6);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 38);
    ca_.Goto(&block1);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(&block8);
  }

    ca_.Bind(&block8);
}

void TestConstexprReturn_399(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block9(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 47);
    TNode<BoolT> tmp0;
    USE(tmp0);
    tmp0 = FromConstexpr6ATbool16ATconstexpr_bool_167(state_, (ElementsKindTestHelper2_393(state_, UINT8_ELEMENTS)));
    ca_.Branch(tmp0, &block2, &block3);
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    CodeStubAssembler(state_).FailAssert("Torque assert 'FromConstexpr<bool>(ElementsKindTestHelper2(UINT8_ELEMENTS))' failed", "test/torque/test-torque.tq", 47);
  }

  if (block2.is_used()) {
    ca_.Bind(&block2);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 48);
    TNode<BoolT> tmp1;
    USE(tmp1);
    tmp1 = FromConstexpr6ATbool16ATconstexpr_bool_167(state_, (ElementsKindTestHelper2_393(state_, UINT16_ELEMENTS)));
    ca_.Branch(tmp1, &block4, &block5);
  }

  if (block5.is_used()) {
    ca_.Bind(&block5);
    CodeStubAssembler(state_).FailAssert("Torque assert 'FromConstexpr<bool>(ElementsKindTestHelper2(UINT16_ELEMENTS))' failed", "test/torque/test-torque.tq", 48);
  }

  if (block4.is_used()) {
    ca_.Bind(&block4);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 49);
    TNode<BoolT> tmp2;
    USE(tmp2);
    tmp2 = FromConstexpr6ATbool16ATconstexpr_bool_167(state_, (ElementsKindTestHelper2_393(state_, UINT32_ELEMENTS)));
    TNode<BoolT> tmp3;
    USE(tmp3);
    tmp3 = CodeStubAssembler(state_).Word32BinaryNot(TNode<BoolT>{tmp2});
    ca_.Branch(tmp3, &block6, &block7);
  }

  if (block7.is_used()) {
    ca_.Bind(&block7);
    CodeStubAssembler(state_).FailAssert("Torque assert '!FromConstexpr<bool>(ElementsKindTestHelper2(UINT32_ELEMENTS))' failed", "test/torque/test-torque.tq", 49);
  }

  if (block6.is_used()) {
    ca_.Bind(&block6);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 50);
    TNode<BoolT> tmp4;
    USE(tmp4);
    tmp4 = FromConstexpr6ATbool16ATconstexpr_bool_167(state_, (CodeStubAssembler(state_).ConstexprBoolNot((ElementsKindTestHelper2_393(state_, UINT32_ELEMENTS)))));
    ca_.Branch(tmp4, &block8, &block9);
  }

  if (block9.is_used()) {
    ca_.Bind(&block9);
    CodeStubAssembler(state_).FailAssert("Torque assert 'FromConstexpr<bool>(!ElementsKindTestHelper2(UINT32_ELEMENTS))' failed", "test/torque/test-torque.tq", 50);
  }

  if (block8.is_used()) {
    ca_.Bind(&block8);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 45);
    ca_.Goto(&block1);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(&block10);
  }

    ca_.Bind(&block10);
}

TNode<Oddball> TestGotoLabel_400(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Oddball> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Oddball> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 56);
    compiler::CodeAssemblerLabel label0(&ca_);
    LabelTestHelper1_394(state_, &label0);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4);
    }
  }

  if (block4.is_used()) {
    ca_.Bind(&block4);
    ca_.Goto(&block3);
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 59);
    TNode<Oddball> tmp0;
    USE(tmp0);
    tmp0 = True_65(state_);
    ca_.Goto(&block1, tmp0);
  }

  if (block1.is_used()) {
    TNode<Oddball> tmp1;
    ca_.Bind(&block1, &tmp1);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 53);
    ca_.Goto(&block5, tmp1);
  }

    TNode<Oddball> tmp2;
    ca_.Bind(&block5, &tmp2);
  return TNode<Oddball>{tmp2};
}

TNode<Oddball> TestGotoLabelWithOneParameter_401(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block6(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Oddball> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Oddball> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 66);
    compiler::TypedCodeAssemblerVariable<Smi> result_0_0(&ca_);
    compiler::CodeAssemblerLabel label0(&ca_);
    LabelTestHelper2_395(state_, &label0, &result_0_0);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, result_0_0.value());
    }
  }

  if (block4.is_used()) {
    TNode<Smi> tmp0;
    ca_.Bind(&block4, &tmp0);
    ca_.Goto(&block3, tmp0);
  }

  if (block3.is_used()) {
    TNode<Smi> tmp1;
    ca_.Bind(&block3, &tmp1);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 69);
    TNode<Smi> tmp2;
    USE(tmp2);
    tmp2 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 42);
    TNode<BoolT> tmp3;
    USE(tmp3);
    tmp3 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{tmp1}, TNode<Smi>{tmp2});
    ca_.Branch(tmp3, &block5, &block6, tmp1);
  }

  if (block6.is_used()) {
    TNode<Smi> tmp4;
    ca_.Bind(&block6, &tmp4);
    CodeStubAssembler(state_).FailAssert("Torque assert 'smi == 42' failed", "test/torque/test-torque.tq", 69);
  }

  if (block5.is_used()) {
    TNode<Smi> tmp5;
    ca_.Bind(&block5, &tmp5);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 70);
    TNode<Oddball> tmp6;
    USE(tmp6);
    tmp6 = True_65(state_);
    ca_.Goto(&block1, tmp6);
  }

  if (block1.is_used()) {
    TNode<Oddball> tmp7;
    ca_.Bind(&block1, &tmp7);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 63);
    ca_.Goto(&block7, tmp7);
  }

    TNode<Oddball> tmp8;
    ca_.Bind(&block7, &tmp8);
  return TNode<Oddball>{tmp8};
}

TNode<Oddball> TestGotoLabelWithTwoParameters_402(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Oddball, Smi> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Oddball, Smi> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Oddball, Smi> block6(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Oddball, Smi> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Oddball, Smi> block8(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Oddball, Smi> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Oddball> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Oddball> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 77);
    compiler::TypedCodeAssemblerVariable<Oddball> result_0_0(&ca_);
    compiler::TypedCodeAssemblerVariable<Smi> result_0_1(&ca_);
    compiler::CodeAssemblerLabel label0(&ca_);
    LabelTestHelper3_396(state_, &label0, &result_0_0, &result_0_1);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, result_0_0.value(), result_0_1.value());
    }
  }

  if (block4.is_used()) {
    TNode<Oddball> tmp0;
    TNode<Smi> tmp1;
    ca_.Bind(&block4, &tmp0, &tmp1);
    ca_.Goto(&block3, tmp0, tmp1);
  }

  if (block3.is_used()) {
    TNode<Oddball> tmp2;
    TNode<Smi> tmp3;
    ca_.Bind(&block3, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 80);
    TNode<Oddball> tmp4;
    USE(tmp4);
    tmp4 = Null_63(state_);
    TNode<BoolT> tmp5;
    USE(tmp5);
    tmp5 = CodeStubAssembler(state_).TaggedEqual(TNode<HeapObject>{tmp2}, TNode<HeapObject>{tmp4});
    ca_.Branch(tmp5, &block5, &block6, tmp2, tmp3);
  }

  if (block6.is_used()) {
    TNode<Oddball> tmp6;
    TNode<Smi> tmp7;
    ca_.Bind(&block6, &tmp6, &tmp7);
    CodeStubAssembler(state_).FailAssert("Torque assert 'o == Null' failed", "test/torque/test-torque.tq", 80);
  }

  if (block5.is_used()) {
    TNode<Oddball> tmp8;
    TNode<Smi> tmp9;
    ca_.Bind(&block5, &tmp8, &tmp9);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 81);
    TNode<Smi> tmp10;
    USE(tmp10);
    tmp10 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 7);
    TNode<BoolT> tmp11;
    USE(tmp11);
    tmp11 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{tmp9}, TNode<Smi>{tmp10});
    ca_.Branch(tmp11, &block7, &block8, tmp8, tmp9);
  }

  if (block8.is_used()) {
    TNode<Oddball> tmp12;
    TNode<Smi> tmp13;
    ca_.Bind(&block8, &tmp12, &tmp13);
    CodeStubAssembler(state_).FailAssert("Torque assert 'smi == 7' failed", "test/torque/test-torque.tq", 81);
  }

  if (block7.is_used()) {
    TNode<Oddball> tmp14;
    TNode<Smi> tmp15;
    ca_.Bind(&block7, &tmp14, &tmp15);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 82);
    TNode<Oddball> tmp16;
    USE(tmp16);
    tmp16 = True_65(state_);
    ca_.Goto(&block1, tmp16);
  }

  if (block1.is_used()) {
    TNode<Oddball> tmp17;
    ca_.Bind(&block1, &tmp17);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 74);
    ca_.Goto(&block9, tmp17);
  }

    TNode<Oddball> tmp18;
    ca_.Bind(&block9, &tmp18);
  return TNode<Oddball>{tmp18};
}

TF_BUILTIN(GenericBuiltinTest90UT8ATBigInt7ATFalse6ATNull5ATSmi6ATTrue11ATUndefined10HeapNumber10JSReceiver6String6Symbol, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  TNode<Object> parameter1 = UncheckedCast<Object>(Parameter(Descriptor::kParam));
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 91);
    CodeStubAssembler(state_).Return(tmp1);
  }
}

void TestBuiltinSpecialization_403(compiler::CodeAssemblerState* state_, TNode<Context> p_c) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context> block3(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context> block5(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context> block7(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context> block9(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_c);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 96);
    TNode<Smi> tmp1;
    USE(tmp1);
    tmp1 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 0);
    TNode<Object> tmp2;
    tmp2 = CodeStubAssembler(state_).CallBuiltin(Builtins::kGenericBuiltinTest5ATSmi, tmp0, tmp1);
    USE(tmp2);
    TNode<Oddball> tmp3;
    USE(tmp3);
    tmp3 = Null_63(state_);
    TNode<BoolT> tmp4;
    USE(tmp4);
    tmp4 = CodeStubAssembler(state_).TaggedEqual(TNode<Object>{tmp2}, TNode<HeapObject>{tmp3});
    ca_.Branch(tmp4, &block2, &block3, tmp0);
  }

  if (block3.is_used()) {
    TNode<Context> tmp5;
    ca_.Bind(&block3, &tmp5);
    CodeStubAssembler(state_).FailAssert("Torque assert 'GenericBuiltinTest<Smi>(c, 0) == Null' failed", "test/torque/test-torque.tq", 96);
  }

  if (block2.is_used()) {
    TNode<Context> tmp6;
    ca_.Bind(&block2, &tmp6);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 97);
    TNode<Smi> tmp7;
    USE(tmp7);
    tmp7 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 1);
    TNode<Object> tmp8;
    tmp8 = CodeStubAssembler(state_).CallBuiltin(Builtins::kGenericBuiltinTest5ATSmi, tmp6, tmp7);
    USE(tmp8);
    TNode<Oddball> tmp9;
    USE(tmp9);
    tmp9 = Null_63(state_);
    TNode<BoolT> tmp10;
    USE(tmp10);
    tmp10 = CodeStubAssembler(state_).TaggedEqual(TNode<Object>{tmp8}, TNode<HeapObject>{tmp9});
    ca_.Branch(tmp10, &block4, &block5, tmp6);
  }

  if (block5.is_used()) {
    TNode<Context> tmp11;
    ca_.Bind(&block5, &tmp11);
    CodeStubAssembler(state_).FailAssert("Torque assert 'GenericBuiltinTest<Smi>(c, 1) == Null' failed", "test/torque/test-torque.tq", 97);
  }

  if (block4.is_used()) {
    TNode<Context> tmp12;
    ca_.Bind(&block4, &tmp12);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 98);
    TNode<Oddball> tmp13;
    USE(tmp13);
    tmp13 = Undefined_64(state_);
    TNode<Object> tmp14;
    tmp14 = CodeStubAssembler(state_).CallBuiltin(Builtins::kGenericBuiltinTest90UT8ATBigInt7ATFalse6ATNull5ATSmi6ATTrue11ATUndefined10HeapNumber10JSReceiver6String6Symbol, tmp12, tmp13);
    USE(tmp14);
    TNode<Oddball> tmp15;
    USE(tmp15);
    tmp15 = Undefined_64(state_);
    TNode<BoolT> tmp16;
    USE(tmp16);
    tmp16 = CodeStubAssembler(state_).TaggedEqual(TNode<Object>{tmp14}, TNode<HeapObject>{tmp15});
    ca_.Branch(tmp16, &block6, &block7, tmp12);
  }

  if (block7.is_used()) {
    TNode<Context> tmp17;
    ca_.Bind(&block7, &tmp17);
    CodeStubAssembler(state_).FailAssert("Torque assert 'GenericBuiltinTest<JSAny>(c, Undefined) == Undefined' failed", "test/torque/test-torque.tq", 98);
  }

  if (block6.is_used()) {
    TNode<Context> tmp18;
    ca_.Bind(&block6, &tmp18);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 99);
    TNode<Oddball> tmp19;
    USE(tmp19);
    tmp19 = Undefined_64(state_);
    TNode<Object> tmp20;
    tmp20 = CodeStubAssembler(state_).CallBuiltin(Builtins::kGenericBuiltinTest90UT8ATBigInt7ATFalse6ATNull5ATSmi6ATTrue11ATUndefined10HeapNumber10JSReceiver6String6Symbol, tmp18, tmp19);
    USE(tmp20);
    TNode<Oddball> tmp21;
    USE(tmp21);
    tmp21 = Undefined_64(state_);
    TNode<BoolT> tmp22;
    USE(tmp22);
    tmp22 = CodeStubAssembler(state_).TaggedEqual(TNode<Object>{tmp20}, TNode<HeapObject>{tmp21});
    ca_.Branch(tmp22, &block8, &block9, tmp18);
  }

  if (block9.is_used()) {
    TNode<Context> tmp23;
    ca_.Bind(&block9, &tmp23);
    CodeStubAssembler(state_).FailAssert("Torque assert 'GenericBuiltinTest<JSAny>(c, Undefined) == Undefined' failed", "test/torque/test-torque.tq", 99);
  }

  if (block8.is_used()) {
    TNode<Context> tmp24;
    ca_.Bind(&block8, &tmp24);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 94);
    ca_.Goto(&block1, tmp24);
  }

  if (block1.is_used()) {
    TNode<Context> tmp25;
    ca_.Bind(&block1, &tmp25);
    ca_.Goto(&block10, tmp25);
  }

    TNode<Context> tmp26;
    ca_.Bind(&block10, &tmp26);
}

void LabelTestHelper4_404(compiler::CodeAssemblerState* state_, bool p_flag, compiler::CodeAssemblerLabel* label_Label4, compiler::CodeAssemblerLabel* label_Label5) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 104);
    if ((p_flag)) {
      ca_.Goto(&block3);
    } else {
      ca_.Goto(&block4);
    }
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 105);
    ca_.Goto(&block1);
  }

  if (block4.is_used()) {
    ca_.Bind(&block4);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 107);
    ca_.Goto(&block2);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 102);
    ca_.Goto(label_Label4);
  }

  if (block2.is_used()) {
    ca_.Bind(&block2);
    ca_.Goto(label_Label5);
  }
}

TNode<BoolT> CallLabelTestHelper4_405(compiler::CodeAssemblerState* state_, bool p_flag) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 113);
    compiler::CodeAssemblerLabel label0(&ca_);
    compiler::CodeAssemblerLabel label1(&ca_);
    LabelTestHelper4_404(state_, p_flag, &label0, &label1);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6);
    }
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block7);
    }
  }

  if (block6.is_used()) {
    ca_.Bind(&block6);
    ca_.Goto(&block5);
  }

  if (block7.is_used()) {
    ca_.Bind(&block7);
    ca_.Goto(&block3);
  }

  if (block5.is_used()) {
    ca_.Bind(&block5);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 116);
    TNode<BoolT> tmp0;
    USE(tmp0);
    tmp0 = FromConstexpr6ATbool16ATconstexpr_bool_167(state_, true);
    ca_.Goto(&block1, tmp0);
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 119);
    TNode<BoolT> tmp1;
    USE(tmp1);
    tmp1 = FromConstexpr6ATbool16ATconstexpr_bool_167(state_, false);
    ca_.Goto(&block1, tmp1);
  }

  if (block1.is_used()) {
    TNode<BoolT> tmp2;
    ca_.Bind(&block1, &tmp2);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 111);
    ca_.Goto(&block8, tmp2);
  }

    TNode<BoolT> tmp3;
    ca_.Bind(&block8, &tmp3);
  return TNode<BoolT>{tmp3};
}

TNode<Oddball> TestPartiallyUnusedLabel_406(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, BoolT, BoolT> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, BoolT, BoolT> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, BoolT, BoolT, BoolT> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, BoolT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, BoolT> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Oddball> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Oddball> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 125);
    TNode<BoolT> tmp0;
    USE(tmp0);
    tmp0 = CallLabelTestHelper4_405(state_, true);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 126);
    TNode<BoolT> tmp1;
    USE(tmp1);
    tmp1 = CallLabelTestHelper4_405(state_, false);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 128);
    ca_.Branch(tmp0, &block4, &block5, tmp0, tmp1, tmp0);
  }

  if (block4.is_used()) {
    TNode<BoolT> tmp2;
    TNode<BoolT> tmp3;
    TNode<BoolT> tmp4;
    ca_.Bind(&block4, &tmp2, &tmp3, &tmp4);
    TNode<BoolT> tmp5;
    USE(tmp5);
    tmp5 = CodeStubAssembler(state_).Word32BinaryNot(TNode<BoolT>{tmp3});
    ca_.Goto(&block6, tmp2, tmp3, tmp4, tmp5);
  }

  if (block5.is_used()) {
    TNode<BoolT> tmp6;
    TNode<BoolT> tmp7;
    TNode<BoolT> tmp8;
    ca_.Bind(&block5, &tmp6, &tmp7, &tmp8);
    TNode<BoolT> tmp9;
    USE(tmp9);
    tmp9 = FromConstexpr6ATbool16ATconstexpr_bool_167(state_, false);
    ca_.Goto(&block6, tmp6, tmp7, tmp8, tmp9);
  }

  if (block6.is_used()) {
    TNode<BoolT> tmp10;
    TNode<BoolT> tmp11;
    TNode<BoolT> tmp12;
    TNode<BoolT> tmp13;
    ca_.Bind(&block6, &tmp10, &tmp11, &tmp12, &tmp13);
    ca_.Branch(tmp13, &block2, &block3, tmp10, tmp11);
  }

  if (block2.is_used()) {
    TNode<BoolT> tmp14;
    TNode<BoolT> tmp15;
    ca_.Bind(&block2, &tmp14, &tmp15);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 129);
    TNode<Oddball> tmp16;
    USE(tmp16);
    tmp16 = True_65(state_);
    ca_.Goto(&block1, tmp16);
  }

  if (block3.is_used()) {
    TNode<BoolT> tmp17;
    TNode<BoolT> tmp18;
    ca_.Bind(&block3, &tmp17, &tmp18);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 131);
    TNode<Oddball> tmp19;
    USE(tmp19);
    tmp19 = False_66(state_);
    ca_.Goto(&block1, tmp19);
  }

  if (block1.is_used()) {
    TNode<Oddball> tmp20;
    ca_.Bind(&block1, &tmp20);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 123);
    ca_.Goto(&block8, tmp20);
  }

    TNode<Oddball> tmp21;
    ca_.Bind(&block8, &tmp21);
  return TNode<Oddball>{tmp21};
}

TNode<Object> GenericMacroTest20UT5ATSmi10HeapObject_407(compiler::CodeAssemblerState* state_, TNode<Object> p_param2) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_param2);

  if (block0.is_used()) {
    TNode<Object> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 140);
    ca_.Goto(&block1, tmp0, tmp0);
  }

  if (block1.is_used()) {
    TNode<Object> tmp1;
    TNode<Object> tmp2;
    ca_.Bind(&block1, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 139);
    ca_.Goto(&block2, tmp1, tmp2);
  }

    TNode<Object> tmp3;
    TNode<Object> tmp4;
    ca_.Bind(&block2, &tmp3, &tmp4);
  return TNode<Object>{tmp4};
}

TNode<Object> GenericMacroTestWithLabels20UT5ATSmi10HeapObject_408(compiler::CodeAssemblerState* state_, TNode<Object> p_param2, compiler::CodeAssemblerLabel* label_Y) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Object, Smi> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_param2);

  if (block0.is_used()) {
    TNode<Object> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 150);
    TNode<Smi> tmp1;
    USE(tmp1);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp1 = Cast5ATSmi_83(state_, TNode<Object>{tmp0}, &label0);
    ca_.Goto(&block3, tmp0, tmp0, tmp1);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp0);
    }
  }

  if (block4.is_used()) {
    TNode<Object> tmp2;
    TNode<Object> tmp3;
    ca_.Bind(&block4, &tmp2, &tmp3);
    ca_.Goto(&block1);
  }

  if (block3.is_used()) {
    TNode<Object> tmp4;
    TNode<Object> tmp5;
    TNode<Smi> tmp6;
    ca_.Bind(&block3, &tmp4, &tmp5, &tmp6);
    ca_.Goto(&block2, tmp4, tmp6);
  }

  if (block2.is_used()) {
    TNode<Object> tmp7;
    TNode<Object> tmp8;
    ca_.Bind(&block2, &tmp7, &tmp8);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 148);
    ca_.Goto(&block5, tmp7, tmp8);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_Y);
  }

    TNode<Object> tmp9;
    TNode<Object> tmp10;
    ca_.Bind(&block5, &tmp9, &tmp10);
  return TNode<Object>{tmp10};
}

void TestMacroSpecialization_409(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block5(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block7(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block9(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block11(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block13(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Object> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block15(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block21(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Object> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block19(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Oddball> block25(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Oddball, Object> block24(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block26(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 156);
    TNode<Smi> tmp0;
    USE(tmp0);
    tmp0 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 157);
    TNode<Smi> tmp1;
    USE(tmp1);
    tmp1 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 0);
    TNode<Object> tmp2;
    USE(tmp2);
    tmp2 = GenericMacroTest5ATSmi_1504(state_, TNode<Smi>{tmp1});
    TNode<Oddball> tmp3;
    USE(tmp3);
    tmp3 = Undefined_64(state_);
    TNode<BoolT> tmp4;
    USE(tmp4);
    tmp4 = CodeStubAssembler(state_).TaggedEqual(TNode<Object>{tmp2}, TNode<HeapObject>{tmp3});
    ca_.Branch(tmp4, &block4, &block5, tmp0);
  }

  if (block5.is_used()) {
    TNode<Smi> tmp5;
    ca_.Bind(&block5, &tmp5);
    CodeStubAssembler(state_).FailAssert("Torque assert 'GenericMacroTest<Smi>(0) == Undefined' failed", "test/torque/test-torque.tq", 157);
  }

  if (block4.is_used()) {
    TNode<Smi> tmp6;
    ca_.Bind(&block4, &tmp6);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 158);
    TNode<Smi> tmp7;
    USE(tmp7);
    tmp7 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 1);
    TNode<Object> tmp8;
    USE(tmp8);
    tmp8 = GenericMacroTest5ATSmi_1504(state_, TNode<Smi>{tmp7});
    TNode<Oddball> tmp9;
    USE(tmp9);
    tmp9 = Undefined_64(state_);
    TNode<BoolT> tmp10;
    USE(tmp10);
    tmp10 = CodeStubAssembler(state_).TaggedEqual(TNode<Object>{tmp8}, TNode<HeapObject>{tmp9});
    ca_.Branch(tmp10, &block6, &block7, tmp6);
  }

  if (block7.is_used()) {
    TNode<Smi> tmp11;
    ca_.Bind(&block7, &tmp11);
    CodeStubAssembler(state_).FailAssert("Torque assert 'GenericMacroTest<Smi>(1) == Undefined' failed", "test/torque/test-torque.tq", 158);
  }

  if (block6.is_used()) {
    TNode<Smi> tmp12;
    ca_.Bind(&block6, &tmp12);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 159);
    TNode<Oddball> tmp13;
    USE(tmp13);
    tmp13 = Null_63(state_);
    TNode<Object> tmp14;
    USE(tmp14);
    tmp14 = GenericMacroTest20UT5ATSmi10HeapObject_407(state_, TNode<Object>{tmp13});
    TNode<Oddball> tmp15;
    USE(tmp15);
    tmp15 = Null_63(state_);
    TNode<BoolT> tmp16;
    USE(tmp16);
    tmp16 = CodeStubAssembler(state_).TaggedEqual(TNode<Object>{tmp14}, TNode<HeapObject>{tmp15});
    ca_.Branch(tmp16, &block8, &block9, tmp12);
  }

  if (block9.is_used()) {
    TNode<Smi> tmp17;
    ca_.Bind(&block9, &tmp17);
    CodeStubAssembler(state_).FailAssert("Torque assert 'GenericMacroTest<Object>(Null) == Null' failed", "test/torque/test-torque.tq", 159);
  }

  if (block8.is_used()) {
    TNode<Smi> tmp18;
    ca_.Bind(&block8, &tmp18);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 160);
    TNode<Oddball> tmp19;
    USE(tmp19);
    tmp19 = False_66(state_);
    TNode<Object> tmp20;
    USE(tmp20);
    tmp20 = GenericMacroTest20UT5ATSmi10HeapObject_407(state_, TNode<Object>{tmp19});
    TNode<Oddball> tmp21;
    USE(tmp21);
    tmp21 = False_66(state_);
    TNode<BoolT> tmp22;
    USE(tmp22);
    tmp22 = CodeStubAssembler(state_).TaggedEqual(TNode<Object>{tmp20}, TNode<HeapObject>{tmp21});
    ca_.Branch(tmp22, &block10, &block11, tmp18);
  }

  if (block11.is_used()) {
    TNode<Smi> tmp23;
    ca_.Bind(&block11, &tmp23);
    CodeStubAssembler(state_).FailAssert("Torque assert 'GenericMacroTest<Object>(False) == False' failed", "test/torque/test-torque.tq", 160);
  }

  if (block10.is_used()) {
    TNode<Smi> tmp24;
    ca_.Bind(&block10, &tmp24);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 161);
    TNode<Oddball> tmp25;
    USE(tmp25);
    tmp25 = True_65(state_);
    TNode<Object> tmp26;
    USE(tmp26);
    tmp26 = GenericMacroTest20UT5ATSmi10HeapObject_407(state_, TNode<Object>{tmp25});
    TNode<Oddball> tmp27;
    USE(tmp27);
    tmp27 = True_65(state_);
    TNode<BoolT> tmp28;
    USE(tmp28);
    tmp28 = CodeStubAssembler(state_).TaggedEqual(TNode<Object>{tmp26}, TNode<HeapObject>{tmp27});
    ca_.Branch(tmp28, &block12, &block13, tmp24);
  }

  if (block13.is_used()) {
    TNode<Smi> tmp29;
    ca_.Bind(&block13, &tmp29);
    CodeStubAssembler(state_).FailAssert("Torque assert 'GenericMacroTest<Object>(True) == True' failed", "test/torque/test-torque.tq", 161);
  }

  if (block12.is_used()) {
    TNode<Smi> tmp30;
    ca_.Bind(&block12, &tmp30);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 162);
    TNode<Smi> tmp31;
    USE(tmp31);
    tmp31 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 0);
    TNode<Object> tmp32;
    USE(tmp32);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp32 = GenericMacroTestWithLabels5ATSmi_1505(state_, TNode<Smi>{tmp31}, &label0);
    ca_.Goto(&block16, tmp30, tmp32);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block17, tmp30);
    }
  }

  if (block17.is_used()) {
    TNode<Smi> tmp33;
    ca_.Bind(&block17, &tmp33);
    ca_.Goto(&block3);
  }

  if (block16.is_used()) {
    TNode<Smi> tmp34;
    TNode<Object> tmp35;
    ca_.Bind(&block16, &tmp34, &tmp35);
    TNode<Oddball> tmp36;
    USE(tmp36);
    tmp36 = Undefined_64(state_);
    TNode<BoolT> tmp37;
    USE(tmp37);
    tmp37 = CodeStubAssembler(state_).TaggedEqual(TNode<Object>{tmp35}, TNode<HeapObject>{tmp36});
    ca_.Branch(tmp37, &block14, &block15, tmp34);
  }

  if (block15.is_used()) {
    TNode<Smi> tmp38;
    ca_.Bind(&block15, &tmp38);
    CodeStubAssembler(state_).FailAssert("Torque assert '(GenericMacroTestWithLabels<Smi>(0) otherwise Fail) == Undefined' failed", "test/torque/test-torque.tq", 162);
  }

  if (block14.is_used()) {
    TNode<Smi> tmp39;
    ca_.Bind(&block14, &tmp39);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 163);
    TNode<Smi> tmp40;
    USE(tmp40);
    tmp40 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 0);
    TNode<Object> tmp41;
    USE(tmp41);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp41 = GenericMacroTestWithLabels5ATSmi_1505(state_, TNode<Smi>{tmp40}, &label0);
    ca_.Goto(&block20, tmp39, tmp41);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block21, tmp39);
    }
  }

  if (block21.is_used()) {
    TNode<Smi> tmp42;
    ca_.Bind(&block21, &tmp42);
    ca_.Goto(&block3);
  }

  if (block20.is_used()) {
    TNode<Smi> tmp43;
    TNode<Object> tmp44;
    ca_.Bind(&block20, &tmp43, &tmp44);
    TNode<Oddball> tmp45;
    USE(tmp45);
    tmp45 = Undefined_64(state_);
    TNode<BoolT> tmp46;
    USE(tmp46);
    tmp46 = CodeStubAssembler(state_).TaggedEqual(TNode<Object>{tmp44}, TNode<HeapObject>{tmp45});
    ca_.Branch(tmp46, &block18, &block19, tmp43);
  }

  if (block19.is_used()) {
    TNode<Smi> tmp47;
    ca_.Bind(&block19, &tmp47);
    CodeStubAssembler(state_).FailAssert("Torque assert '(GenericMacroTestWithLabels<Smi>(0) otherwise Fail) == Undefined' failed", "test/torque/test-torque.tq", 163);
  }

  if (block18.is_used()) {
    TNode<Smi> tmp48;
    ca_.Bind(&block18, &tmp48);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 165);
    TNode<Oddball> tmp49;
    USE(tmp49);
    tmp49 = False_66(state_);
    TNode<Object> tmp50;
    USE(tmp50);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp50 = GenericMacroTestWithLabels20UT5ATSmi10HeapObject_408(state_, TNode<Object>{tmp49}, &label0);
    ca_.Goto(&block24, tmp48, tmp49, tmp50);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block25, tmp48, tmp49);
    }
  }

  if (block25.is_used()) {
    TNode<Smi> tmp51;
    TNode<Oddball> tmp52;
    ca_.Bind(&block25, &tmp51, &tmp52);
    ca_.Goto(&block23, tmp51);
  }

  if (block24.is_used()) {
    TNode<Smi> tmp53;
    TNode<Oddball> tmp54;
    TNode<Object> tmp55;
    ca_.Bind(&block24, &tmp53, &tmp54, &tmp55);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 167);
    ca_.Goto(&block22, tmp53);
  }

  if (block23.is_used()) {
    TNode<Smi> tmp56;
    ca_.Bind(&block23, &tmp56);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 164);
    ca_.Goto(&block22, tmp56);
  }

  if (block22.is_used()) {
    TNode<Smi> tmp57;
    ca_.Bind(&block22, &tmp57);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 155);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 169);
    ca_.Goto(&block2);
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 170);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block2.is_used()) {
    ca_.Bind(&block2);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 153);
    ca_.Goto(&block1);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(&block26);
  }

    ca_.Bind(&block26);
}

TF_BUILTIN(TestHelperPlus1, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  TNode<Smi> parameter1 = UncheckedCast<Smi>(Parameter(Descriptor::kX));
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Smi> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 175);
    TNode<Smi> tmp2;
    USE(tmp2);
    tmp2 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 1);
    TNode<Smi> tmp3;
    USE(tmp3);
    tmp3 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{tmp1}, TNode<Smi>{tmp2});
    CodeStubAssembler(state_).Return(tmp3);
  }
}

TF_BUILTIN(TestHelperPlus2, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  TNode<Smi> parameter1 = UncheckedCast<Smi>(Parameter(Descriptor::kX));
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Smi> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 178);
    TNode<Smi> tmp2;
    USE(tmp2);
    tmp2 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 2);
    TNode<Smi> tmp3;
    USE(tmp3);
    tmp3 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{tmp1}, TNode<Smi>{tmp2});
    CodeStubAssembler(state_).Return(tmp3);
  }
}

TNode<Oddball> TestFunctionPointers_410(compiler::CodeAssemblerState* state_, TNode<Context> p_context) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, BuiltinPtr> block3(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, BuiltinPtr> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, BuiltinPtr> block5(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, BuiltinPtr> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Oddball> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Oddball> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 183);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 184);
    TNode<Smi> tmp1;
    USE(tmp1);
    tmp1 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 42);
    TNode<Smi> tmp2 = TORQUE_CAST(CodeStubAssembler(state_).CallBuiltinPointer(Builtins::CallableFor(ca_.isolate(),ExampleBuiltinForTorqueFunctionPointerType(9)).descriptor(), ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtins::kTestHelperPlus1)), tmp0, tmp1)); 
    USE(tmp2);
    TNode<Smi> tmp3;
    USE(tmp3);
    tmp3 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 43);
    TNode<BoolT> tmp4;
    USE(tmp4);
    tmp4 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{tmp2}, TNode<Smi>{tmp3});
    ca_.Branch(tmp4, &block2, &block3, tmp0, ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtins::kTestHelperPlus1)));
  }

  if (block3.is_used()) {
    TNode<Context> tmp5;
    TNode<BuiltinPtr> tmp6;
    ca_.Bind(&block3, &tmp5, &tmp6);
    CodeStubAssembler(state_).FailAssert("Torque assert 'fptr(context, 42) == 43' failed", "test/torque/test-torque.tq", 184);
  }

  if (block2.is_used()) {
    TNode<Context> tmp7;
    TNode<BuiltinPtr> tmp8;
    ca_.Bind(&block2, &tmp7, &tmp8);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 185);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 186);
    TNode<Smi> tmp9;
    USE(tmp9);
    tmp9 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 42);
    TNode<Smi> tmp10 = TORQUE_CAST(CodeStubAssembler(state_).CallBuiltinPointer(Builtins::CallableFor(ca_.isolate(),ExampleBuiltinForTorqueFunctionPointerType(9)).descriptor(), ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtins::kTestHelperPlus2)), tmp7, tmp9)); 
    USE(tmp10);
    TNode<Smi> tmp11;
    USE(tmp11);
    tmp11 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 44);
    TNode<BoolT> tmp12;
    USE(tmp12);
    tmp12 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{tmp10}, TNode<Smi>{tmp11});
    ca_.Branch(tmp12, &block4, &block5, tmp7, ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtins::kTestHelperPlus2)));
  }

  if (block5.is_used()) {
    TNode<Context> tmp13;
    TNode<BuiltinPtr> tmp14;
    ca_.Bind(&block5, &tmp13, &tmp14);
    CodeStubAssembler(state_).FailAssert("Torque assert 'fptr(context, 42) == 44' failed", "test/torque/test-torque.tq", 186);
  }

  if (block4.is_used()) {
    TNode<Context> tmp15;
    TNode<BuiltinPtr> tmp16;
    ca_.Bind(&block4, &tmp15, &tmp16);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 187);
    TNode<Oddball> tmp17;
    USE(tmp17);
    tmp17 = True_65(state_);
    ca_.Goto(&block1, tmp15, tmp17);
  }

  if (block1.is_used()) {
    TNode<Context> tmp18;
    TNode<Oddball> tmp19;
    ca_.Bind(&block1, &tmp18, &tmp19);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 181);
    ca_.Goto(&block6, tmp18, tmp19);
  }

    TNode<Context> tmp20;
    TNode<Oddball> tmp21;
    ca_.Bind(&block6, &tmp20, &tmp21);
  return TNode<Oddball>{tmp21};
}

TNode<Oddball> TestVariableRedeclaration_411(compiler::CodeAssemblerState* state_, TNode<Context> p_context) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Int32T> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Int32T> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Int32T> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Int32T> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Int32T, Int32T> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Oddball> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Oddball> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 192);
    TNode<BoolT> tmp1;
    USE(tmp1);
    tmp1 = FromConstexpr6ATbool16ATconstexpr_bool_167(state_, (CodeStubAssembler(state_).ConstexprInt31Equal(42, 0)));
    ca_.Branch(tmp1, &block2, &block3, tmp0);
  }

  if (block2.is_used()) {
    TNode<Context> tmp2;
    ca_.Bind(&block2, &tmp2);
    ca_.Goto(&block5, tmp2);
  }

  if (block3.is_used()) {
    TNode<Context> tmp3;
    ca_.Bind(&block3, &tmp3);
    TNode<Int32T> tmp4;
    USE(tmp4);
    tmp4 = FromConstexpr7ATint3117ATconstexpr_int31_147(state_, 1);
    ca_.Goto(&block4, tmp3, tmp4);
  }

  if (block5.is_used()) {
    TNode<Context> tmp5;
    ca_.Bind(&block5, &tmp5);
    TNode<Int32T> tmp6;
    USE(tmp6);
    tmp6 = FromConstexpr7ATint3117ATconstexpr_int31_147(state_, 0);
    ca_.Goto(&block4, tmp5, tmp6);
  }

  if (block4.is_used()) {
    TNode<Context> tmp7;
    TNode<Int32T> tmp8;
    ca_.Bind(&block4, &tmp7, &tmp8);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 193);
    TNode<BoolT> tmp9;
    USE(tmp9);
    tmp9 = FromConstexpr6ATbool16ATconstexpr_bool_167(state_, (CodeStubAssembler(state_).ConstexprInt31Equal(42, 0)));
    ca_.Branch(tmp9, &block6, &block7, tmp7, tmp8);
  }

  if (block6.is_used()) {
    TNode<Context> tmp10;
    TNode<Int32T> tmp11;
    ca_.Bind(&block6, &tmp10, &tmp11);
    ca_.Goto(&block9, tmp10, tmp11);
  }

  if (block7.is_used()) {
    TNode<Context> tmp12;
    TNode<Int32T> tmp13;
    ca_.Bind(&block7, &tmp12, &tmp13);
    TNode<Int32T> tmp14;
    USE(tmp14);
    tmp14 = FromConstexpr7ATint3117ATconstexpr_int31_147(state_, 0);
    ca_.Goto(&block8, tmp12, tmp13, tmp14);
  }

  if (block9.is_used()) {
    TNode<Context> tmp15;
    TNode<Int32T> tmp16;
    ca_.Bind(&block9, &tmp15, &tmp16);
    TNode<Int32T> tmp17;
    USE(tmp17);
    tmp17 = FromConstexpr7ATint3117ATconstexpr_int31_147(state_, 1);
    ca_.Goto(&block8, tmp15, tmp16, tmp17);
  }

  if (block8.is_used()) {
    TNode<Context> tmp18;
    TNode<Int32T> tmp19;
    TNode<Int32T> tmp20;
    ca_.Bind(&block8, &tmp18, &tmp19, &tmp20);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 194);
    TNode<Oddball> tmp21;
    USE(tmp21);
    tmp21 = True_65(state_);
    ca_.Goto(&block1, tmp18, tmp21);
  }

  if (block1.is_used()) {
    TNode<Context> tmp22;
    TNode<Oddball> tmp23;
    ca_.Bind(&block1, &tmp22, &tmp23);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 190);
    ca_.Goto(&block10, tmp22, tmp23);
  }

    TNode<Context> tmp24;
    TNode<Oddball> tmp25;
    ca_.Bind(&block10, &tmp24, &tmp25);
  return TNode<Oddball>{tmp25};
}

TNode<Smi> TestTernaryOperator_412(compiler::CodeAssemblerState* state_, TNode<Smi> p_x) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, BoolT> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, BoolT> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, BoolT> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, BoolT, Smi> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, BoolT, Smi> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_x);

  if (block0.is_used()) {
    TNode<Smi> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 199);
    TNode<Smi> tmp1;
    USE(tmp1);
    tmp1 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 0);
    TNode<BoolT> tmp2;
    USE(tmp2);
    tmp2 = CodeStubAssembler(state_).SmiLessThan(TNode<Smi>{tmp0}, TNode<Smi>{tmp1});
    ca_.Branch(tmp2, &block2, &block3, tmp0);
  }

  if (block2.is_used()) {
    TNode<Smi> tmp3;
    ca_.Bind(&block2, &tmp3);
    ca_.Goto(&block5, tmp3);
  }

  if (block3.is_used()) {
    TNode<Smi> tmp4;
    ca_.Bind(&block3, &tmp4);
    TNode<BoolT> tmp5;
    USE(tmp5);
    tmp5 = FromConstexpr6ATbool16ATconstexpr_bool_167(state_, false);
    ca_.Goto(&block4, tmp4, tmp5);
  }

  if (block5.is_used()) {
    TNode<Smi> tmp6;
    ca_.Bind(&block5, &tmp6);
    TNode<BoolT> tmp7;
    USE(tmp7);
    tmp7 = FromConstexpr6ATbool16ATconstexpr_bool_167(state_, true);
    ca_.Goto(&block4, tmp6, tmp7);
  }

  if (block4.is_used()) {
    TNode<Smi> tmp8;
    TNode<BoolT> tmp9;
    ca_.Bind(&block4, &tmp8, &tmp9);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 200);
    ca_.Branch(tmp9, &block6, &block7, tmp8, tmp9);
  }

  if (block6.is_used()) {
    TNode<Smi> tmp10;
    TNode<BoolT> tmp11;
    ca_.Bind(&block6, &tmp10, &tmp11);
    TNode<Smi> tmp12;
    USE(tmp12);
    tmp12 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 10);
    TNode<Smi> tmp13;
    USE(tmp13);
    tmp13 = CodeStubAssembler(state_).SmiSub(TNode<Smi>{tmp10}, TNode<Smi>{tmp12});
    ca_.Goto(&block9, tmp10, tmp11, tmp13);
  }

  if (block7.is_used()) {
    TNode<Smi> tmp14;
    TNode<BoolT> tmp15;
    ca_.Bind(&block7, &tmp14, &tmp15);
    TNode<Smi> tmp16;
    USE(tmp16);
    tmp16 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 100);
    TNode<Smi> tmp17;
    USE(tmp17);
    tmp17 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{tmp14}, TNode<Smi>{tmp16});
    ca_.Goto(&block8, tmp14, tmp15, tmp17);
  }

  if (block9.is_used()) {
    TNode<Smi> tmp18;
    TNode<BoolT> tmp19;
    TNode<Smi> tmp20;
    ca_.Bind(&block9, &tmp18, &tmp19, &tmp20);
    ca_.Goto(&block8, tmp18, tmp19, tmp20);
  }

  if (block8.is_used()) {
    TNode<Smi> tmp21;
    TNode<BoolT> tmp22;
    TNode<Smi> tmp23;
    ca_.Bind(&block8, &tmp21, &tmp22, &tmp23);
    ca_.Goto(&block1, tmp21, tmp23);
  }

  if (block1.is_used()) {
    TNode<Smi> tmp24;
    TNode<Smi> tmp25;
    ca_.Bind(&block1, &tmp24, &tmp25);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 197);
    ca_.Goto(&block10, tmp24, tmp25);
  }

    TNode<Smi> tmp26;
    TNode<Smi> tmp27;
    ca_.Bind(&block10, &tmp26, &tmp27);
  return TNode<Smi>{tmp27};
}

void TestFunctionPointerToGeneric_413(compiler::CodeAssemblerState* state_, TNode<Context> p_c) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, BuiltinPtr, BuiltinPtr> block3(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, BuiltinPtr, BuiltinPtr> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, BuiltinPtr, BuiltinPtr> block5(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, BuiltinPtr, BuiltinPtr> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, BuiltinPtr, BuiltinPtr> block7(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, BuiltinPtr, BuiltinPtr> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, BuiltinPtr, BuiltinPtr> block9(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, BuiltinPtr, BuiltinPtr> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_c);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 205);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 206);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 208);
    TNode<Smi> tmp1;
    USE(tmp1);
    tmp1 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 0);
    TNode<Object> tmp2 = CodeStubAssembler(state_).CallBuiltinPointer(Builtins::CallableFor(ca_.isolate(),ExampleBuiltinForTorqueFunctionPointerType(10)).descriptor(), ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtins::kGenericBuiltinTest5ATSmi)), tmp0, tmp1); 
    USE(tmp2);
    TNode<Oddball> tmp3;
    USE(tmp3);
    tmp3 = Null_63(state_);
    TNode<BoolT> tmp4;
    USE(tmp4);
    tmp4 = CodeStubAssembler(state_).TaggedEqual(TNode<Object>{tmp2}, TNode<HeapObject>{tmp3});
    ca_.Branch(tmp4, &block2, &block3, tmp0, ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtins::kGenericBuiltinTest5ATSmi)), ca_.UncheckedCast<BuiltinPtr>(ca_.SmiConstant(Builtins::kGenericBuiltinTest90UT8ATBigInt7ATFalse6ATNull5ATSmi6ATTrue11ATUndefined10HeapNumber10JSReceiver6String6Symbol)));
  }

  if (block3.is_used()) {
    TNode<Context> tmp5;
    TNode<BuiltinPtr> tmp6;
    TNode<BuiltinPtr> tmp7;
    ca_.Bind(&block3, &tmp5, &tmp6, &tmp7);
    CodeStubAssembler(state_).FailAssert("Torque assert 'fptr1(c, 0) == Null' failed", "test/torque/test-torque.tq", 208);
  }

  if (block2.is_used()) {
    TNode<Context> tmp8;
    TNode<BuiltinPtr> tmp9;
    TNode<BuiltinPtr> tmp10;
    ca_.Bind(&block2, &tmp8, &tmp9, &tmp10);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 209);
    TNode<Smi> tmp11;
    USE(tmp11);
    tmp11 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 1);
    TNode<Object> tmp12 = CodeStubAssembler(state_).CallBuiltinPointer(Builtins::CallableFor(ca_.isolate(),ExampleBuiltinForTorqueFunctionPointerType(10)).descriptor(), tmp9, tmp8, tmp11); 
    USE(tmp12);
    TNode<Oddball> tmp13;
    USE(tmp13);
    tmp13 = Null_63(state_);
    TNode<BoolT> tmp14;
    USE(tmp14);
    tmp14 = CodeStubAssembler(state_).TaggedEqual(TNode<Object>{tmp12}, TNode<HeapObject>{tmp13});
    ca_.Branch(tmp14, &block4, &block5, tmp8, tmp9, tmp10);
  }

  if (block5.is_used()) {
    TNode<Context> tmp15;
    TNode<BuiltinPtr> tmp16;
    TNode<BuiltinPtr> tmp17;
    ca_.Bind(&block5, &tmp15, &tmp16, &tmp17);
    CodeStubAssembler(state_).FailAssert("Torque assert 'fptr1(c, 1) == Null' failed", "test/torque/test-torque.tq", 209);
  }

  if (block4.is_used()) {
    TNode<Context> tmp18;
    TNode<BuiltinPtr> tmp19;
    TNode<BuiltinPtr> tmp20;
    ca_.Bind(&block4, &tmp18, &tmp19, &tmp20);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 210);
    TNode<Oddball> tmp21;
    USE(tmp21);
    tmp21 = Undefined_64(state_);
    TNode<Object> tmp22 = CodeStubAssembler(state_).CallBuiltinPointer(Builtins::CallableFor(ca_.isolate(),ExampleBuiltinForTorqueFunctionPointerType(3)).descriptor(), tmp20, tmp18, tmp21); 
    USE(tmp22);
    TNode<Oddball> tmp23;
    USE(tmp23);
    tmp23 = Undefined_64(state_);
    TNode<BoolT> tmp24;
    USE(tmp24);
    tmp24 = CodeStubAssembler(state_).TaggedEqual(TNode<Object>{tmp22}, TNode<HeapObject>{tmp23});
    ca_.Branch(tmp24, &block6, &block7, tmp18, tmp19, tmp20);
  }

  if (block7.is_used()) {
    TNode<Context> tmp25;
    TNode<BuiltinPtr> tmp26;
    TNode<BuiltinPtr> tmp27;
    ca_.Bind(&block7, &tmp25, &tmp26, &tmp27);
    CodeStubAssembler(state_).FailAssert("Torque assert 'fptr2(c, Undefined) == Undefined' failed", "test/torque/test-torque.tq", 210);
  }

  if (block6.is_used()) {
    TNode<Context> tmp28;
    TNode<BuiltinPtr> tmp29;
    TNode<BuiltinPtr> tmp30;
    ca_.Bind(&block6, &tmp28, &tmp29, &tmp30);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 211);
    TNode<Oddball> tmp31;
    USE(tmp31);
    tmp31 = Undefined_64(state_);
    TNode<Object> tmp32 = CodeStubAssembler(state_).CallBuiltinPointer(Builtins::CallableFor(ca_.isolate(),ExampleBuiltinForTorqueFunctionPointerType(3)).descriptor(), tmp30, tmp28, tmp31); 
    USE(tmp32);
    TNode<Oddball> tmp33;
    USE(tmp33);
    tmp33 = Undefined_64(state_);
    TNode<BoolT> tmp34;
    USE(tmp34);
    tmp34 = CodeStubAssembler(state_).TaggedEqual(TNode<Object>{tmp32}, TNode<HeapObject>{tmp33});
    ca_.Branch(tmp34, &block8, &block9, tmp28, tmp29, tmp30);
  }

  if (block9.is_used()) {
    TNode<Context> tmp35;
    TNode<BuiltinPtr> tmp36;
    TNode<BuiltinPtr> tmp37;
    ca_.Bind(&block9, &tmp35, &tmp36, &tmp37);
    CodeStubAssembler(state_).FailAssert("Torque assert 'fptr2(c, Undefined) == Undefined' failed", "test/torque/test-torque.tq", 211);
  }

  if (block8.is_used()) {
    TNode<Context> tmp38;
    TNode<BuiltinPtr> tmp39;
    TNode<BuiltinPtr> tmp40;
    ca_.Bind(&block8, &tmp38, &tmp39, &tmp40);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 204);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 203);
    ca_.Goto(&block1, tmp38);
  }

  if (block1.is_used()) {
    TNode<Context> tmp41;
    ca_.Bind(&block1, &tmp41);
    ca_.Goto(&block10, tmp41);
  }

    TNode<Context> tmp42;
    ca_.Bind(&block10, &tmp42);
}

TNode<BuiltinPtr> TestTypeAlias_414(compiler::CodeAssemblerState* state_, TNode<BuiltinPtr> p_x) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<BuiltinPtr> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BuiltinPtr, BuiltinPtr> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BuiltinPtr, BuiltinPtr> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_x);

  if (block0.is_used()) {
    TNode<BuiltinPtr> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 217);
    ca_.Goto(&block1, tmp0, tmp0);
  }

  if (block1.is_used()) {
    TNode<BuiltinPtr> tmp1;
    TNode<BuiltinPtr> tmp2;
    ca_.Bind(&block1, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 215);
    ca_.Goto(&block2, tmp1, tmp2);
  }

    TNode<BuiltinPtr> tmp3;
    TNode<BuiltinPtr> tmp4;
    ca_.Bind(&block2, &tmp3, &tmp4);
  return TNode<BuiltinPtr>{tmp4};
}

TNode<Oddball> TestUnsafeCast_415(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Number> p_n) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, Number> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Number> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Number, Smi> block5(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Number, Smi> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Number> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Number, Oddball> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Number, Oddball> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_n);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Number> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 222);
    TNode<BoolT> tmp2;
    USE(tmp2);
    tmp2 = CodeStubAssembler(state_).TaggedIsSmi(TNode<Object>{tmp1});
    ca_.Branch(tmp2, &block2, &block3, tmp0, tmp1);
  }

  if (block2.is_used()) {
    TNode<Context> tmp3;
    TNode<Number> tmp4;
    ca_.Bind(&block2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 223);
    TNode<Smi> tmp5;
    USE(tmp5);
    tmp5 = UnsafeCast5ATSmi_1439(state_, TNode<Context>{tmp3}, TNode<Object>{tmp4});
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 225);
    TNode<Smi> tmp6;
    tmp6 = TORQUE_CAST(CodeStubAssembler(state_).CallBuiltin(Builtins::kTestHelperPlus1, tmp3, tmp5));
    USE(tmp6);
    TNode<Smi> tmp7;
    USE(tmp7);
    tmp7 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 11);
    TNode<BoolT> tmp8;
    USE(tmp8);
    tmp8 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{tmp6}, TNode<Smi>{tmp7});
    ca_.Branch(tmp8, &block4, &block5, tmp3, tmp4, tmp5);
  }

  if (block5.is_used()) {
    TNode<Context> tmp9;
    TNode<Number> tmp10;
    TNode<Smi> tmp11;
    ca_.Bind(&block5, &tmp9, &tmp10, &tmp11);
    CodeStubAssembler(state_).FailAssert("Torque assert 'TestHelperPlus1(context, m) == 11' failed", "test/torque/test-torque.tq", 225);
  }

  if (block4.is_used()) {
    TNode<Context> tmp12;
    TNode<Number> tmp13;
    TNode<Smi> tmp14;
    ca_.Bind(&block4, &tmp12, &tmp13, &tmp14);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 226);
    TNode<Oddball> tmp15;
    USE(tmp15);
    tmp15 = True_65(state_);
    ca_.Goto(&block1, tmp12, tmp13, tmp15);
  }

  if (block3.is_used()) {
    TNode<Context> tmp16;
    TNode<Number> tmp17;
    ca_.Bind(&block3, &tmp16, &tmp17);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 228);
    TNode<Oddball> tmp18;
    USE(tmp18);
    tmp18 = False_66(state_);
    ca_.Goto(&block1, tmp16, tmp17, tmp18);
  }

  if (block1.is_used()) {
    TNode<Context> tmp19;
    TNode<Number> tmp20;
    TNode<Oddball> tmp21;
    ca_.Bind(&block1, &tmp19, &tmp20, &tmp21);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 220);
    ca_.Goto(&block6, tmp19, tmp20, tmp21);
  }

    TNode<Context> tmp22;
    TNode<Number> tmp23;
    TNode<Oddball> tmp24;
    ca_.Bind(&block6, &tmp22, &tmp23, &tmp24);
  return TNode<Oddball>{tmp24};
}

void TestHexLiteral_416(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 233);
    TNode<IntPtrT> tmp0;
    USE(tmp0);
    tmp0 = Convert8ATintptr17ATconstexpr_int31_1444(state_, 0xffff);
    TNode<IntPtrT> tmp1;
    USE(tmp1);
    tmp1 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 1);
    TNode<IntPtrT> tmp2;
    USE(tmp2);
    tmp2 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp0}, TNode<IntPtrT>{tmp1});
    TNode<IntPtrT> tmp3;
    USE(tmp3);
    tmp3 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 0x10000);
    TNode<BoolT> tmp4;
    USE(tmp4);
    tmp4 = CodeStubAssembler(state_).WordEqual(TNode<IntPtrT>{tmp2}, TNode<IntPtrT>{tmp3});
    ca_.Branch(tmp4, &block2, &block3);
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    CodeStubAssembler(state_).FailAssert("Torque assert 'Convert<intptr>(0xffff) + 1 == 0x10000' failed", "test/torque/test-torque.tq", 233);
  }

  if (block2.is_used()) {
    ca_.Bind(&block2);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 234);
    TNode<IntPtrT> tmp5;
    USE(tmp5);
    tmp5 = Convert8ATintptr17ATconstexpr_int31_1444(state_, -0xffff);
    TNode<IntPtrT> tmp6;
    USE(tmp6);
    tmp6 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, -65535);
    TNode<BoolT> tmp7;
    USE(tmp7);
    tmp7 = CodeStubAssembler(state_).WordEqual(TNode<IntPtrT>{tmp5}, TNode<IntPtrT>{tmp6});
    ca_.Branch(tmp7, &block4, &block5);
  }

  if (block5.is_used()) {
    ca_.Bind(&block5);
    CodeStubAssembler(state_).FailAssert("Torque assert 'Convert<intptr>(-0xffff) == -65535' failed", "test/torque/test-torque.tq", 234);
  }

  if (block4.is_used()) {
    ca_.Bind(&block4);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 231);
    ca_.Goto(&block1);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(&block6);
  }

    ca_.Bind(&block6);
}

void TestLargeIntegerLiterals_417(compiler::CodeAssemblerState* state_, TNode<Context> p_c) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_c);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 239);
    TNode<Int32T> tmp1;
    USE(tmp1);
    tmp1 = FromConstexpr7ATint3217ATconstexpr_int32_149(state_, 0x40000000);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 240);
    TNode<Int32T> tmp2;
    USE(tmp2);
    tmp2 = FromConstexpr7ATint3217ATconstexpr_int32_149(state_, 0x7fffffff);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 238);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 237);
    ca_.Goto(&block1, tmp0);
  }

  if (block1.is_used()) {
    TNode<Context> tmp3;
    ca_.Bind(&block1, &tmp3);
    ca_.Goto(&block2, tmp3);
  }

    TNode<Context> tmp4;
    ca_.Bind(&block2, &tmp4);
}

void TestMultilineAssert_418(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, BoolT> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, BoolT> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, BoolT, BoolT> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block3(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 245);
    TNode<Smi> tmp0;
    USE(tmp0);
    tmp0 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 5);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 247);
    TNode<Smi> tmp1;
    USE(tmp1);
    tmp1 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 0);
    TNode<BoolT> tmp2;
    USE(tmp2);
    tmp2 = CodeStubAssembler(state_).SmiGreaterThan(TNode<Smi>{tmp0}, TNode<Smi>{tmp1});
    ca_.Branch(tmp2, &block4, &block5, tmp0, tmp2);
  }

  if (block4.is_used()) {
    TNode<Smi> tmp3;
    TNode<BoolT> tmp4;
    ca_.Bind(&block4, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 248);
    TNode<Smi> tmp5;
    USE(tmp5);
    tmp5 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 10);
    TNode<BoolT> tmp6;
    USE(tmp6);
    tmp6 = CodeStubAssembler(state_).SmiLessThan(TNode<Smi>{tmp3}, TNode<Smi>{tmp5});
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 247);
    ca_.Goto(&block6, tmp3, tmp4, tmp6);
  }

  if (block5.is_used()) {
    TNode<Smi> tmp7;
    TNode<BoolT> tmp8;
    ca_.Bind(&block5, &tmp7, &tmp8);
    TNode<BoolT> tmp9;
    USE(tmp9);
    tmp9 = FromConstexpr6ATbool16ATconstexpr_bool_167(state_, false);
    ca_.Goto(&block6, tmp7, tmp8, tmp9);
  }

  if (block6.is_used()) {
    TNode<Smi> tmp10;
    TNode<BoolT> tmp11;
    TNode<BoolT> tmp12;
    ca_.Bind(&block6, &tmp10, &tmp11, &tmp12);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 246);
    ca_.Branch(tmp12, &block2, &block3, tmp10);
  }

  if (block3.is_used()) {
    TNode<Smi> tmp13;
    ca_.Bind(&block3, &tmp13);
    CodeStubAssembler(state_).FailAssert("Torque assert 'someVeryLongVariableNameThatWillCauseLineBreaks > 0 && someVeryLongVariableNameThatWillCauseLineBreaks < 10' failed", "test/torque/test-torque.tq", 246);
  }

  if (block2.is_used()) {
    TNode<Smi> tmp14;
    ca_.Bind(&block2, &tmp14);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 244);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 243);
    ca_.Goto(&block1);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(&block7);
  }

    ca_.Bind(&block7);
}

void TestNewlineInString_419(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 253);
    CodeStubAssembler(state_).Print("Hello, World!\n");
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 251);
    ca_.Goto(&block1);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
}

int31_t kConstexprConst_420(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

    ca_.Bind(&block0);
return 5;
}

TNode<IntPtrT> kIntptrConst_421(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 257);
    TNode<IntPtrT> tmp0;
    USE(tmp0);
    tmp0 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 4);
return TNode<IntPtrT>{tmp0};
}

TNode<Smi> kSmiConst_422(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 258);
    TNode<Smi> tmp0;
    USE(tmp0);
    tmp0 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 3);
return TNode<Smi>{tmp0};
}

void TestModuleConstBindings_423(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 262);
    TNode<Int32T> tmp0;
    USE(tmp0);
    tmp0 = CodeStubAssembler(state_).Int32Constant(5);
    TNode<Int32T> tmp1;
    USE(tmp1);
    tmp1 = FromConstexpr7ATint3217ATconstexpr_int31_148(state_, kConstexprConst_420(state_));
    TNode<BoolT> tmp2;
    USE(tmp2);
    tmp2 = CodeStubAssembler(state_).Word32Equal(TNode<Int32T>{tmp1}, TNode<Int32T>{tmp0});
    ca_.Branch(tmp2, &block2, &block3);
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    CodeStubAssembler(state_).FailAssert("Torque assert 'kConstexprConst == Int32Constant(5)' failed", "test/torque/test-torque.tq", 262);
  }

  if (block2.is_used()) {
    ca_.Bind(&block2);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 263);
    TNode<IntPtrT> tmp3;
    USE(tmp3);
    tmp3 = kIntptrConst_421(state_);
    TNode<IntPtrT> tmp4;
    USE(tmp4);
    tmp4 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 4);
    TNode<BoolT> tmp5;
    USE(tmp5);
    tmp5 = CodeStubAssembler(state_).WordEqual(TNode<IntPtrT>{tmp3}, TNode<IntPtrT>{tmp4});
    ca_.Branch(tmp5, &block4, &block5);
  }

  if (block5.is_used()) {
    ca_.Bind(&block5);
    CodeStubAssembler(state_).FailAssert("Torque assert 'kIntptrConst == 4' failed", "test/torque/test-torque.tq", 263);
  }

  if (block4.is_used()) {
    ca_.Bind(&block4);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 264);
    TNode<Smi> tmp6;
    USE(tmp6);
    tmp6 = kSmiConst_422(state_);
    TNode<Smi> tmp7;
    USE(tmp7);
    tmp7 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 3);
    TNode<BoolT> tmp8;
    USE(tmp8);
    tmp8 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{tmp6}, TNode<Smi>{tmp7});
    ca_.Branch(tmp8, &block6, &block7);
  }

  if (block7.is_used()) {
    ca_.Bind(&block7);
    CodeStubAssembler(state_).FailAssert("Torque assert 'kSmiConst == 3' failed", "test/torque/test-torque.tq", 264);
  }

  if (block6.is_used()) {
    ca_.Bind(&block6);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 260);
    ca_.Goto(&block1);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(&block8);
  }

    ca_.Bind(&block8);
}

void TestLocalConstBindings_424(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block3(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block5(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block7(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block9(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block11(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 270);
    TNode<Smi> tmp0;
    USE(tmp0);
    tmp0 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 3);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 272);
    TNode<Smi> tmp1;
    USE(tmp1);
    tmp1 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 1);
    TNode<Smi> tmp2;
    USE(tmp2);
    tmp2 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 3);
    TNode<Smi> tmp3;
    USE(tmp3);
    tmp3 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{tmp2}, TNode<Smi>{tmp1});
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 273);
    TNode<Smi> tmp4;
    USE(tmp4);
    tmp4 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 1);
    TNode<Smi> tmp5;
    USE(tmp5);
    tmp5 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{tmp0}, TNode<Smi>{tmp4});
    TNode<BoolT> tmp6;
    USE(tmp6);
    tmp6 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{tmp3}, TNode<Smi>{tmp5});
    ca_.Branch(tmp6, &block2, &block3, tmp0, tmp3);
  }

  if (block3.is_used()) {
    TNode<Smi> tmp7;
    TNode<Smi> tmp8;
    ca_.Bind(&block3, &tmp7, &tmp8);
    CodeStubAssembler(state_).FailAssert("Torque assert 'x == xSmi + 1' failed", "test/torque/test-torque.tq", 273);
  }

  if (block2.is_used()) {
    TNode<Smi> tmp9;
    TNode<Smi> tmp10;
    ca_.Bind(&block2, &tmp9, &tmp10);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 274);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 275);
    TNode<BoolT> tmp11;
    USE(tmp11);
    tmp11 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{tmp10}, TNode<Smi>{tmp10});
    ca_.Branch(tmp11, &block4, &block5, tmp9, tmp10, tmp10);
  }

  if (block5.is_used()) {
    TNode<Smi> tmp12;
    TNode<Smi> tmp13;
    TNode<Smi> tmp14;
    ca_.Bind(&block5, &tmp12, &tmp13, &tmp14);
    CodeStubAssembler(state_).FailAssert("Torque assert 'x == xSmi' failed", "test/torque/test-torque.tq", 275);
  }

  if (block4.is_used()) {
    TNode<Smi> tmp15;
    TNode<Smi> tmp16;
    TNode<Smi> tmp17;
    ca_.Bind(&block4, &tmp15, &tmp16, &tmp17);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 276);
    TNode<Smi> tmp18;
    USE(tmp18);
    tmp18 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 4);
    TNode<BoolT> tmp19;
    USE(tmp19);
    tmp19 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{tmp16}, TNode<Smi>{tmp18});
    ca_.Branch(tmp19, &block6, &block7, tmp15, tmp16, tmp17);
  }

  if (block7.is_used()) {
    TNode<Smi> tmp20;
    TNode<Smi> tmp21;
    TNode<Smi> tmp22;
    ca_.Bind(&block7, &tmp20, &tmp21, &tmp22);
    CodeStubAssembler(state_).FailAssert("Torque assert 'x == 4' failed", "test/torque/test-torque.tq", 276);
  }

  if (block6.is_used()) {
    TNode<Smi> tmp23;
    TNode<Smi> tmp24;
    TNode<Smi> tmp25;
    ca_.Bind(&block6, &tmp23, &tmp24, &tmp25);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 271);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 278);
    TNode<Smi> tmp26;
    USE(tmp26);
    tmp26 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 3);
    TNode<BoolT> tmp27;
    USE(tmp27);
    tmp27 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{tmp23}, TNode<Smi>{tmp26});
    ca_.Branch(tmp27, &block8, &block9, tmp23);
  }

  if (block9.is_used()) {
    TNode<Smi> tmp28;
    ca_.Bind(&block9, &tmp28);
    CodeStubAssembler(state_).FailAssert("Torque assert 'xSmi == 3' failed", "test/torque/test-torque.tq", 278);
  }

  if (block8.is_used()) {
    TNode<Smi> tmp29;
    ca_.Bind(&block8, &tmp29);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 279);
    TNode<Smi> tmp30;
    USE(tmp30);
    tmp30 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 3);
    TNode<BoolT> tmp31;
    USE(tmp31);
    tmp31 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{tmp30}, TNode<Smi>{tmp29});
    ca_.Branch(tmp31, &block10, &block11, tmp29);
  }

  if (block11.is_used()) {
    TNode<Smi> tmp32;
    ca_.Bind(&block11, &tmp32);
    CodeStubAssembler(state_).FailAssert("Torque assert 'x == xSmi' failed", "test/torque/test-torque.tq", 279);
  }

  if (block10.is_used()) {
    TNode<Smi> tmp33;
    ca_.Bind(&block10, &tmp33);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 268);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 267);
    ca_.Goto(&block1);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(&block12);
  }

    ca_.Bind(&block12);
}

TNode<Smi> TestStruct1_425(compiler::CodeAssemblerState* state_, TorqueStructTestStructA p_i) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, Smi, Number> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, Smi, Number, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, Smi, Number, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_i.indexes, p_i.i, p_i.k);

  if (block0.is_used()) {
    TNode<FixedArray> tmp0;
    TNode<Smi> tmp1;
    TNode<Number> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 295);
    ca_.Goto(&block1, tmp0, tmp1, tmp2, tmp1);
  }

  if (block1.is_used()) {
    TNode<FixedArray> tmp3;
    TNode<Smi> tmp4;
    TNode<Number> tmp5;
    TNode<Smi> tmp6;
    ca_.Bind(&block1, &tmp3, &tmp4, &tmp5, &tmp6);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 293);
    ca_.Goto(&block2, tmp3, tmp4, tmp5, tmp6);
  }

    TNode<FixedArray> tmp7;
    TNode<Smi> tmp8;
    TNode<Number> tmp9;
    TNode<Smi> tmp10;
    ca_.Bind(&block2, &tmp7, &tmp8, &tmp9, &tmp10);
  return TNode<Smi>{tmp10};
}

TorqueStructTestStructA TestStruct2_426(compiler::CodeAssemblerState* state_, TNode<Context> p_context) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Smi, Number> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Smi, Number> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 301);
    TNode<FixedArray> tmp1;
    USE(tmp1);
    tmp1 = kEmptyFixedArray_214(state_);
    TNode<FixedArray> tmp2;
    USE(tmp2);
    tmp2 = UnsafeCast10FixedArray_1438(state_, TNode<Context>{tmp0}, TNode<Object>{tmp1});
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 300);
    TNode<Smi> tmp3;
    USE(tmp3);
    tmp3 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 27);
    TNode<Number> tmp4;
    USE(tmp4);
    tmp4 = FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_160(state_, 31);
    ca_.Goto(&block1, tmp0, tmp2, tmp3, tmp4);
  }

  if (block1.is_used()) {
    TNode<Context> tmp5;
    TNode<FixedArray> tmp6;
    TNode<Smi> tmp7;
    TNode<Number> tmp8;
    ca_.Bind(&block1, &tmp5, &tmp6, &tmp7, &tmp8);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 298);
    ca_.Goto(&block2, tmp5, tmp6, tmp7, tmp8);
  }

    TNode<Context> tmp9;
    TNode<FixedArray> tmp10;
    TNode<Smi> tmp11;
    TNode<Number> tmp12;
    ca_.Bind(&block2, &tmp9, &tmp10, &tmp11, &tmp12);
  return TorqueStructTestStructA{TNode<FixedArray>{tmp10}, TNode<Smi>{tmp11}, TNode<Number>{tmp12}};
}

TorqueStructTestStructA TestStruct3_427(compiler::CodeAssemblerState* state_, TNode<Context> p_context) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Smi, Number> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Smi, Number> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 310);
    TNode<FixedArray> tmp1;
    USE(tmp1);
    tmp1 = kEmptyFixedArray_214(state_);
    TNode<FixedArray> tmp2;
    USE(tmp2);
    tmp2 = UnsafeCast10FixedArray_1438(state_, TNode<Context>{tmp0}, TNode<Object>{tmp1});
    TNode<Smi> tmp3;
    USE(tmp3);
    tmp3 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 13);
    TNode<Number> tmp4;
    USE(tmp4);
    tmp4 = FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_160(state_, 5);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 309);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 311);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 312);
    TNode<FixedArray> tmp5;
    USE(tmp5);
    TNode<Smi> tmp6;
    USE(tmp6);
    TNode<Number> tmp7;
    USE(tmp7);
    std::tie(tmp5, tmp6, tmp7) = TestStruct2_426(state_, TNode<Context>{tmp0}).Flatten();
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 313);
    TNode<Smi> tmp8;
    USE(tmp8);
    tmp8 = TestStruct1_425(state_, TorqueStructTestStructA{TNode<FixedArray>{tmp5}, TNode<Smi>{tmp6}, TNode<Number>{tmp7}});
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 314);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 315);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 316);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 317);
    TNode<Smi> tmp9;
    USE(tmp9);
    tmp9 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 7);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 318);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 320);
    TNode<FixedArray> tmp10;
    USE(tmp10);
    tmp10 = kEmptyFixedArray_214(state_);
    TNode<FixedArray> tmp11;
    USE(tmp11);
    tmp11 = UnsafeCast10FixedArray_1438(state_, TNode<Context>{tmp0}, TNode<Object>{tmp10});
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 319);
    TNode<Smi> tmp12;
    USE(tmp12);
    tmp12 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 27);
    TNode<Number> tmp13;
    USE(tmp13);
    tmp13 = FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_160(state_, 31);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 324);
    TNode<FixedArray> tmp14;
    USE(tmp14);
    TNode<Smi> tmp15;
    USE(tmp15);
    TNode<Number> tmp16;
    USE(tmp16);
    std::tie(tmp14, tmp15, tmp16) = TestStruct2_426(state_, TNode<Context>{tmp0}).Flatten();
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 325);
    ca_.Goto(&block1, tmp0, tmp2, tmp8, tmp8);
  }

  if (block1.is_used()) {
    TNode<Context> tmp17;
    TNode<FixedArray> tmp18;
    TNode<Smi> tmp19;
    TNode<Number> tmp20;
    ca_.Bind(&block1, &tmp17, &tmp18, &tmp19, &tmp20);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 307);
    ca_.Goto(&block2, tmp17, tmp18, tmp19, tmp20);
  }

    TNode<Context> tmp21;
    TNode<FixedArray> tmp22;
    TNode<Smi> tmp23;
    TNode<Number> tmp24;
    ca_.Bind(&block2, &tmp21, &tmp22, &tmp23, &tmp24);
  return TorqueStructTestStructA{TNode<FixedArray>{tmp22}, TNode<Smi>{tmp23}, TNode<Number>{tmp24}};
}

TorqueStructTestStructC TestStruct4_428(compiler::CodeAssemblerState* state_, TNode<Context> p_context) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Smi, Number, FixedArray, Smi, Number> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Smi, Number, FixedArray, Smi, Number> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 335);
    TNode<FixedArray> tmp1;
    USE(tmp1);
    TNode<Smi> tmp2;
    USE(tmp2);
    TNode<Number> tmp3;
    USE(tmp3);
    std::tie(tmp1, tmp2, tmp3) = TestStruct2_426(state_, TNode<Context>{tmp0}).Flatten();
    TNode<FixedArray> tmp4;
    USE(tmp4);
    TNode<Smi> tmp5;
    USE(tmp5);
    TNode<Number> tmp6;
    USE(tmp6);
    std::tie(tmp4, tmp5, tmp6) = TestStruct2_426(state_, TNode<Context>{tmp0}).Flatten();
    ca_.Goto(&block1, tmp0, tmp1, tmp2, tmp3, tmp4, tmp5, tmp6);
  }

  if (block1.is_used()) {
    TNode<Context> tmp7;
    TNode<FixedArray> tmp8;
    TNode<Smi> tmp9;
    TNode<Number> tmp10;
    TNode<FixedArray> tmp11;
    TNode<Smi> tmp12;
    TNode<Number> tmp13;
    ca_.Bind(&block1, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11, &tmp12, &tmp13);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 333);
    ca_.Goto(&block2, tmp7, tmp8, tmp9, tmp10, tmp11, tmp12, tmp13);
  }

    TNode<Context> tmp14;
    TNode<FixedArray> tmp15;
    TNode<Smi> tmp16;
    TNode<Number> tmp17;
    TNode<FixedArray> tmp18;
    TNode<Smi> tmp19;
    TNode<Number> tmp20;
    ca_.Bind(&block2, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18, &tmp19, &tmp20);
  return TorqueStructTestStructC{TorqueStructTestStructA{TNode<FixedArray>{tmp15}, TNode<Smi>{tmp16}, TNode<Number>{tmp17}}, TorqueStructTestStructA{TNode<FixedArray>{tmp18}, TNode<Smi>{tmp19}, TNode<Number>{tmp20}}};
}

void CallTestStructInLabel_430(compiler::CodeAssemblerState* state_, TNode<Context> p_context) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Smi, Number> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Smi, Number> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 345);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 340);
    TNode<FixedArray> tmp1;
    USE(tmp1);
    TNode<Smi> tmp2;
    USE(tmp2);
    TNode<Number> tmp3;
    USE(tmp3);
    std::tie(tmp1, tmp2, tmp3) = TestStruct2_426(state_, TNode<Context>{tmp0}).Flatten();
    ca_.Goto(&block3, tmp0, tmp1, tmp2, tmp3);
  }

  if (block3.is_used()) {
    TNode<Context> tmp4;
    TNode<FixedArray> tmp5;
    TNode<Smi> tmp6;
    TNode<Number> tmp7;
    ca_.Bind(&block3, &tmp4, &tmp5, &tmp6, &tmp7);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 344);
    ca_.Goto(&block2, tmp4, tmp5, tmp6, tmp7);
  }

  if (block2.is_used()) {
    TNode<Context> tmp8;
    TNode<FixedArray> tmp9;
    TNode<Smi> tmp10;
    TNode<Number> tmp11;
    ca_.Bind(&block2, &tmp8, &tmp9, &tmp10, &tmp11);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 342);
    ca_.Goto(&block1, tmp8);
  }

  if (block1.is_used()) {
    TNode<Context> tmp12;
    ca_.Bind(&block1, &tmp12);
    ca_.Goto(&block4, tmp12);
  }

    TNode<Context> tmp13;
    ca_.Bind(&block4, &tmp13);
}

void TestForLoop_431(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block7(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block13(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block18(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block21(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block24(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block26(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block25(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block29(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block27(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block30(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block31(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block28(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block33(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block32(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block36(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block34(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block38(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block39(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block37(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block35(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block41(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block40(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block44(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block42(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block46(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block47(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block45(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block43(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block49(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block48(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block52(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block50(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block53(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block54(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block51(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block56(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block55(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block59(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block57(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block61(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block62(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block63(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block64(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block60(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block58(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block66(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block65(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block69(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block67(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block70(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block71(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block72(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block73(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block68(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block75(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block74(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block80(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block78(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block81(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block82(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block79(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block77(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block84(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block83(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block76(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi> block87(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi> block85(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi> block88(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi> block86(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block89(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 354);
    TNode<Smi> tmp0;
    USE(tmp0);
    tmp0 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 355);
    TNode<Smi> tmp1;
    USE(tmp1);
    tmp1 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 0);
    ca_.Goto(&block4, tmp0, tmp1);
  }

  if (block4.is_used()) {
    TNode<Smi> tmp2;
    TNode<Smi> tmp3;
    ca_.Bind(&block4, &tmp2, &tmp3);
    TNode<Smi> tmp4;
    USE(tmp4);
    tmp4 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 5);
    TNode<BoolT> tmp5;
    USE(tmp5);
    tmp5 = CodeStubAssembler(state_).SmiLessThan(TNode<Smi>{tmp3}, TNode<Smi>{tmp4});
    ca_.Branch(tmp5, &block2, &block3, tmp2, tmp3);
  }

  if (block2.is_used()) {
    TNode<Smi> tmp6;
    TNode<Smi> tmp7;
    ca_.Bind(&block2, &tmp6, &tmp7);
    TNode<Smi> tmp8;
    USE(tmp8);
    tmp8 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{tmp6}, TNode<Smi>{tmp7});
    ca_.Goto(&block5, tmp8, tmp7);
  }

  if (block5.is_used()) {
    TNode<Smi> tmp9;
    TNode<Smi> tmp10;
    ca_.Bind(&block5, &tmp9, &tmp10);
    TNode<Smi> tmp11;
    USE(tmp11);
    tmp11 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 1);
    TNode<Smi> tmp12;
    USE(tmp12);
    tmp12 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{tmp10}, TNode<Smi>{tmp11});
    ca_.Goto(&block4, tmp9, tmp12);
  }

  if (block3.is_used()) {
    TNode<Smi> tmp13;
    TNode<Smi> tmp14;
    ca_.Bind(&block3, &tmp13, &tmp14);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 356);
    TNode<Smi> tmp15;
    USE(tmp15);
    tmp15 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 10);
    TNode<BoolT> tmp16;
    USE(tmp16);
    tmp16 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{tmp13}, TNode<Smi>{tmp15});
    ca_.Branch(tmp16, &block6, &block7, tmp13);
  }

  if (block7.is_used()) {
    TNode<Smi> tmp17;
    ca_.Bind(&block7, &tmp17);
    CodeStubAssembler(state_).FailAssert("Torque assert 'sum == 10' failed", "test/torque/test-torque.tq", 356);
  }

  if (block6.is_used()) {
    TNode<Smi> tmp18;
    ca_.Bind(&block6, &tmp18);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 358);
    TNode<Smi> tmp19;
    USE(tmp19);
    tmp19 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 359);
    TNode<Smi> tmp20;
    USE(tmp20);
    tmp20 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 360);
    ca_.Goto(&block10, tmp19, tmp20);
  }

  if (block10.is_used()) {
    TNode<Smi> tmp21;
    TNode<Smi> tmp22;
    ca_.Bind(&block10, &tmp21, &tmp22);
    TNode<Smi> tmp23;
    USE(tmp23);
    tmp23 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 5);
    TNode<BoolT> tmp24;
    USE(tmp24);
    tmp24 = CodeStubAssembler(state_).SmiLessThan(TNode<Smi>{tmp22}, TNode<Smi>{tmp23});
    ca_.Branch(tmp24, &block8, &block9, tmp21, tmp22);
  }

  if (block8.is_used()) {
    TNode<Smi> tmp25;
    TNode<Smi> tmp26;
    ca_.Bind(&block8, &tmp25, &tmp26);
    TNode<Smi> tmp27;
    USE(tmp27);
    tmp27 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{tmp25}, TNode<Smi>{tmp26});
    ca_.Goto(&block11, tmp27, tmp26);
  }

  if (block11.is_used()) {
    TNode<Smi> tmp28;
    TNode<Smi> tmp29;
    ca_.Bind(&block11, &tmp28, &tmp29);
    TNode<Smi> tmp30;
    USE(tmp30);
    tmp30 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 1);
    TNode<Smi> tmp31;
    USE(tmp31);
    tmp31 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{tmp29}, TNode<Smi>{tmp30});
    ca_.Goto(&block10, tmp28, tmp31);
  }

  if (block9.is_used()) {
    TNode<Smi> tmp32;
    TNode<Smi> tmp33;
    ca_.Bind(&block9, &tmp32, &tmp33);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 361);
    TNode<Smi> tmp34;
    USE(tmp34);
    tmp34 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 10);
    TNode<BoolT> tmp35;
    USE(tmp35);
    tmp35 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{tmp32}, TNode<Smi>{tmp34});
    ca_.Branch(tmp35, &block12, &block13, tmp32, tmp33);
  }

  if (block13.is_used()) {
    TNode<Smi> tmp36;
    TNode<Smi> tmp37;
    ca_.Bind(&block13, &tmp36, &tmp37);
    CodeStubAssembler(state_).FailAssert("Torque assert 'sum == 10' failed", "test/torque/test-torque.tq", 361);
  }

  if (block12.is_used()) {
    TNode<Smi> tmp38;
    TNode<Smi> tmp39;
    ca_.Bind(&block12, &tmp38, &tmp39);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 363);
    TNode<Smi> tmp40;
    USE(tmp40);
    tmp40 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 364);
    TNode<Smi> tmp41;
    USE(tmp41);
    tmp41 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 365);
    ca_.Goto(&block16, tmp40, tmp41);
  }

  if (block16.is_used()) {
    TNode<Smi> tmp42;
    TNode<Smi> tmp43;
    ca_.Bind(&block16, &tmp42, &tmp43);
    TNode<Smi> tmp44;
    USE(tmp44);
    tmp44 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 5);
    TNode<BoolT> tmp45;
    USE(tmp45);
    tmp45 = CodeStubAssembler(state_).SmiLessThan(TNode<Smi>{tmp43}, TNode<Smi>{tmp44});
    ca_.Branch(tmp45, &block14, &block15, tmp42, tmp43);
  }

  if (block14.is_used()) {
    TNode<Smi> tmp46;
    TNode<Smi> tmp47;
    ca_.Bind(&block14, &tmp46, &tmp47);
    TNode<Smi> tmp48;
    USE(tmp48);
    tmp48 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 1);
    TNode<Smi> tmp49;
    USE(tmp49);
    tmp49 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{tmp47}, TNode<Smi>{tmp48});
    TNode<Smi> tmp50;
    USE(tmp50);
    tmp50 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{tmp46}, TNode<Smi>{tmp47});
    ca_.Goto(&block16, tmp50, tmp49);
  }

  if (block15.is_used()) {
    TNode<Smi> tmp51;
    TNode<Smi> tmp52;
    ca_.Bind(&block15, &tmp51, &tmp52);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 366);
    TNode<Smi> tmp53;
    USE(tmp53);
    tmp53 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 10);
    TNode<BoolT> tmp54;
    USE(tmp54);
    tmp54 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{tmp51}, TNode<Smi>{tmp53});
    ca_.Branch(tmp54, &block17, &block18, tmp51, tmp52);
  }

  if (block18.is_used()) {
    TNode<Smi> tmp55;
    TNode<Smi> tmp56;
    ca_.Bind(&block18, &tmp55, &tmp56);
    CodeStubAssembler(state_).FailAssert("Torque assert 'sum == 10' failed", "test/torque/test-torque.tq", 366);
  }

  if (block17.is_used()) {
    TNode<Smi> tmp57;
    TNode<Smi> tmp58;
    ca_.Bind(&block17, &tmp57, &tmp58);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 369);
    TNode<Smi> tmp59;
    USE(tmp59);
    tmp59 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 370);
    TNode<Smi> tmp60;
    USE(tmp60);
    tmp60 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 0);
    ca_.Goto(&block21, tmp59, tmp58, tmp60);
  }

  if (block21.is_used()) {
    TNode<Smi> tmp61;
    TNode<Smi> tmp62;
    TNode<Smi> tmp63;
    ca_.Bind(&block21, &tmp61, &tmp62, &tmp63);
    ca_.Goto(&block19, tmp61, tmp62, tmp63);
  }

  if (block19.is_used()) {
    TNode<Smi> tmp64;
    TNode<Smi> tmp65;
    TNode<Smi> tmp66;
    ca_.Bind(&block19, &tmp64, &tmp65, &tmp66);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 371);
    TNode<Smi> tmp67;
    USE(tmp67);
    tmp67 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 5);
    TNode<BoolT> tmp68;
    USE(tmp68);
    tmp68 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{tmp66}, TNode<Smi>{tmp67});
    ca_.Branch(tmp68, &block23, &block24, tmp64, tmp65, tmp66);
  }

  if (block23.is_used()) {
    TNode<Smi> tmp69;
    TNode<Smi> tmp70;
    TNode<Smi> tmp71;
    ca_.Bind(&block23, &tmp69, &tmp70, &tmp71);
    ca_.Goto(&block20, tmp69, tmp70, tmp71);
  }

  if (block24.is_used()) {
    TNode<Smi> tmp72;
    TNode<Smi> tmp73;
    TNode<Smi> tmp74;
    ca_.Bind(&block24, &tmp72, &tmp73, &tmp74);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 372);
    TNode<Smi> tmp75;
    USE(tmp75);
    tmp75 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{tmp72}, TNode<Smi>{tmp74});
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 370);
    ca_.Goto(&block22, tmp75, tmp73, tmp74);
  }

  if (block22.is_used()) {
    TNode<Smi> tmp76;
    TNode<Smi> tmp77;
    TNode<Smi> tmp78;
    ca_.Bind(&block22, &tmp76, &tmp77, &tmp78);
    TNode<Smi> tmp79;
    USE(tmp79);
    tmp79 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 1);
    TNode<Smi> tmp80;
    USE(tmp80);
    tmp80 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{tmp78}, TNode<Smi>{tmp79});
    ca_.Goto(&block21, tmp76, tmp77, tmp80);
  }

  if (block20.is_used()) {
    TNode<Smi> tmp81;
    TNode<Smi> tmp82;
    TNode<Smi> tmp83;
    ca_.Bind(&block20, &tmp81, &tmp82, &tmp83);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 374);
    TNode<Smi> tmp84;
    USE(tmp84);
    tmp84 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 10);
    TNode<BoolT> tmp85;
    USE(tmp85);
    tmp85 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{tmp81}, TNode<Smi>{tmp84});
    ca_.Branch(tmp85, &block25, &block26, tmp81, tmp82);
  }

  if (block26.is_used()) {
    TNode<Smi> tmp86;
    TNode<Smi> tmp87;
    ca_.Bind(&block26, &tmp86, &tmp87);
    CodeStubAssembler(state_).FailAssert("Torque assert 'sum == 10' failed", "test/torque/test-torque.tq", 374);
  }

  if (block25.is_used()) {
    TNode<Smi> tmp88;
    TNode<Smi> tmp89;
    ca_.Bind(&block25, &tmp88, &tmp89);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 376);
    TNode<Smi> tmp90;
    USE(tmp90);
    tmp90 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 377);
    TNode<Smi> tmp91;
    USE(tmp91);
    tmp91 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 378);
    ca_.Goto(&block29, tmp90, tmp91);
  }

  if (block29.is_used()) {
    TNode<Smi> tmp92;
    TNode<Smi> tmp93;
    ca_.Bind(&block29, &tmp92, &tmp93);
    ca_.Goto(&block27, tmp92, tmp93);
  }

  if (block27.is_used()) {
    TNode<Smi> tmp94;
    TNode<Smi> tmp95;
    ca_.Bind(&block27, &tmp94, &tmp95);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 379);
    TNode<Smi> tmp96;
    USE(tmp96);
    tmp96 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 5);
    TNode<BoolT> tmp97;
    USE(tmp97);
    tmp97 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{tmp95}, TNode<Smi>{tmp96});
    ca_.Branch(tmp97, &block30, &block31, tmp94, tmp95);
  }

  if (block30.is_used()) {
    TNode<Smi> tmp98;
    TNode<Smi> tmp99;
    ca_.Bind(&block30, &tmp98, &tmp99);
    ca_.Goto(&block28, tmp98, tmp99);
  }

  if (block31.is_used()) {
    TNode<Smi> tmp100;
    TNode<Smi> tmp101;
    ca_.Bind(&block31, &tmp100, &tmp101);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 380);
    TNode<Smi> tmp102;
    USE(tmp102);
    tmp102 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{tmp100}, TNode<Smi>{tmp101});
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 381);
    TNode<Smi> tmp103;
    USE(tmp103);
    tmp103 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 1);
    TNode<Smi> tmp104;
    USE(tmp104);
    tmp104 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{tmp101}, TNode<Smi>{tmp103});
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 378);
    ca_.Goto(&block29, tmp102, tmp104);
  }

  if (block28.is_used()) {
    TNode<Smi> tmp105;
    TNode<Smi> tmp106;
    ca_.Bind(&block28, &tmp105, &tmp106);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 383);
    TNode<Smi> tmp107;
    USE(tmp107);
    tmp107 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 10);
    TNode<BoolT> tmp108;
    USE(tmp108);
    tmp108 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{tmp105}, TNode<Smi>{tmp107});
    ca_.Branch(tmp108, &block32, &block33, tmp105, tmp106);
  }

  if (block33.is_used()) {
    TNode<Smi> tmp109;
    TNode<Smi> tmp110;
    ca_.Bind(&block33, &tmp109, &tmp110);
    CodeStubAssembler(state_).FailAssert("Torque assert 'sum == 10' failed", "test/torque/test-torque.tq", 383);
  }

  if (block32.is_used()) {
    TNode<Smi> tmp111;
    TNode<Smi> tmp112;
    ca_.Bind(&block32, &tmp111, &tmp112);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 387);
    TNode<Smi> tmp113;
    USE(tmp113);
    tmp113 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 388);
    TNode<Smi> tmp114;
    USE(tmp114);
    tmp114 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 0);
    ca_.Goto(&block36, tmp113, tmp112, tmp114);
  }

  if (block36.is_used()) {
    TNode<Smi> tmp115;
    TNode<Smi> tmp116;
    TNode<Smi> tmp117;
    ca_.Bind(&block36, &tmp115, &tmp116, &tmp117);
    TNode<Smi> tmp118;
    USE(tmp118);
    tmp118 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 5);
    TNode<BoolT> tmp119;
    USE(tmp119);
    tmp119 = CodeStubAssembler(state_).SmiLessThan(TNode<Smi>{tmp117}, TNode<Smi>{tmp118});
    ca_.Branch(tmp119, &block34, &block35, tmp115, tmp116, tmp117);
  }

  if (block34.is_used()) {
    TNode<Smi> tmp120;
    TNode<Smi> tmp121;
    TNode<Smi> tmp122;
    ca_.Bind(&block34, &tmp120, &tmp121, &tmp122);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 389);
    TNode<Smi> tmp123;
    USE(tmp123);
    tmp123 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 3);
    TNode<BoolT> tmp124;
    USE(tmp124);
    tmp124 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{tmp122}, TNode<Smi>{tmp123});
    ca_.Branch(tmp124, &block38, &block39, tmp120, tmp121, tmp122);
  }

  if (block38.is_used()) {
    TNode<Smi> tmp125;
    TNode<Smi> tmp126;
    TNode<Smi> tmp127;
    ca_.Bind(&block38, &tmp125, &tmp126, &tmp127);
    ca_.Goto(&block37, tmp125, tmp126, tmp127);
  }

  if (block39.is_used()) {
    TNode<Smi> tmp128;
    TNode<Smi> tmp129;
    TNode<Smi> tmp130;
    ca_.Bind(&block39, &tmp128, &tmp129, &tmp130);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 390);
    TNode<Smi> tmp131;
    USE(tmp131);
    tmp131 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{tmp128}, TNode<Smi>{tmp130});
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 388);
    ca_.Goto(&block37, tmp131, tmp129, tmp130);
  }

  if (block37.is_used()) {
    TNode<Smi> tmp132;
    TNode<Smi> tmp133;
    TNode<Smi> tmp134;
    ca_.Bind(&block37, &tmp132, &tmp133, &tmp134);
    TNode<Smi> tmp135;
    USE(tmp135);
    tmp135 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 1);
    TNode<Smi> tmp136;
    USE(tmp136);
    tmp136 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{tmp134}, TNode<Smi>{tmp135});
    ca_.Goto(&block36, tmp132, tmp133, tmp136);
  }

  if (block35.is_used()) {
    TNode<Smi> tmp137;
    TNode<Smi> tmp138;
    TNode<Smi> tmp139;
    ca_.Bind(&block35, &tmp137, &tmp138, &tmp139);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 392);
    TNode<Smi> tmp140;
    USE(tmp140);
    tmp140 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 7);
    TNode<BoolT> tmp141;
    USE(tmp141);
    tmp141 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{tmp137}, TNode<Smi>{tmp140});
    ca_.Branch(tmp141, &block40, &block41, tmp137, tmp138);
  }

  if (block41.is_used()) {
    TNode<Smi> tmp142;
    TNode<Smi> tmp143;
    ca_.Bind(&block41, &tmp142, &tmp143);
    CodeStubAssembler(state_).FailAssert("Torque assert 'sum == 7' failed", "test/torque/test-torque.tq", 392);
  }

  if (block40.is_used()) {
    TNode<Smi> tmp144;
    TNode<Smi> tmp145;
    ca_.Bind(&block40, &tmp144, &tmp145);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 394);
    TNode<Smi> tmp146;
    USE(tmp146);
    tmp146 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 395);
    TNode<Smi> tmp147;
    USE(tmp147);
    tmp147 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 396);
    ca_.Goto(&block44, tmp146, tmp147);
  }

  if (block44.is_used()) {
    TNode<Smi> tmp148;
    TNode<Smi> tmp149;
    ca_.Bind(&block44, &tmp148, &tmp149);
    TNode<Smi> tmp150;
    USE(tmp150);
    tmp150 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 5);
    TNode<BoolT> tmp151;
    USE(tmp151);
    tmp151 = CodeStubAssembler(state_).SmiLessThan(TNode<Smi>{tmp149}, TNode<Smi>{tmp150});
    ca_.Branch(tmp151, &block42, &block43, tmp148, tmp149);
  }

  if (block42.is_used()) {
    TNode<Smi> tmp152;
    TNode<Smi> tmp153;
    ca_.Bind(&block42, &tmp152, &tmp153);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 397);
    TNode<Smi> tmp154;
    USE(tmp154);
    tmp154 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 3);
    TNode<BoolT> tmp155;
    USE(tmp155);
    tmp155 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{tmp153}, TNode<Smi>{tmp154});
    ca_.Branch(tmp155, &block46, &block47, tmp152, tmp153);
  }

  if (block46.is_used()) {
    TNode<Smi> tmp156;
    TNode<Smi> tmp157;
    ca_.Bind(&block46, &tmp156, &tmp157);
    ca_.Goto(&block45, tmp156, tmp157);
  }

  if (block47.is_used()) {
    TNode<Smi> tmp158;
    TNode<Smi> tmp159;
    ca_.Bind(&block47, &tmp158, &tmp159);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 398);
    TNode<Smi> tmp160;
    USE(tmp160);
    tmp160 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{tmp158}, TNode<Smi>{tmp159});
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 396);
    ca_.Goto(&block45, tmp160, tmp159);
  }

  if (block45.is_used()) {
    TNode<Smi> tmp161;
    TNode<Smi> tmp162;
    ca_.Bind(&block45, &tmp161, &tmp162);
    TNode<Smi> tmp163;
    USE(tmp163);
    tmp163 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 1);
    TNode<Smi> tmp164;
    USE(tmp164);
    tmp164 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{tmp162}, TNode<Smi>{tmp163});
    ca_.Goto(&block44, tmp161, tmp164);
  }

  if (block43.is_used()) {
    TNode<Smi> tmp165;
    TNode<Smi> tmp166;
    ca_.Bind(&block43, &tmp165, &tmp166);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 400);
    TNode<Smi> tmp167;
    USE(tmp167);
    tmp167 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 7);
    TNode<BoolT> tmp168;
    USE(tmp168);
    tmp168 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{tmp165}, TNode<Smi>{tmp167});
    ca_.Branch(tmp168, &block48, &block49, tmp165, tmp166);
  }

  if (block49.is_used()) {
    TNode<Smi> tmp169;
    TNode<Smi> tmp170;
    ca_.Bind(&block49, &tmp169, &tmp170);
    CodeStubAssembler(state_).FailAssert("Torque assert 'sum == 7' failed", "test/torque/test-torque.tq", 400);
  }

  if (block48.is_used()) {
    TNode<Smi> tmp171;
    TNode<Smi> tmp172;
    ca_.Bind(&block48, &tmp171, &tmp172);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 402);
    TNode<Smi> tmp173;
    USE(tmp173);
    tmp173 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 403);
    TNode<Smi> tmp174;
    USE(tmp174);
    tmp174 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 404);
    ca_.Goto(&block52, tmp173, tmp174);
  }

  if (block52.is_used()) {
    TNode<Smi> tmp175;
    TNode<Smi> tmp176;
    ca_.Bind(&block52, &tmp175, &tmp176);
    TNode<Smi> tmp177;
    USE(tmp177);
    tmp177 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 5);
    TNode<BoolT> tmp178;
    USE(tmp178);
    tmp178 = CodeStubAssembler(state_).SmiLessThan(TNode<Smi>{tmp176}, TNode<Smi>{tmp177});
    ca_.Branch(tmp178, &block50, &block51, tmp175, tmp176);
  }

  if (block50.is_used()) {
    TNode<Smi> tmp179;
    TNode<Smi> tmp180;
    ca_.Bind(&block50, &tmp179, &tmp180);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 405);
    TNode<Smi> tmp181;
    USE(tmp181);
    tmp181 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 3);
    TNode<BoolT> tmp182;
    USE(tmp182);
    tmp182 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{tmp180}, TNode<Smi>{tmp181});
    ca_.Branch(tmp182, &block53, &block54, tmp179, tmp180);
  }

  if (block53.is_used()) {
    TNode<Smi> tmp183;
    TNode<Smi> tmp184;
    ca_.Bind(&block53, &tmp183, &tmp184);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 406);
    TNode<Smi> tmp185;
    USE(tmp185);
    tmp185 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 1);
    TNode<Smi> tmp186;
    USE(tmp186);
    tmp186 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{tmp184}, TNode<Smi>{tmp185});
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 407);
    ca_.Goto(&block52, tmp183, tmp186);
  }

  if (block54.is_used()) {
    TNode<Smi> tmp187;
    TNode<Smi> tmp188;
    ca_.Bind(&block54, &tmp187, &tmp188);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 409);
    TNode<Smi> tmp189;
    USE(tmp189);
    tmp189 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{tmp187}, TNode<Smi>{tmp188});
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 410);
    TNode<Smi> tmp190;
    USE(tmp190);
    tmp190 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 1);
    TNode<Smi> tmp191;
    USE(tmp191);
    tmp191 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{tmp188}, TNode<Smi>{tmp190});
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 404);
    ca_.Goto(&block52, tmp189, tmp191);
  }

  if (block51.is_used()) {
    TNode<Smi> tmp192;
    TNode<Smi> tmp193;
    ca_.Bind(&block51, &tmp192, &tmp193);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 412);
    TNode<Smi> tmp194;
    USE(tmp194);
    tmp194 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 7);
    TNode<BoolT> tmp195;
    USE(tmp195);
    tmp195 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{tmp192}, TNode<Smi>{tmp194});
    ca_.Branch(tmp195, &block55, &block56, tmp192, tmp193);
  }

  if (block56.is_used()) {
    TNode<Smi> tmp196;
    TNode<Smi> tmp197;
    ca_.Bind(&block56, &tmp196, &tmp197);
    CodeStubAssembler(state_).FailAssert("Torque assert 'sum == 7' failed", "test/torque/test-torque.tq", 412);
  }

  if (block55.is_used()) {
    TNode<Smi> tmp198;
    TNode<Smi> tmp199;
    ca_.Bind(&block55, &tmp198, &tmp199);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 414);
    TNode<Smi> tmp200;
    USE(tmp200);
    tmp200 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 415);
    TNode<Smi> tmp201;
    USE(tmp201);
    tmp201 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 0);
    ca_.Goto(&block59, tmp200, tmp199, tmp201);
  }

  if (block59.is_used()) {
    TNode<Smi> tmp202;
    TNode<Smi> tmp203;
    TNode<Smi> tmp204;
    ca_.Bind(&block59, &tmp202, &tmp203, &tmp204);
    ca_.Goto(&block57, tmp202, tmp203, tmp204);
  }

  if (block57.is_used()) {
    TNode<Smi> tmp205;
    TNode<Smi> tmp206;
    TNode<Smi> tmp207;
    ca_.Bind(&block57, &tmp205, &tmp206, &tmp207);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 416);
    TNode<Smi> tmp208;
    USE(tmp208);
    tmp208 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 3);
    TNode<BoolT> tmp209;
    USE(tmp209);
    tmp209 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{tmp207}, TNode<Smi>{tmp208});
    ca_.Branch(tmp209, &block61, &block62, tmp205, tmp206, tmp207);
  }

  if (block61.is_used()) {
    TNode<Smi> tmp210;
    TNode<Smi> tmp211;
    TNode<Smi> tmp212;
    ca_.Bind(&block61, &tmp210, &tmp211, &tmp212);
    ca_.Goto(&block60, tmp210, tmp211, tmp212);
  }

  if (block62.is_used()) {
    TNode<Smi> tmp213;
    TNode<Smi> tmp214;
    TNode<Smi> tmp215;
    ca_.Bind(&block62, &tmp213, &tmp214, &tmp215);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 417);
    TNode<Smi> tmp216;
    USE(tmp216);
    tmp216 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 5);
    TNode<BoolT> tmp217;
    USE(tmp217);
    tmp217 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{tmp215}, TNode<Smi>{tmp216});
    ca_.Branch(tmp217, &block63, &block64, tmp213, tmp214, tmp215);
  }

  if (block63.is_used()) {
    TNode<Smi> tmp218;
    TNode<Smi> tmp219;
    TNode<Smi> tmp220;
    ca_.Bind(&block63, &tmp218, &tmp219, &tmp220);
    ca_.Goto(&block58, tmp218, tmp219, tmp220);
  }

  if (block64.is_used()) {
    TNode<Smi> tmp221;
    TNode<Smi> tmp222;
    TNode<Smi> tmp223;
    ca_.Bind(&block64, &tmp221, &tmp222, &tmp223);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 418);
    TNode<Smi> tmp224;
    USE(tmp224);
    tmp224 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{tmp221}, TNode<Smi>{tmp223});
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 415);
    ca_.Goto(&block60, tmp224, tmp222, tmp223);
  }

  if (block60.is_used()) {
    TNode<Smi> tmp225;
    TNode<Smi> tmp226;
    TNode<Smi> tmp227;
    ca_.Bind(&block60, &tmp225, &tmp226, &tmp227);
    TNode<Smi> tmp228;
    USE(tmp228);
    tmp228 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 1);
    TNode<Smi> tmp229;
    USE(tmp229);
    tmp229 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{tmp227}, TNode<Smi>{tmp228});
    ca_.Goto(&block59, tmp225, tmp226, tmp229);
  }

  if (block58.is_used()) {
    TNode<Smi> tmp230;
    TNode<Smi> tmp231;
    TNode<Smi> tmp232;
    ca_.Bind(&block58, &tmp230, &tmp231, &tmp232);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 420);
    TNode<Smi> tmp233;
    USE(tmp233);
    tmp233 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 7);
    TNode<BoolT> tmp234;
    USE(tmp234);
    tmp234 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{tmp230}, TNode<Smi>{tmp233});
    ca_.Branch(tmp234, &block65, &block66, tmp230, tmp231);
  }

  if (block66.is_used()) {
    TNode<Smi> tmp235;
    TNode<Smi> tmp236;
    ca_.Bind(&block66, &tmp235, &tmp236);
    CodeStubAssembler(state_).FailAssert("Torque assert 'sum == 7' failed", "test/torque/test-torque.tq", 420);
  }

  if (block65.is_used()) {
    TNode<Smi> tmp237;
    TNode<Smi> tmp238;
    ca_.Bind(&block65, &tmp237, &tmp238);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 422);
    TNode<Smi> tmp239;
    USE(tmp239);
    tmp239 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 423);
    TNode<Smi> tmp240;
    USE(tmp240);
    tmp240 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 424);
    ca_.Goto(&block69, tmp239, tmp240);
  }

  if (block69.is_used()) {
    TNode<Smi> tmp241;
    TNode<Smi> tmp242;
    ca_.Bind(&block69, &tmp241, &tmp242);
    ca_.Goto(&block67, tmp241, tmp242);
  }

  if (block67.is_used()) {
    TNode<Smi> tmp243;
    TNode<Smi> tmp244;
    ca_.Bind(&block67, &tmp243, &tmp244);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 425);
    TNode<Smi> tmp245;
    USE(tmp245);
    tmp245 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 3);
    TNode<BoolT> tmp246;
    USE(tmp246);
    tmp246 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{tmp244}, TNode<Smi>{tmp245});
    ca_.Branch(tmp246, &block70, &block71, tmp243, tmp244);
  }

  if (block70.is_used()) {
    TNode<Smi> tmp247;
    TNode<Smi> tmp248;
    ca_.Bind(&block70, &tmp247, &tmp248);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 426);
    TNode<Smi> tmp249;
    USE(tmp249);
    tmp249 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 1);
    TNode<Smi> tmp250;
    USE(tmp250);
    tmp250 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{tmp248}, TNode<Smi>{tmp249});
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 427);
    ca_.Goto(&block69, tmp247, tmp250);
  }

  if (block71.is_used()) {
    TNode<Smi> tmp251;
    TNode<Smi> tmp252;
    ca_.Bind(&block71, &tmp251, &tmp252);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 430);
    TNode<Smi> tmp253;
    USE(tmp253);
    tmp253 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 5);
    TNode<BoolT> tmp254;
    USE(tmp254);
    tmp254 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{tmp252}, TNode<Smi>{tmp253});
    ca_.Branch(tmp254, &block72, &block73, tmp251, tmp252);
  }

  if (block72.is_used()) {
    TNode<Smi> tmp255;
    TNode<Smi> tmp256;
    ca_.Bind(&block72, &tmp255, &tmp256);
    ca_.Goto(&block68, tmp255, tmp256);
  }

  if (block73.is_used()) {
    TNode<Smi> tmp257;
    TNode<Smi> tmp258;
    ca_.Bind(&block73, &tmp257, &tmp258);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 431);
    TNode<Smi> tmp259;
    USE(tmp259);
    tmp259 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{tmp257}, TNode<Smi>{tmp258});
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 432);
    TNode<Smi> tmp260;
    USE(tmp260);
    tmp260 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 1);
    TNode<Smi> tmp261;
    USE(tmp261);
    tmp261 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{tmp258}, TNode<Smi>{tmp260});
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 424);
    ca_.Goto(&block69, tmp259, tmp261);
  }

  if (block68.is_used()) {
    TNode<Smi> tmp262;
    TNode<Smi> tmp263;
    ca_.Bind(&block68, &tmp262, &tmp263);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 434);
    TNode<Smi> tmp264;
    USE(tmp264);
    tmp264 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 7);
    TNode<BoolT> tmp265;
    USE(tmp265);
    tmp265 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{tmp262}, TNode<Smi>{tmp264});
    ca_.Branch(tmp265, &block74, &block75, tmp262, tmp263);
  }

  if (block75.is_used()) {
    TNode<Smi> tmp266;
    TNode<Smi> tmp267;
    ca_.Bind(&block75, &tmp266, &tmp267);
    CodeStubAssembler(state_).FailAssert("Torque assert 'sum == 7' failed", "test/torque/test-torque.tq", 434);
  }

  if (block74.is_used()) {
    TNode<Smi> tmp268;
    TNode<Smi> tmp269;
    ca_.Bind(&block74, &tmp268, &tmp269);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 436);
    TNode<Smi> tmp270;
    USE(tmp270);
    tmp270 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 438);
    ca_.Goto(&block80, tmp268, tmp270);
  }

  if (block80.is_used()) {
    TNode<Smi> tmp271;
    TNode<Smi> tmp272;
    ca_.Bind(&block80, &tmp271, &tmp272);
    ca_.Goto(&block78, tmp271, tmp272);
  }

  if (block78.is_used()) {
    TNode<Smi> tmp273;
    TNode<Smi> tmp274;
    ca_.Bind(&block78, &tmp273, &tmp274);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 439);
    TNode<Smi> tmp275;
    USE(tmp275);
    tmp275 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 1);
    TNode<Smi> tmp276;
    USE(tmp276);
    tmp276 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{tmp274}, TNode<Smi>{tmp275});
    TNode<Smi> tmp277;
    USE(tmp277);
    tmp277 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 10);
    TNode<BoolT> tmp278;
    USE(tmp278);
    tmp278 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{tmp276}, TNode<Smi>{tmp277});
    ca_.Branch(tmp278, &block81, &block82, tmp273, tmp276);
  }

  if (block81.is_used()) {
    TNode<Smi> tmp279;
    TNode<Smi> tmp280;
    ca_.Bind(&block81, &tmp279, &tmp280);
    ca_.Goto(&block77, tmp279, tmp280);
  }

  if (block82.is_used()) {
    TNode<Smi> tmp281;
    TNode<Smi> tmp282;
    ca_.Bind(&block82, &tmp281, &tmp282);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 438);
    ca_.Goto(&block80, tmp281, tmp282);
  }

  if (block79.is_used()) {
    TNode<Smi> tmp283;
    TNode<Smi> tmp284;
    ca_.Bind(&block79, &tmp283, &tmp284);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 442);
    ca_.Goto(&block76, tmp283, tmp284);
  }

  if (block77.is_used()) {
    TNode<Smi> tmp285;
    TNode<Smi> tmp286;
    ca_.Bind(&block77, &tmp285, &tmp286);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 443);
    TNode<Smi> tmp287;
    USE(tmp287);
    tmp287 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 10);
    TNode<BoolT> tmp288;
    USE(tmp288);
    tmp288 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{tmp286}, TNode<Smi>{tmp287});
    ca_.Branch(tmp288, &block83, &block84, tmp285, tmp286);
  }

  if (block84.is_used()) {
    TNode<Smi> tmp289;
    TNode<Smi> tmp290;
    ca_.Bind(&block84, &tmp289, &tmp290);
    CodeStubAssembler(state_).FailAssert("Torque assert 'j == 10' failed", "test/torque/test-torque.tq", 443);
  }

  if (block83.is_used()) {
    TNode<Smi> tmp291;
    TNode<Smi> tmp292;
    ca_.Bind(&block83, &tmp291, &tmp292);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 437);
    ca_.Goto(&block76, tmp291, tmp292);
  }

  if (block76.is_used()) {
    TNode<Smi> tmp293;
    TNode<Smi> tmp294;
    ca_.Bind(&block76, &tmp293, &tmp294);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 447);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 448);
    TNode<Smi> tmp295;
    USE(tmp295);
    tmp295 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 0);
    ca_.Goto(&block87, tmp293, tmp294, ca_.Uninitialized<Smi>(), tmp295);
  }

  if (block87.is_used()) {
    TNode<Smi> tmp296;
    TNode<Smi> tmp297;
    TNode<Smi> tmp298;
    TNode<Smi> tmp299;
    ca_.Bind(&block87, &tmp296, &tmp297, &tmp298, &tmp299);
    TNode<Smi> tmp300;
    USE(tmp300);
    tmp300 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 10);
    TNode<BoolT> tmp301;
    USE(tmp301);
    tmp301 = CodeStubAssembler(state_).SmiLessThan(TNode<Smi>{tmp299}, TNode<Smi>{tmp300});
    ca_.Branch(tmp301, &block85, &block86, tmp296, tmp297, tmp298, tmp299);
  }

  if (block85.is_used()) {
    TNode<Smi> tmp302;
    TNode<Smi> tmp303;
    TNode<Smi> tmp304;
    TNode<Smi> tmp305;
    ca_.Bind(&block85, &tmp302, &tmp303, &tmp304, &tmp305);
    ca_.Goto(&block88, tmp302, tmp303, tmp304, tmp305);
  }

  if (block88.is_used()) {
    TNode<Smi> tmp306;
    TNode<Smi> tmp307;
    TNode<Smi> tmp308;
    TNode<Smi> tmp309;
    ca_.Bind(&block88, &tmp306, &tmp307, &tmp308, &tmp309);
    TNode<Smi> tmp310;
    USE(tmp310);
    tmp310 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 1);
    TNode<Smi> tmp311;
    USE(tmp311);
    tmp311 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{tmp309}, TNode<Smi>{tmp310});
    ca_.Goto(&block87, tmp306, tmp307, tmp308, tmp311);
  }

  if (block86.is_used()) {
    TNode<Smi> tmp312;
    TNode<Smi> tmp313;
    TNode<Smi> tmp314;
    TNode<Smi> tmp315;
    ca_.Bind(&block86, &tmp312, &tmp313, &tmp314, &tmp315);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 353);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 352);
    ca_.Goto(&block1);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(&block89);
  }

    ca_.Bind(&block89);
}

void TestSubtyping_432(compiler::CodeAssemblerState* state_, TNode<Smi> p_x) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_x);

  if (block0.is_used()) {
    TNode<Smi> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 454);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 453);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 452);
    ca_.Goto(&block1, tmp0);
  }

  if (block1.is_used()) {
    TNode<Smi> tmp1;
    ca_.Bind(&block1, &tmp1);
    ca_.Goto(&block2, tmp1);
  }

    TNode<Smi> tmp2;
    ca_.Bind(&block2, &tmp2);
}

TNode<Int32T> TypeswitchExample_433(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_x) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Int32T, Object, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Int32T, Object, Object, FixedArray> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Int32T, Object> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Int32T, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Int32T, Object, Object> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Int32T, Object, Object, Smi> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Int32T, Object> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Int32T, Object, HeapObject> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Int32T, Object, HeapObject, FixedArray> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Int32T, Object> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Int32T, Object> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Int32T, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Int32T> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Int32T> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_x);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 471);
    TNode<Int32T> tmp2;
    USE(tmp2);
    tmp2 = FromConstexpr7ATint3217ATconstexpr_int31_148(state_, 0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 472);
    TNode<Object> tmp3;
    USE(tmp3);
    tmp3 = IncrementIfSmi32UT5ATSmi10FixedArray10HeapNumber_1506(state_, TNode<Object>{tmp1});
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 473);
    TNode<FixedArray> tmp4;
    USE(tmp4);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp4 = Cast10FixedArray_1462(state_, TNode<Context>{tmp0}, TNode<Object>{tmp3}, &label0);
    ca_.Goto(&block4, tmp0, tmp1, tmp2, tmp3, tmp3, tmp4);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block5, tmp0, tmp1, tmp2, tmp3, tmp3);
    }
  }

  if (block5.is_used()) {
    TNode<Context> tmp5;
    TNode<Object> tmp6;
    TNode<Int32T> tmp7;
    TNode<Object> tmp8;
    TNode<Object> tmp9;
    ca_.Bind(&block5, &tmp5, &tmp6, &tmp7, &tmp8, &tmp9);
    ca_.Goto(&block3, tmp5, tmp6, tmp7, tmp8);
  }

  if (block4.is_used()) {
    TNode<Context> tmp10;
    TNode<Object> tmp11;
    TNode<Int32T> tmp12;
    TNode<Object> tmp13;
    TNode<Object> tmp14;
    TNode<FixedArray> tmp15;
    ca_.Bind(&block4, &tmp10, &tmp11, &tmp12, &tmp13, &tmp14, &tmp15);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 474);
    TNode<Int32T> tmp16;
    USE(tmp16);
    tmp16 = FromConstexpr7ATint3217ATconstexpr_int31_148(state_, 1);
    TNode<Int32T> tmp17;
    USE(tmp17);
    tmp17 = CodeStubAssembler(state_).Int32Add(TNode<Int32T>{tmp12}, TNode<Int32T>{tmp16});
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 473);
    ca_.Goto(&block2, tmp10, tmp11, tmp17, tmp13);
  }

  if (block3.is_used()) {
    TNode<Context> tmp18;
    TNode<Object> tmp19;
    TNode<Int32T> tmp20;
    TNode<Object> tmp21;
    ca_.Bind(&block3, &tmp18, &tmp19, &tmp20, &tmp21);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 476);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 477);
    TNode<Int32T> tmp22;
    USE(tmp22);
    tmp22 = FromConstexpr7ATint3217ATconstexpr_int31_148(state_, 2);
    TNode<Int32T> tmp23;
    USE(tmp23);
    tmp23 = CodeStubAssembler(state_).Int32Add(TNode<Int32T>{tmp20}, TNode<Int32T>{tmp22});
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 473);
    ca_.Goto(&block2, tmp18, tmp19, tmp23, tmp21);
  }

  if (block2.is_used()) {
    TNode<Context> tmp24;
    TNode<Object> tmp25;
    TNode<Int32T> tmp26;
    TNode<Object> tmp27;
    ca_.Bind(&block2, &tmp24, &tmp25, &tmp26, &tmp27);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 472);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 481);
    TNode<Int32T> tmp28;
    USE(tmp28);
    tmp28 = FromConstexpr7ATint3217ATconstexpr_int31_148(state_, 10);
    TNode<Int32T> tmp29;
    USE(tmp29);
    tmp29 = CodeStubAssembler(state_).Int32Mul(TNode<Int32T>{tmp26}, TNode<Int32T>{tmp28});
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 483);
    TNode<Object> tmp30;
    USE(tmp30);
    tmp30 = IncrementIfSmi32UT5ATSmi10FixedArray10HeapNumber_1506(state_, TNode<Object>{tmp25});
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 484);
    TNode<Smi> tmp31;
    USE(tmp31);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp31 = Cast5ATSmi_83(state_, TNode<Object>{tmp30}, &label0);
    ca_.Goto(&block8, tmp24, tmp25, tmp29, tmp30, tmp30, tmp31);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block9, tmp24, tmp25, tmp29, tmp30, tmp30);
    }
  }

  if (block9.is_used()) {
    TNode<Context> tmp32;
    TNode<Object> tmp33;
    TNode<Int32T> tmp34;
    TNode<Object> tmp35;
    TNode<Object> tmp36;
    ca_.Bind(&block9, &tmp32, &tmp33, &tmp34, &tmp35, &tmp36);
    ca_.Goto(&block7, tmp32, tmp33, tmp34, tmp35);
  }

  if (block8.is_used()) {
    TNode<Context> tmp37;
    TNode<Object> tmp38;
    TNode<Int32T> tmp39;
    TNode<Object> tmp40;
    TNode<Object> tmp41;
    TNode<Smi> tmp42;
    ca_.Bind(&block8, &tmp37, &tmp38, &tmp39, &tmp40, &tmp41, &tmp42);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 485);
    TNode<Int32T> tmp43;
    USE(tmp43);
    tmp43 = Convert7ATint325ATSmi_194(state_, TNode<Smi>{tmp42});
    TNode<Int32T> tmp44;
    USE(tmp44);
    tmp44 = CodeStubAssembler(state_).Int32Add(TNode<Int32T>{tmp39}, TNode<Int32T>{tmp43});
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 484);
    ca_.Goto(&block6, tmp37, tmp38, tmp44, tmp40);
  }

  if (block7.is_used()) {
    TNode<Context> tmp45;
    TNode<Object> tmp46;
    TNode<Int32T> tmp47;
    TNode<Object> tmp48;
    ca_.Bind(&block7, &tmp45, &tmp46, &tmp47, &tmp48);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 487);
    TNode<FixedArray> tmp49;
    USE(tmp49);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp49 = Cast10FixedArray_103(state_, TNode<HeapObject>{ca_.UncheckedCast<HeapObject>(tmp48)}, &label0);
    ca_.Goto(&block12, tmp45, tmp46, tmp47, tmp48, ca_.UncheckedCast<HeapObject>(tmp48), tmp49);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block13, tmp45, tmp46, tmp47, tmp48, ca_.UncheckedCast<HeapObject>(tmp48));
    }
  }

  if (block13.is_used()) {
    TNode<Context> tmp50;
    TNode<Object> tmp51;
    TNode<Int32T> tmp52;
    TNode<Object> tmp53;
    TNode<HeapObject> tmp54;
    ca_.Bind(&block13, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54);
    ca_.Goto(&block11, tmp50, tmp51, tmp52, tmp53);
  }

  if (block12.is_used()) {
    TNode<Context> tmp55;
    TNode<Object> tmp56;
    TNode<Int32T> tmp57;
    TNode<Object> tmp58;
    TNode<HeapObject> tmp59;
    TNode<FixedArray> tmp60;
    ca_.Bind(&block12, &tmp55, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 488);
    TNode<IntPtrT> tmp61 = ca_.IntPtrConstant(FixedArrayBase::kLengthOffset);
    USE(tmp61);
    TNode<Smi>tmp62 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp60, tmp61});
    TNode<Int32T> tmp63;
    USE(tmp63);
    tmp63 = Convert7ATint325ATSmi_194(state_, TNode<Smi>{tmp62});
    TNode<Int32T> tmp64;
    USE(tmp64);
    tmp64 = CodeStubAssembler(state_).Int32Add(TNode<Int32T>{tmp57}, TNode<Int32T>{tmp63});
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 487);
    ca_.Goto(&block10, tmp55, tmp56, tmp64, tmp58);
  }

  if (block11.is_used()) {
    TNode<Context> tmp65;
    TNode<Object> tmp66;
    TNode<Int32T> tmp67;
    TNode<Object> tmp68;
    ca_.Bind(&block11, &tmp65, &tmp66, &tmp67, &tmp68);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 490);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 491);
    TNode<Int32T> tmp69;
    USE(tmp69);
    tmp69 = FromConstexpr7ATint3217ATconstexpr_int31_148(state_, 7);
    TNode<Int32T> tmp70;
    USE(tmp70);
    tmp70 = CodeStubAssembler(state_).Int32Add(TNode<Int32T>{tmp67}, TNode<Int32T>{tmp69});
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 487);
    ca_.Goto(&block10, tmp65, tmp66, tmp70, tmp68);
  }

  if (block10.is_used()) {
    TNode<Context> tmp71;
    TNode<Object> tmp72;
    TNode<Int32T> tmp73;
    TNode<Object> tmp74;
    ca_.Bind(&block10, &tmp71, &tmp72, &tmp73, &tmp74);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 484);
    ca_.Goto(&block6, tmp71, tmp72, tmp73, tmp74);
  }

  if (block6.is_used()) {
    TNode<Context> tmp75;
    TNode<Object> tmp76;
    TNode<Int32T> tmp77;
    TNode<Object> tmp78;
    ca_.Bind(&block6, &tmp75, &tmp76, &tmp77, &tmp78);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 483);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 495);
    ca_.Goto(&block1, tmp75, tmp76, tmp77);
  }

  if (block1.is_used()) {
    TNode<Context> tmp79;
    TNode<Object> tmp80;
    TNode<Int32T> tmp81;
    ca_.Bind(&block1, &tmp79, &tmp80, &tmp81);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 469);
    ca_.Goto(&block14, tmp79, tmp80, tmp81);
  }

    TNode<Context> tmp82;
    TNode<Object> tmp83;
    TNode<Int32T> tmp84;
    ca_.Bind(&block14, &tmp82, &tmp83, &tmp84);
  return TNode<Int32T>{tmp84};
}

void TestTypeswitch_434(compiler::CodeAssemblerState* state_, TNode<Context> p_context) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context> block3(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray> block5(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray> block7(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 500);
    TNode<Smi> tmp1;
    USE(tmp1);
    tmp1 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 5);
    TNode<Int32T> tmp2;
    USE(tmp2);
    tmp2 = TypeswitchExample_433(state_, TNode<Context>{tmp0}, TNode<Object>{tmp1});
    TNode<Int32T> tmp3;
    USE(tmp3);
    tmp3 = FromConstexpr7ATint3217ATconstexpr_int31_148(state_, 26);
    TNode<BoolT> tmp4;
    USE(tmp4);
    tmp4 = CodeStubAssembler(state_).Word32Equal(TNode<Int32T>{tmp2}, TNode<Int32T>{tmp3});
    ca_.Branch(tmp4, &block2, &block3, tmp0);
  }

  if (block3.is_used()) {
    TNode<Context> tmp5;
    ca_.Bind(&block3, &tmp5);
    CodeStubAssembler(state_).FailAssert("Torque assert 'TypeswitchExample(FromConstexpr<Smi>(5)) == 26' failed", "test/torque/test-torque.tq", 500);
  }

  if (block2.is_used()) {
    TNode<Context> tmp6;
    ca_.Bind(&block2, &tmp6);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 501);
    TNode<IntPtrT> tmp7;
    USE(tmp7);
    tmp7 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 3);
    TNode<FixedArray> tmp8;
    USE(tmp8);
    tmp8 = CodeStubAssembler(state_).AllocateZeroedFixedArray(TNode<IntPtrT>{tmp7});
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 502);
    TNode<Int32T> tmp9;
    USE(tmp9);
    tmp9 = TypeswitchExample_433(state_, TNode<Context>{tmp6}, TNode<Object>{tmp8});
    TNode<Int32T> tmp10;
    USE(tmp10);
    tmp10 = FromConstexpr7ATint3217ATconstexpr_int31_148(state_, 13);
    TNode<BoolT> tmp11;
    USE(tmp11);
    tmp11 = CodeStubAssembler(state_).Word32Equal(TNode<Int32T>{tmp9}, TNode<Int32T>{tmp10});
    ca_.Branch(tmp11, &block4, &block5, tmp6, tmp8);
  }

  if (block5.is_used()) {
    TNode<Context> tmp12;
    TNode<FixedArray> tmp13;
    ca_.Bind(&block5, &tmp12, &tmp13);
    CodeStubAssembler(state_).FailAssert("Torque assert 'TypeswitchExample(a) == 13' failed", "test/torque/test-torque.tq", 502);
  }

  if (block4.is_used()) {
    TNode<Context> tmp14;
    TNode<FixedArray> tmp15;
    ca_.Bind(&block4, &tmp14, &tmp15);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 503);
    TNode<Number> tmp16;
    USE(tmp16);
    tmp16 = FromConstexpr20UT5ATSmi10HeapNumber19ATconstexpr_float64_159(state_, 0.5);
    TNode<Int32T> tmp17;
    USE(tmp17);
    tmp17 = TypeswitchExample_433(state_, TNode<Context>{tmp14}, TNode<Object>{tmp16});
    TNode<Int32T> tmp18;
    USE(tmp18);
    tmp18 = FromConstexpr7ATint3217ATconstexpr_int31_148(state_, 27);
    TNode<BoolT> tmp19;
    USE(tmp19);
    tmp19 = CodeStubAssembler(state_).Word32Equal(TNode<Int32T>{tmp17}, TNode<Int32T>{tmp18});
    ca_.Branch(tmp19, &block6, &block7, tmp14, tmp15);
  }

  if (block7.is_used()) {
    TNode<Context> tmp20;
    TNode<FixedArray> tmp21;
    ca_.Bind(&block7, &tmp20, &tmp21);
    CodeStubAssembler(state_).FailAssert("Torque assert 'TypeswitchExample(FromConstexpr<Number>(0.5)) == 27' failed", "test/torque/test-torque.tq", 503);
  }

  if (block6.is_used()) {
    TNode<Context> tmp22;
    TNode<FixedArray> tmp23;
    ca_.Bind(&block6, &tmp22, &tmp23);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 499);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 498);
    ca_.Goto(&block1, tmp22);
  }

  if (block1.is_used()) {
    TNode<Context> tmp24;
    ca_.Bind(&block1, &tmp24);
    ca_.Goto(&block8, tmp24);
  }

    TNode<Context> tmp25;
    ca_.Bind(&block8, &tmp25);
}

void TestTypeswitchAsanLsanFailure_435(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_obj) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Smi> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, HeapObject> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, HeapObject, JSTypedArray> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, HeapObject> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, HeapObject, JSReceiver> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_obj);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 508);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 509);
    TNode<Smi> tmp2;
    USE(tmp2);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp2 = Cast5ATSmi_83(state_, TNode<Object>{tmp1}, &label0);
    ca_.Goto(&block4, tmp0, tmp1, tmp1, tmp1, tmp2);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block5, tmp0, tmp1, tmp1, tmp1);
    }
  }

  if (block5.is_used()) {
    TNode<Context> tmp3;
    TNode<Object> tmp4;
    TNode<Object> tmp5;
    TNode<Object> tmp6;
    ca_.Bind(&block5, &tmp3, &tmp4, &tmp5, &tmp6);
    ca_.Goto(&block3, tmp3, tmp4, tmp5);
  }

  if (block4.is_used()) {
    TNode<Context> tmp7;
    TNode<Object> tmp8;
    TNode<Object> tmp9;
    TNode<Object> tmp10;
    TNode<Smi> tmp11;
    ca_.Bind(&block4, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11);
    ca_.Goto(&block2, tmp7, tmp8, tmp9);
  }

  if (block3.is_used()) {
    TNode<Context> tmp12;
    TNode<Object> tmp13;
    TNode<Object> tmp14;
    ca_.Bind(&block3, &tmp12, &tmp13, &tmp14);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 511);
    TNode<JSTypedArray> tmp15;
    USE(tmp15);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp15 = Cast12JSTypedArray_109(state_, TNode<HeapObject>{ca_.UncheckedCast<HeapObject>(tmp14)}, &label0);
    ca_.Goto(&block8, tmp12, tmp13, tmp14, ca_.UncheckedCast<HeapObject>(tmp14), tmp15);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block9, tmp12, tmp13, tmp14, ca_.UncheckedCast<HeapObject>(tmp14));
    }
  }

  if (block9.is_used()) {
    TNode<Context> tmp16;
    TNode<Object> tmp17;
    TNode<Object> tmp18;
    TNode<HeapObject> tmp19;
    ca_.Bind(&block9, &tmp16, &tmp17, &tmp18, &tmp19);
    ca_.Goto(&block7, tmp16, tmp17, tmp18);
  }

  if (block8.is_used()) {
    TNode<Context> tmp20;
    TNode<Object> tmp21;
    TNode<Object> tmp22;
    TNode<HeapObject> tmp23;
    TNode<JSTypedArray> tmp24;
    ca_.Bind(&block8, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24);
    ca_.Goto(&block6, tmp20, tmp21, tmp22);
  }

  if (block7.is_used()) {
    TNode<Context> tmp25;
    TNode<Object> tmp26;
    TNode<Object> tmp27;
    ca_.Bind(&block7, &tmp25, &tmp26, &tmp27);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 513);
    TNode<JSReceiver> tmp28;
    USE(tmp28);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp28 = Cast10JSReceiver_142(state_, TNode<HeapObject>{ca_.UncheckedCast<HeapObject>(tmp27)}, &label0);
    ca_.Goto(&block12, tmp25, tmp26, tmp27, ca_.UncheckedCast<HeapObject>(tmp27), tmp28);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block13, tmp25, tmp26, tmp27, ca_.UncheckedCast<HeapObject>(tmp27));
    }
  }

  if (block13.is_used()) {
    TNode<Context> tmp29;
    TNode<Object> tmp30;
    TNode<Object> tmp31;
    TNode<HeapObject> tmp32;
    ca_.Bind(&block13, &tmp29, &tmp30, &tmp31, &tmp32);
    ca_.Goto(&block11, tmp29, tmp30, tmp31);
  }

  if (block12.is_used()) {
    TNode<Context> tmp33;
    TNode<Object> tmp34;
    TNode<Object> tmp35;
    TNode<HeapObject> tmp36;
    TNode<JSReceiver> tmp37;
    ca_.Bind(&block12, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37);
    ca_.Goto(&block10, tmp33, tmp34, tmp35);
  }

  if (block11.is_used()) {
    TNode<Context> tmp38;
    TNode<Object> tmp39;
    TNode<Object> tmp40;
    ca_.Bind(&block11, &tmp38, &tmp39, &tmp40);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 515);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 513);
    ca_.Goto(&block10, tmp38, tmp39, tmp40);
  }

  if (block10.is_used()) {
    TNode<Context> tmp41;
    TNode<Object> tmp42;
    TNode<Object> tmp43;
    ca_.Bind(&block10, &tmp41, &tmp42, &tmp43);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 511);
    ca_.Goto(&block6, tmp41, tmp42, tmp43);
  }

  if (block6.is_used()) {
    TNode<Context> tmp44;
    TNode<Object> tmp45;
    TNode<Object> tmp46;
    ca_.Bind(&block6, &tmp44, &tmp45, &tmp46);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 509);
    ca_.Goto(&block2, tmp44, tmp45, tmp46);
  }

  if (block2.is_used()) {
    TNode<Context> tmp47;
    TNode<Object> tmp48;
    TNode<Object> tmp49;
    ca_.Bind(&block2, &tmp47, &tmp48, &tmp49);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 508);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 506);
    ca_.Goto(&block1, tmp47, tmp48);
  }

  if (block1.is_used()) {
    TNode<Context> tmp50;
    TNode<Object> tmp51;
    ca_.Bind(&block1, &tmp50, &tmp51);
    ca_.Goto(&block14, tmp50, tmp51);
  }

    TNode<Context> tmp52;
    TNode<Object> tmp53;
    ca_.Bind(&block14, &tmp52, &tmp53);
}

void TestGenericOverload_436(compiler::CodeAssemblerState* state_, TNode<Context> p_context) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi, Object> block3(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi, Object> block5(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 529);
    TNode<Smi> tmp1;
    USE(tmp1);
    tmp1 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 5);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 530);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 531);
    TNode<Smi> tmp2;
    USE(tmp2);
    tmp2 = ExampleGenericOverload5ATSmi_1507(state_, TNode<Smi>{tmp1});
    TNode<Smi> tmp3;
    USE(tmp3);
    tmp3 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 6);
    TNode<BoolT> tmp4;
    USE(tmp4);
    tmp4 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{tmp2}, TNode<Smi>{tmp3});
    ca_.Branch(tmp4, &block2, &block3, tmp0, tmp1, tmp1);
  }

  if (block3.is_used()) {
    TNode<Context> tmp5;
    TNode<Smi> tmp6;
    TNode<Object> tmp7;
    ca_.Bind(&block3, &tmp5, &tmp6, &tmp7);
    CodeStubAssembler(state_).FailAssert("Torque assert 'ExampleGenericOverload<Smi>(xSmi) == 6' failed", "test/torque/test-torque.tq", 531);
  }

  if (block2.is_used()) {
    TNode<Context> tmp8;
    TNode<Smi> tmp9;
    TNode<Object> tmp10;
    ca_.Bind(&block2, &tmp8, &tmp9, &tmp10);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 532);
    TNode<Object> tmp11;
    USE(tmp11);
    tmp11 = ExampleGenericOverload20UT5ATSmi10HeapObject_1508(state_, TNode<Object>{tmp10});
    TNode<Smi> tmp12;
    USE(tmp12);
    tmp12 = UnsafeCast5ATSmi_1439(state_, TNode<Context>{tmp8}, TNode<Object>{tmp11});
    TNode<Smi> tmp13;
    USE(tmp13);
    tmp13 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 5);
    TNode<BoolT> tmp14;
    USE(tmp14);
    tmp14 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{tmp12}, TNode<Smi>{tmp13});
    ca_.Branch(tmp14, &block4, &block5, tmp8, tmp9, tmp10);
  }

  if (block5.is_used()) {
    TNode<Context> tmp15;
    TNode<Smi> tmp16;
    TNode<Object> tmp17;
    ca_.Bind(&block5, &tmp15, &tmp16, &tmp17);
    CodeStubAssembler(state_).FailAssert("Torque assert 'UnsafeCast<Smi>(ExampleGenericOverload<Object>(xObject)) == 5' failed", "test/torque/test-torque.tq", 532);
  }

  if (block4.is_used()) {
    TNode<Context> tmp18;
    TNode<Smi> tmp19;
    TNode<Object> tmp20;
    ca_.Bind(&block4, &tmp18, &tmp19, &tmp20);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 528);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 527);
    ca_.Goto(&block1, tmp18);
  }

  if (block1.is_used()) {
    TNode<Context> tmp21;
    ca_.Bind(&block1, &tmp21);
    ca_.Goto(&block6, tmp21);
  }

    TNode<Context> tmp22;
    ca_.Bind(&block6, &tmp22);
}

void TestEquality_437(compiler::CodeAssemblerState* state_, TNode<Context> p_context) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, BoolT> block3(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, BoolT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, BoolT, BoolT> block5(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, BoolT, BoolT> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 538);
    TNode<Float64T> tmp1;
    USE(tmp1);
    tmp1 = FromConstexpr9ATfloat6419ATconstexpr_float64_166(state_, 0.5);
    TNode<HeapNumber> tmp2;
    USE(tmp2);
    tmp2 = CodeStubAssembler(state_).AllocateHeapNumberWithValue(TNode<Float64T>{tmp1});
    TNode<Float64T> tmp3;
    USE(tmp3);
    tmp3 = FromConstexpr9ATfloat6419ATconstexpr_float64_166(state_, 0.5);
    TNode<HeapNumber> tmp4;
    USE(tmp4);
    tmp4 = CodeStubAssembler(state_).AllocateHeapNumberWithValue(TNode<Float64T>{tmp3});
    TNode<BoolT> tmp5;
    USE(tmp5);
    tmp5 = IsNumberNotEqual_74(state_, TNode<Number>{tmp2}, TNode<Number>{tmp4});
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 537);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 539);
    TNode<BoolT> tmp6;
    USE(tmp6);
    tmp6 = CodeStubAssembler(state_).Word32BinaryNot(TNode<BoolT>{tmp5});
    ca_.Branch(tmp6, &block2, &block3, tmp0, tmp5);
  }

  if (block3.is_used()) {
    TNode<Context> tmp7;
    TNode<BoolT> tmp8;
    ca_.Bind(&block3, &tmp7, &tmp8);
    CodeStubAssembler(state_).FailAssert("Torque assert '!notEqual' failed", "test/torque/test-torque.tq", 539);
  }

  if (block2.is_used()) {
    TNode<Context> tmp9;
    TNode<BoolT> tmp10;
    ca_.Bind(&block2, &tmp9, &tmp10);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 541);
    TNode<Float64T> tmp11;
    USE(tmp11);
    tmp11 = FromConstexpr9ATfloat6419ATconstexpr_float64_166(state_, 0.5);
    TNode<HeapNumber> tmp12;
    USE(tmp12);
    tmp12 = CodeStubAssembler(state_).AllocateHeapNumberWithValue(TNode<Float64T>{tmp11});
    TNode<Float64T> tmp13;
    USE(tmp13);
    tmp13 = FromConstexpr9ATfloat6419ATconstexpr_float64_166(state_, 0.5);
    TNode<HeapNumber> tmp14;
    USE(tmp14);
    tmp14 = CodeStubAssembler(state_).AllocateHeapNumberWithValue(TNode<Float64T>{tmp13});
    TNode<BoolT> tmp15;
    USE(tmp15);
    tmp15 = IsNumberEqual_73(state_, TNode<Number>{tmp12}, TNode<Number>{tmp14});
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 540);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 542);
    ca_.Branch(tmp15, &block4, &block5, tmp9, tmp10, tmp15);
  }

  if (block5.is_used()) {
    TNode<Context> tmp16;
    TNode<BoolT> tmp17;
    TNode<BoolT> tmp18;
    ca_.Bind(&block5, &tmp16, &tmp17, &tmp18);
    CodeStubAssembler(state_).FailAssert("Torque assert 'equal' failed", "test/torque/test-torque.tq", 542);
  }

  if (block4.is_used()) {
    TNode<Context> tmp19;
    TNode<BoolT> tmp20;
    TNode<BoolT> tmp21;
    ca_.Bind(&block4, &tmp19, &tmp20, &tmp21);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 536);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 535);
    ca_.Goto(&block1, tmp19);
  }

  if (block1.is_used()) {
    TNode<Context> tmp22;
    ca_.Bind(&block1, &tmp22);
    ca_.Goto(&block6, tmp22);
  }

    TNode<Context> tmp23;
    ca_.Bind(&block6, &tmp23);
}

TNode<BoolT> TestOrAnd_438(compiler::CodeAssemblerState* state_, TNode<BoolT> p_x, TNode<BoolT> p_y, TNode<BoolT> p_z) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<BoolT, BoolT, BoolT> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, BoolT, BoolT, BoolT> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, BoolT, BoolT, BoolT> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, BoolT, BoolT, BoolT, BoolT> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, BoolT, BoolT, BoolT, BoolT> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, BoolT, BoolT, BoolT, BoolT, BoolT> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, BoolT, BoolT, BoolT, BoolT> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, BoolT, BoolT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, BoolT, BoolT> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, BoolT, BoolT> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, BoolT, BoolT, BoolT> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, BoolT, BoolT, BoolT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, BoolT, BoolT, BoolT> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_x, p_y, p_z);

  if (block0.is_used()) {
    TNode<BoolT> tmp0;
    TNode<BoolT> tmp1;
    TNode<BoolT> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 547);
    ca_.Branch(tmp0, &block6, &block7, tmp0, tmp1, tmp2, tmp0);
  }

  if (block6.is_used()) {
    TNode<BoolT> tmp3;
    TNode<BoolT> tmp4;
    TNode<BoolT> tmp5;
    TNode<BoolT> tmp6;
    ca_.Bind(&block6, &tmp3, &tmp4, &tmp5, &tmp6);
    TNode<BoolT> tmp7;
    USE(tmp7);
    tmp7 = FromConstexpr6ATbool16ATconstexpr_bool_167(state_, true);
    ca_.Goto(&block8, tmp3, tmp4, tmp5, tmp6, tmp7);
  }

  if (block7.is_used()) {
    TNode<BoolT> tmp8;
    TNode<BoolT> tmp9;
    TNode<BoolT> tmp10;
    TNode<BoolT> tmp11;
    ca_.Bind(&block7, &tmp8, &tmp9, &tmp10, &tmp11);
    ca_.Branch(tmp9, &block9, &block10, tmp8, tmp9, tmp10, tmp11, tmp9);
  }

  if (block9.is_used()) {
    TNode<BoolT> tmp12;
    TNode<BoolT> tmp13;
    TNode<BoolT> tmp14;
    TNode<BoolT> tmp15;
    TNode<BoolT> tmp16;
    ca_.Bind(&block9, &tmp12, &tmp13, &tmp14, &tmp15, &tmp16);
    ca_.Goto(&block11, tmp12, tmp13, tmp14, tmp15, tmp16, tmp14);
  }

  if (block10.is_used()) {
    TNode<BoolT> tmp17;
    TNode<BoolT> tmp18;
    TNode<BoolT> tmp19;
    TNode<BoolT> tmp20;
    TNode<BoolT> tmp21;
    ca_.Bind(&block10, &tmp17, &tmp18, &tmp19, &tmp20, &tmp21);
    TNode<BoolT> tmp22;
    USE(tmp22);
    tmp22 = FromConstexpr6ATbool16ATconstexpr_bool_167(state_, false);
    ca_.Goto(&block11, tmp17, tmp18, tmp19, tmp20, tmp21, tmp22);
  }

  if (block11.is_used()) {
    TNode<BoolT> tmp23;
    TNode<BoolT> tmp24;
    TNode<BoolT> tmp25;
    TNode<BoolT> tmp26;
    TNode<BoolT> tmp27;
    TNode<BoolT> tmp28;
    ca_.Bind(&block11, &tmp23, &tmp24, &tmp25, &tmp26, &tmp27, &tmp28);
    ca_.Goto(&block8, tmp23, tmp24, tmp25, tmp26, tmp28);
  }

  if (block8.is_used()) {
    TNode<BoolT> tmp29;
    TNode<BoolT> tmp30;
    TNode<BoolT> tmp31;
    TNode<BoolT> tmp32;
    TNode<BoolT> tmp33;
    ca_.Bind(&block8, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33);
    ca_.Branch(tmp33, &block2, &block3, tmp29, tmp30, tmp31);
  }

  if (block2.is_used()) {
    TNode<BoolT> tmp34;
    TNode<BoolT> tmp35;
    TNode<BoolT> tmp36;
    ca_.Bind(&block2, &tmp34, &tmp35, &tmp36);
    ca_.Goto(&block5, tmp34, tmp35, tmp36);
  }

  if (block3.is_used()) {
    TNode<BoolT> tmp37;
    TNode<BoolT> tmp38;
    TNode<BoolT> tmp39;
    ca_.Bind(&block3, &tmp37, &tmp38, &tmp39);
    TNode<BoolT> tmp40;
    USE(tmp40);
    tmp40 = FromConstexpr6ATbool16ATconstexpr_bool_167(state_, false);
    ca_.Goto(&block4, tmp37, tmp38, tmp39, tmp40);
  }

  if (block5.is_used()) {
    TNode<BoolT> tmp41;
    TNode<BoolT> tmp42;
    TNode<BoolT> tmp43;
    ca_.Bind(&block5, &tmp41, &tmp42, &tmp43);
    TNode<BoolT> tmp44;
    USE(tmp44);
    tmp44 = FromConstexpr6ATbool16ATconstexpr_bool_167(state_, true);
    ca_.Goto(&block4, tmp41, tmp42, tmp43, tmp44);
  }

  if (block4.is_used()) {
    TNode<BoolT> tmp45;
    TNode<BoolT> tmp46;
    TNode<BoolT> tmp47;
    TNode<BoolT> tmp48;
    ca_.Bind(&block4, &tmp45, &tmp46, &tmp47, &tmp48);
    ca_.Goto(&block1, tmp45, tmp46, tmp47, tmp48);
  }

  if (block1.is_used()) {
    TNode<BoolT> tmp49;
    TNode<BoolT> tmp50;
    TNode<BoolT> tmp51;
    TNode<BoolT> tmp52;
    ca_.Bind(&block1, &tmp49, &tmp50, &tmp51, &tmp52);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 545);
    ca_.Goto(&block12, tmp49, tmp50, tmp51, tmp52);
  }

    TNode<BoolT> tmp53;
    TNode<BoolT> tmp54;
    TNode<BoolT> tmp55;
    TNode<BoolT> tmp56;
    ca_.Bind(&block12, &tmp53, &tmp54, &tmp55, &tmp56);
  return TNode<BoolT>{tmp56};
}

TNode<BoolT> TestAndOr_439(compiler::CodeAssemblerState* state_, TNode<BoolT> p_x, TNode<BoolT> p_y, TNode<BoolT> p_z) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<BoolT, BoolT, BoolT> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, BoolT, BoolT, BoolT> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, BoolT, BoolT, BoolT> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, BoolT, BoolT, BoolT, BoolT> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, BoolT, BoolT, BoolT> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, BoolT, BoolT, BoolT> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, BoolT, BoolT, BoolT, BoolT> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, BoolT, BoolT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, BoolT, BoolT> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, BoolT, BoolT> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, BoolT, BoolT, BoolT> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, BoolT, BoolT, BoolT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, BoolT, BoolT, BoolT> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_x, p_y, p_z);

  if (block0.is_used()) {
    TNode<BoolT> tmp0;
    TNode<BoolT> tmp1;
    TNode<BoolT> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 552);
    ca_.Branch(tmp0, &block6, &block7, tmp0, tmp1, tmp2, tmp0);
  }

  if (block6.is_used()) {
    TNode<BoolT> tmp3;
    TNode<BoolT> tmp4;
    TNode<BoolT> tmp5;
    TNode<BoolT> tmp6;
    ca_.Bind(&block6, &tmp3, &tmp4, &tmp5, &tmp6);
    ca_.Goto(&block8, tmp3, tmp4, tmp5, tmp6, tmp4);
  }

  if (block7.is_used()) {
    TNode<BoolT> tmp7;
    TNode<BoolT> tmp8;
    TNode<BoolT> tmp9;
    TNode<BoolT> tmp10;
    ca_.Bind(&block7, &tmp7, &tmp8, &tmp9, &tmp10);
    TNode<BoolT> tmp11;
    USE(tmp11);
    tmp11 = FromConstexpr6ATbool16ATconstexpr_bool_167(state_, false);
    ca_.Goto(&block8, tmp7, tmp8, tmp9, tmp10, tmp11);
  }

  if (block8.is_used()) {
    TNode<BoolT> tmp12;
    TNode<BoolT> tmp13;
    TNode<BoolT> tmp14;
    TNode<BoolT> tmp15;
    TNode<BoolT> tmp16;
    ca_.Bind(&block8, &tmp12, &tmp13, &tmp14, &tmp15, &tmp16);
    ca_.Branch(tmp16, &block9, &block10, tmp12, tmp13, tmp14, tmp16);
  }

  if (block9.is_used()) {
    TNode<BoolT> tmp17;
    TNode<BoolT> tmp18;
    TNode<BoolT> tmp19;
    TNode<BoolT> tmp20;
    ca_.Bind(&block9, &tmp17, &tmp18, &tmp19, &tmp20);
    TNode<BoolT> tmp21;
    USE(tmp21);
    tmp21 = FromConstexpr6ATbool16ATconstexpr_bool_167(state_, true);
    ca_.Goto(&block11, tmp17, tmp18, tmp19, tmp20, tmp21);
  }

  if (block10.is_used()) {
    TNode<BoolT> tmp22;
    TNode<BoolT> tmp23;
    TNode<BoolT> tmp24;
    TNode<BoolT> tmp25;
    ca_.Bind(&block10, &tmp22, &tmp23, &tmp24, &tmp25);
    ca_.Goto(&block11, tmp22, tmp23, tmp24, tmp25, tmp24);
  }

  if (block11.is_used()) {
    TNode<BoolT> tmp26;
    TNode<BoolT> tmp27;
    TNode<BoolT> tmp28;
    TNode<BoolT> tmp29;
    TNode<BoolT> tmp30;
    ca_.Bind(&block11, &tmp26, &tmp27, &tmp28, &tmp29, &tmp30);
    ca_.Branch(tmp30, &block2, &block3, tmp26, tmp27, tmp28);
  }

  if (block2.is_used()) {
    TNode<BoolT> tmp31;
    TNode<BoolT> tmp32;
    TNode<BoolT> tmp33;
    ca_.Bind(&block2, &tmp31, &tmp32, &tmp33);
    ca_.Goto(&block5, tmp31, tmp32, tmp33);
  }

  if (block3.is_used()) {
    TNode<BoolT> tmp34;
    TNode<BoolT> tmp35;
    TNode<BoolT> tmp36;
    ca_.Bind(&block3, &tmp34, &tmp35, &tmp36);
    TNode<BoolT> tmp37;
    USE(tmp37);
    tmp37 = FromConstexpr6ATbool16ATconstexpr_bool_167(state_, false);
    ca_.Goto(&block4, tmp34, tmp35, tmp36, tmp37);
  }

  if (block5.is_used()) {
    TNode<BoolT> tmp38;
    TNode<BoolT> tmp39;
    TNode<BoolT> tmp40;
    ca_.Bind(&block5, &tmp38, &tmp39, &tmp40);
    TNode<BoolT> tmp41;
    USE(tmp41);
    tmp41 = FromConstexpr6ATbool16ATconstexpr_bool_167(state_, true);
    ca_.Goto(&block4, tmp38, tmp39, tmp40, tmp41);
  }

  if (block4.is_used()) {
    TNode<BoolT> tmp42;
    TNode<BoolT> tmp43;
    TNode<BoolT> tmp44;
    TNode<BoolT> tmp45;
    ca_.Bind(&block4, &tmp42, &tmp43, &tmp44, &tmp45);
    ca_.Goto(&block1, tmp42, tmp43, tmp44, tmp45);
  }

  if (block1.is_used()) {
    TNode<BoolT> tmp46;
    TNode<BoolT> tmp47;
    TNode<BoolT> tmp48;
    TNode<BoolT> tmp49;
    ca_.Bind(&block1, &tmp46, &tmp47, &tmp48, &tmp49);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 550);
    ca_.Goto(&block12, tmp46, tmp47, tmp48, tmp49);
  }

    TNode<BoolT> tmp50;
    TNode<BoolT> tmp51;
    TNode<BoolT> tmp52;
    TNode<BoolT> tmp53;
    ca_.Bind(&block12, &tmp50, &tmp51, &tmp52, &tmp53);
  return TNode<BoolT>{tmp53};
}

void TestLogicalOperators_440(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block7(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block9(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block11(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block13(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block15(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block17(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block19(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block21(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block23(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block25(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block24(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block27(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block26(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block29(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block28(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block31(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block30(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block33(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block32(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block34(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 557);
    TNode<BoolT> tmp0;
    USE(tmp0);
    tmp0 = FromConstexpr6ATbool16ATconstexpr_bool_167(state_, true);
    TNode<BoolT> tmp1;
    USE(tmp1);
    tmp1 = FromConstexpr6ATbool16ATconstexpr_bool_167(state_, true);
    TNode<BoolT> tmp2;
    USE(tmp2);
    tmp2 = FromConstexpr6ATbool16ATconstexpr_bool_167(state_, true);
    TNode<BoolT> tmp3;
    USE(tmp3);
    tmp3 = TestAndOr_439(state_, TNode<BoolT>{tmp0}, TNode<BoolT>{tmp1}, TNode<BoolT>{tmp2});
    ca_.Branch(tmp3, &block2, &block3);
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    CodeStubAssembler(state_).FailAssert("Torque assert 'TestAndOr(true, true, true)' failed", "test/torque/test-torque.tq", 557);
  }

  if (block2.is_used()) {
    ca_.Bind(&block2);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 558);
    TNode<BoolT> tmp4;
    USE(tmp4);
    tmp4 = FromConstexpr6ATbool16ATconstexpr_bool_167(state_, true);
    TNode<BoolT> tmp5;
    USE(tmp5);
    tmp5 = FromConstexpr6ATbool16ATconstexpr_bool_167(state_, true);
    TNode<BoolT> tmp6;
    USE(tmp6);
    tmp6 = FromConstexpr6ATbool16ATconstexpr_bool_167(state_, false);
    TNode<BoolT> tmp7;
    USE(tmp7);
    tmp7 = TestAndOr_439(state_, TNode<BoolT>{tmp4}, TNode<BoolT>{tmp5}, TNode<BoolT>{tmp6});
    ca_.Branch(tmp7, &block4, &block5);
  }

  if (block5.is_used()) {
    ca_.Bind(&block5);
    CodeStubAssembler(state_).FailAssert("Torque assert 'TestAndOr(true, true, false)' failed", "test/torque/test-torque.tq", 558);
  }

  if (block4.is_used()) {
    ca_.Bind(&block4);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 559);
    TNode<BoolT> tmp8;
    USE(tmp8);
    tmp8 = FromConstexpr6ATbool16ATconstexpr_bool_167(state_, true);
    TNode<BoolT> tmp9;
    USE(tmp9);
    tmp9 = FromConstexpr6ATbool16ATconstexpr_bool_167(state_, false);
    TNode<BoolT> tmp10;
    USE(tmp10);
    tmp10 = FromConstexpr6ATbool16ATconstexpr_bool_167(state_, true);
    TNode<BoolT> tmp11;
    USE(tmp11);
    tmp11 = TestAndOr_439(state_, TNode<BoolT>{tmp8}, TNode<BoolT>{tmp9}, TNode<BoolT>{tmp10});
    ca_.Branch(tmp11, &block6, &block7);
  }

  if (block7.is_used()) {
    ca_.Bind(&block7);
    CodeStubAssembler(state_).FailAssert("Torque assert 'TestAndOr(true, false, true)' failed", "test/torque/test-torque.tq", 559);
  }

  if (block6.is_used()) {
    ca_.Bind(&block6);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 560);
    TNode<BoolT> tmp12;
    USE(tmp12);
    tmp12 = FromConstexpr6ATbool16ATconstexpr_bool_167(state_, true);
    TNode<BoolT> tmp13;
    USE(tmp13);
    tmp13 = FromConstexpr6ATbool16ATconstexpr_bool_167(state_, false);
    TNode<BoolT> tmp14;
    USE(tmp14);
    tmp14 = FromConstexpr6ATbool16ATconstexpr_bool_167(state_, false);
    TNode<BoolT> tmp15;
    USE(tmp15);
    tmp15 = TestAndOr_439(state_, TNode<BoolT>{tmp12}, TNode<BoolT>{tmp13}, TNode<BoolT>{tmp14});
    TNode<BoolT> tmp16;
    USE(tmp16);
    tmp16 = CodeStubAssembler(state_).Word32BinaryNot(TNode<BoolT>{tmp15});
    ca_.Branch(tmp16, &block8, &block9);
  }

  if (block9.is_used()) {
    ca_.Bind(&block9);
    CodeStubAssembler(state_).FailAssert("Torque assert '!TestAndOr(true, false, false)' failed", "test/torque/test-torque.tq", 560);
  }

  if (block8.is_used()) {
    ca_.Bind(&block8);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 561);
    TNode<BoolT> tmp17;
    USE(tmp17);
    tmp17 = FromConstexpr6ATbool16ATconstexpr_bool_167(state_, false);
    TNode<BoolT> tmp18;
    USE(tmp18);
    tmp18 = FromConstexpr6ATbool16ATconstexpr_bool_167(state_, true);
    TNode<BoolT> tmp19;
    USE(tmp19);
    tmp19 = FromConstexpr6ATbool16ATconstexpr_bool_167(state_, true);
    TNode<BoolT> tmp20;
    USE(tmp20);
    tmp20 = TestAndOr_439(state_, TNode<BoolT>{tmp17}, TNode<BoolT>{tmp18}, TNode<BoolT>{tmp19});
    ca_.Branch(tmp20, &block10, &block11);
  }

  if (block11.is_used()) {
    ca_.Bind(&block11);
    CodeStubAssembler(state_).FailAssert("Torque assert 'TestAndOr(false, true, true)' failed", "test/torque/test-torque.tq", 561);
  }

  if (block10.is_used()) {
    ca_.Bind(&block10);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 562);
    TNode<BoolT> tmp21;
    USE(tmp21);
    tmp21 = FromConstexpr6ATbool16ATconstexpr_bool_167(state_, false);
    TNode<BoolT> tmp22;
    USE(tmp22);
    tmp22 = FromConstexpr6ATbool16ATconstexpr_bool_167(state_, true);
    TNode<BoolT> tmp23;
    USE(tmp23);
    tmp23 = FromConstexpr6ATbool16ATconstexpr_bool_167(state_, false);
    TNode<BoolT> tmp24;
    USE(tmp24);
    tmp24 = TestAndOr_439(state_, TNode<BoolT>{tmp21}, TNode<BoolT>{tmp22}, TNode<BoolT>{tmp23});
    TNode<BoolT> tmp25;
    USE(tmp25);
    tmp25 = CodeStubAssembler(state_).Word32BinaryNot(TNode<BoolT>{tmp24});
    ca_.Branch(tmp25, &block12, &block13);
  }

  if (block13.is_used()) {
    ca_.Bind(&block13);
    CodeStubAssembler(state_).FailAssert("Torque assert '!TestAndOr(false, true, false)' failed", "test/torque/test-torque.tq", 562);
  }

  if (block12.is_used()) {
    ca_.Bind(&block12);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 563);
    TNode<BoolT> tmp26;
    USE(tmp26);
    tmp26 = FromConstexpr6ATbool16ATconstexpr_bool_167(state_, false);
    TNode<BoolT> tmp27;
    USE(tmp27);
    tmp27 = FromConstexpr6ATbool16ATconstexpr_bool_167(state_, false);
    TNode<BoolT> tmp28;
    USE(tmp28);
    tmp28 = FromConstexpr6ATbool16ATconstexpr_bool_167(state_, true);
    TNode<BoolT> tmp29;
    USE(tmp29);
    tmp29 = TestAndOr_439(state_, TNode<BoolT>{tmp26}, TNode<BoolT>{tmp27}, TNode<BoolT>{tmp28});
    ca_.Branch(tmp29, &block14, &block15);
  }

  if (block15.is_used()) {
    ca_.Bind(&block15);
    CodeStubAssembler(state_).FailAssert("Torque assert 'TestAndOr(false, false, true)' failed", "test/torque/test-torque.tq", 563);
  }

  if (block14.is_used()) {
    ca_.Bind(&block14);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 564);
    TNode<BoolT> tmp30;
    USE(tmp30);
    tmp30 = FromConstexpr6ATbool16ATconstexpr_bool_167(state_, false);
    TNode<BoolT> tmp31;
    USE(tmp31);
    tmp31 = FromConstexpr6ATbool16ATconstexpr_bool_167(state_, false);
    TNode<BoolT> tmp32;
    USE(tmp32);
    tmp32 = FromConstexpr6ATbool16ATconstexpr_bool_167(state_, false);
    TNode<BoolT> tmp33;
    USE(tmp33);
    tmp33 = TestAndOr_439(state_, TNode<BoolT>{tmp30}, TNode<BoolT>{tmp31}, TNode<BoolT>{tmp32});
    TNode<BoolT> tmp34;
    USE(tmp34);
    tmp34 = CodeStubAssembler(state_).Word32BinaryNot(TNode<BoolT>{tmp33});
    ca_.Branch(tmp34, &block16, &block17);
  }

  if (block17.is_used()) {
    ca_.Bind(&block17);
    CodeStubAssembler(state_).FailAssert("Torque assert '!TestAndOr(false, false, false)' failed", "test/torque/test-torque.tq", 564);
  }

  if (block16.is_used()) {
    ca_.Bind(&block16);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 565);
    TNode<BoolT> tmp35;
    USE(tmp35);
    tmp35 = FromConstexpr6ATbool16ATconstexpr_bool_167(state_, true);
    TNode<BoolT> tmp36;
    USE(tmp36);
    tmp36 = FromConstexpr6ATbool16ATconstexpr_bool_167(state_, true);
    TNode<BoolT> tmp37;
    USE(tmp37);
    tmp37 = FromConstexpr6ATbool16ATconstexpr_bool_167(state_, true);
    TNode<BoolT> tmp38;
    USE(tmp38);
    tmp38 = TestOrAnd_438(state_, TNode<BoolT>{tmp35}, TNode<BoolT>{tmp36}, TNode<BoolT>{tmp37});
    ca_.Branch(tmp38, &block18, &block19);
  }

  if (block19.is_used()) {
    ca_.Bind(&block19);
    CodeStubAssembler(state_).FailAssert("Torque assert 'TestOrAnd(true, true, true)' failed", "test/torque/test-torque.tq", 565);
  }

  if (block18.is_used()) {
    ca_.Bind(&block18);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 566);
    TNode<BoolT> tmp39;
    USE(tmp39);
    tmp39 = FromConstexpr6ATbool16ATconstexpr_bool_167(state_, true);
    TNode<BoolT> tmp40;
    USE(tmp40);
    tmp40 = FromConstexpr6ATbool16ATconstexpr_bool_167(state_, true);
    TNode<BoolT> tmp41;
    USE(tmp41);
    tmp41 = FromConstexpr6ATbool16ATconstexpr_bool_167(state_, false);
    TNode<BoolT> tmp42;
    USE(tmp42);
    tmp42 = TestOrAnd_438(state_, TNode<BoolT>{tmp39}, TNode<BoolT>{tmp40}, TNode<BoolT>{tmp41});
    ca_.Branch(tmp42, &block20, &block21);
  }

  if (block21.is_used()) {
    ca_.Bind(&block21);
    CodeStubAssembler(state_).FailAssert("Torque assert 'TestOrAnd(true, true, false)' failed", "test/torque/test-torque.tq", 566);
  }

  if (block20.is_used()) {
    ca_.Bind(&block20);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 567);
    TNode<BoolT> tmp43;
    USE(tmp43);
    tmp43 = FromConstexpr6ATbool16ATconstexpr_bool_167(state_, true);
    TNode<BoolT> tmp44;
    USE(tmp44);
    tmp44 = FromConstexpr6ATbool16ATconstexpr_bool_167(state_, false);
    TNode<BoolT> tmp45;
    USE(tmp45);
    tmp45 = FromConstexpr6ATbool16ATconstexpr_bool_167(state_, true);
    TNode<BoolT> tmp46;
    USE(tmp46);
    tmp46 = TestOrAnd_438(state_, TNode<BoolT>{tmp43}, TNode<BoolT>{tmp44}, TNode<BoolT>{tmp45});
    ca_.Branch(tmp46, &block22, &block23);
  }

  if (block23.is_used()) {
    ca_.Bind(&block23);
    CodeStubAssembler(state_).FailAssert("Torque assert 'TestOrAnd(true, false, true)' failed", "test/torque/test-torque.tq", 567);
  }

  if (block22.is_used()) {
    ca_.Bind(&block22);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 568);
    TNode<BoolT> tmp47;
    USE(tmp47);
    tmp47 = FromConstexpr6ATbool16ATconstexpr_bool_167(state_, true);
    TNode<BoolT> tmp48;
    USE(tmp48);
    tmp48 = FromConstexpr6ATbool16ATconstexpr_bool_167(state_, false);
    TNode<BoolT> tmp49;
    USE(tmp49);
    tmp49 = FromConstexpr6ATbool16ATconstexpr_bool_167(state_, false);
    TNode<BoolT> tmp50;
    USE(tmp50);
    tmp50 = TestOrAnd_438(state_, TNode<BoolT>{tmp47}, TNode<BoolT>{tmp48}, TNode<BoolT>{tmp49});
    ca_.Branch(tmp50, &block24, &block25);
  }

  if (block25.is_used()) {
    ca_.Bind(&block25);
    CodeStubAssembler(state_).FailAssert("Torque assert 'TestOrAnd(true, false, false)' failed", "test/torque/test-torque.tq", 568);
  }

  if (block24.is_used()) {
    ca_.Bind(&block24);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 569);
    TNode<BoolT> tmp51;
    USE(tmp51);
    tmp51 = FromConstexpr6ATbool16ATconstexpr_bool_167(state_, false);
    TNode<BoolT> tmp52;
    USE(tmp52);
    tmp52 = FromConstexpr6ATbool16ATconstexpr_bool_167(state_, true);
    TNode<BoolT> tmp53;
    USE(tmp53);
    tmp53 = FromConstexpr6ATbool16ATconstexpr_bool_167(state_, true);
    TNode<BoolT> tmp54;
    USE(tmp54);
    tmp54 = TestOrAnd_438(state_, TNode<BoolT>{tmp51}, TNode<BoolT>{tmp52}, TNode<BoolT>{tmp53});
    ca_.Branch(tmp54, &block26, &block27);
  }

  if (block27.is_used()) {
    ca_.Bind(&block27);
    CodeStubAssembler(state_).FailAssert("Torque assert 'TestOrAnd(false, true, true)' failed", "test/torque/test-torque.tq", 569);
  }

  if (block26.is_used()) {
    ca_.Bind(&block26);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 570);
    TNode<BoolT> tmp55;
    USE(tmp55);
    tmp55 = FromConstexpr6ATbool16ATconstexpr_bool_167(state_, false);
    TNode<BoolT> tmp56;
    USE(tmp56);
    tmp56 = FromConstexpr6ATbool16ATconstexpr_bool_167(state_, true);
    TNode<BoolT> tmp57;
    USE(tmp57);
    tmp57 = FromConstexpr6ATbool16ATconstexpr_bool_167(state_, false);
    TNode<BoolT> tmp58;
    USE(tmp58);
    tmp58 = TestOrAnd_438(state_, TNode<BoolT>{tmp55}, TNode<BoolT>{tmp56}, TNode<BoolT>{tmp57});
    TNode<BoolT> tmp59;
    USE(tmp59);
    tmp59 = CodeStubAssembler(state_).Word32BinaryNot(TNode<BoolT>{tmp58});
    ca_.Branch(tmp59, &block28, &block29);
  }

  if (block29.is_used()) {
    ca_.Bind(&block29);
    CodeStubAssembler(state_).FailAssert("Torque assert '!TestOrAnd(false, true, false)' failed", "test/torque/test-torque.tq", 570);
  }

  if (block28.is_used()) {
    ca_.Bind(&block28);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 571);
    TNode<BoolT> tmp60;
    USE(tmp60);
    tmp60 = FromConstexpr6ATbool16ATconstexpr_bool_167(state_, false);
    TNode<BoolT> tmp61;
    USE(tmp61);
    tmp61 = FromConstexpr6ATbool16ATconstexpr_bool_167(state_, false);
    TNode<BoolT> tmp62;
    USE(tmp62);
    tmp62 = FromConstexpr6ATbool16ATconstexpr_bool_167(state_, true);
    TNode<BoolT> tmp63;
    USE(tmp63);
    tmp63 = TestOrAnd_438(state_, TNode<BoolT>{tmp60}, TNode<BoolT>{tmp61}, TNode<BoolT>{tmp62});
    TNode<BoolT> tmp64;
    USE(tmp64);
    tmp64 = CodeStubAssembler(state_).Word32BinaryNot(TNode<BoolT>{tmp63});
    ca_.Branch(tmp64, &block30, &block31);
  }

  if (block31.is_used()) {
    ca_.Bind(&block31);
    CodeStubAssembler(state_).FailAssert("Torque assert '!TestOrAnd(false, false, true)' failed", "test/torque/test-torque.tq", 571);
  }

  if (block30.is_used()) {
    ca_.Bind(&block30);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 572);
    TNode<BoolT> tmp65;
    USE(tmp65);
    tmp65 = FromConstexpr6ATbool16ATconstexpr_bool_167(state_, false);
    TNode<BoolT> tmp66;
    USE(tmp66);
    tmp66 = FromConstexpr6ATbool16ATconstexpr_bool_167(state_, false);
    TNode<BoolT> tmp67;
    USE(tmp67);
    tmp67 = FromConstexpr6ATbool16ATconstexpr_bool_167(state_, false);
    TNode<BoolT> tmp68;
    USE(tmp68);
    tmp68 = TestOrAnd_438(state_, TNode<BoolT>{tmp65}, TNode<BoolT>{tmp66}, TNode<BoolT>{tmp67});
    TNode<BoolT> tmp69;
    USE(tmp69);
    tmp69 = CodeStubAssembler(state_).Word32BinaryNot(TNode<BoolT>{tmp68});
    ca_.Branch(tmp69, &block32, &block33);
  }

  if (block33.is_used()) {
    ca_.Bind(&block33);
    CodeStubAssembler(state_).FailAssert("Torque assert '!TestOrAnd(false, false, false)' failed", "test/torque/test-torque.tq", 572);
  }

  if (block32.is_used()) {
    ca_.Bind(&block32);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 555);
    ca_.Goto(&block1);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(&block34);
  }

    ca_.Bind(&block34);
}

TNode<Smi> TestCall_441(compiler::CodeAssemblerState* state_, TNode<Smi> p_i, compiler::CodeAssemblerLabel* label_A) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_i);

  if (block0.is_used()) {
    TNode<Smi> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 577);
    TNode<Smi> tmp1;
    USE(tmp1);
    tmp1 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 5);
    TNode<BoolT> tmp2;
    USE(tmp2);
    tmp2 = CodeStubAssembler(state_).SmiLessThan(TNode<Smi>{tmp0}, TNode<Smi>{tmp1});
    ca_.Branch(tmp2, &block3, &block4, tmp0);
  }

  if (block3.is_used()) {
    TNode<Smi> tmp3;
    ca_.Bind(&block3, &tmp3);
    ca_.Goto(&block2, tmp3, tmp3);
  }

  if (block4.is_used()) {
    TNode<Smi> tmp4;
    ca_.Bind(&block4, &tmp4);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 578);
    ca_.Goto(&block1);
  }

  if (block2.is_used()) {
    TNode<Smi> tmp5;
    TNode<Smi> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 575);
    ca_.Goto(&block5, tmp5, tmp6);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_A);
  }

    TNode<Smi> tmp7;
    TNode<Smi> tmp8;
    ca_.Bind(&block5, &tmp7, &tmp8);
  return TNode<Smi>{tmp8};
}

void TestOtherwiseWithCode1_442(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 583);
    TNode<Smi> tmp0;
    USE(tmp0);
    tmp0 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 584);
    TNode<Smi> tmp1;
    USE(tmp1);
    tmp1 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 1);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 586);
    TNode<Smi> tmp2;
    USE(tmp2);
    tmp2 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 10);
    TNode<Smi> tmp3;
    USE(tmp3);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp3 = TestCall_441(state_, TNode<Smi>{tmp2}, &label0);
    ca_.Goto(&block6, tmp0, tmp1, tmp3);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block7, tmp0, tmp1);
    }
  }

  if (block7.is_used()) {
    TNode<Smi> tmp4;
    TNode<Smi> tmp5;
    ca_.Bind(&block7, &tmp4, &tmp5);
    ca_.Goto(&block5, tmp4, tmp5);
  }

  if (block6.is_used()) {
    TNode<Smi> tmp6;
    TNode<Smi> tmp7;
    TNode<Smi> tmp8;
    ca_.Bind(&block6, &tmp6, &tmp7, &tmp8);
    ca_.Goto(&block4, tmp6, tmp7, tmp8);
  }

  if (block5.is_used()) {
    TNode<Smi> tmp9;
    TNode<Smi> tmp10;
    ca_.Bind(&block5, &tmp9, &tmp10);
    TNode<Smi> tmp11;
    USE(tmp11);
    tmp11 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 1);
    TNode<Smi> tmp12;
    USE(tmp12);
    tmp12 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{tmp10}, TNode<Smi>{tmp11});
    ca_.Goto(&block3, tmp9, tmp12, tmp12);
  }

  if (block4.is_used()) {
    TNode<Smi> tmp13;
    TNode<Smi> tmp14;
    TNode<Smi> tmp15;
    ca_.Bind(&block4, &tmp13, &tmp14, &tmp15);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 588);
    ca_.Goto(&block2, tmp13, tmp14);
  }

  if (block3.is_used()) {
    TNode<Smi> tmp16;
    TNode<Smi> tmp17;
    TNode<Smi> tmp18;
    ca_.Bind(&block3, &tmp16, &tmp17, &tmp18);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 589);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 585);
    ca_.Goto(&block2, tmp18, tmp17);
  }

  if (block2.is_used()) {
    TNode<Smi> tmp19;
    TNode<Smi> tmp20;
    ca_.Bind(&block2, &tmp19, &tmp20);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 582);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 581);
    ca_.Goto(&block1);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(&block8);
  }

    ca_.Bind(&block8);
}

void TestOtherwiseWithCode2_443(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 596);
    TNode<Smi> tmp0;
    USE(tmp0);
    tmp0 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 597);
    TNode<Smi> tmp1;
    USE(tmp1);
    tmp1 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 0);
    ca_.Goto(&block4, tmp0, tmp1);
  }

  if (block4.is_used()) {
    TNode<Smi> tmp2;
    TNode<Smi> tmp3;
    ca_.Bind(&block4, &tmp2, &tmp3);
    TNode<Smi> tmp4;
    USE(tmp4);
    tmp4 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 10);
    TNode<BoolT> tmp5;
    USE(tmp5);
    tmp5 = CodeStubAssembler(state_).SmiLessThan(TNode<Smi>{tmp3}, TNode<Smi>{tmp4});
    ca_.Branch(tmp5, &block2, &block3, tmp2, tmp3);
  }

  if (block2.is_used()) {
    TNode<Smi> tmp6;
    TNode<Smi> tmp7;
    ca_.Bind(&block2, &tmp6, &tmp7);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 598);
    TNode<Smi> tmp8;
    USE(tmp8);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp8 = TestCall_441(state_, TNode<Smi>{tmp7}, &label0);
    ca_.Goto(&block8, tmp6, tmp7, tmp7, tmp8);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block9, tmp6, tmp7, tmp7);
    }
  }

  if (block9.is_used()) {
    TNode<Smi> tmp9;
    TNode<Smi> tmp10;
    TNode<Smi> tmp11;
    ca_.Bind(&block9, &tmp9, &tmp10, &tmp11);
    ca_.Goto(&block7, tmp9, tmp10);
  }

  if (block8.is_used()) {
    TNode<Smi> tmp12;
    TNode<Smi> tmp13;
    TNode<Smi> tmp14;
    TNode<Smi> tmp15;
    ca_.Bind(&block8, &tmp12, &tmp13, &tmp14, &tmp15);
    ca_.Goto(&block6, tmp12, tmp13, tmp15);
  }

  if (block7.is_used()) {
    TNode<Smi> tmp16;
    TNode<Smi> tmp17;
    ca_.Bind(&block7, &tmp16, &tmp17);
    ca_.Goto(&block3, tmp16, tmp17);
  }

  if (block6.is_used()) {
    TNode<Smi> tmp18;
    TNode<Smi> tmp19;
    TNode<Smi> tmp20;
    ca_.Bind(&block6, &tmp18, &tmp19, &tmp20);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 599);
    TNode<Smi> tmp21;
    USE(tmp21);
    tmp21 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 1);
    TNode<Smi> tmp22;
    USE(tmp22);
    tmp22 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{tmp18}, TNode<Smi>{tmp21});
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 597);
    ca_.Goto(&block5, tmp22, tmp19);
  }

  if (block5.is_used()) {
    TNode<Smi> tmp23;
    TNode<Smi> tmp24;
    ca_.Bind(&block5, &tmp23, &tmp24);
    TNode<Smi> tmp25;
    USE(tmp25);
    tmp25 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 1);
    TNode<Smi> tmp26;
    USE(tmp26);
    tmp26 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{tmp24}, TNode<Smi>{tmp25});
    ca_.Goto(&block4, tmp23, tmp26);
  }

  if (block3.is_used()) {
    TNode<Smi> tmp27;
    TNode<Smi> tmp28;
    ca_.Bind(&block3, &tmp27, &tmp28);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 595);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 594);
    ca_.Goto(&block1);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(&block10);
  }

    ca_.Bind(&block10);
}

void TestOtherwiseWithCode3_444(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi, Smi> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi, Smi, Smi> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 606);
    TNode<Smi> tmp0;
    USE(tmp0);
    tmp0 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 607);
    TNode<Smi> tmp1;
    USE(tmp1);
    tmp1 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 0);
    ca_.Goto(&block4, tmp0, tmp1);
  }

  if (block4.is_used()) {
    TNode<Smi> tmp2;
    TNode<Smi> tmp3;
    ca_.Bind(&block4, &tmp2, &tmp3);
    TNode<Smi> tmp4;
    USE(tmp4);
    tmp4 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 10);
    TNode<BoolT> tmp5;
    USE(tmp5);
    tmp5 = CodeStubAssembler(state_).SmiLessThan(TNode<Smi>{tmp3}, TNode<Smi>{tmp4});
    ca_.Branch(tmp5, &block2, &block3, tmp2, tmp3);
  }

  if (block2.is_used()) {
    TNode<Smi> tmp6;
    TNode<Smi> tmp7;
    ca_.Bind(&block2, &tmp6, &tmp7);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 608);
    TNode<Smi> tmp8;
    USE(tmp8);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp8 = TestCall_441(state_, TNode<Smi>{tmp7}, &label0);
    ca_.Goto(&block8, tmp6, tmp7, tmp6, tmp7, tmp8);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block9, tmp6, tmp7, tmp6, tmp7);
    }
  }

  if (block9.is_used()) {
    TNode<Smi> tmp9;
    TNode<Smi> tmp10;
    TNode<Smi> tmp11;
    TNode<Smi> tmp12;
    ca_.Bind(&block9, &tmp9, &tmp10, &tmp11, &tmp12);
    ca_.Goto(&block7, tmp9, tmp10, tmp11);
  }

  if (block8.is_used()) {
    TNode<Smi> tmp13;
    TNode<Smi> tmp14;
    TNode<Smi> tmp15;
    TNode<Smi> tmp16;
    TNode<Smi> tmp17;
    ca_.Bind(&block8, &tmp13, &tmp14, &tmp15, &tmp16, &tmp17);
    ca_.Goto(&block6, tmp13, tmp14, tmp15, tmp17);
  }

  if (block7.is_used()) {
    TNode<Smi> tmp18;
    TNode<Smi> tmp19;
    TNode<Smi> tmp20;
    ca_.Bind(&block7, &tmp18, &tmp19, &tmp20);
    ca_.Goto(&block3, tmp18, tmp19);
  }

  if (block6.is_used()) {
    TNode<Smi> tmp21;
    TNode<Smi> tmp22;
    TNode<Smi> tmp23;
    TNode<Smi> tmp24;
    ca_.Bind(&block6, &tmp21, &tmp22, &tmp23, &tmp24);
    TNode<Smi> tmp25;
    USE(tmp25);
    tmp25 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{tmp23}, TNode<Smi>{tmp24});
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 607);
    ca_.Goto(&block5, tmp25, tmp22);
  }

  if (block5.is_used()) {
    TNode<Smi> tmp26;
    TNode<Smi> tmp27;
    ca_.Bind(&block5, &tmp26, &tmp27);
    TNode<Smi> tmp28;
    USE(tmp28);
    tmp28 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 1);
    TNode<Smi> tmp29;
    USE(tmp29);
    tmp29 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{tmp27}, TNode<Smi>{tmp28});
    ca_.Goto(&block4, tmp26, tmp29);
  }

  if (block3.is_used()) {
    TNode<Smi> tmp30;
    TNode<Smi> tmp31;
    ca_.Bind(&block3, &tmp30, &tmp31);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 605);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 604);
    ca_.Goto(&block1);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(&block10);
  }

    ca_.Bind(&block10);
}

void TestForwardLabel_445(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 616);
    ca_.Goto(&block5);
  }

  if (block5.is_used()) {
    ca_.Bind(&block5);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 619);
    TNode<Smi> tmp0;
    USE(tmp0);
    tmp0 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 5);
    ca_.Goto(&block3, tmp0);
  }

  if (block3.is_used()) {
    TNode<Smi> tmp1;
    ca_.Bind(&block3, &tmp1);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 615);
    ca_.Goto(&block2, tmp1);
  }

  if (block2.is_used()) {
    TNode<Smi> tmp2;
    ca_.Bind(&block2, &tmp2);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 613);
    ca_.Goto(&block1);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(&block6);
  }

    ca_.Bind(&block6);
}

void TestQualifiedAccess_446(compiler::CodeAssemblerState* state_, TNode<Context> p_context) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi> block3(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 628);
    TNode<Smi> tmp1;
    USE(tmp1);
    tmp1 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 629);
    TNode<BoolT> tmp2;
    USE(tmp2);
    tmp2 = Is7JSArray5ATSmi_1509(state_, TNode<Context>{tmp0}, TNode<Smi>{tmp1});
    TNode<BoolT> tmp3;
    USE(tmp3);
    tmp3 = CodeStubAssembler(state_).Word32BinaryNot(TNode<BoolT>{tmp2});
    ca_.Branch(tmp3, &block2, &block3, tmp0, tmp1);
  }

  if (block3.is_used()) {
    TNode<Context> tmp4;
    TNode<Smi> tmp5;
    ca_.Bind(&block3, &tmp4, &tmp5);
    CodeStubAssembler(state_).FailAssert("Torque assert '!Is<JSArray>(s)' failed", "test/torque/test-torque.tq", 629);
  }

  if (block2.is_used()) {
    TNode<Context> tmp6;
    TNode<Smi> tmp7;
    ca_.Bind(&block2, &tmp6, &tmp7);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 627);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 626);
    ca_.Goto(&block1, tmp6);
  }

  if (block1.is_used()) {
    TNode<Context> tmp8;
    ca_.Bind(&block1, &tmp8);
    ca_.Goto(&block4, tmp8);
  }

    TNode<Context> tmp9;
    ca_.Bind(&block4, &tmp9);
}

TNode<Smi> TestCatch1_447(compiler::CodeAssemblerState* state_, TNode<Context> p_context) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi, Object> block4(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi, Object> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 634);
    TNode<Smi> tmp1;
    USE(tmp1);
    tmp1 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 636);
    compiler::CodeAssemblerExceptionHandlerLabel catch2__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::CodeAssemblerScopedExceptionHandler s(&ca_, &catch2__label);
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{tmp0}, MessageTemplate::kInvalidArrayLength);
    }
    if (catch2__label.is_used()) {
      compiler::CodeAssemblerLabel catch2_skip(&ca_);
      TNode<Object> catch2_exception_object;
      ca_.Bind(&catch2__label, &catch2_exception_object);
      ca_.Goto(&block4, tmp0, tmp1, catch2_exception_object);
    }
  }

  if (block4.is_used()) {
    TNode<Context> tmp3;
    TNode<Smi> tmp4;
    TNode<Object> tmp5;
    ca_.Bind(&block4, &tmp3, &tmp4, &tmp5);
    ca_.Goto(&block3, tmp3, tmp4, tmp5);
  }

  if (block3.is_used()) {
    TNode<Context> tmp6;
    TNode<Smi> tmp7;
    TNode<Object> tmp8;
    ca_.Bind(&block3, &tmp6, &tmp7, &tmp8);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 638);
    TNode<Smi> tmp9;
    USE(tmp9);
    tmp9 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 1);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 639);
    ca_.Goto(&block1, tmp6, tmp9);
  }

  if (block1.is_used()) {
    TNode<Context> tmp10;
    TNode<Smi> tmp11;
    ca_.Bind(&block1, &tmp10, &tmp11);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 632);
    ca_.Goto(&block5, tmp10, tmp11);
  }

    TNode<Context> tmp12;
    TNode<Smi> tmp13;
    ca_.Bind(&block5, &tmp12, &tmp13);
  return TNode<Smi>{tmp13};
}

void TestCatch2Wrapper_448(compiler::CodeAssemblerState* state_, TNode<Context> p_context) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 645);
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{tmp0}, MessageTemplate::kInvalidArrayLength);
  }
}

TNode<Smi> TestCatch2_449(compiler::CodeAssemblerState* state_, TNode<Context> p_context) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi, Object> block4(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi, Object> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 650);
    TNode<Smi> tmp1;
    USE(tmp1);
    tmp1 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 652);
    compiler::CodeAssemblerExceptionHandlerLabel catch2__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::CodeAssemblerScopedExceptionHandler s(&ca_, &catch2__label);
    TestCatch2Wrapper_448(state_, TNode<Context>{tmp0});
    }
    if (catch2__label.is_used()) {
      compiler::CodeAssemblerLabel catch2_skip(&ca_);
      TNode<Object> catch2_exception_object;
      ca_.Bind(&catch2__label, &catch2_exception_object);
      ca_.Goto(&block4, tmp0, tmp1, catch2_exception_object);
    }
  }

  if (block4.is_used()) {
    TNode<Context> tmp3;
    TNode<Smi> tmp4;
    TNode<Object> tmp5;
    ca_.Bind(&block4, &tmp3, &tmp4, &tmp5);
    ca_.Goto(&block3, tmp3, tmp4, tmp5);
  }

  if (block3.is_used()) {
    TNode<Context> tmp6;
    TNode<Smi> tmp7;
    TNode<Object> tmp8;
    ca_.Bind(&block3, &tmp6, &tmp7, &tmp8);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 654);
    TNode<Smi> tmp9;
    USE(tmp9);
    tmp9 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 2);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 655);
    ca_.Goto(&block1, tmp6, tmp9);
  }

  if (block1.is_used()) {
    TNode<Context> tmp10;
    TNode<Smi> tmp11;
    ca_.Bind(&block1, &tmp10, &tmp11);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 648);
    ca_.Goto(&block5, tmp10, tmp11);
  }

    TNode<Context> tmp12;
    TNode<Smi> tmp13;
    ca_.Bind(&block5, &tmp12, &tmp13);
  return TNode<Smi>{tmp13};
}

void TestCatch3WrapperWithLabel_450(compiler::CodeAssemblerState* state_, TNode<Context> p_context, compiler::CodeAssemblerLabel* label__Abort) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 662);
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{tmp0}, MessageTemplate::kInvalidArrayLength);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 659);
    ca_.Goto(label__Abort);
  }
}

TNode<Smi> TestCatch3_451(compiler::CodeAssemblerState* state_, TNode<Context> p_context) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi, Object> block7(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi, Object> block8(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi, Object> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 667);
    TNode<Smi> tmp1;
    USE(tmp1);
    tmp1 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 669);
    compiler::CodeAssemblerLabel label0(&ca_);
    compiler::CodeAssemblerExceptionHandlerLabel catch2__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::CodeAssemblerScopedExceptionHandler s(&ca_, &catch2__label);
    TestCatch3WrapperWithLabel_450(state_, TNode<Context>{tmp0}, &label0);
    }
    if (catch2__label.is_used()) {
      compiler::CodeAssemblerLabel catch2_skip(&ca_);
      TNode<Object> catch2_exception_object;
      ca_.Bind(&catch2__label, &catch2_exception_object);
      ca_.Goto(&block7, tmp0, tmp1, catch2_exception_object);
    }
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp0, tmp1);
    }
  }

  if (block7.is_used()) {
    TNode<Context> tmp3;
    TNode<Smi> tmp4;
    TNode<Object> tmp5;
    ca_.Bind(&block7, &tmp3, &tmp4, &tmp5);
    ca_.Goto(&block3, tmp3, tmp4, tmp5);
  }

  if (block6.is_used()) {
    TNode<Context> tmp6;
    TNode<Smi> tmp7;
    ca_.Bind(&block6, &tmp6, &tmp7);
    ca_.Goto(&block5, tmp6, tmp7);
  }

  if (block5.is_used()) {
    TNode<Context> tmp8;
    TNode<Smi> tmp9;
    ca_.Bind(&block5, &tmp8, &tmp9);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 672);
    TNode<Smi> tmp10;
    USE(tmp10);
    compiler::CodeAssemblerExceptionHandlerLabel catch11__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::CodeAssemblerScopedExceptionHandler s(&ca_, &catch11__label);
    tmp10 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, -1);
    }
    if (catch11__label.is_used()) {
      compiler::CodeAssemblerLabel catch11_skip(&ca_);
      ca_.Goto(&catch11_skip);
      TNode<Object> catch11_exception_object;
      ca_.Bind(&catch11__label, &catch11_exception_object);
      ca_.Goto(&block8, tmp8, tmp9, catch11_exception_object);
      ca_.Bind(&catch11_skip);
    }
    ca_.Goto(&block1, tmp8, tmp10);
  }

  if (block8.is_used()) {
    TNode<Context> tmp12;
    TNode<Smi> tmp13;
    TNode<Object> tmp14;
    ca_.Bind(&block8, &tmp12, &tmp13, &tmp14);
    ca_.Goto(&block3, tmp12, tmp13, tmp14);
  }

  if (block3.is_used()) {
    TNode<Context> tmp15;
    TNode<Smi> tmp16;
    TNode<Object> tmp17;
    ca_.Bind(&block3, &tmp15, &tmp16, &tmp17);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 675);
    TNode<Smi> tmp18;
    USE(tmp18);
    tmp18 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 2);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 676);
    ca_.Goto(&block1, tmp15, tmp18);
  }

  if (block1.is_used()) {
    TNode<Context> tmp19;
    TNode<Smi> tmp20;
    ca_.Bind(&block1, &tmp19, &tmp20);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 665);
    ca_.Goto(&block9, tmp19, tmp20);
  }

    TNode<Context> tmp21;
    TNode<Smi> tmp22;
    ca_.Bind(&block9, &tmp21, &tmp22);
  return TNode<Smi>{tmp22};
}

void TestIterator_452(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSReceiver> p_o, TNode<Map> p_map) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Map> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Map, Object, JSReceiver, Object, JSReceiver, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Map, Object, JSReceiver, Object, JSReceiver, Object, JSReceiver> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Map, Object, JSReceiver, Object, Object, JSReceiver, Object, Map> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Map, Object, JSReceiver, Object, Object, JSReceiver, Object, Map, JSReceiver> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Map> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Map> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Map> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Map> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o, p_map);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<JSReceiver> tmp1;
    TNode<Map> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 687);
    TNode<Object> tmp3;
    USE(tmp3);
    tmp3 = IteratorBuiltinsAssembler(state_).GetIteratorMethod(TNode<Context>{tmp0}, TNode<Object>{tmp1});
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 688);
    TNode<JSReceiver> tmp4;
    USE(tmp4);
    TNode<Object> tmp5;
    USE(tmp5);
    std::tie(tmp4, tmp5) = IteratorBuiltinsAssembler(state_).GetIterator(TNode<Context>{tmp0}, TNode<Object>{tmp1}).Flatten();
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 690);
    TNode<JSReceiver> tmp6;
    USE(tmp6);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp6 = IteratorBuiltinsAssembler(state_).IteratorStep(TNode<Context>{tmp0}, TorqueStructIteratorRecord{TNode<JSReceiver>{tmp4}, TNode<Object>{tmp5}}, &label0);
    ca_.Goto(&block4, tmp0, tmp1, tmp2, tmp3, tmp4, tmp5, tmp4, tmp5, tmp6);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block5, tmp0, tmp1, tmp2, tmp3, tmp4, tmp5, tmp4, tmp5);
    }
  }

  if (block5.is_used()) {
    TNode<Context> tmp7;
    TNode<JSReceiver> tmp8;
    TNode<Map> tmp9;
    TNode<Object> tmp10;
    TNode<JSReceiver> tmp11;
    TNode<Object> tmp12;
    TNode<JSReceiver> tmp13;
    TNode<Object> tmp14;
    ca_.Bind(&block5, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11, &tmp12, &tmp13, &tmp14);
    ca_.Goto(&block3, tmp7, tmp8, tmp9);
  }

  if (block4.is_used()) {
    TNode<Context> tmp15;
    TNode<JSReceiver> tmp16;
    TNode<Map> tmp17;
    TNode<Object> tmp18;
    TNode<JSReceiver> tmp19;
    TNode<Object> tmp20;
    TNode<JSReceiver> tmp21;
    TNode<Object> tmp22;
    TNode<JSReceiver> tmp23;
    ca_.Bind(&block4, &tmp15, &tmp16, &tmp17, &tmp18, &tmp19, &tmp20, &tmp21, &tmp22, &tmp23);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 691);
    TNode<JSReceiver> tmp24;
    USE(tmp24);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp24 = IteratorBuiltinsAssembler(state_).IteratorStep(TNode<Context>{tmp15}, TorqueStructIteratorRecord{TNode<JSReceiver>{tmp19}, TNode<Object>{tmp20}}, TNode<Map>{tmp17}, &label0);
    ca_.Goto(&block6, tmp15, tmp16, tmp17, tmp18, tmp19, tmp20, tmp23, tmp19, tmp20, tmp17, tmp24);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block7, tmp15, tmp16, tmp17, tmp18, tmp19, tmp20, tmp23, tmp19, tmp20, tmp17);
    }
  }

  if (block7.is_used()) {
    TNode<Context> tmp25;
    TNode<JSReceiver> tmp26;
    TNode<Map> tmp27;
    TNode<Object> tmp28;
    TNode<JSReceiver> tmp29;
    TNode<Object> tmp30;
    TNode<Object> tmp31;
    TNode<JSReceiver> tmp32;
    TNode<Object> tmp33;
    TNode<Map> tmp34;
    ca_.Bind(&block7, &tmp25, &tmp26, &tmp27, &tmp28, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33, &tmp34);
    ca_.Goto(&block3, tmp25, tmp26, tmp27);
  }

  if (block6.is_used()) {
    TNode<Context> tmp35;
    TNode<JSReceiver> tmp36;
    TNode<Map> tmp37;
    TNode<Object> tmp38;
    TNode<JSReceiver> tmp39;
    TNode<Object> tmp40;
    TNode<Object> tmp41;
    TNode<JSReceiver> tmp42;
    TNode<Object> tmp43;
    TNode<Map> tmp44;
    TNode<JSReceiver> tmp45;
    ca_.Bind(&block6, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40, &tmp41, &tmp42, &tmp43, &tmp44, &tmp45);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 693);
    TNode<Object> tmp46;
    USE(tmp46);
    tmp46 = IteratorBuiltinsAssembler(state_).IteratorValue(TNode<Context>{tmp35}, TNode<JSReceiver>{tmp36});
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 694);
    TNode<Object> tmp47;
    USE(tmp47);
    tmp47 = IteratorBuiltinsAssembler(state_).IteratorValue(TNode<Context>{tmp35}, TNode<JSReceiver>{tmp36}, TNode<Map>{tmp37});
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 696);
    TNode<JSArray> tmp48;
    USE(tmp48);
    tmp48 = IteratorBuiltinsAssembler(state_).IterableToList(TNode<Context>{tmp35}, TNode<Object>{tmp38}, TNode<Object>{tmp38});
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 698);
    IteratorBuiltinsAssembler(state_).IteratorCloseOnException(TNode<Context>{tmp35}, TorqueStructIteratorRecord{TNode<JSReceiver>{tmp39}, TNode<Object>{tmp40}}, TNode<Object>{tmp46});
  }

  if (block3.is_used()) {
    TNode<Context> tmp49;
    TNode<JSReceiver> tmp50;
    TNode<Map> tmp51;
    ca_.Bind(&block3, &tmp49, &tmp50, &tmp51);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 686);
    ca_.Goto(&block2, tmp49, tmp50, tmp51);
  }

  if (block2.is_used()) {
    TNode<Context> tmp52;
    TNode<JSReceiver> tmp53;
    TNode<Map> tmp54;
    ca_.Bind(&block2, &tmp52, &tmp53, &tmp54);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 684);
    ca_.Goto(&block1, tmp52, tmp53, tmp54);
  }

  if (block1.is_used()) {
    TNode<Context> tmp55;
    TNode<JSReceiver> tmp56;
    TNode<Map> tmp57;
    ca_.Bind(&block1, &tmp55, &tmp56, &tmp57);
    ca_.Goto(&block8, tmp55, tmp56, tmp57);
  }

    TNode<Context> tmp58;
    TNode<JSReceiver> tmp59;
    TNode<Map> tmp60;
    ca_.Bind(&block8, &tmp58, &tmp59, &tmp60);
}

void TestFrame1_453(compiler::CodeAssemblerState* state_, TNode<Context> p_context) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, Object, Smi> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, Smi, RawPtrT, RawPtrT> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, Smi, RawPtrT, RawPtrT, RawPtrT> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, Smi, RawPtrT> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, Smi, RawPtrT, RawPtrT> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, Smi, RawPtrT, RawPtrT, RawPtrT> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, Smi, RawPtrT> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, Smi, RawPtrT> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, Smi, RawPtrT> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 705);
    TNode<RawPtrT> tmp1;
    USE(tmp1);
    tmp1 = CodeStubAssembler(state_).LoadFramePointer();
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 707);
    TNode<Object> tmp2;
    USE(tmp2);
    tmp2 = LoadContextOrFrameTypeFromFrame_301(state_, TNode<Context>{tmp0}, TNode<RawPtrT>{tmp1});
    TNode<Smi> tmp3;
    USE(tmp3);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp3 = Cast11ATFrameType_294(state_, TNode<Object>{tmp2}, &label0);
    ca_.Goto(&block4, tmp0, tmp1, tmp2, tmp3);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block5, tmp0, tmp1, tmp2);
    }
  }

  if (block5.is_used()) {
    TNode<Context> tmp4;
    TNode<RawPtrT> tmp5;
    TNode<Object> tmp6;
    ca_.Bind(&block5, &tmp4, &tmp5, &tmp6);
    ca_.Goto(&block3, tmp4, tmp5);
  }

  if (block4.is_used()) {
    TNode<Context> tmp7;
    TNode<RawPtrT> tmp8;
    TNode<Object> tmp9;
    TNode<Smi> tmp10;
    ca_.Bind(&block4, &tmp7, &tmp8, &tmp9, &tmp10);
    ca_.Goto(&block2, tmp7, tmp8, tmp10);
  }

  if (block3.is_used()) {
    TNode<Context> tmp11;
    TNode<RawPtrT> tmp12;
    ca_.Bind(&block3, &tmp11, &tmp12);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block2.is_used()) {
    TNode<Context> tmp13;
    TNode<RawPtrT> tmp14;
    TNode<Smi> tmp15;
    ca_.Bind(&block2, &tmp13, &tmp14, &tmp15);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 706);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 710);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 711);
    TNode<RawPtrT> tmp16;
    USE(tmp16);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp16 = Cast15ATStandardFrame_304(state_, TNode<Context>{tmp13}, TNode<RawPtrT>{tmp14}, &label0);
    ca_.Goto(&block8, tmp13, tmp14, tmp15, tmp14, tmp14, tmp16);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block9, tmp13, tmp14, tmp15, tmp14, tmp14);
    }
  }

  if (block9.is_used()) {
    TNode<Context> tmp17;
    TNode<RawPtrT> tmp18;
    TNode<Smi> tmp19;
    TNode<RawPtrT> tmp20;
    TNode<RawPtrT> tmp21;
    ca_.Bind(&block9, &tmp17, &tmp18, &tmp19, &tmp20, &tmp21);
    ca_.Goto(&block7, tmp17, tmp18, tmp19, tmp20);
  }

  if (block8.is_used()) {
    TNode<Context> tmp22;
    TNode<RawPtrT> tmp23;
    TNode<Smi> tmp24;
    TNode<RawPtrT> tmp25;
    TNode<RawPtrT> tmp26;
    TNode<RawPtrT> tmp27;
    ca_.Bind(&block8, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26, &tmp27);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 712);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block7.is_used()) {
    TNode<Context> tmp28;
    TNode<RawPtrT> tmp29;
    TNode<Smi> tmp30;
    TNode<RawPtrT> tmp31;
    ca_.Bind(&block7, &tmp28, &tmp29, &tmp30, &tmp31);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 714);
    TNode<RawPtrT> tmp32;
    USE(tmp32);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp32 = Cast23ATArgumentsAdaptorFrame_305(state_, TNode<Context>{tmp28}, TNode<RawPtrT>{ca_.UncheckedCast<RawPtrT>(tmp31)}, &label0);
    ca_.Goto(&block12, tmp28, tmp29, tmp30, tmp31, ca_.UncheckedCast<RawPtrT>(tmp31), tmp32);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block13, tmp28, tmp29, tmp30, tmp31, ca_.UncheckedCast<RawPtrT>(tmp31));
    }
  }

  if (block13.is_used()) {
    TNode<Context> tmp33;
    TNode<RawPtrT> tmp34;
    TNode<Smi> tmp35;
    TNode<RawPtrT> tmp36;
    TNode<RawPtrT> tmp37;
    ca_.Bind(&block13, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37);
    ca_.Goto(&block11, tmp33, tmp34, tmp35, tmp36);
  }

  if (block12.is_used()) {
    TNode<Context> tmp38;
    TNode<RawPtrT> tmp39;
    TNode<Smi> tmp40;
    TNode<RawPtrT> tmp41;
    TNode<RawPtrT> tmp42;
    TNode<RawPtrT> tmp43;
    ca_.Bind(&block12, &tmp38, &tmp39, &tmp40, &tmp41, &tmp42, &tmp43);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 715);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block11.is_used()) {
    TNode<Context> tmp44;
    TNode<RawPtrT> tmp45;
    TNode<Smi> tmp46;
    TNode<RawPtrT> tmp47;
    ca_.Bind(&block11, &tmp44, &tmp45, &tmp46, &tmp47);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 717);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 714);
    ca_.Goto(&block10, tmp44, tmp45, tmp46, tmp47);
  }

  if (block10.is_used()) {
    TNode<Context> tmp48;
    TNode<RawPtrT> tmp49;
    TNode<Smi> tmp50;
    TNode<RawPtrT> tmp51;
    ca_.Bind(&block10, &tmp48, &tmp49, &tmp50, &tmp51);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 711);
    ca_.Goto(&block6, tmp48, tmp49, tmp50, tmp51);
  }

  if (block6.is_used()) {
    TNode<Context> tmp52;
    TNode<RawPtrT> tmp53;
    TNode<Smi> tmp54;
    TNode<RawPtrT> tmp55;
    ca_.Bind(&block6, &tmp52, &tmp53, &tmp54, &tmp55);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 710);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 704);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 703);
    ca_.Goto(&block1, tmp52);
  }

  if (block1.is_used()) {
    TNode<Context> tmp56;
    ca_.Bind(&block1, &tmp56);
    ca_.Goto(&block14, tmp56);
  }

    TNode<Context> tmp57;
    ca_.Bind(&block14, &tmp57);
}

void TestNew_454(compiler::CodeAssemblerState* state_, TNode<Context> p_context) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray> block3(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 724);
    TNode<JSArray> tmp1;
    USE(tmp1);
    tmp1 = NewJSArray_60(state_, TNode<Context>{tmp0});
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 725);
    TNode<BoolT> tmp2;
    USE(tmp2);
    tmp2 = _method_JSArray_IsEmpty(state_, TNode<JSArray>{tmp1});
    ca_.Branch(tmp2, &block2, &block3, tmp0, tmp1);
  }

  if (block3.is_used()) {
    TNode<Context> tmp3;
    TNode<JSArray> tmp4;
    ca_.Bind(&block3, &tmp3, &tmp4);
    CodeStubAssembler(state_).FailAssert("Torque assert 'f.IsEmpty()' failed", "test/torque/test-torque.tq", 725);
  }

  if (block2.is_used()) {
    TNode<Context> tmp5;
    TNode<JSArray> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 726);
    TNode<IntPtrT> tmp7 = ca_.IntPtrConstant(JSArray::kLengthOffset);
    USE(tmp7);
    TNode<Number> tmp8;
    USE(tmp8);
    tmp8 = FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_160(state_, 0);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp6, tmp7}, tmp8);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 723);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 722);
    ca_.Goto(&block1, tmp5);
  }

  if (block1.is_used()) {
    TNode<Context> tmp9;
    ca_.Bind(&block1, &tmp9);
    ca_.Goto(&block4, tmp9);
  }

    TNode<Context> tmp10;
    ca_.Bind(&block4, &tmp10);
}

void TestStructConstructor_455(compiler::CodeAssemblerState* state_, TNode<Context> p_context) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Int32T, Int32T, Int32T, Int32T> block3(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Int32T, Int32T, Int32T, Int32T> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Int32T, Int32T, Int32T, Int32T> block5(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Int32T, Int32T, Int32T, Int32T> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Int32T, Int32T, Int32T, Int32T> block7(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Int32T, Int32T, Int32T, Int32T> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Int32T, Int32T, Int32T, Int32T> block9(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Int32T, Int32T, Int32T, Int32T> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Int32T, Int32T, Int32T, Int32T> block11(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Int32T, Int32T, Int32T, Int32T> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Int32T, Int32T, Int32T, Int32T, Int32T> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Int32T, Int32T, Int32T, Int32T> block14(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Int32T, Int32T, Int32T, Int32T> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Int32T, Int32T, Int32T, Int32T, Int32T> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Int32T, Int32T, Int32T, Int32T> block16(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Int32T, Int32T, Int32T, Int32T> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 749);
    TNode<Int32T> tmp1;
    USE(tmp1);
    tmp1 = FromConstexpr7ATint3217ATconstexpr_int31_148(state_, 6);
    TNode<Int32T> tmp2;
    USE(tmp2);
    tmp2 = FromConstexpr7ATint3217ATconstexpr_int31_148(state_, 7);
    TNode<Int32T> tmp3;
    USE(tmp3);
    tmp3 = FromConstexpr7ATint3217ATconstexpr_int31_148(state_, 5);
    TNode<Int32T> tmp4;
    USE(tmp4);
    tmp4 = FromConstexpr7ATint3217ATconstexpr_int31_148(state_, 8);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 750);
    TNode<Int32T> tmp5;
    USE(tmp5);
    tmp5 = FromConstexpr7ATint3217ATconstexpr_int31_148(state_, 5);
    TNode<BoolT> tmp6;
    USE(tmp6);
    tmp6 = CodeStubAssembler(state_).Word32Equal(TNode<Int32T>{tmp3}, TNode<Int32T>{tmp5});
    ca_.Branch(tmp6, &block2, &block3, tmp0, tmp3, tmp1, tmp2, tmp4);
  }

  if (block3.is_used()) {
    TNode<Context> tmp7;
    TNode<Int32T> tmp8;
    TNode<Int32T> tmp9;
    TNode<Int32T> tmp10;
    TNode<Int32T> tmp11;
    ca_.Bind(&block3, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11);
    CodeStubAssembler(state_).FailAssert("Torque assert 'a.a == 5' failed", "test/torque/test-torque.tq", 750);
  }

  if (block2.is_used()) {
    TNode<Context> tmp12;
    TNode<Int32T> tmp13;
    TNode<Int32T> tmp14;
    TNode<Int32T> tmp15;
    TNode<Int32T> tmp16;
    ca_.Bind(&block2, &tmp12, &tmp13, &tmp14, &tmp15, &tmp16);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 751);
    TNode<Int32T> tmp17;
    USE(tmp17);
    tmp17 = FromConstexpr7ATint3217ATconstexpr_int31_148(state_, 6);
    TNode<BoolT> tmp18;
    USE(tmp18);
    tmp18 = CodeStubAssembler(state_).Word32Equal(TNode<Int32T>{tmp14}, TNode<Int32T>{tmp17});
    ca_.Branch(tmp18, &block4, &block5, tmp12, tmp13, tmp14, tmp15, tmp16);
  }

  if (block5.is_used()) {
    TNode<Context> tmp19;
    TNode<Int32T> tmp20;
    TNode<Int32T> tmp21;
    TNode<Int32T> tmp22;
    TNode<Int32T> tmp23;
    ca_.Bind(&block5, &tmp19, &tmp20, &tmp21, &tmp22, &tmp23);
    CodeStubAssembler(state_).FailAssert("Torque assert 'a.b.x == 6' failed", "test/torque/test-torque.tq", 751);
  }

  if (block4.is_used()) {
    TNode<Context> tmp24;
    TNode<Int32T> tmp25;
    TNode<Int32T> tmp26;
    TNode<Int32T> tmp27;
    TNode<Int32T> tmp28;
    ca_.Bind(&block4, &tmp24, &tmp25, &tmp26, &tmp27, &tmp28);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 752);
    TNode<Int32T> tmp29;
    USE(tmp29);
    tmp29 = FromConstexpr7ATint3217ATconstexpr_int31_148(state_, 7);
    TNode<BoolT> tmp30;
    USE(tmp30);
    tmp30 = CodeStubAssembler(state_).Word32Equal(TNode<Int32T>{tmp27}, TNode<Int32T>{tmp29});
    ca_.Branch(tmp30, &block6, &block7, tmp24, tmp25, tmp26, tmp27, tmp28);
  }

  if (block7.is_used()) {
    TNode<Context> tmp31;
    TNode<Int32T> tmp32;
    TNode<Int32T> tmp33;
    TNode<Int32T> tmp34;
    TNode<Int32T> tmp35;
    ca_.Bind(&block7, &tmp31, &tmp32, &tmp33, &tmp34, &tmp35);
    CodeStubAssembler(state_).FailAssert("Torque assert 'a.b.y == 7' failed", "test/torque/test-torque.tq", 752);
  }

  if (block6.is_used()) {
    TNode<Context> tmp36;
    TNode<Int32T> tmp37;
    TNode<Int32T> tmp38;
    TNode<Int32T> tmp39;
    TNode<Int32T> tmp40;
    ca_.Bind(&block6, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 753);
    TNode<Int32T> tmp41;
    USE(tmp41);
    tmp41 = FromConstexpr7ATint3217ATconstexpr_int31_148(state_, 8);
    TNode<BoolT> tmp42;
    USE(tmp42);
    tmp42 = CodeStubAssembler(state_).Word32Equal(TNode<Int32T>{tmp40}, TNode<Int32T>{tmp41});
    ca_.Branch(tmp42, &block8, &block9, tmp36, tmp37, tmp38, tmp39, tmp40);
  }

  if (block9.is_used()) {
    TNode<Context> tmp43;
    TNode<Int32T> tmp44;
    TNode<Int32T> tmp45;
    TNode<Int32T> tmp46;
    TNode<Int32T> tmp47;
    ca_.Bind(&block9, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47);
    CodeStubAssembler(state_).FailAssert("Torque assert 'a.c == 8' failed", "test/torque/test-torque.tq", 753);
  }

  if (block8.is_used()) {
    TNode<Context> tmp48;
    TNode<Int32T> tmp49;
    TNode<Int32T> tmp50;
    TNode<Int32T> tmp51;
    TNode<Int32T> tmp52;
    ca_.Bind(&block8, &tmp48, &tmp49, &tmp50, &tmp51, &tmp52);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 754);
    TNode<Int32T> tmp53;
    USE(tmp53);
    tmp53 = FromConstexpr7ATint3217ATconstexpr_int31_148(state_, 1);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 755);
    TNode<Int32T> tmp54;
    USE(tmp54);
    tmp54 = FromConstexpr7ATint3217ATconstexpr_int31_148(state_, 1);
    TNode<BoolT> tmp55;
    USE(tmp55);
    tmp55 = CodeStubAssembler(state_).Word32Equal(TNode<Int32T>{tmp53}, TNode<Int32T>{tmp54});
    ca_.Branch(tmp55, &block10, &block11, tmp48, tmp49, tmp53, tmp51, tmp52);
  }

  if (block11.is_used()) {
    TNode<Context> tmp56;
    TNode<Int32T> tmp57;
    TNode<Int32T> tmp58;
    TNode<Int32T> tmp59;
    TNode<Int32T> tmp60;
    ca_.Bind(&block11, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60);
    CodeStubAssembler(state_).FailAssert("Torque assert 'a.b.x == 1' failed", "test/torque/test-torque.tq", 755);
  }

  if (block10.is_used()) {
    TNode<Context> tmp61;
    TNode<Int32T> tmp62;
    TNode<Int32T> tmp63;
    TNode<Int32T> tmp64;
    TNode<Int32T> tmp65;
    ca_.Bind(&block10, &tmp61, &tmp62, &tmp63, &tmp64, &tmp65);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 756);
    TNode<Int32T> tmp66;
    USE(tmp66);
    tmp66 = FromConstexpr7ATint3217ATconstexpr_int31_148(state_, 2);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 731);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 756);
    ca_.Goto(&block12, tmp61, tmp62, tmp66, tmp64, tmp65, tmp66);
  }

  if (block12.is_used()) {
    TNode<Context> tmp67;
    TNode<Int32T> tmp68;
    TNode<Int32T> tmp69;
    TNode<Int32T> tmp70;
    TNode<Int32T> tmp71;
    TNode<Int32T> tmp72;
    ca_.Bind(&block12, &tmp67, &tmp68, &tmp69, &tmp70, &tmp71, &tmp72);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 757);
    TNode<Int32T> tmp73;
    USE(tmp73);
    tmp73 = FromConstexpr7ATint3217ATconstexpr_int31_148(state_, 2);
    TNode<BoolT> tmp74;
    USE(tmp74);
    tmp74 = CodeStubAssembler(state_).Word32Equal(TNode<Int32T>{tmp69}, TNode<Int32T>{tmp73});
    ca_.Branch(tmp74, &block13, &block14, tmp67, tmp68, tmp69, tmp70, tmp71);
  }

  if (block14.is_used()) {
    TNode<Context> tmp75;
    TNode<Int32T> tmp76;
    TNode<Int32T> tmp77;
    TNode<Int32T> tmp78;
    TNode<Int32T> tmp79;
    ca_.Bind(&block14, &tmp75, &tmp76, &tmp77, &tmp78, &tmp79);
    CodeStubAssembler(state_).FailAssert("Torque assert 'a.b.x == 2' failed", "test/torque/test-torque.tq", 757);
  }

  if (block13.is_used()) {
    TNode<Context> tmp80;
    TNode<Int32T> tmp81;
    TNode<Int32T> tmp82;
    TNode<Int32T> tmp83;
    TNode<Int32T> tmp84;
    ca_.Bind(&block13, &tmp80, &tmp81, &tmp82, &tmp83, &tmp84);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 734);
    ca_.Goto(&block17, tmp80, tmp81, tmp82, tmp83, tmp84, tmp82);
  }

  if (block17.is_used()) {
    TNode<Context> tmp85;
    TNode<Int32T> tmp86;
    TNode<Int32T> tmp87;
    TNode<Int32T> tmp88;
    TNode<Int32T> tmp89;
    TNode<Int32T> tmp90;
    ca_.Bind(&block17, &tmp85, &tmp86, &tmp87, &tmp88, &tmp89, &tmp90);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 758);
    TNode<Int32T> tmp91;
    USE(tmp91);
    tmp91 = FromConstexpr7ATint3217ATconstexpr_int31_148(state_, 2);
    TNode<BoolT> tmp92;
    USE(tmp92);
    tmp92 = CodeStubAssembler(state_).Word32Equal(TNode<Int32T>{tmp90}, TNode<Int32T>{tmp91});
    ca_.Branch(tmp92, &block15, &block16, tmp85, tmp86, tmp87, tmp88, tmp89);
  }

  if (block16.is_used()) {
    TNode<Context> tmp93;
    TNode<Int32T> tmp94;
    TNode<Int32T> tmp95;
    TNode<Int32T> tmp96;
    TNode<Int32T> tmp97;
    ca_.Bind(&block16, &tmp93, &tmp94, &tmp95, &tmp96, &tmp97);
    CodeStubAssembler(state_).FailAssert("Torque assert 'a.b.GetX() == 2' failed", "test/torque/test-torque.tq", 758);
  }

  if (block15.is_used()) {
    TNode<Context> tmp98;
    TNode<Int32T> tmp99;
    TNode<Int32T> tmp100;
    TNode<Int32T> tmp101;
    TNode<Int32T> tmp102;
    ca_.Bind(&block15, &tmp98, &tmp99, &tmp100, &tmp101, &tmp102);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 747);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 746);
    ca_.Goto(&block1, tmp98);
  }

  if (block1.is_used()) {
    TNode<Context> tmp103;
    ca_.Bind(&block1, &tmp103);
    ca_.Goto(&block18, tmp103);
  }

    TNode<Context> tmp104;
    ca_.Bind(&block18, &tmp104);
}

TNode<InternalClass> NewInternalClass_456(compiler::CodeAssemblerState* state_, TNode<Smi> p_x) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, InternalClass> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, InternalClass> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_x);

  if (block0.is_used()) {
    TNode<Smi> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 772);
    TNode<Smi> tmp1;
    USE(tmp1);
    tmp1 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 1);
    TNode<Smi> tmp2;
    USE(tmp2);
    tmp2 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{tmp0}, TNode<Smi>{tmp1});
    TNode<Map> tmp3;
    USE(tmp3);
    tmp3 = CodeStubAssembler(state_).GetStructMap(INTERNAL_CLASS_TYPE);
    TNode<IntPtrT> tmp4;
    USE(tmp4);
    tmp4 = CodeStubAssembler(state_).IntPtrConstant(((24)));
    TNode<InternalClass> tmp5;
    USE(tmp5);
    tmp5 = ca_.UncheckedCast<InternalClass>(CodeStubAssembler(state_).Allocate(TNode<IntPtrT>{tmp4}));
    CodeStubAssembler(state_).InitializeFieldsWithRoot(tmp5, CodeStubAssembler(state_).IntPtrConstant(24), TNode<IntPtrT>{tmp4}, RootIndex::kUndefinedValue);
    TNode<IntPtrT> tmp6 = ca_.IntPtrConstant(HeapObject::kMapOffset);
    USE(tmp6);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp5, tmp6}, tmp3);
    TNode<IntPtrT> tmp7 = ca_.IntPtrConstant(InternalClass::kAOffset);
    USE(tmp7);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp5, tmp7}, tmp0);
    TNode<IntPtrT> tmp8 = ca_.IntPtrConstant(InternalClass::kBOffset);
    USE(tmp8);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp5, tmp8}, tmp2);
    ca_.Goto(&block1, tmp0, tmp5);
  }

  if (block1.is_used()) {
    TNode<Smi> tmp9;
    TNode<InternalClass> tmp10;
    ca_.Bind(&block1, &tmp9, &tmp10);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 771);
    ca_.Goto(&block2, tmp9, tmp10);
  }

    TNode<Smi> tmp11;
    TNode<InternalClass> tmp12;
    ca_.Bind(&block2, &tmp11, &tmp12);
  return TNode<InternalClass>{tmp12};
}

void TestInternalClass_457(compiler::CodeAssemblerState* state_, TNode<Context> p_context) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, InternalClass, InternalClass> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, InternalClass, InternalClass> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, InternalClass> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, InternalClass> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, InternalClass> block7(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, InternalClass> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, InternalClass> block9(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, InternalClass> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 777);
    TNode<Smi> tmp1;
    USE(tmp1);
    tmp1 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 5);
    TNode<InternalClass> tmp2;
    USE(tmp2);
    tmp2 = NewInternalClass_456(state_, TNode<Smi>{tmp1});
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 778);
    compiler::CodeAssemblerLabel label0(&ca_);
    _method_InternalClass_Flip(state_, TNode<InternalClass>{tmp2}, &label0);
    ca_.Goto(&block4, tmp0, tmp2, tmp2);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block5, tmp0, tmp2, tmp2);
    }
  }

  if (block5.is_used()) {
    TNode<Context> tmp3;
    TNode<InternalClass> tmp4;
    TNode<InternalClass> tmp5;
    ca_.Bind(&block5, &tmp3, &tmp4, &tmp5);
    ca_.Goto(&block3, tmp3, tmp4);
  }

  if (block4.is_used()) {
    TNode<Context> tmp6;
    TNode<InternalClass> tmp7;
    TNode<InternalClass> tmp8;
    ca_.Bind(&block4, &tmp6, &tmp7, &tmp8);
    ca_.Goto(&block2, tmp6, tmp7);
  }

  if (block3.is_used()) {
    TNode<Context> tmp9;
    TNode<InternalClass> tmp10;
    ca_.Bind(&block3, &tmp9, &tmp10);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block2.is_used()) {
    TNode<Context> tmp11;
    TNode<InternalClass> tmp12;
    ca_.Bind(&block2, &tmp11, &tmp12);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 779);
    TNode<IntPtrT> tmp13 = ca_.IntPtrConstant(InternalClass::kAOffset);
    USE(tmp13);
    TNode<Smi>tmp14 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp12, tmp13});
    TNode<Smi> tmp15;
    USE(tmp15);
    tmp15 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 6);
    TNode<BoolT> tmp16;
    USE(tmp16);
    tmp16 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{tmp14}, TNode<Smi>{tmp15});
    ca_.Branch(tmp16, &block6, &block7, tmp11, tmp12);
  }

  if (block7.is_used()) {
    TNode<Context> tmp17;
    TNode<InternalClass> tmp18;
    ca_.Bind(&block7, &tmp17, &tmp18);
    CodeStubAssembler(state_).FailAssert("Torque assert 'o.a == 6' failed", "test/torque/test-torque.tq", 779);
  }

  if (block6.is_used()) {
    TNode<Context> tmp19;
    TNode<InternalClass> tmp20;
    ca_.Bind(&block6, &tmp19, &tmp20);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 780);
    TNode<IntPtrT> tmp21 = ca_.IntPtrConstant(InternalClass::kBOffset);
    USE(tmp21);
    TNode<Number>tmp22 = CodeStubAssembler(state_).LoadReference<Number>(CodeStubAssembler::Reference{tmp20, tmp21});
    TNode<Number> tmp23;
    USE(tmp23);
    tmp23 = FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_160(state_, 5);
    TNode<BoolT> tmp24;
    USE(tmp24);
    tmp24 = IsNumberEqual_73(state_, TNode<Number>{tmp22}, TNode<Number>{tmp23});
    ca_.Branch(tmp24, &block8, &block9, tmp19, tmp20);
  }

  if (block9.is_used()) {
    TNode<Context> tmp25;
    TNode<InternalClass> tmp26;
    ca_.Bind(&block9, &tmp25, &tmp26);
    CodeStubAssembler(state_).FailAssert("Torque assert 'o.b == 5' failed", "test/torque/test-torque.tq", 780);
  }

  if (block8.is_used()) {
    TNode<Context> tmp27;
    TNode<InternalClass> tmp28;
    ca_.Bind(&block8, &tmp27, &tmp28);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 776);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 775);
    ca_.Goto(&block1, tmp27);
  }

  if (block1.is_used()) {
    TNode<Context> tmp29;
    ca_.Bind(&block1, &tmp29);
    ca_.Goto(&block10, tmp29);
  }

    TNode<Context> tmp30;
    ca_.Bind(&block10, &tmp30);
}

void TestConstInStructs_458(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Int32T, Object, Int32T, Object, Int32T, Object, Int32T, Int32T> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Int32T, Object, Int32T, Object, Int32T> block3(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Int32T, Object, Int32T, Object, Int32T> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Int32T, Object, Int32T, Object, Int32T, Object, Int32T, Object> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Int32T, Object, Int32T, Object, Int32T> block6(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Int32T, Object, Int32T, Object, Int32T> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 796);
    TNode<Oddball> tmp0;
    USE(tmp0);
    tmp0 = Null_63(state_);
    TNode<Int32T> tmp1;
    USE(tmp1);
    tmp1 = FromConstexpr7ATint3217ATconstexpr_int31_148(state_, 1);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 797);
    TNode<Oddball> tmp2;
    USE(tmp2);
    tmp2 = Null_63(state_);
    TNode<Int32T> tmp3;
    USE(tmp3);
    tmp3 = FromConstexpr7ATint3217ATconstexpr_int31_148(state_, 1);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 798);
    TNode<Oddball> tmp4;
    USE(tmp4);
    tmp4 = Undefined_64(state_);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 799);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 801);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 785);
    ca_.Goto(&block4, tmp0, tmp1, tmp4, tmp3, tmp0, tmp1, tmp0, tmp1, tmp1);
  }

  if (block4.is_used()) {
    TNode<Object> tmp5;
    TNode<Int32T> tmp6;
    TNode<Object> tmp7;
    TNode<Int32T> tmp8;
    TNode<Object> tmp9;
    TNode<Int32T> tmp10;
    TNode<Object> tmp11;
    TNode<Int32T> tmp12;
    TNode<Int32T> tmp13;
    ca_.Bind(&block4, &tmp5, &tmp6, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11, &tmp12, &tmp13);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 801);
    TNode<Int32T> tmp14;
    USE(tmp14);
    tmp14 = FromConstexpr7ATint3217ATconstexpr_int31_148(state_, 1);
    TNode<BoolT> tmp15;
    USE(tmp15);
    tmp15 = CodeStubAssembler(state_).Word32Equal(TNode<Int32T>{tmp13}, TNode<Int32T>{tmp14});
    ca_.Branch(tmp15, &block2, &block3, tmp5, tmp6, tmp7, tmp8, tmp9, tmp10);
  }

  if (block3.is_used()) {
    TNode<Object> tmp16;
    TNode<Int32T> tmp17;
    TNode<Object> tmp18;
    TNode<Int32T> tmp19;
    TNode<Object> tmp20;
    TNode<Int32T> tmp21;
    ca_.Bind(&block3, &tmp16, &tmp17, &tmp18, &tmp19, &tmp20, &tmp21);
    CodeStubAssembler(state_).FailAssert("Torque assert 'x.TestMethod1() == 1' failed", "test/torque/test-torque.tq", 801);
  }

  if (block2.is_used()) {
    TNode<Object> tmp22;
    TNode<Int32T> tmp23;
    TNode<Object> tmp24;
    TNode<Int32T> tmp25;
    TNode<Object> tmp26;
    TNode<Int32T> tmp27;
    ca_.Bind(&block2, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26, &tmp27);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 802);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 788);
    ca_.Goto(&block7, tmp22, tmp23, tmp24, tmp25, tmp26, tmp27, tmp22, tmp23, tmp22);
  }

  if (block7.is_used()) {
    TNode<Object> tmp28;
    TNode<Int32T> tmp29;
    TNode<Object> tmp30;
    TNode<Int32T> tmp31;
    TNode<Object> tmp32;
    TNode<Int32T> tmp33;
    TNode<Object> tmp34;
    TNode<Int32T> tmp35;
    TNode<Object> tmp36;
    ca_.Bind(&block7, &tmp28, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33, &tmp34, &tmp35, &tmp36);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 802);
    TNode<Oddball> tmp37;
    USE(tmp37);
    tmp37 = Null_63(state_);
    TNode<BoolT> tmp38;
    USE(tmp38);
    tmp38 = CodeStubAssembler(state_).TaggedEqual(TNode<Object>{tmp36}, TNode<HeapObject>{tmp37});
    ca_.Branch(tmp38, &block5, &block6, tmp28, tmp29, tmp30, tmp31, tmp32, tmp33);
  }

  if (block6.is_used()) {
    TNode<Object> tmp39;
    TNode<Int32T> tmp40;
    TNode<Object> tmp41;
    TNode<Int32T> tmp42;
    TNode<Object> tmp43;
    TNode<Int32T> tmp44;
    ca_.Bind(&block6, &tmp39, &tmp40, &tmp41, &tmp42, &tmp43, &tmp44);
    CodeStubAssembler(state_).FailAssert("Torque assert 'x.TestMethod2() == Null' failed", "test/torque/test-torque.tq", 802);
  }

  if (block5.is_used()) {
    TNode<Object> tmp45;
    TNode<Int32T> tmp46;
    TNode<Object> tmp47;
    TNode<Int32T> tmp48;
    TNode<Object> tmp49;
    TNode<Int32T> tmp50;
    ca_.Bind(&block5, &tmp45, &tmp46, &tmp47, &tmp48, &tmp49, &tmp50);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 795);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 794);
    ca_.Goto(&block1);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(&block8);
  }

    ca_.Bind(&block8);
}

TNode<Object> TestNewFixedArrayFromSpread_459(compiler::CodeAssemblerState* state_, TNode<Context> p_context) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi, Map, Smi, IntPtrT, IntPtrT, Smi, Int32T, Int32T, Int32T, Int32T> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi, Map, Smi, IntPtrT, IntPtrT, Smi, Int32T, Int32T, Int32T, Int32T, Int32T> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi, Map, Smi, IntPtrT, IntPtrT, Smi, Int32T, Int32T> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi, Map, Smi, IntPtrT, IntPtrT, Smi, Int32T, Int32T, Int32T> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi, Map, Smi, IntPtrT, IntPtrT, Smi, Int32T, Int32T, Int32T, IntPtrT, IntPtrT, IntPtrT> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi, Map, Smi, IntPtrT, IntPtrT, Smi, Int32T, Int32T, Int32T, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi, Map, Smi, IntPtrT, IntPtrT, Smi, Int32T, Int32T, Int32T, IntPtrT> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi, Map, Smi, IntPtrT, IntPtrT, Smi, Int32T, Int32T, Int32T, IntPtrT, IntPtrT> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi, Map, Smi, IntPtrT, IntPtrT, Smi, Int32T, IntPtrT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi, Map, Smi, IntPtrT, IntPtrT, Smi, Int32T, IntPtrT, FixedArray, HeapObject, IntPtrT, FixedArrayBase, IntPtrT, FixedArray, Smi, Smi, Smi, Smi> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi, Map, Smi, IntPtrT, IntPtrT, Smi, Int32T, IntPtrT, FixedArray, HeapObject, IntPtrT, FixedArrayBase, IntPtrT, FixedArray, Smi, Smi, Smi, Smi> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi, Map, Smi, IntPtrT, IntPtrT, Smi, Int32T, IntPtrT, FixedArray, HeapObject, IntPtrT, FixedArrayBase, IntPtrT, FixedArray, Smi, Smi, Smi, Smi, Smi, FixedArray> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi, Map, Smi, IntPtrT, IntPtrT, Smi, Int32T, IntPtrT, FixedArray, HeapObject, IntPtrT, FixedArrayBase, IntPtrT, FixedArray, Smi, Smi, Smi, Smi, Smi, FixedArray> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi, Map, Smi, IntPtrT, IntPtrT, Smi, Int32T, IntPtrT, FixedArray, HeapObject, IntPtrT, FixedArrayBase, IntPtrT, FixedArray, Smi, Smi, Smi, Smi, Smi, FixedArray, Object> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi, Map, Smi, IntPtrT, IntPtrT, Smi, Int32T, IntPtrT, FixedArray, HeapObject, IntPtrT, FixedArrayBase, IntPtrT, FixedArray, Smi, Smi, Smi, Smi> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi, Map, Smi, IntPtrT, IntPtrT, Smi, Int32T, IntPtrT, FixedArray, HeapObject, IntPtrT, FixedArrayBase, IntPtrT, FixedArray, Smi, Smi> block13(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi, Map, Smi, IntPtrT, IntPtrT, Smi, Int32T, IntPtrT, FixedArray, HeapObject, IntPtrT, FixedArrayBase, IntPtrT, FixedArray, Smi, Smi> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi, Map, Smi, IntPtrT, IntPtrT, Smi, Int32T, IntPtrT, FixedArray, HeapObject, IntPtrT, FixedArrayBase, IntPtrT, FixedArray, Smi, Smi> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 815);
    TNode<Smi> tmp1;
    USE(tmp1);
    tmp1 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 5);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 816);
    TNode<Map> tmp2;
    USE(tmp2);
    tmp2 = kFixedArrayMap_211(state_);
    TNode<IntPtrT> tmp3;
    USE(tmp3);
    tmp3 = CodeStubAssembler(state_).IntPtrConstant(((16)));
    TNode<Smi> tmp4;
    USE(tmp4);
    tmp4 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 5);
    TNode<Int32T> tmp5;
    USE(tmp5);
    tmp5 = FromConstexpr7ATint3217ATconstexpr_int31_148(state_, kTaggedSize);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 308);
    TNode<Int32T> tmp6;
    USE(tmp6);
    tmp6 = Convert7ATint325ATSmi_194(state_, TNode<Smi>{tmp4});
    ca_.SetSourcePosition("../../src/builtins/base.tq", 310);
    TNode<Int32T> tmp7;
    USE(tmp7);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp7 = CodeStubAssembler(state_).TryInt32Mul(TNode<Int32T>{tmp6}, TNode<Int32T>{tmp5}, &label0);
    ca_.Goto(&block5, tmp0, tmp1, tmp2, tmp1, tmp3, tmp3, tmp4, tmp5, tmp6, tmp6, tmp5, tmp7);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp0, tmp1, tmp2, tmp1, tmp3, tmp3, tmp4, tmp5, tmp6, tmp6, tmp5);
    }
  }

  if (block6.is_used()) {
    TNode<Context> tmp8;
    TNode<Smi> tmp9;
    TNode<Map> tmp10;
    TNode<Smi> tmp11;
    TNode<IntPtrT> tmp12;
    TNode<IntPtrT> tmp13;
    TNode<Smi> tmp14;
    TNode<Int32T> tmp15;
    TNode<Int32T> tmp16;
    TNode<Int32T> tmp17;
    TNode<Int32T> tmp18;
    ca_.Bind(&block6, &tmp8, &tmp9, &tmp10, &tmp11, &tmp12, &tmp13, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18);
    ca_.Goto(&block4, tmp8, tmp9, tmp10, tmp11, tmp12, tmp13, tmp14, tmp15, tmp16);
  }

  if (block5.is_used()) {
    TNode<Context> tmp19;
    TNode<Smi> tmp20;
    TNode<Map> tmp21;
    TNode<Smi> tmp22;
    TNode<IntPtrT> tmp23;
    TNode<IntPtrT> tmp24;
    TNode<Smi> tmp25;
    TNode<Int32T> tmp26;
    TNode<Int32T> tmp27;
    TNode<Int32T> tmp28;
    TNode<Int32T> tmp29;
    TNode<Int32T> tmp30;
    ca_.Bind(&block5, &tmp19, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26, &tmp27, &tmp28, &tmp29, &tmp30);
    ca_.Goto(&block3, tmp19, tmp20, tmp21, tmp22, tmp23, tmp24, tmp25, tmp26, tmp27, tmp30);
  }

  if (block4.is_used()) {
    TNode<Context> tmp31;
    TNode<Smi> tmp32;
    TNode<Map> tmp33;
    TNode<Smi> tmp34;
    TNode<IntPtrT> tmp35;
    TNode<IntPtrT> tmp36;
    TNode<Smi> tmp37;
    TNode<Int32T> tmp38;
    TNode<Int32T> tmp39;
    ca_.Bind(&block4, &tmp31, &tmp32, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block3.is_used()) {
    TNode<Context> tmp40;
    TNode<Smi> tmp41;
    TNode<Map> tmp42;
    TNode<Smi> tmp43;
    TNode<IntPtrT> tmp44;
    TNode<IntPtrT> tmp45;
    TNode<Smi> tmp46;
    TNode<Int32T> tmp47;
    TNode<Int32T> tmp48;
    TNode<Int32T> tmp49;
    ca_.Bind(&block3, &tmp40, &tmp41, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47, &tmp48, &tmp49);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 309);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 311);
    TNode<IntPtrT> tmp50;
    USE(tmp50);
    tmp50 = Convert8ATintptr7ATint32_176(state_, TNode<Int32T>{tmp49});
    ca_.SetSourcePosition("../../src/builtins/base.tq", 312);
    TNode<IntPtrT> tmp51;
    USE(tmp51);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp51 = CodeStubAssembler(state_).TryIntPtrAdd(TNode<IntPtrT>{tmp45}, TNode<IntPtrT>{tmp50}, &label0);
    ca_.Goto(&block9, tmp40, tmp41, tmp42, tmp43, tmp44, tmp45, tmp46, tmp47, tmp48, tmp49, tmp50, tmp45, tmp50, tmp51);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block10, tmp40, tmp41, tmp42, tmp43, tmp44, tmp45, tmp46, tmp47, tmp48, tmp49, tmp50, tmp45, tmp50);
    }
  }

  if (block10.is_used()) {
    TNode<Context> tmp52;
    TNode<Smi> tmp53;
    TNode<Map> tmp54;
    TNode<Smi> tmp55;
    TNode<IntPtrT> tmp56;
    TNode<IntPtrT> tmp57;
    TNode<Smi> tmp58;
    TNode<Int32T> tmp59;
    TNode<Int32T> tmp60;
    TNode<Int32T> tmp61;
    TNode<IntPtrT> tmp62;
    TNode<IntPtrT> tmp63;
    TNode<IntPtrT> tmp64;
    ca_.Bind(&block10, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64);
    ca_.Goto(&block8, tmp52, tmp53, tmp54, tmp55, tmp56, tmp57, tmp58, tmp59, tmp60, tmp61, tmp62);
  }

  if (block9.is_used()) {
    TNode<Context> tmp65;
    TNode<Smi> tmp66;
    TNode<Map> tmp67;
    TNode<Smi> tmp68;
    TNode<IntPtrT> tmp69;
    TNode<IntPtrT> tmp70;
    TNode<Smi> tmp71;
    TNode<Int32T> tmp72;
    TNode<Int32T> tmp73;
    TNode<Int32T> tmp74;
    TNode<IntPtrT> tmp75;
    TNode<IntPtrT> tmp76;
    TNode<IntPtrT> tmp77;
    TNode<IntPtrT> tmp78;
    ca_.Bind(&block9, &tmp65, &tmp66, &tmp67, &tmp68, &tmp69, &tmp70, &tmp71, &tmp72, &tmp73, &tmp74, &tmp75, &tmp76, &tmp77, &tmp78);
    ca_.Goto(&block7, tmp65, tmp66, tmp67, tmp68, tmp69, tmp70, tmp71, tmp72, tmp73, tmp74, tmp75, tmp78);
  }

  if (block8.is_used()) {
    TNode<Context> tmp79;
    TNode<Smi> tmp80;
    TNode<Map> tmp81;
    TNode<Smi> tmp82;
    TNode<IntPtrT> tmp83;
    TNode<IntPtrT> tmp84;
    TNode<Smi> tmp85;
    TNode<Int32T> tmp86;
    TNode<Int32T> tmp87;
    TNode<Int32T> tmp88;
    TNode<IntPtrT> tmp89;
    ca_.Bind(&block8, &tmp79, &tmp80, &tmp81, &tmp82, &tmp83, &tmp84, &tmp85, &tmp86, &tmp87, &tmp88, &tmp89);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block7.is_used()) {
    TNode<Context> tmp90;
    TNode<Smi> tmp91;
    TNode<Map> tmp92;
    TNode<Smi> tmp93;
    TNode<IntPtrT> tmp94;
    TNode<IntPtrT> tmp95;
    TNode<Smi> tmp96;
    TNode<Int32T> tmp97;
    TNode<Int32T> tmp98;
    TNode<Int32T> tmp99;
    TNode<IntPtrT> tmp100;
    TNode<IntPtrT> tmp101;
    ca_.Bind(&block7, &tmp90, &tmp91, &tmp92, &tmp93, &tmp94, &tmp95, &tmp96, &tmp97, &tmp98, &tmp99, &tmp100, &tmp101);
    ca_.Goto(&block2, tmp90, tmp91, tmp92, tmp93, tmp94, tmp95, tmp96, tmp97, tmp101);
  }

  if (block2.is_used()) {
    TNode<Context> tmp102;
    TNode<Smi> tmp103;
    TNode<Map> tmp104;
    TNode<Smi> tmp105;
    TNode<IntPtrT> tmp106;
    TNode<IntPtrT> tmp107;
    TNode<Smi> tmp108;
    TNode<Int32T> tmp109;
    TNode<IntPtrT> tmp110;
    ca_.Bind(&block2, &tmp102, &tmp103, &tmp104, &tmp105, &tmp106, &tmp107, &tmp108, &tmp109, &tmp110);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 816);
    TNode<FixedArray> tmp111;
    USE(tmp111);
    tmp111 = ca_.UncheckedCast<FixedArray>(CodeStubAssembler(state_).Allocate(TNode<IntPtrT>{tmp110}));
    CodeStubAssembler(state_).InitializeFieldsWithRoot(tmp111, CodeStubAssembler(state_).IntPtrConstant(16), TNode<IntPtrT>{tmp110}, RootIndex::kUndefinedValue);
    TNode<IntPtrT> tmp112 = ca_.IntPtrConstant(HeapObject::kMapOffset);
    USE(tmp112);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp111, tmp112}, tmp104);
    TNode<IntPtrT> tmp113 = ca_.IntPtrConstant(FixedArrayBase::kLengthOffset);
    USE(tmp113);
    TNode<Smi> tmp114;
    USE(tmp114);
    tmp114 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 5);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp111, tmp113}, tmp114);
    TNode<Smi> tmp115;
    USE(tmp115);
    tmp115 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 5);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 319);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 320);
    TNode<Smi> tmp116;
    USE(tmp116);
    tmp116 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 0);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 321);
    ca_.Goto(&block16, tmp102, tmp103, tmp104, tmp105, tmp106, tmp107, tmp108, tmp109, tmp110, tmp111, tmp111, tmp112, tmp111, tmp113, tmp111, tmp115, tmp105, tmp105, tmp116);
  }

  if (block16.is_used()) {
    TNode<Context> tmp117;
    TNode<Smi> tmp118;
    TNode<Map> tmp119;
    TNode<Smi> tmp120;
    TNode<IntPtrT> tmp121;
    TNode<IntPtrT> tmp122;
    TNode<Smi> tmp123;
    TNode<Int32T> tmp124;
    TNode<IntPtrT> tmp125;
    TNode<FixedArray> tmp126;
    TNode<HeapObject> tmp127;
    TNode<IntPtrT> tmp128;
    TNode<FixedArrayBase> tmp129;
    TNode<IntPtrT> tmp130;
    TNode<FixedArray> tmp131;
    TNode<Smi> tmp132;
    TNode<Smi> tmp133;
    TNode<Smi> tmp134;
    TNode<Smi> tmp135;
    ca_.Bind(&block16, &tmp117, &tmp118, &tmp119, &tmp120, &tmp121, &tmp122, &tmp123, &tmp124, &tmp125, &tmp126, &tmp127, &tmp128, &tmp129, &tmp130, &tmp131, &tmp132, &tmp133, &tmp134, &tmp135);
    TNode<BoolT> tmp136;
    USE(tmp136);
    tmp136 = CodeStubAssembler(state_).SmiLessThan(TNode<Smi>{tmp135}, TNode<Smi>{tmp132});
    ca_.Branch(tmp136, &block14, &block15, tmp117, tmp118, tmp119, tmp120, tmp121, tmp122, tmp123, tmp124, tmp125, tmp126, tmp127, tmp128, tmp129, tmp130, tmp131, tmp132, tmp133, tmp134, tmp135);
  }

  if (block14.is_used()) {
    TNode<Context> tmp137;
    TNode<Smi> tmp138;
    TNode<Map> tmp139;
    TNode<Smi> tmp140;
    TNode<IntPtrT> tmp141;
    TNode<IntPtrT> tmp142;
    TNode<Smi> tmp143;
    TNode<Int32T> tmp144;
    TNode<IntPtrT> tmp145;
    TNode<FixedArray> tmp146;
    TNode<HeapObject> tmp147;
    TNode<IntPtrT> tmp148;
    TNode<FixedArrayBase> tmp149;
    TNode<IntPtrT> tmp150;
    TNode<FixedArray> tmp151;
    TNode<Smi> tmp152;
    TNode<Smi> tmp153;
    TNode<Smi> tmp154;
    TNode<Smi> tmp155;
    ca_.Bind(&block14, &tmp137, &tmp138, &tmp139, &tmp140, &tmp141, &tmp142, &tmp143, &tmp144, &tmp145, &tmp146, &tmp147, &tmp148, &tmp149, &tmp150, &tmp151, &tmp152, &tmp153, &tmp154, &tmp155);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 326);
    TNode<Smi> tmp156;
    USE(tmp156);
    tmp156 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 1);
    TNode<Smi> tmp157;
    USE(tmp157);
    tmp157 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{tmp155}, TNode<Smi>{tmp156});
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 807);
    TNode<Smi> tmp158;
    USE(tmp158);
    tmp158 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 1);
    TNode<Smi> tmp159;
    USE(tmp159);
    tmp159 = CodeStubAssembler(state_).SmiSub(TNode<Smi>{tmp154}, TNode<Smi>{tmp158});
    TNode<Smi> tmp160;
    USE(tmp160);
    tmp160 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 0);
    TNode<BoolT> tmp161;
    USE(tmp161);
    tmp161 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{tmp154}, TNode<Smi>{tmp160});
    ca_.Branch(tmp161, &block18, &block19, tmp137, tmp138, tmp139, tmp140, tmp141, tmp142, tmp143, tmp144, tmp145, tmp146, tmp147, tmp148, tmp149, tmp150, tmp151, tmp152, tmp153, tmp159, tmp157, tmp155, tmp151);
  }

  if (block18.is_used()) {
    TNode<Context> tmp162;
    TNode<Smi> tmp163;
    TNode<Map> tmp164;
    TNode<Smi> tmp165;
    TNode<IntPtrT> tmp166;
    TNode<IntPtrT> tmp167;
    TNode<Smi> tmp168;
    TNode<Int32T> tmp169;
    TNode<IntPtrT> tmp170;
    TNode<FixedArray> tmp171;
    TNode<HeapObject> tmp172;
    TNode<IntPtrT> tmp173;
    TNode<FixedArrayBase> tmp174;
    TNode<IntPtrT> tmp175;
    TNode<FixedArray> tmp176;
    TNode<Smi> tmp177;
    TNode<Smi> tmp178;
    TNode<Smi> tmp179;
    TNode<Smi> tmp180;
    TNode<Smi> tmp181;
    TNode<FixedArray> tmp182;
    ca_.Bind(&block18, &tmp162, &tmp163, &tmp164, &tmp165, &tmp166, &tmp167, &tmp168, &tmp169, &tmp170, &tmp171, &tmp172, &tmp173, &tmp174, &tmp175, &tmp176, &tmp177, &tmp178, &tmp179, &tmp180, &tmp181, &tmp182);
    ca_.Goto(&block13, tmp162, tmp163, tmp164, tmp165, tmp166, tmp167, tmp168, tmp169, tmp170, tmp171, tmp172, tmp173, tmp174, tmp175, tmp176, tmp177, tmp178);
  }

  if (block19.is_used()) {
    TNode<Context> tmp183;
    TNode<Smi> tmp184;
    TNode<Map> tmp185;
    TNode<Smi> tmp186;
    TNode<IntPtrT> tmp187;
    TNode<IntPtrT> tmp188;
    TNode<Smi> tmp189;
    TNode<Int32T> tmp190;
    TNode<IntPtrT> tmp191;
    TNode<FixedArray> tmp192;
    TNode<HeapObject> tmp193;
    TNode<IntPtrT> tmp194;
    TNode<FixedArrayBase> tmp195;
    TNode<IntPtrT> tmp196;
    TNode<FixedArray> tmp197;
    TNode<Smi> tmp198;
    TNode<Smi> tmp199;
    TNode<Smi> tmp200;
    TNode<Smi> tmp201;
    TNode<Smi> tmp202;
    TNode<FixedArray> tmp203;
    ca_.Bind(&block19, &tmp183, &tmp184, &tmp185, &tmp186, &tmp187, &tmp188, &tmp189, &tmp190, &tmp191, &tmp192, &tmp193, &tmp194, &tmp195, &tmp196, &tmp197, &tmp198, &tmp199, &tmp200, &tmp201, &tmp202, &tmp203);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 808);
    TNode<Oddball> tmp204;
    USE(tmp204);
    tmp204 = TheHole_62(state_);
    ca_.Goto(&block17, tmp183, tmp184, tmp185, tmp186, tmp187, tmp188, tmp189, tmp190, tmp191, tmp192, tmp193, tmp194, tmp195, tmp196, tmp197, tmp198, tmp199, tmp200, tmp201, tmp202, tmp203, tmp204);
  }

  if (block17.is_used()) {
    TNode<Context> tmp205;
    TNode<Smi> tmp206;
    TNode<Map> tmp207;
    TNode<Smi> tmp208;
    TNode<IntPtrT> tmp209;
    TNode<IntPtrT> tmp210;
    TNode<Smi> tmp211;
    TNode<Int32T> tmp212;
    TNode<IntPtrT> tmp213;
    TNode<FixedArray> tmp214;
    TNode<HeapObject> tmp215;
    TNode<IntPtrT> tmp216;
    TNode<FixedArrayBase> tmp217;
    TNode<IntPtrT> tmp218;
    TNode<FixedArray> tmp219;
    TNode<Smi> tmp220;
    TNode<Smi> tmp221;
    TNode<Smi> tmp222;
    TNode<Smi> tmp223;
    TNode<Smi> tmp224;
    TNode<FixedArray> tmp225;
    TNode<Object> tmp226;
    ca_.Bind(&block17, &tmp205, &tmp206, &tmp207, &tmp208, &tmp209, &tmp210, &tmp211, &tmp212, &tmp213, &tmp214, &tmp215, &tmp216, &tmp217, &tmp218, &tmp219, &tmp220, &tmp221, &tmp222, &tmp223, &tmp224, &tmp225, &tmp226);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 326);
    StoreFixedArrayDirect_217(state_, TNode<FixedArray>{tmp225}, TNode<Smi>{tmp224}, TNode<Object>{tmp226});
    ca_.SetSourcePosition("../../src/builtins/base.tq", 321);
    ca_.Goto(&block16, tmp205, tmp206, tmp207, tmp208, tmp209, tmp210, tmp211, tmp212, tmp213, tmp214, tmp215, tmp216, tmp217, tmp218, tmp219, tmp220, tmp221, tmp222, tmp223);
  }

  if (block15.is_used()) {
    TNode<Context> tmp227;
    TNode<Smi> tmp228;
    TNode<Map> tmp229;
    TNode<Smi> tmp230;
    TNode<IntPtrT> tmp231;
    TNode<IntPtrT> tmp232;
    TNode<Smi> tmp233;
    TNode<Int32T> tmp234;
    TNode<IntPtrT> tmp235;
    TNode<FixedArray> tmp236;
    TNode<HeapObject> tmp237;
    TNode<IntPtrT> tmp238;
    TNode<FixedArrayBase> tmp239;
    TNode<IntPtrT> tmp240;
    TNode<FixedArray> tmp241;
    TNode<Smi> tmp242;
    TNode<Smi> tmp243;
    TNode<Smi> tmp244;
    TNode<Smi> tmp245;
    ca_.Bind(&block15, &tmp227, &tmp228, &tmp229, &tmp230, &tmp231, &tmp232, &tmp233, &tmp234, &tmp235, &tmp236, &tmp237, &tmp238, &tmp239, &tmp240, &tmp241, &tmp242, &tmp243, &tmp244, &tmp245);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 318);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 329);
    ca_.Goto(&block12, tmp227, tmp228, tmp229, tmp230, tmp231, tmp232, tmp233, tmp234, tmp235, tmp236, tmp237, tmp238, tmp239, tmp240, tmp241, tmp242, tmp243);
  }

  if (block13.is_used()) {
    TNode<Context> tmp246;
    TNode<Smi> tmp247;
    TNode<Map> tmp248;
    TNode<Smi> tmp249;
    TNode<IntPtrT> tmp250;
    TNode<IntPtrT> tmp251;
    TNode<Smi> tmp252;
    TNode<Int32T> tmp253;
    TNode<IntPtrT> tmp254;
    TNode<FixedArray> tmp255;
    TNode<HeapObject> tmp256;
    TNode<IntPtrT> tmp257;
    TNode<FixedArrayBase> tmp258;
    TNode<IntPtrT> tmp259;
    TNode<FixedArray> tmp260;
    TNode<Smi> tmp261;
    TNode<Smi> tmp262;
    ca_.Bind(&block13, &tmp246, &tmp247, &tmp248, &tmp249, &tmp250, &tmp251, &tmp252, &tmp253, &tmp254, &tmp255, &tmp256, &tmp257, &tmp258, &tmp259, &tmp260, &tmp261, &tmp262);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 330);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block12.is_used()) {
    TNode<Context> tmp263;
    TNode<Smi> tmp264;
    TNode<Map> tmp265;
    TNode<Smi> tmp266;
    TNode<IntPtrT> tmp267;
    TNode<IntPtrT> tmp268;
    TNode<Smi> tmp269;
    TNode<Int32T> tmp270;
    TNode<IntPtrT> tmp271;
    TNode<FixedArray> tmp272;
    TNode<HeapObject> tmp273;
    TNode<IntPtrT> tmp274;
    TNode<FixedArrayBase> tmp275;
    TNode<IntPtrT> tmp276;
    TNode<FixedArray> tmp277;
    TNode<Smi> tmp278;
    TNode<Smi> tmp279;
    ca_.Bind(&block12, &tmp263, &tmp264, &tmp265, &tmp266, &tmp267, &tmp268, &tmp269, &tmp270, &tmp271, &tmp272, &tmp273, &tmp274, &tmp275, &tmp276, &tmp277, &tmp278, &tmp279);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 816);
    ca_.Goto(&block11, tmp263, tmp264, tmp265, tmp266, tmp267, tmp268, tmp269, tmp270, tmp271, tmp272, tmp273, tmp274, tmp275, tmp276, tmp277, tmp278, tmp279);
  }

  if (block11.is_used()) {
    TNode<Context> tmp280;
    TNode<Smi> tmp281;
    TNode<Map> tmp282;
    TNode<Smi> tmp283;
    TNode<IntPtrT> tmp284;
    TNode<IntPtrT> tmp285;
    TNode<Smi> tmp286;
    TNode<Int32T> tmp287;
    TNode<IntPtrT> tmp288;
    TNode<FixedArray> tmp289;
    TNode<HeapObject> tmp290;
    TNode<IntPtrT> tmp291;
    TNode<FixedArrayBase> tmp292;
    TNode<IntPtrT> tmp293;
    TNode<FixedArray> tmp294;
    TNode<Smi> tmp295;
    TNode<Smi> tmp296;
    ca_.Bind(&block11, &tmp280, &tmp281, &tmp282, &tmp283, &tmp284, &tmp285, &tmp286, &tmp287, &tmp288, &tmp289, &tmp290, &tmp291, &tmp292, &tmp293, &tmp294, &tmp295, &tmp296);
    ca_.Goto(&block1, tmp280, tmp289);
  }

  if (block1.is_used()) {
    TNode<Context> tmp297;
    TNode<Object> tmp298;
    ca_.Bind(&block1, &tmp297, &tmp298);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 813);
    ca_.Goto(&block20, tmp297, tmp298);
  }

    TNode<Context> tmp299;
    TNode<Object> tmp300;
    ca_.Bind(&block20, &tmp299, &tmp300);
  return TNode<Object>{tmp300};
}

void TestReferences_460(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<SmiPair, HeapObject, IntPtrT> block3(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<SmiPair, HeapObject, IntPtrT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<SmiPair, HeapObject, IntPtrT> block5(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<SmiPair, HeapObject, IntPtrT> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 835);
    TNode<Map> tmp0;
    USE(tmp0);
    tmp0 = CodeStubAssembler(state_).GetStructMap(SMI_PAIR_TYPE);
    TNode<IntPtrT> tmp1;
    USE(tmp1);
    tmp1 = CodeStubAssembler(state_).IntPtrConstant(((24)));
    TNode<SmiPair> tmp2;
    USE(tmp2);
    tmp2 = ca_.UncheckedCast<SmiPair>(CodeStubAssembler(state_).Allocate(TNode<IntPtrT>{tmp1}));
    CodeStubAssembler(state_).InitializeFieldsWithRoot(tmp2, CodeStubAssembler(state_).IntPtrConstant(24), TNode<IntPtrT>{tmp1}, RootIndex::kUndefinedValue);
    TNode<IntPtrT> tmp3 = ca_.IntPtrConstant(HeapObject::kMapOffset);
    USE(tmp3);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp2, tmp3}, tmp0);
    TNode<IntPtrT> tmp4 = ca_.IntPtrConstant(SmiPair::kAOffset);
    USE(tmp4);
    TNode<Smi> tmp5;
    USE(tmp5);
    tmp5 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 7);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp2, tmp4}, tmp5);
    TNode<IntPtrT> tmp6 = ca_.IntPtrConstant(SmiPair::kBOffset);
    USE(tmp6);
    TNode<Smi> tmp7;
    USE(tmp7);
    tmp7 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 2);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp2, tmp6}, tmp7);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 836);
    TNode<IntPtrT> tmp8 = ca_.IntPtrConstant(SmiPair::kAOffset);
    USE(tmp8);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 837);
    TNode<Smi>tmp9 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp2, tmp8});
    TNode<Smi> tmp10;
    USE(tmp10);
    tmp10 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 3);
    TNode<Smi> tmp11;
    USE(tmp11);
    tmp11 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{tmp10}, TNode<Smi>{tmp9});
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp2, tmp8}, tmp11);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 838);
    TNode<Smi>tmp12 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp2, tmp8});
    TNode<Smi> tmp13;
    USE(tmp13);
    tmp13 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 1);
    TNode<Smi> tmp14;
    USE(tmp14);
    tmp14 = CodeStubAssembler(state_).SmiSub(TNode<Smi>{tmp12}, TNode<Smi>{tmp13});
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp2, tmp8}, tmp14);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 839);
    TNode<IntPtrT> tmp15 = ca_.IntPtrConstant(SmiPair::kBOffset);
    USE(tmp15);
    TNode<HeapObject> tmp16;
    USE(tmp16);
    TNode<IntPtrT> tmp17;
    USE(tmp17);
    std::tie(tmp16, tmp17) = _method_SmiPair_GetA(state_, TNode<SmiPair>{tmp2}).Flatten();
    Swap5ATSmi_1512(state_, TorqueStructReference5ATSmi{TNode<HeapObject>{tmp2}, TNode<IntPtrT>{tmp15}, TorqueStructUnsafe{}}, TorqueStructReference5ATSmi{TNode<HeapObject>{tmp16}, TNode<IntPtrT>{tmp17}, TorqueStructUnsafe{}});
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 840);
    TNode<IntPtrT> tmp18 = ca_.IntPtrConstant(SmiPair::kAOffset);
    USE(tmp18);
    TNode<Smi>tmp19 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp2, tmp18});
    TNode<Smi> tmp20;
    USE(tmp20);
    tmp20 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 2);
    TNode<BoolT> tmp21;
    USE(tmp21);
    tmp21 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{tmp19}, TNode<Smi>{tmp20});
    ca_.Branch(tmp21, &block2, &block3, tmp2, tmp2, tmp8);
  }

  if (block3.is_used()) {
    TNode<SmiPair> tmp22;
    TNode<HeapObject> tmp23;
    TNode<IntPtrT> tmp24;
    ca_.Bind(&block3, &tmp22, &tmp23, &tmp24);
    CodeStubAssembler(state_).FailAssert("Torque assert 'array.a == 2' failed", "test/torque/test-torque.tq", 840);
  }

  if (block2.is_used()) {
    TNode<SmiPair> tmp25;
    TNode<HeapObject> tmp26;
    TNode<IntPtrT> tmp27;
    ca_.Bind(&block2, &tmp25, &tmp26, &tmp27);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 841);
    TNode<IntPtrT> tmp28 = ca_.IntPtrConstant(SmiPair::kBOffset);
    USE(tmp28);
    TNode<Smi>tmp29 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp25, tmp28});
    TNode<Smi> tmp30;
    USE(tmp30);
    tmp30 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 9);
    TNode<BoolT> tmp31;
    USE(tmp31);
    tmp31 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{tmp29}, TNode<Smi>{tmp30});
    ca_.Branch(tmp31, &block4, &block5, tmp25, tmp26, tmp27);
  }

  if (block5.is_used()) {
    TNode<SmiPair> tmp32;
    TNode<HeapObject> tmp33;
    TNode<IntPtrT> tmp34;
    ca_.Bind(&block5, &tmp32, &tmp33, &tmp34);
    CodeStubAssembler(state_).FailAssert("Torque assert 'array.b == 9' failed", "test/torque/test-torque.tq", 841);
  }

  if (block4.is_used()) {
    TNode<SmiPair> tmp35;
    TNode<HeapObject> tmp36;
    TNode<IntPtrT> tmp37;
    ca_.Bind(&block4, &tmp35, &tmp36, &tmp37);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 834);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 833);
    ca_.Goto(&block1);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(&block6);
  }

    ca_.Bind(&block6);
}

void TestSlices_461(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Map, Smi, IntPtrT, IntPtrT, Smi, Int32T, Int32T, Int32T, Int32T> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Map, Smi, IntPtrT, IntPtrT, Smi, Int32T, Int32T, Int32T, Int32T, Int32T> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Map, Smi, IntPtrT, IntPtrT, Smi, Int32T, Int32T> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Map, Smi, IntPtrT, IntPtrT, Smi, Int32T, Int32T, Int32T> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Map, Smi, IntPtrT, IntPtrT, Smi, Int32T, Int32T, Int32T, IntPtrT, IntPtrT, IntPtrT> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Map, Smi, IntPtrT, IntPtrT, Smi, Int32T, Int32T, Int32T, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Map, Smi, IntPtrT, IntPtrT, Smi, Int32T, Int32T, Int32T, IntPtrT> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Map, Smi, IntPtrT, IntPtrT, Smi, Int32T, Int32T, Int32T, IntPtrT, IntPtrT> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Map, Smi, IntPtrT, IntPtrT, Smi, Int32T, IntPtrT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Map, Smi, IntPtrT, IntPtrT, Smi, Int32T, IntPtrT, FixedArray, HeapObject, IntPtrT, FixedArrayBase, IntPtrT, FixedArray, Smi, Smi, Smi, Smi> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Map, Smi, IntPtrT, IntPtrT, Smi, Int32T, IntPtrT, FixedArray, HeapObject, IntPtrT, FixedArrayBase, IntPtrT, FixedArray, Smi, Smi, Smi, Smi> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Map, Smi, IntPtrT, IntPtrT, Smi, Int32T, IntPtrT, FixedArray, HeapObject, IntPtrT, FixedArrayBase, IntPtrT, FixedArray, Smi, Smi, Smi, Smi, Smi, FixedArray> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Map, Smi, IntPtrT, IntPtrT, Smi, Int32T, IntPtrT, FixedArray, HeapObject, IntPtrT, FixedArrayBase, IntPtrT, FixedArray, Smi, Smi, Smi, Smi, Smi, FixedArray> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Map, Smi, IntPtrT, IntPtrT, Smi, Int32T, IntPtrT, FixedArray, HeapObject, IntPtrT, FixedArrayBase, IntPtrT, FixedArray, Smi, Smi, Smi, Smi, Smi, FixedArray, Object> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Map, Smi, IntPtrT, IntPtrT, Smi, Int32T, IntPtrT, FixedArray, HeapObject, IntPtrT, FixedArrayBase, IntPtrT, FixedArray, Smi, Smi, Smi, Smi> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Map, Smi, IntPtrT, IntPtrT, Smi, Int32T, IntPtrT, FixedArray, HeapObject, IntPtrT, FixedArrayBase, IntPtrT, FixedArray, Smi, Smi> block13(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Map, Smi, IntPtrT, IntPtrT, Smi, Int32T, IntPtrT, FixedArray, HeapObject, IntPtrT, FixedArrayBase, IntPtrT, FixedArray, Smi, Smi> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Map, Smi, IntPtrT, IntPtrT, Smi, Int32T, IntPtrT, FixedArray, HeapObject, IntPtrT, FixedArrayBase, IntPtrT, FixedArray, Smi, Smi> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, FixedArray> block21(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, FixedArray> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, FixedArray, Smi, FixedArray, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block26(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, FixedArray, Smi, FixedArray, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block27(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, FixedArray, Smi, FixedArray, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT> block25(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, FixedArray, Smi, FixedArray, IntPtrT, IntPtrT, IntPtrT> block24(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, FixedArray, Smi, FixedArray, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, FixedArray, Smi, FixedArray, IntPtrT, IntPtrT, HeapObject, IntPtrT> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, FixedArray, Smi, FixedArray, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block33(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, FixedArray, Smi, FixedArray, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block34(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, FixedArray, Smi, FixedArray, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT> block32(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, FixedArray, Smi, FixedArray, IntPtrT, IntPtrT, IntPtrT> block31(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, FixedArray, Smi, FixedArray, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT> block30(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, FixedArray, Smi, FixedArray, IntPtrT, IntPtrT, HeapObject, IntPtrT> block29(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, FixedArray, Smi, HeapObject, IntPtrT> block37(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, FixedArray, Smi, HeapObject, IntPtrT> block36(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, FixedArray, Smi, HeapObject, IntPtrT, HeapObject, IntPtrT, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT> block41(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, FixedArray, Smi, HeapObject, IntPtrT, HeapObject, IntPtrT, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT> block42(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, FixedArray, Smi, HeapObject, IntPtrT, HeapObject, IntPtrT, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT> block40(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, FixedArray, Smi, HeapObject, IntPtrT, HeapObject, IntPtrT, IntPtrT> block39(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, FixedArray, Smi, HeapObject, IntPtrT, HeapObject, IntPtrT, IntPtrT, HeapObject, IntPtrT> block38(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, FixedArray, Smi, HeapObject, IntPtrT, HeapObject, IntPtrT, IntPtrT, HeapObject, IntPtrT> block45(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, FixedArray, Smi, HeapObject, IntPtrT, HeapObject, IntPtrT, IntPtrT, HeapObject, IntPtrT> block44(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, FixedArray, Smi, HeapObject, IntPtrT, HeapObject, IntPtrT, IntPtrT, HeapObject, IntPtrT, Smi, FixedArray, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block52(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, FixedArray, Smi, HeapObject, IntPtrT, HeapObject, IntPtrT, IntPtrT, HeapObject, IntPtrT, Smi, FixedArray, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block53(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, FixedArray, Smi, HeapObject, IntPtrT, HeapObject, IntPtrT, IntPtrT, HeapObject, IntPtrT, Smi, FixedArray, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT> block51(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, FixedArray, Smi, HeapObject, IntPtrT, HeapObject, IntPtrT, IntPtrT, HeapObject, IntPtrT, Smi, FixedArray, IntPtrT, IntPtrT, IntPtrT> block50(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, FixedArray, Smi, HeapObject, IntPtrT, HeapObject, IntPtrT, IntPtrT, HeapObject, IntPtrT, Smi, FixedArray, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT> block49(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, FixedArray, Smi, HeapObject, IntPtrT, HeapObject, IntPtrT, IntPtrT, HeapObject, IntPtrT, Smi, FixedArray, IntPtrT, IntPtrT, HeapObject, IntPtrT> block48(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, FixedArray, Smi, HeapObject, IntPtrT, HeapObject, IntPtrT, IntPtrT, HeapObject, IntPtrT, Smi> block47(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, FixedArray, Smi, HeapObject, IntPtrT, HeapObject, IntPtrT, IntPtrT, HeapObject, IntPtrT, Smi> block46(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block55(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 846);
    TNode<Smi> tmp0;
    USE(tmp0);
    tmp0 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 3);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 847);
    TNode<Map> tmp1;
    USE(tmp1);
    tmp1 = kFixedArrayMap_211(state_);
    TNode<IntPtrT> tmp2;
    USE(tmp2);
    tmp2 = CodeStubAssembler(state_).IntPtrConstant(((16)));
    TNode<Smi> tmp3;
    USE(tmp3);
    tmp3 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 3);
    TNode<Int32T> tmp4;
    USE(tmp4);
    tmp4 = FromConstexpr7ATint3217ATconstexpr_int31_148(state_, kTaggedSize);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 308);
    TNode<Int32T> tmp5;
    USE(tmp5);
    tmp5 = Convert7ATint325ATSmi_194(state_, TNode<Smi>{tmp3});
    ca_.SetSourcePosition("../../src/builtins/base.tq", 310);
    TNode<Int32T> tmp6;
    USE(tmp6);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp6 = CodeStubAssembler(state_).TryInt32Mul(TNode<Int32T>{tmp5}, TNode<Int32T>{tmp4}, &label0);
    ca_.Goto(&block5, tmp0, tmp1, tmp0, tmp2, tmp2, tmp3, tmp4, tmp5, tmp5, tmp4, tmp6);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp0, tmp1, tmp0, tmp2, tmp2, tmp3, tmp4, tmp5, tmp5, tmp4);
    }
  }

  if (block6.is_used()) {
    TNode<Smi> tmp7;
    TNode<Map> tmp8;
    TNode<Smi> tmp9;
    TNode<IntPtrT> tmp10;
    TNode<IntPtrT> tmp11;
    TNode<Smi> tmp12;
    TNode<Int32T> tmp13;
    TNode<Int32T> tmp14;
    TNode<Int32T> tmp15;
    TNode<Int32T> tmp16;
    ca_.Bind(&block6, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11, &tmp12, &tmp13, &tmp14, &tmp15, &tmp16);
    ca_.Goto(&block4, tmp7, tmp8, tmp9, tmp10, tmp11, tmp12, tmp13, tmp14);
  }

  if (block5.is_used()) {
    TNode<Smi> tmp17;
    TNode<Map> tmp18;
    TNode<Smi> tmp19;
    TNode<IntPtrT> tmp20;
    TNode<IntPtrT> tmp21;
    TNode<Smi> tmp22;
    TNode<Int32T> tmp23;
    TNode<Int32T> tmp24;
    TNode<Int32T> tmp25;
    TNode<Int32T> tmp26;
    TNode<Int32T> tmp27;
    ca_.Bind(&block5, &tmp17, &tmp18, &tmp19, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26, &tmp27);
    ca_.Goto(&block3, tmp17, tmp18, tmp19, tmp20, tmp21, tmp22, tmp23, tmp24, tmp27);
  }

  if (block4.is_used()) {
    TNode<Smi> tmp28;
    TNode<Map> tmp29;
    TNode<Smi> tmp30;
    TNode<IntPtrT> tmp31;
    TNode<IntPtrT> tmp32;
    TNode<Smi> tmp33;
    TNode<Int32T> tmp34;
    TNode<Int32T> tmp35;
    ca_.Bind(&block4, &tmp28, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33, &tmp34, &tmp35);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block3.is_used()) {
    TNode<Smi> tmp36;
    TNode<Map> tmp37;
    TNode<Smi> tmp38;
    TNode<IntPtrT> tmp39;
    TNode<IntPtrT> tmp40;
    TNode<Smi> tmp41;
    TNode<Int32T> tmp42;
    TNode<Int32T> tmp43;
    TNode<Int32T> tmp44;
    ca_.Bind(&block3, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40, &tmp41, &tmp42, &tmp43, &tmp44);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 309);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 311);
    TNode<IntPtrT> tmp45;
    USE(tmp45);
    tmp45 = Convert8ATintptr7ATint32_176(state_, TNode<Int32T>{tmp44});
    ca_.SetSourcePosition("../../src/builtins/base.tq", 312);
    TNode<IntPtrT> tmp46;
    USE(tmp46);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp46 = CodeStubAssembler(state_).TryIntPtrAdd(TNode<IntPtrT>{tmp40}, TNode<IntPtrT>{tmp45}, &label0);
    ca_.Goto(&block9, tmp36, tmp37, tmp38, tmp39, tmp40, tmp41, tmp42, tmp43, tmp44, tmp45, tmp40, tmp45, tmp46);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block10, tmp36, tmp37, tmp38, tmp39, tmp40, tmp41, tmp42, tmp43, tmp44, tmp45, tmp40, tmp45);
    }
  }

  if (block10.is_used()) {
    TNode<Smi> tmp47;
    TNode<Map> tmp48;
    TNode<Smi> tmp49;
    TNode<IntPtrT> tmp50;
    TNode<IntPtrT> tmp51;
    TNode<Smi> tmp52;
    TNode<Int32T> tmp53;
    TNode<Int32T> tmp54;
    TNode<Int32T> tmp55;
    TNode<IntPtrT> tmp56;
    TNode<IntPtrT> tmp57;
    TNode<IntPtrT> tmp58;
    ca_.Bind(&block10, &tmp47, &tmp48, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56, &tmp57, &tmp58);
    ca_.Goto(&block8, tmp47, tmp48, tmp49, tmp50, tmp51, tmp52, tmp53, tmp54, tmp55, tmp56);
  }

  if (block9.is_used()) {
    TNode<Smi> tmp59;
    TNode<Map> tmp60;
    TNode<Smi> tmp61;
    TNode<IntPtrT> tmp62;
    TNode<IntPtrT> tmp63;
    TNode<Smi> tmp64;
    TNode<Int32T> tmp65;
    TNode<Int32T> tmp66;
    TNode<Int32T> tmp67;
    TNode<IntPtrT> tmp68;
    TNode<IntPtrT> tmp69;
    TNode<IntPtrT> tmp70;
    TNode<IntPtrT> tmp71;
    ca_.Bind(&block9, &tmp59, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67, &tmp68, &tmp69, &tmp70, &tmp71);
    ca_.Goto(&block7, tmp59, tmp60, tmp61, tmp62, tmp63, tmp64, tmp65, tmp66, tmp67, tmp68, tmp71);
  }

  if (block8.is_used()) {
    TNode<Smi> tmp72;
    TNode<Map> tmp73;
    TNode<Smi> tmp74;
    TNode<IntPtrT> tmp75;
    TNode<IntPtrT> tmp76;
    TNode<Smi> tmp77;
    TNode<Int32T> tmp78;
    TNode<Int32T> tmp79;
    TNode<Int32T> tmp80;
    TNode<IntPtrT> tmp81;
    ca_.Bind(&block8, &tmp72, &tmp73, &tmp74, &tmp75, &tmp76, &tmp77, &tmp78, &tmp79, &tmp80, &tmp81);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block7.is_used()) {
    TNode<Smi> tmp82;
    TNode<Map> tmp83;
    TNode<Smi> tmp84;
    TNode<IntPtrT> tmp85;
    TNode<IntPtrT> tmp86;
    TNode<Smi> tmp87;
    TNode<Int32T> tmp88;
    TNode<Int32T> tmp89;
    TNode<Int32T> tmp90;
    TNode<IntPtrT> tmp91;
    TNode<IntPtrT> tmp92;
    ca_.Bind(&block7, &tmp82, &tmp83, &tmp84, &tmp85, &tmp86, &tmp87, &tmp88, &tmp89, &tmp90, &tmp91, &tmp92);
    ca_.Goto(&block2, tmp82, tmp83, tmp84, tmp85, tmp86, tmp87, tmp88, tmp92);
  }

  if (block2.is_used()) {
    TNode<Smi> tmp93;
    TNode<Map> tmp94;
    TNode<Smi> tmp95;
    TNode<IntPtrT> tmp96;
    TNode<IntPtrT> tmp97;
    TNode<Smi> tmp98;
    TNode<Int32T> tmp99;
    TNode<IntPtrT> tmp100;
    ca_.Bind(&block2, &tmp93, &tmp94, &tmp95, &tmp96, &tmp97, &tmp98, &tmp99, &tmp100);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 847);
    TNode<FixedArray> tmp101;
    USE(tmp101);
    tmp101 = ca_.UncheckedCast<FixedArray>(CodeStubAssembler(state_).Allocate(TNode<IntPtrT>{tmp100}));
    CodeStubAssembler(state_).InitializeFieldsWithRoot(tmp101, CodeStubAssembler(state_).IntPtrConstant(16), TNode<IntPtrT>{tmp100}, RootIndex::kUndefinedValue);
    TNode<IntPtrT> tmp102 = ca_.IntPtrConstant(HeapObject::kMapOffset);
    USE(tmp102);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp101, tmp102}, tmp94);
    TNode<IntPtrT> tmp103 = ca_.IntPtrConstant(FixedArrayBase::kLengthOffset);
    USE(tmp103);
    TNode<Smi> tmp104;
    USE(tmp104);
    tmp104 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 3);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp101, tmp103}, tmp104);
    TNode<Smi> tmp105;
    USE(tmp105);
    tmp105 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 3);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 319);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 320);
    TNode<Smi> tmp106;
    USE(tmp106);
    tmp106 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 0);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 321);
    ca_.Goto(&block16, tmp93, tmp94, tmp95, tmp96, tmp97, tmp98, tmp99, tmp100, tmp101, tmp101, tmp102, tmp101, tmp103, tmp101, tmp105, tmp95, tmp95, tmp106);
  }

  if (block16.is_used()) {
    TNode<Smi> tmp107;
    TNode<Map> tmp108;
    TNode<Smi> tmp109;
    TNode<IntPtrT> tmp110;
    TNode<IntPtrT> tmp111;
    TNode<Smi> tmp112;
    TNode<Int32T> tmp113;
    TNode<IntPtrT> tmp114;
    TNode<FixedArray> tmp115;
    TNode<HeapObject> tmp116;
    TNode<IntPtrT> tmp117;
    TNode<FixedArrayBase> tmp118;
    TNode<IntPtrT> tmp119;
    TNode<FixedArray> tmp120;
    TNode<Smi> tmp121;
    TNode<Smi> tmp122;
    TNode<Smi> tmp123;
    TNode<Smi> tmp124;
    ca_.Bind(&block16, &tmp107, &tmp108, &tmp109, &tmp110, &tmp111, &tmp112, &tmp113, &tmp114, &tmp115, &tmp116, &tmp117, &tmp118, &tmp119, &tmp120, &tmp121, &tmp122, &tmp123, &tmp124);
    TNode<BoolT> tmp125;
    USE(tmp125);
    tmp125 = CodeStubAssembler(state_).SmiLessThan(TNode<Smi>{tmp124}, TNode<Smi>{tmp121});
    ca_.Branch(tmp125, &block14, &block15, tmp107, tmp108, tmp109, tmp110, tmp111, tmp112, tmp113, tmp114, tmp115, tmp116, tmp117, tmp118, tmp119, tmp120, tmp121, tmp122, tmp123, tmp124);
  }

  if (block14.is_used()) {
    TNode<Smi> tmp126;
    TNode<Map> tmp127;
    TNode<Smi> tmp128;
    TNode<IntPtrT> tmp129;
    TNode<IntPtrT> tmp130;
    TNode<Smi> tmp131;
    TNode<Int32T> tmp132;
    TNode<IntPtrT> tmp133;
    TNode<FixedArray> tmp134;
    TNode<HeapObject> tmp135;
    TNode<IntPtrT> tmp136;
    TNode<FixedArrayBase> tmp137;
    TNode<IntPtrT> tmp138;
    TNode<FixedArray> tmp139;
    TNode<Smi> tmp140;
    TNode<Smi> tmp141;
    TNode<Smi> tmp142;
    TNode<Smi> tmp143;
    ca_.Bind(&block14, &tmp126, &tmp127, &tmp128, &tmp129, &tmp130, &tmp131, &tmp132, &tmp133, &tmp134, &tmp135, &tmp136, &tmp137, &tmp138, &tmp139, &tmp140, &tmp141, &tmp142, &tmp143);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 326);
    TNode<Smi> tmp144;
    USE(tmp144);
    tmp144 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 1);
    TNode<Smi> tmp145;
    USE(tmp145);
    tmp145 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{tmp143}, TNode<Smi>{tmp144});
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 807);
    TNode<Smi> tmp146;
    USE(tmp146);
    tmp146 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 1);
    TNode<Smi> tmp147;
    USE(tmp147);
    tmp147 = CodeStubAssembler(state_).SmiSub(TNode<Smi>{tmp142}, TNode<Smi>{tmp146});
    TNode<Smi> tmp148;
    USE(tmp148);
    tmp148 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 0);
    TNode<BoolT> tmp149;
    USE(tmp149);
    tmp149 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{tmp142}, TNode<Smi>{tmp148});
    ca_.Branch(tmp149, &block18, &block19, tmp126, tmp127, tmp128, tmp129, tmp130, tmp131, tmp132, tmp133, tmp134, tmp135, tmp136, tmp137, tmp138, tmp139, tmp140, tmp141, tmp147, tmp145, tmp143, tmp139);
  }

  if (block18.is_used()) {
    TNode<Smi> tmp150;
    TNode<Map> tmp151;
    TNode<Smi> tmp152;
    TNode<IntPtrT> tmp153;
    TNode<IntPtrT> tmp154;
    TNode<Smi> tmp155;
    TNode<Int32T> tmp156;
    TNode<IntPtrT> tmp157;
    TNode<FixedArray> tmp158;
    TNode<HeapObject> tmp159;
    TNode<IntPtrT> tmp160;
    TNode<FixedArrayBase> tmp161;
    TNode<IntPtrT> tmp162;
    TNode<FixedArray> tmp163;
    TNode<Smi> tmp164;
    TNode<Smi> tmp165;
    TNode<Smi> tmp166;
    TNode<Smi> tmp167;
    TNode<Smi> tmp168;
    TNode<FixedArray> tmp169;
    ca_.Bind(&block18, &tmp150, &tmp151, &tmp152, &tmp153, &tmp154, &tmp155, &tmp156, &tmp157, &tmp158, &tmp159, &tmp160, &tmp161, &tmp162, &tmp163, &tmp164, &tmp165, &tmp166, &tmp167, &tmp168, &tmp169);
    ca_.Goto(&block13, tmp150, tmp151, tmp152, tmp153, tmp154, tmp155, tmp156, tmp157, tmp158, tmp159, tmp160, tmp161, tmp162, tmp163, tmp164, tmp165);
  }

  if (block19.is_used()) {
    TNode<Smi> tmp170;
    TNode<Map> tmp171;
    TNode<Smi> tmp172;
    TNode<IntPtrT> tmp173;
    TNode<IntPtrT> tmp174;
    TNode<Smi> tmp175;
    TNode<Int32T> tmp176;
    TNode<IntPtrT> tmp177;
    TNode<FixedArray> tmp178;
    TNode<HeapObject> tmp179;
    TNode<IntPtrT> tmp180;
    TNode<FixedArrayBase> tmp181;
    TNode<IntPtrT> tmp182;
    TNode<FixedArray> tmp183;
    TNode<Smi> tmp184;
    TNode<Smi> tmp185;
    TNode<Smi> tmp186;
    TNode<Smi> tmp187;
    TNode<Smi> tmp188;
    TNode<FixedArray> tmp189;
    ca_.Bind(&block19, &tmp170, &tmp171, &tmp172, &tmp173, &tmp174, &tmp175, &tmp176, &tmp177, &tmp178, &tmp179, &tmp180, &tmp181, &tmp182, &tmp183, &tmp184, &tmp185, &tmp186, &tmp187, &tmp188, &tmp189);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 808);
    TNode<Oddball> tmp190;
    USE(tmp190);
    tmp190 = TheHole_62(state_);
    ca_.Goto(&block17, tmp170, tmp171, tmp172, tmp173, tmp174, tmp175, tmp176, tmp177, tmp178, tmp179, tmp180, tmp181, tmp182, tmp183, tmp184, tmp185, tmp186, tmp187, tmp188, tmp189, tmp190);
  }

  if (block17.is_used()) {
    TNode<Smi> tmp191;
    TNode<Map> tmp192;
    TNode<Smi> tmp193;
    TNode<IntPtrT> tmp194;
    TNode<IntPtrT> tmp195;
    TNode<Smi> tmp196;
    TNode<Int32T> tmp197;
    TNode<IntPtrT> tmp198;
    TNode<FixedArray> tmp199;
    TNode<HeapObject> tmp200;
    TNode<IntPtrT> tmp201;
    TNode<FixedArrayBase> tmp202;
    TNode<IntPtrT> tmp203;
    TNode<FixedArray> tmp204;
    TNode<Smi> tmp205;
    TNode<Smi> tmp206;
    TNode<Smi> tmp207;
    TNode<Smi> tmp208;
    TNode<Smi> tmp209;
    TNode<FixedArray> tmp210;
    TNode<Object> tmp211;
    ca_.Bind(&block17, &tmp191, &tmp192, &tmp193, &tmp194, &tmp195, &tmp196, &tmp197, &tmp198, &tmp199, &tmp200, &tmp201, &tmp202, &tmp203, &tmp204, &tmp205, &tmp206, &tmp207, &tmp208, &tmp209, &tmp210, &tmp211);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 326);
    StoreFixedArrayDirect_217(state_, TNode<FixedArray>{tmp210}, TNode<Smi>{tmp209}, TNode<Object>{tmp211});
    ca_.SetSourcePosition("../../src/builtins/base.tq", 321);
    ca_.Goto(&block16, tmp191, tmp192, tmp193, tmp194, tmp195, tmp196, tmp197, tmp198, tmp199, tmp200, tmp201, tmp202, tmp203, tmp204, tmp205, tmp206, tmp207, tmp208);
  }

  if (block15.is_used()) {
    TNode<Smi> tmp212;
    TNode<Map> tmp213;
    TNode<Smi> tmp214;
    TNode<IntPtrT> tmp215;
    TNode<IntPtrT> tmp216;
    TNode<Smi> tmp217;
    TNode<Int32T> tmp218;
    TNode<IntPtrT> tmp219;
    TNode<FixedArray> tmp220;
    TNode<HeapObject> tmp221;
    TNode<IntPtrT> tmp222;
    TNode<FixedArrayBase> tmp223;
    TNode<IntPtrT> tmp224;
    TNode<FixedArray> tmp225;
    TNode<Smi> tmp226;
    TNode<Smi> tmp227;
    TNode<Smi> tmp228;
    TNode<Smi> tmp229;
    ca_.Bind(&block15, &tmp212, &tmp213, &tmp214, &tmp215, &tmp216, &tmp217, &tmp218, &tmp219, &tmp220, &tmp221, &tmp222, &tmp223, &tmp224, &tmp225, &tmp226, &tmp227, &tmp228, &tmp229);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 318);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 329);
    ca_.Goto(&block12, tmp212, tmp213, tmp214, tmp215, tmp216, tmp217, tmp218, tmp219, tmp220, tmp221, tmp222, tmp223, tmp224, tmp225, tmp226, tmp227);
  }

  if (block13.is_used()) {
    TNode<Smi> tmp230;
    TNode<Map> tmp231;
    TNode<Smi> tmp232;
    TNode<IntPtrT> tmp233;
    TNode<IntPtrT> tmp234;
    TNode<Smi> tmp235;
    TNode<Int32T> tmp236;
    TNode<IntPtrT> tmp237;
    TNode<FixedArray> tmp238;
    TNode<HeapObject> tmp239;
    TNode<IntPtrT> tmp240;
    TNode<FixedArrayBase> tmp241;
    TNode<IntPtrT> tmp242;
    TNode<FixedArray> tmp243;
    TNode<Smi> tmp244;
    TNode<Smi> tmp245;
    ca_.Bind(&block13, &tmp230, &tmp231, &tmp232, &tmp233, &tmp234, &tmp235, &tmp236, &tmp237, &tmp238, &tmp239, &tmp240, &tmp241, &tmp242, &tmp243, &tmp244, &tmp245);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 330);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block12.is_used()) {
    TNode<Smi> tmp246;
    TNode<Map> tmp247;
    TNode<Smi> tmp248;
    TNode<IntPtrT> tmp249;
    TNode<IntPtrT> tmp250;
    TNode<Smi> tmp251;
    TNode<Int32T> tmp252;
    TNode<IntPtrT> tmp253;
    TNode<FixedArray> tmp254;
    TNode<HeapObject> tmp255;
    TNode<IntPtrT> tmp256;
    TNode<FixedArrayBase> tmp257;
    TNode<IntPtrT> tmp258;
    TNode<FixedArray> tmp259;
    TNode<Smi> tmp260;
    TNode<Smi> tmp261;
    ca_.Bind(&block12, &tmp246, &tmp247, &tmp248, &tmp249, &tmp250, &tmp251, &tmp252, &tmp253, &tmp254, &tmp255, &tmp256, &tmp257, &tmp258, &tmp259, &tmp260, &tmp261);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 847);
    ca_.Goto(&block11, tmp246, tmp247, tmp248, tmp249, tmp250, tmp251, tmp252, tmp253, tmp254, tmp255, tmp256, tmp257, tmp258, tmp259, tmp260, tmp261);
  }

  if (block11.is_used()) {
    TNode<Smi> tmp262;
    TNode<Map> tmp263;
    TNode<Smi> tmp264;
    TNode<IntPtrT> tmp265;
    TNode<IntPtrT> tmp266;
    TNode<Smi> tmp267;
    TNode<Int32T> tmp268;
    TNode<IntPtrT> tmp269;
    TNode<FixedArray> tmp270;
    TNode<HeapObject> tmp271;
    TNode<IntPtrT> tmp272;
    TNode<FixedArrayBase> tmp273;
    TNode<IntPtrT> tmp274;
    TNode<FixedArray> tmp275;
    TNode<Smi> tmp276;
    TNode<Smi> tmp277;
    ca_.Bind(&block11, &tmp262, &tmp263, &tmp264, &tmp265, &tmp266, &tmp267, &tmp268, &tmp269, &tmp270, &tmp271, &tmp272, &tmp273, &tmp274, &tmp275, &tmp276, &tmp277);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 848);
    TNode<IntPtrT> tmp278 = ca_.IntPtrConstant(FixedArrayBase::kLengthOffset);
    USE(tmp278);
    TNode<Smi>tmp279 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp270, tmp278});
    TNode<Smi> tmp280;
    USE(tmp280);
    tmp280 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 3);
    TNode<BoolT> tmp281;
    USE(tmp281);
    tmp281 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{tmp279}, TNode<Smi>{tmp280});
    ca_.Branch(tmp281, &block20, &block21, tmp262, tmp270);
  }

  if (block21.is_used()) {
    TNode<Smi> tmp282;
    TNode<FixedArray> tmp283;
    ca_.Bind(&block21, &tmp282, &tmp283);
    CodeStubAssembler(state_).FailAssert("Torque assert 'a.length == 3' failed", "test/torque/test-torque.tq", 848);
  }

  if (block20.is_used()) {
    TNode<Smi> tmp284;
    TNode<FixedArray> tmp285;
    ca_.Bind(&block20, &tmp284, &tmp285);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 850);
    TNode<Smi> tmp286;
    USE(tmp286);
    tmp286 = Convert5ATSmi17ATconstexpr_int31_1435(state_, 123);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 851);
    TNode<IntPtrT> tmp287 = ca_.IntPtrConstant(FixedArray::kObjectsOffset);
    USE(tmp287);
    TNode<IntPtrT> tmp288 = ca_.IntPtrConstant(FixedArrayBase::kLengthOffset);
    USE(tmp288);
    TNode<Smi>tmp289 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp285, tmp288});
    TNode<IntPtrT> tmp290;
    USE(tmp290);
    tmp290 = Convert8ATintptr5ATSmi_188(state_, TNode<Smi>{tmp289});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 50);
    TNode<IntPtrT> tmp291;
    USE(tmp291);
    tmp291 = Convert8ATintptr17ATconstexpr_int31_1444(state_, 0);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 51);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 37);
    TNode<UintPtrT> tmp292;
    USE(tmp292);
    tmp292 = Convert9ATuintptr8ATintptr_205(state_, TNode<IntPtrT>{tmp291});
    TNode<UintPtrT> tmp293;
    USE(tmp293);
    tmp293 = Convert9ATuintptr8ATintptr_205(state_, TNode<IntPtrT>{tmp290});
    TNode<BoolT> tmp294;
    USE(tmp294);
    tmp294 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp292}, TNode<UintPtrT>{tmp293});
    ca_.Branch(tmp294, &block26, &block27, tmp284, tmp285, tmp286, tmp285, tmp287, tmp290, tmp291, tmp285, tmp287, tmp290, tmp291, tmp291);
  }

  if (block26.is_used()) {
    TNode<Smi> tmp295;
    TNode<FixedArray> tmp296;
    TNode<Smi> tmp297;
    TNode<FixedArray> tmp298;
    TNode<IntPtrT> tmp299;
    TNode<IntPtrT> tmp300;
    TNode<IntPtrT> tmp301;
    TNode<HeapObject> tmp302;
    TNode<IntPtrT> tmp303;
    TNode<IntPtrT> tmp304;
    TNode<IntPtrT> tmp305;
    TNode<IntPtrT> tmp306;
    ca_.Bind(&block26, &tmp295, &tmp296, &tmp297, &tmp298, &tmp299, &tmp300, &tmp301, &tmp302, &tmp303, &tmp304, &tmp305, &tmp306);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 39);
    TNode<IntPtrT> tmp307;
    USE(tmp307);
    tmp307 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, (SizeOf20UT5ATSmi10HeapObject_346(state_)));
    TNode<IntPtrT> tmp308;
    USE(tmp308);
    tmp308 = CodeStubAssembler(state_).IntPtrMul(TNode<IntPtrT>{tmp306}, TNode<IntPtrT>{tmp307});
    TNode<IntPtrT> tmp309;
    USE(tmp309);
    tmp309 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp303}, TNode<IntPtrT>{tmp308});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 38);
    TNode<HeapObject> tmp310;
    USE(tmp310);
    TNode<IntPtrT> tmp311;
    USE(tmp311);
    std::tie(tmp310, tmp311) = UnsafeNewReference20UT5ATSmi10HeapObject_1440(state_, TNode<HeapObject>{tmp302}, TNode<IntPtrT>{tmp309}).Flatten();
    ca_.Goto(&block25, tmp295, tmp296, tmp297, tmp298, tmp299, tmp300, tmp301, tmp302, tmp303, tmp304, tmp305, tmp306, tmp310, tmp311);
  }

  if (block27.is_used()) {
    TNode<Smi> tmp312;
    TNode<FixedArray> tmp313;
    TNode<Smi> tmp314;
    TNode<FixedArray> tmp315;
    TNode<IntPtrT> tmp316;
    TNode<IntPtrT> tmp317;
    TNode<IntPtrT> tmp318;
    TNode<HeapObject> tmp319;
    TNode<IntPtrT> tmp320;
    TNode<IntPtrT> tmp321;
    TNode<IntPtrT> tmp322;
    TNode<IntPtrT> tmp323;
    ca_.Bind(&block27, &tmp312, &tmp313, &tmp314, &tmp315, &tmp316, &tmp317, &tmp318, &tmp319, &tmp320, &tmp321, &tmp322, &tmp323);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 41);
    ca_.Goto(&block24, tmp312, tmp313, tmp314, tmp315, tmp316, tmp317, tmp318);
  }

  if (block25.is_used()) {
    TNode<Smi> tmp324;
    TNode<FixedArray> tmp325;
    TNode<Smi> tmp326;
    TNode<FixedArray> tmp327;
    TNode<IntPtrT> tmp328;
    TNode<IntPtrT> tmp329;
    TNode<IntPtrT> tmp330;
    TNode<HeapObject> tmp331;
    TNode<IntPtrT> tmp332;
    TNode<IntPtrT> tmp333;
    TNode<IntPtrT> tmp334;
    TNode<IntPtrT> tmp335;
    TNode<HeapObject> tmp336;
    TNode<IntPtrT> tmp337;
    ca_.Bind(&block25, &tmp324, &tmp325, &tmp326, &tmp327, &tmp328, &tmp329, &tmp330, &tmp331, &tmp332, &tmp333, &tmp334, &tmp335, &tmp336, &tmp337);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 51);
    ca_.Goto(&block23, tmp324, tmp325, tmp326, tmp327, tmp328, tmp329, tmp330, tmp336, tmp337);
  }

  if (block24.is_used()) {
    TNode<Smi> tmp338;
    TNode<FixedArray> tmp339;
    TNode<Smi> tmp340;
    TNode<FixedArray> tmp341;
    TNode<IntPtrT> tmp342;
    TNode<IntPtrT> tmp343;
    TNode<IntPtrT> tmp344;
    ca_.Bind(&block24, &tmp338, &tmp339, &tmp340, &tmp341, &tmp342, &tmp343, &tmp344);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block23.is_used()) {
    TNode<Smi> tmp345;
    TNode<FixedArray> tmp346;
    TNode<Smi> tmp347;
    TNode<FixedArray> tmp348;
    TNode<IntPtrT> tmp349;
    TNode<IntPtrT> tmp350;
    TNode<IntPtrT> tmp351;
    TNode<HeapObject> tmp352;
    TNode<IntPtrT> tmp353;
    ca_.Bind(&block23, &tmp345, &tmp346, &tmp347, &tmp348, &tmp349, &tmp350, &tmp351, &tmp352, &tmp353);
    ca_.Goto(&block22, tmp345, tmp346, tmp347, tmp348, tmp349, tmp350, tmp352, tmp353);
  }

  if (block22.is_used()) {
    TNode<Smi> tmp354;
    TNode<FixedArray> tmp355;
    TNode<Smi> tmp356;
    TNode<FixedArray> tmp357;
    TNode<IntPtrT> tmp358;
    TNode<IntPtrT> tmp359;
    TNode<HeapObject> tmp360;
    TNode<IntPtrT> tmp361;
    ca_.Bind(&block22, &tmp354, &tmp355, &tmp356, &tmp357, &tmp358, &tmp359, &tmp360, &tmp361);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 851);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp360, tmp361}, tmp356);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 852);
    TNode<IntPtrT> tmp362 = ca_.IntPtrConstant(FixedArray::kObjectsOffset);
    USE(tmp362);
    TNode<IntPtrT> tmp363 = ca_.IntPtrConstant(FixedArrayBase::kLengthOffset);
    USE(tmp363);
    TNode<Smi>tmp364 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp355, tmp363});
    TNode<IntPtrT> tmp365;
    USE(tmp365);
    tmp365 = Convert8ATintptr5ATSmi_188(state_, TNode<Smi>{tmp364});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 50);
    TNode<IntPtrT> tmp366;
    USE(tmp366);
    tmp366 = Convert8ATintptr17ATconstexpr_int31_1444(state_, 0);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 51);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 37);
    TNode<UintPtrT> tmp367;
    USE(tmp367);
    tmp367 = Convert9ATuintptr8ATintptr_205(state_, TNode<IntPtrT>{tmp366});
    TNode<UintPtrT> tmp368;
    USE(tmp368);
    tmp368 = Convert9ATuintptr8ATintptr_205(state_, TNode<IntPtrT>{tmp365});
    TNode<BoolT> tmp369;
    USE(tmp369);
    tmp369 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp367}, TNode<UintPtrT>{tmp368});
    ca_.Branch(tmp369, &block33, &block34, tmp354, tmp355, tmp356, tmp355, tmp362, tmp365, tmp366, tmp355, tmp362, tmp365, tmp366, tmp366);
  }

  if (block33.is_used()) {
    TNode<Smi> tmp370;
    TNode<FixedArray> tmp371;
    TNode<Smi> tmp372;
    TNode<FixedArray> tmp373;
    TNode<IntPtrT> tmp374;
    TNode<IntPtrT> tmp375;
    TNode<IntPtrT> tmp376;
    TNode<HeapObject> tmp377;
    TNode<IntPtrT> tmp378;
    TNode<IntPtrT> tmp379;
    TNode<IntPtrT> tmp380;
    TNode<IntPtrT> tmp381;
    ca_.Bind(&block33, &tmp370, &tmp371, &tmp372, &tmp373, &tmp374, &tmp375, &tmp376, &tmp377, &tmp378, &tmp379, &tmp380, &tmp381);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 39);
    TNode<IntPtrT> tmp382;
    USE(tmp382);
    tmp382 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, (SizeOf20UT5ATSmi10HeapObject_346(state_)));
    TNode<IntPtrT> tmp383;
    USE(tmp383);
    tmp383 = CodeStubAssembler(state_).IntPtrMul(TNode<IntPtrT>{tmp381}, TNode<IntPtrT>{tmp382});
    TNode<IntPtrT> tmp384;
    USE(tmp384);
    tmp384 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp378}, TNode<IntPtrT>{tmp383});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 38);
    TNode<HeapObject> tmp385;
    USE(tmp385);
    TNode<IntPtrT> tmp386;
    USE(tmp386);
    std::tie(tmp385, tmp386) = UnsafeNewReference20UT5ATSmi10HeapObject_1440(state_, TNode<HeapObject>{tmp377}, TNode<IntPtrT>{tmp384}).Flatten();
    ca_.Goto(&block32, tmp370, tmp371, tmp372, tmp373, tmp374, tmp375, tmp376, tmp377, tmp378, tmp379, tmp380, tmp381, tmp385, tmp386);
  }

  if (block34.is_used()) {
    TNode<Smi> tmp387;
    TNode<FixedArray> tmp388;
    TNode<Smi> tmp389;
    TNode<FixedArray> tmp390;
    TNode<IntPtrT> tmp391;
    TNode<IntPtrT> tmp392;
    TNode<IntPtrT> tmp393;
    TNode<HeapObject> tmp394;
    TNode<IntPtrT> tmp395;
    TNode<IntPtrT> tmp396;
    TNode<IntPtrT> tmp397;
    TNode<IntPtrT> tmp398;
    ca_.Bind(&block34, &tmp387, &tmp388, &tmp389, &tmp390, &tmp391, &tmp392, &tmp393, &tmp394, &tmp395, &tmp396, &tmp397, &tmp398);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 41);
    ca_.Goto(&block31, tmp387, tmp388, tmp389, tmp390, tmp391, tmp392, tmp393);
  }

  if (block32.is_used()) {
    TNode<Smi> tmp399;
    TNode<FixedArray> tmp400;
    TNode<Smi> tmp401;
    TNode<FixedArray> tmp402;
    TNode<IntPtrT> tmp403;
    TNode<IntPtrT> tmp404;
    TNode<IntPtrT> tmp405;
    TNode<HeapObject> tmp406;
    TNode<IntPtrT> tmp407;
    TNode<IntPtrT> tmp408;
    TNode<IntPtrT> tmp409;
    TNode<IntPtrT> tmp410;
    TNode<HeapObject> tmp411;
    TNode<IntPtrT> tmp412;
    ca_.Bind(&block32, &tmp399, &tmp400, &tmp401, &tmp402, &tmp403, &tmp404, &tmp405, &tmp406, &tmp407, &tmp408, &tmp409, &tmp410, &tmp411, &tmp412);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 51);
    ca_.Goto(&block30, tmp399, tmp400, tmp401, tmp402, tmp403, tmp404, tmp405, tmp411, tmp412);
  }

  if (block31.is_used()) {
    TNode<Smi> tmp413;
    TNode<FixedArray> tmp414;
    TNode<Smi> tmp415;
    TNode<FixedArray> tmp416;
    TNode<IntPtrT> tmp417;
    TNode<IntPtrT> tmp418;
    TNode<IntPtrT> tmp419;
    ca_.Bind(&block31, &tmp413, &tmp414, &tmp415, &tmp416, &tmp417, &tmp418, &tmp419);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block30.is_used()) {
    TNode<Smi> tmp420;
    TNode<FixedArray> tmp421;
    TNode<Smi> tmp422;
    TNode<FixedArray> tmp423;
    TNode<IntPtrT> tmp424;
    TNode<IntPtrT> tmp425;
    TNode<IntPtrT> tmp426;
    TNode<HeapObject> tmp427;
    TNode<IntPtrT> tmp428;
    ca_.Bind(&block30, &tmp420, &tmp421, &tmp422, &tmp423, &tmp424, &tmp425, &tmp426, &tmp427, &tmp428);
    ca_.Goto(&block29, tmp420, tmp421, tmp422, tmp423, tmp424, tmp425, tmp427, tmp428);
  }

  if (block29.is_used()) {
    TNode<Smi> tmp429;
    TNode<FixedArray> tmp430;
    TNode<Smi> tmp431;
    TNode<FixedArray> tmp432;
    TNode<IntPtrT> tmp433;
    TNode<IntPtrT> tmp434;
    TNode<HeapObject> tmp435;
    TNode<IntPtrT> tmp436;
    ca_.Bind(&block29, &tmp429, &tmp430, &tmp431, &tmp432, &tmp433, &tmp434, &tmp435, &tmp436);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 852);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 853);
    TNode<Object>tmp437 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp435, tmp436});
    TNode<BoolT> tmp438;
    USE(tmp438);
    tmp438 = CodeStubAssembler(state_).TaggedEqual(TNode<Object>{tmp437}, TNode<Object>{tmp431});
    ca_.Branch(tmp438, &block36, &block37, tmp429, tmp430, tmp431, tmp435, tmp436);
  }

  if (block37.is_used()) {
    TNode<Smi> tmp439;
    TNode<FixedArray> tmp440;
    TNode<Smi> tmp441;
    TNode<HeapObject> tmp442;
    TNode<IntPtrT> tmp443;
    ca_.Bind(&block37, &tmp439, &tmp440, &tmp441, &tmp442, &tmp443);
    CodeStubAssembler(state_).FailAssert("Torque assert 'TaggedEqual(* firstRef, oneTwoThree)' failed", "test/torque/test-torque.tq", 853);
  }

  if (block36.is_used()) {
    TNode<Smi> tmp444;
    TNode<FixedArray> tmp445;
    TNode<Smi> tmp446;
    TNode<HeapObject> tmp447;
    TNode<IntPtrT> tmp448;
    ca_.Bind(&block36, &tmp444, &tmp445, &tmp446, &tmp447, &tmp448);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 855);
    TNode<IntPtrT> tmp449 = ca_.IntPtrConstant(FixedArray::kObjectsOffset);
    USE(tmp449);
    TNode<IntPtrT> tmp450 = ca_.IntPtrConstant(FixedArrayBase::kLengthOffset);
    USE(tmp450);
    TNode<Smi>tmp451 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp445, tmp450});
    TNode<IntPtrT> tmp452;
    USE(tmp452);
    tmp452 = Convert8ATintptr5ATSmi_188(state_, TNode<Smi>{tmp451});
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 856);
    TNode<IntPtrT> tmp453;
    USE(tmp453);
    tmp453 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 0);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 37);
    TNode<UintPtrT> tmp454;
    USE(tmp454);
    tmp454 = Convert9ATuintptr8ATintptr_205(state_, TNode<IntPtrT>{tmp453});
    TNode<UintPtrT> tmp455;
    USE(tmp455);
    tmp455 = Convert9ATuintptr8ATintptr_205(state_, TNode<IntPtrT>{tmp452});
    TNode<BoolT> tmp456;
    USE(tmp456);
    tmp456 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp454}, TNode<UintPtrT>{tmp455});
    ca_.Branch(tmp456, &block41, &block42, tmp444, tmp445, tmp446, tmp447, tmp448, tmp445, tmp449, tmp452, tmp445, tmp449, tmp452, tmp453);
  }

  if (block41.is_used()) {
    TNode<Smi> tmp457;
    TNode<FixedArray> tmp458;
    TNode<Smi> tmp459;
    TNode<HeapObject> tmp460;
    TNode<IntPtrT> tmp461;
    TNode<HeapObject> tmp462;
    TNode<IntPtrT> tmp463;
    TNode<IntPtrT> tmp464;
    TNode<HeapObject> tmp465;
    TNode<IntPtrT> tmp466;
    TNode<IntPtrT> tmp467;
    TNode<IntPtrT> tmp468;
    ca_.Bind(&block41, &tmp457, &tmp458, &tmp459, &tmp460, &tmp461, &tmp462, &tmp463, &tmp464, &tmp465, &tmp466, &tmp467, &tmp468);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 39);
    TNode<IntPtrT> tmp469;
    USE(tmp469);
    tmp469 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, (SizeOf20UT5ATSmi10HeapObject_346(state_)));
    TNode<IntPtrT> tmp470;
    USE(tmp470);
    tmp470 = CodeStubAssembler(state_).IntPtrMul(TNode<IntPtrT>{tmp468}, TNode<IntPtrT>{tmp469});
    TNode<IntPtrT> tmp471;
    USE(tmp471);
    tmp471 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp466}, TNode<IntPtrT>{tmp470});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 38);
    TNode<HeapObject> tmp472;
    USE(tmp472);
    TNode<IntPtrT> tmp473;
    USE(tmp473);
    std::tie(tmp472, tmp473) = UnsafeNewReference20UT5ATSmi10HeapObject_1440(state_, TNode<HeapObject>{tmp465}, TNode<IntPtrT>{tmp471}).Flatten();
    ca_.Goto(&block40, tmp457, tmp458, tmp459, tmp460, tmp461, tmp462, tmp463, tmp464, tmp465, tmp466, tmp467, tmp468, tmp472, tmp473);
  }

  if (block42.is_used()) {
    TNode<Smi> tmp474;
    TNode<FixedArray> tmp475;
    TNode<Smi> tmp476;
    TNode<HeapObject> tmp477;
    TNode<IntPtrT> tmp478;
    TNode<HeapObject> tmp479;
    TNode<IntPtrT> tmp480;
    TNode<IntPtrT> tmp481;
    TNode<HeapObject> tmp482;
    TNode<IntPtrT> tmp483;
    TNode<IntPtrT> tmp484;
    TNode<IntPtrT> tmp485;
    ca_.Bind(&block42, &tmp474, &tmp475, &tmp476, &tmp477, &tmp478, &tmp479, &tmp480, &tmp481, &tmp482, &tmp483, &tmp484, &tmp485);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 41);
    ca_.Goto(&block39, tmp474, tmp475, tmp476, tmp477, tmp478, tmp479, tmp480, tmp481);
  }

  if (block40.is_used()) {
    TNode<Smi> tmp486;
    TNode<FixedArray> tmp487;
    TNode<Smi> tmp488;
    TNode<HeapObject> tmp489;
    TNode<IntPtrT> tmp490;
    TNode<HeapObject> tmp491;
    TNode<IntPtrT> tmp492;
    TNode<IntPtrT> tmp493;
    TNode<HeapObject> tmp494;
    TNode<IntPtrT> tmp495;
    TNode<IntPtrT> tmp496;
    TNode<IntPtrT> tmp497;
    TNode<HeapObject> tmp498;
    TNode<IntPtrT> tmp499;
    ca_.Bind(&block40, &tmp486, &tmp487, &tmp488, &tmp489, &tmp490, &tmp491, &tmp492, &tmp493, &tmp494, &tmp495, &tmp496, &tmp497, &tmp498, &tmp499);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 856);
    ca_.Goto(&block38, tmp486, tmp487, tmp488, tmp489, tmp490, tmp491, tmp492, tmp493, tmp498, tmp499);
  }

  if (block39.is_used()) {
    TNode<Smi> tmp500;
    TNode<FixedArray> tmp501;
    TNode<Smi> tmp502;
    TNode<HeapObject> tmp503;
    TNode<IntPtrT> tmp504;
    TNode<HeapObject> tmp505;
    TNode<IntPtrT> tmp506;
    TNode<IntPtrT> tmp507;
    ca_.Bind(&block39, &tmp500, &tmp501, &tmp502, &tmp503, &tmp504, &tmp505, &tmp506, &tmp507);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block38.is_used()) {
    TNode<Smi> tmp508;
    TNode<FixedArray> tmp509;
    TNode<Smi> tmp510;
    TNode<HeapObject> tmp511;
    TNode<IntPtrT> tmp512;
    TNode<HeapObject> tmp513;
    TNode<IntPtrT> tmp514;
    TNode<IntPtrT> tmp515;
    TNode<HeapObject> tmp516;
    TNode<IntPtrT> tmp517;
    ca_.Bind(&block38, &tmp508, &tmp509, &tmp510, &tmp511, &tmp512, &tmp513, &tmp514, &tmp515, &tmp516, &tmp517);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 857);
    TNode<Object>tmp518 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp516, tmp517});
    TNode<BoolT> tmp519;
    USE(tmp519);
    tmp519 = CodeStubAssembler(state_).TaggedEqual(TNode<Object>{tmp518}, TNode<Object>{tmp510});
    ca_.Branch(tmp519, &block44, &block45, tmp508, tmp509, tmp510, tmp511, tmp512, tmp513, tmp514, tmp515, tmp516, tmp517);
  }

  if (block45.is_used()) {
    TNode<Smi> tmp520;
    TNode<FixedArray> tmp521;
    TNode<Smi> tmp522;
    TNode<HeapObject> tmp523;
    TNode<IntPtrT> tmp524;
    TNode<HeapObject> tmp525;
    TNode<IntPtrT> tmp526;
    TNode<IntPtrT> tmp527;
    TNode<HeapObject> tmp528;
    TNode<IntPtrT> tmp529;
    ca_.Bind(&block45, &tmp520, &tmp521, &tmp522, &tmp523, &tmp524, &tmp525, &tmp526, &tmp527, &tmp528, &tmp529);
    CodeStubAssembler(state_).FailAssert("Torque assert 'TaggedEqual(* firstRefAgain, oneTwoThree)' failed", "test/torque/test-torque.tq", 857);
  }

  if (block44.is_used()) {
    TNode<Smi> tmp530;
    TNode<FixedArray> tmp531;
    TNode<Smi> tmp532;
    TNode<HeapObject> tmp533;
    TNode<IntPtrT> tmp534;
    TNode<HeapObject> tmp535;
    TNode<IntPtrT> tmp536;
    TNode<IntPtrT> tmp537;
    TNode<HeapObject> tmp538;
    TNode<IntPtrT> tmp539;
    ca_.Bind(&block44, &tmp530, &tmp531, &tmp532, &tmp533, &tmp534, &tmp535, &tmp536, &tmp537, &tmp538, &tmp539);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 859);
    TNode<Smi> tmp540;
    USE(tmp540);
    tmp540 = Convert5ATSmi17ATconstexpr_int31_1435(state_, 321);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 860);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp538, tmp539}, tmp540);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 861);
    TNode<IntPtrT> tmp541 = ca_.IntPtrConstant(FixedArray::kObjectsOffset);
    USE(tmp541);
    TNode<IntPtrT> tmp542 = ca_.IntPtrConstant(FixedArrayBase::kLengthOffset);
    USE(tmp542);
    TNode<Smi>tmp543 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp531, tmp542});
    TNode<IntPtrT> tmp544;
    USE(tmp544);
    tmp544 = Convert8ATintptr5ATSmi_188(state_, TNode<Smi>{tmp543});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 50);
    TNode<IntPtrT> tmp545;
    USE(tmp545);
    tmp545 = Convert8ATintptr17ATconstexpr_int31_1444(state_, 0);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 51);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 37);
    TNode<UintPtrT> tmp546;
    USE(tmp546);
    tmp546 = Convert9ATuintptr8ATintptr_205(state_, TNode<IntPtrT>{tmp545});
    TNode<UintPtrT> tmp547;
    USE(tmp547);
    tmp547 = Convert9ATuintptr8ATintptr_205(state_, TNode<IntPtrT>{tmp544});
    TNode<BoolT> tmp548;
    USE(tmp548);
    tmp548 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp546}, TNode<UintPtrT>{tmp547});
    ca_.Branch(tmp548, &block52, &block53, tmp530, tmp531, tmp532, tmp533, tmp534, tmp535, tmp536, tmp537, tmp538, tmp539, tmp540, tmp531, tmp541, tmp544, tmp545, tmp531, tmp541, tmp544, tmp545, tmp545);
  }

  if (block52.is_used()) {
    TNode<Smi> tmp549;
    TNode<FixedArray> tmp550;
    TNode<Smi> tmp551;
    TNode<HeapObject> tmp552;
    TNode<IntPtrT> tmp553;
    TNode<HeapObject> tmp554;
    TNode<IntPtrT> tmp555;
    TNode<IntPtrT> tmp556;
    TNode<HeapObject> tmp557;
    TNode<IntPtrT> tmp558;
    TNode<Smi> tmp559;
    TNode<FixedArray> tmp560;
    TNode<IntPtrT> tmp561;
    TNode<IntPtrT> tmp562;
    TNode<IntPtrT> tmp563;
    TNode<HeapObject> tmp564;
    TNode<IntPtrT> tmp565;
    TNode<IntPtrT> tmp566;
    TNode<IntPtrT> tmp567;
    TNode<IntPtrT> tmp568;
    ca_.Bind(&block52, &tmp549, &tmp550, &tmp551, &tmp552, &tmp553, &tmp554, &tmp555, &tmp556, &tmp557, &tmp558, &tmp559, &tmp560, &tmp561, &tmp562, &tmp563, &tmp564, &tmp565, &tmp566, &tmp567, &tmp568);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 39);
    TNode<IntPtrT> tmp569;
    USE(tmp569);
    tmp569 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, (SizeOf20UT5ATSmi10HeapObject_346(state_)));
    TNode<IntPtrT> tmp570;
    USE(tmp570);
    tmp570 = CodeStubAssembler(state_).IntPtrMul(TNode<IntPtrT>{tmp568}, TNode<IntPtrT>{tmp569});
    TNode<IntPtrT> tmp571;
    USE(tmp571);
    tmp571 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp565}, TNode<IntPtrT>{tmp570});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 38);
    TNode<HeapObject> tmp572;
    USE(tmp572);
    TNode<IntPtrT> tmp573;
    USE(tmp573);
    std::tie(tmp572, tmp573) = UnsafeNewReference20UT5ATSmi10HeapObject_1440(state_, TNode<HeapObject>{tmp564}, TNode<IntPtrT>{tmp571}).Flatten();
    ca_.Goto(&block51, tmp549, tmp550, tmp551, tmp552, tmp553, tmp554, tmp555, tmp556, tmp557, tmp558, tmp559, tmp560, tmp561, tmp562, tmp563, tmp564, tmp565, tmp566, tmp567, tmp568, tmp572, tmp573);
  }

  if (block53.is_used()) {
    TNode<Smi> tmp574;
    TNode<FixedArray> tmp575;
    TNode<Smi> tmp576;
    TNode<HeapObject> tmp577;
    TNode<IntPtrT> tmp578;
    TNode<HeapObject> tmp579;
    TNode<IntPtrT> tmp580;
    TNode<IntPtrT> tmp581;
    TNode<HeapObject> tmp582;
    TNode<IntPtrT> tmp583;
    TNode<Smi> tmp584;
    TNode<FixedArray> tmp585;
    TNode<IntPtrT> tmp586;
    TNode<IntPtrT> tmp587;
    TNode<IntPtrT> tmp588;
    TNode<HeapObject> tmp589;
    TNode<IntPtrT> tmp590;
    TNode<IntPtrT> tmp591;
    TNode<IntPtrT> tmp592;
    TNode<IntPtrT> tmp593;
    ca_.Bind(&block53, &tmp574, &tmp575, &tmp576, &tmp577, &tmp578, &tmp579, &tmp580, &tmp581, &tmp582, &tmp583, &tmp584, &tmp585, &tmp586, &tmp587, &tmp588, &tmp589, &tmp590, &tmp591, &tmp592, &tmp593);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 41);
    ca_.Goto(&block50, tmp574, tmp575, tmp576, tmp577, tmp578, tmp579, tmp580, tmp581, tmp582, tmp583, tmp584, tmp585, tmp586, tmp587, tmp588);
  }

  if (block51.is_used()) {
    TNode<Smi> tmp594;
    TNode<FixedArray> tmp595;
    TNode<Smi> tmp596;
    TNode<HeapObject> tmp597;
    TNode<IntPtrT> tmp598;
    TNode<HeapObject> tmp599;
    TNode<IntPtrT> tmp600;
    TNode<IntPtrT> tmp601;
    TNode<HeapObject> tmp602;
    TNode<IntPtrT> tmp603;
    TNode<Smi> tmp604;
    TNode<FixedArray> tmp605;
    TNode<IntPtrT> tmp606;
    TNode<IntPtrT> tmp607;
    TNode<IntPtrT> tmp608;
    TNode<HeapObject> tmp609;
    TNode<IntPtrT> tmp610;
    TNode<IntPtrT> tmp611;
    TNode<IntPtrT> tmp612;
    TNode<IntPtrT> tmp613;
    TNode<HeapObject> tmp614;
    TNode<IntPtrT> tmp615;
    ca_.Bind(&block51, &tmp594, &tmp595, &tmp596, &tmp597, &tmp598, &tmp599, &tmp600, &tmp601, &tmp602, &tmp603, &tmp604, &tmp605, &tmp606, &tmp607, &tmp608, &tmp609, &tmp610, &tmp611, &tmp612, &tmp613, &tmp614, &tmp615);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 51);
    ca_.Goto(&block49, tmp594, tmp595, tmp596, tmp597, tmp598, tmp599, tmp600, tmp601, tmp602, tmp603, tmp604, tmp605, tmp606, tmp607, tmp608, tmp614, tmp615);
  }

  if (block50.is_used()) {
    TNode<Smi> tmp616;
    TNode<FixedArray> tmp617;
    TNode<Smi> tmp618;
    TNode<HeapObject> tmp619;
    TNode<IntPtrT> tmp620;
    TNode<HeapObject> tmp621;
    TNode<IntPtrT> tmp622;
    TNode<IntPtrT> tmp623;
    TNode<HeapObject> tmp624;
    TNode<IntPtrT> tmp625;
    TNode<Smi> tmp626;
    TNode<FixedArray> tmp627;
    TNode<IntPtrT> tmp628;
    TNode<IntPtrT> tmp629;
    TNode<IntPtrT> tmp630;
    ca_.Bind(&block50, &tmp616, &tmp617, &tmp618, &tmp619, &tmp620, &tmp621, &tmp622, &tmp623, &tmp624, &tmp625, &tmp626, &tmp627, &tmp628, &tmp629, &tmp630);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block49.is_used()) {
    TNode<Smi> tmp631;
    TNode<FixedArray> tmp632;
    TNode<Smi> tmp633;
    TNode<HeapObject> tmp634;
    TNode<IntPtrT> tmp635;
    TNode<HeapObject> tmp636;
    TNode<IntPtrT> tmp637;
    TNode<IntPtrT> tmp638;
    TNode<HeapObject> tmp639;
    TNode<IntPtrT> tmp640;
    TNode<Smi> tmp641;
    TNode<FixedArray> tmp642;
    TNode<IntPtrT> tmp643;
    TNode<IntPtrT> tmp644;
    TNode<IntPtrT> tmp645;
    TNode<HeapObject> tmp646;
    TNode<IntPtrT> tmp647;
    ca_.Bind(&block49, &tmp631, &tmp632, &tmp633, &tmp634, &tmp635, &tmp636, &tmp637, &tmp638, &tmp639, &tmp640, &tmp641, &tmp642, &tmp643, &tmp644, &tmp645, &tmp646, &tmp647);
    ca_.Goto(&block48, tmp631, tmp632, tmp633, tmp634, tmp635, tmp636, tmp637, tmp638, tmp639, tmp640, tmp641, tmp642, tmp643, tmp644, tmp646, tmp647);
  }

  if (block48.is_used()) {
    TNode<Smi> tmp648;
    TNode<FixedArray> tmp649;
    TNode<Smi> tmp650;
    TNode<HeapObject> tmp651;
    TNode<IntPtrT> tmp652;
    TNode<HeapObject> tmp653;
    TNode<IntPtrT> tmp654;
    TNode<IntPtrT> tmp655;
    TNode<HeapObject> tmp656;
    TNode<IntPtrT> tmp657;
    TNode<Smi> tmp658;
    TNode<FixedArray> tmp659;
    TNode<IntPtrT> tmp660;
    TNode<IntPtrT> tmp661;
    TNode<HeapObject> tmp662;
    TNode<IntPtrT> tmp663;
    ca_.Bind(&block48, &tmp648, &tmp649, &tmp650, &tmp651, &tmp652, &tmp653, &tmp654, &tmp655, &tmp656, &tmp657, &tmp658, &tmp659, &tmp660, &tmp661, &tmp662, &tmp663);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 861);
    TNode<Object>tmp664 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp662, tmp663});
    TNode<BoolT> tmp665;
    USE(tmp665);
    tmp665 = CodeStubAssembler(state_).TaggedEqual(TNode<Object>{tmp664}, TNode<Object>{tmp658});
    ca_.Branch(tmp665, &block46, &block47, tmp648, tmp649, tmp650, tmp651, tmp652, tmp653, tmp654, tmp655, tmp656, tmp657, tmp658);
  }

  if (block47.is_used()) {
    TNode<Smi> tmp666;
    TNode<FixedArray> tmp667;
    TNode<Smi> tmp668;
    TNode<HeapObject> tmp669;
    TNode<IntPtrT> tmp670;
    TNode<HeapObject> tmp671;
    TNode<IntPtrT> tmp672;
    TNode<IntPtrT> tmp673;
    TNode<HeapObject> tmp674;
    TNode<IntPtrT> tmp675;
    TNode<Smi> tmp676;
    ca_.Bind(&block47, &tmp666, &tmp667, &tmp668, &tmp669, &tmp670, &tmp671, &tmp672, &tmp673, &tmp674, &tmp675, &tmp676);
    CodeStubAssembler(state_).FailAssert("Torque assert 'TaggedEqual(a.objects[0], threeTwoOne)' failed", "test/torque/test-torque.tq", 861);
  }

  if (block46.is_used()) {
    TNode<Smi> tmp677;
    TNode<FixedArray> tmp678;
    TNode<Smi> tmp679;
    TNode<HeapObject> tmp680;
    TNode<IntPtrT> tmp681;
    TNode<HeapObject> tmp682;
    TNode<IntPtrT> tmp683;
    TNode<IntPtrT> tmp684;
    TNode<HeapObject> tmp685;
    TNode<IntPtrT> tmp686;
    TNode<Smi> tmp687;
    ca_.Bind(&block46, &tmp677, &tmp678, &tmp679, &tmp680, &tmp681, &tmp682, &tmp683, &tmp684, &tmp685, &tmp686, &tmp687);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 845);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 844);
    ca_.Goto(&block1);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(&block55);
  }

    ca_.Bind(&block55);
}

TNode<Oddball> TestSliceEnumeration_462(compiler::CodeAssemblerState* state_, TNode<Context> p_context) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, FixedArray, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, FixedArray, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, FixedArray, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, FixedArray, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, FixedArray, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, FixedArray, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT> block7(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, FixedArray, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, FixedArray, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, FixedArray, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, FixedArray, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, FixedArray, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, FixedArray, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, FixedArray, IntPtrT, IntPtrT, IntPtrT> block24(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, FixedArray, IntPtrT, IntPtrT, IntPtrT> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, FixedArray, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block29(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, FixedArray, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block30(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, FixedArray, IntPtrT, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT> block28(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, FixedArray, IntPtrT, IntPtrT, IntPtrT> block27(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, FixedArray, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT> block26(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, FixedArray, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT, Smi> block33(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, FixedArray, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT, Smi> block32(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, FixedArray, IntPtrT, IntPtrT, IntPtrT> block25(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, FixedArray, IntPtrT, IntPtrT, IntPtrT> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, FixedArray, IntPtrT, IntPtrT, HeapObject, IntPtrT, IntPtrT> block34(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, FixedArray, IntPtrT, IntPtrT, HeapObject, IntPtrT, IntPtrT, Smi> block37(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, FixedArray, IntPtrT, IntPtrT, HeapObject, IntPtrT, IntPtrT, Smi> block35(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, FixedArray, IntPtrT, IntPtrT, HeapObject, IntPtrT, IntPtrT, Smi, BoolT> block43(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, FixedArray, IntPtrT, IntPtrT, HeapObject, IntPtrT, IntPtrT, Smi> block41(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, FixedArray, IntPtrT, IntPtrT, HeapObject, IntPtrT, IntPtrT, Smi> block42(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, FixedArray, IntPtrT, IntPtrT, HeapObject, IntPtrT, IntPtrT, Smi, HeapObject, IntPtrT> block40(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, FixedArray, IntPtrT, IntPtrT, HeapObject, IntPtrT, IntPtrT, Smi> block39(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, FixedArray, IntPtrT, IntPtrT, HeapObject, IntPtrT, IntPtrT, Smi, HeapObject, IntPtrT> block38(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, FixedArray, IntPtrT, IntPtrT, HeapObject, IntPtrT, IntPtrT, Smi, HeapObject, IntPtrT, Smi> block46(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, FixedArray, IntPtrT, IntPtrT, HeapObject, IntPtrT, IntPtrT, Smi, HeapObject, IntPtrT, Smi> block45(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, FixedArray, IntPtrT, IntPtrT, HeapObject, IntPtrT, IntPtrT, Smi> block36(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, FixedArray, IntPtrT, IntPtrT, HeapObject, IntPtrT, IntPtrT, Smi> block48(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, FixedArray, IntPtrT, IntPtrT, HeapObject, IntPtrT, IntPtrT, Smi> block47(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, FixedArray, IntPtrT, IntPtrT, HeapObject, IntPtrT, IntPtrT, Smi, BoolT> block51(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, FixedArray, IntPtrT, IntPtrT, HeapObject, IntPtrT, IntPtrT, Smi> block50(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, FixedArray, IntPtrT, IntPtrT, HeapObject, IntPtrT, IntPtrT, Smi> block49(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Oddball> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Oddball> block52(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 874);
    TNode<IntPtrT> tmp1;
    USE(tmp1);
    tmp1 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 3);
    TNode<FixedArray> tmp2;
    USE(tmp2);
    tmp2 = CodeStubAssembler(state_).AllocateZeroedFixedArray(TNode<IntPtrT>{tmp1});
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 875);
    TNode<IntPtrT> tmp3;
    USE(tmp3);
    tmp3 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 0);
    ca_.Goto(&block4, tmp0, tmp2, tmp3);
  }

  if (block4.is_used()) {
    TNode<Context> tmp4;
    TNode<FixedArray> tmp5;
    TNode<IntPtrT> tmp6;
    ca_.Bind(&block4, &tmp4, &tmp5, &tmp6);
    TNode<IntPtrT> tmp7;
    USE(tmp7);
    tmp7 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 3);
    TNode<BoolT> tmp8;
    USE(tmp8);
    tmp8 = CodeStubAssembler(state_).IntPtrLessThan(TNode<IntPtrT>{tmp6}, TNode<IntPtrT>{tmp7});
    ca_.Branch(tmp8, &block2, &block3, tmp4, tmp5, tmp6);
  }

  if (block2.is_used()) {
    TNode<Context> tmp9;
    TNode<FixedArray> tmp10;
    TNode<IntPtrT> tmp11;
    ca_.Bind(&block2, &tmp9, &tmp10, &tmp11);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 876);
    TNode<IntPtrT> tmp12 = ca_.IntPtrConstant(FixedArray::kObjectsOffset);
    USE(tmp12);
    TNode<IntPtrT> tmp13 = ca_.IntPtrConstant(FixedArrayBase::kLengthOffset);
    USE(tmp13);
    TNode<Smi>tmp14 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp10, tmp13});
    TNode<IntPtrT> tmp15;
    USE(tmp15);
    tmp15 = Convert8ATintptr5ATSmi_188(state_, TNode<Smi>{tmp14});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 46);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 37);
    TNode<UintPtrT> tmp16;
    USE(tmp16);
    tmp16 = Convert9ATuintptr8ATintptr_205(state_, TNode<IntPtrT>{tmp11});
    TNode<UintPtrT> tmp17;
    USE(tmp17);
    tmp17 = Convert9ATuintptr8ATintptr_205(state_, TNode<IntPtrT>{tmp15});
    TNode<BoolT> tmp18;
    USE(tmp18);
    tmp18 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp16}, TNode<UintPtrT>{tmp17});
    ca_.Branch(tmp18, &block12, &block13, tmp9, tmp10, tmp11, tmp10, tmp12, tmp15, tmp11, tmp11, tmp10, tmp12, tmp15, tmp11, tmp11);
  }

  if (block12.is_used()) {
    TNode<Context> tmp19;
    TNode<FixedArray> tmp20;
    TNode<IntPtrT> tmp21;
    TNode<FixedArray> tmp22;
    TNode<IntPtrT> tmp23;
    TNode<IntPtrT> tmp24;
    TNode<IntPtrT> tmp25;
    TNode<IntPtrT> tmp26;
    TNode<HeapObject> tmp27;
    TNode<IntPtrT> tmp28;
    TNode<IntPtrT> tmp29;
    TNode<IntPtrT> tmp30;
    TNode<IntPtrT> tmp31;
    ca_.Bind(&block12, &tmp19, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26, &tmp27, &tmp28, &tmp29, &tmp30, &tmp31);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 39);
    TNode<IntPtrT> tmp32;
    USE(tmp32);
    tmp32 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, (SizeOf20UT5ATSmi10HeapObject_346(state_)));
    TNode<IntPtrT> tmp33;
    USE(tmp33);
    tmp33 = CodeStubAssembler(state_).IntPtrMul(TNode<IntPtrT>{tmp31}, TNode<IntPtrT>{tmp32});
    TNode<IntPtrT> tmp34;
    USE(tmp34);
    tmp34 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp28}, TNode<IntPtrT>{tmp33});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 38);
    TNode<HeapObject> tmp35;
    USE(tmp35);
    TNode<IntPtrT> tmp36;
    USE(tmp36);
    std::tie(tmp35, tmp36) = UnsafeNewReference20UT5ATSmi10HeapObject_1440(state_, TNode<HeapObject>{tmp27}, TNode<IntPtrT>{tmp34}).Flatten();
    ca_.Goto(&block11, tmp19, tmp20, tmp21, tmp22, tmp23, tmp24, tmp25, tmp26, tmp27, tmp28, tmp29, tmp30, tmp31, tmp35, tmp36);
  }

  if (block13.is_used()) {
    TNode<Context> tmp37;
    TNode<FixedArray> tmp38;
    TNode<IntPtrT> tmp39;
    TNode<FixedArray> tmp40;
    TNode<IntPtrT> tmp41;
    TNode<IntPtrT> tmp42;
    TNode<IntPtrT> tmp43;
    TNode<IntPtrT> tmp44;
    TNode<HeapObject> tmp45;
    TNode<IntPtrT> tmp46;
    TNode<IntPtrT> tmp47;
    TNode<IntPtrT> tmp48;
    TNode<IntPtrT> tmp49;
    ca_.Bind(&block13, &tmp37, &tmp38, &tmp39, &tmp40, &tmp41, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47, &tmp48, &tmp49);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 41);
    ca_.Goto(&block10, tmp37, tmp38, tmp39, tmp40, tmp41, tmp42, tmp43, tmp44);
  }

  if (block11.is_used()) {
    TNode<Context> tmp50;
    TNode<FixedArray> tmp51;
    TNode<IntPtrT> tmp52;
    TNode<FixedArray> tmp53;
    TNode<IntPtrT> tmp54;
    TNode<IntPtrT> tmp55;
    TNode<IntPtrT> tmp56;
    TNode<IntPtrT> tmp57;
    TNode<HeapObject> tmp58;
    TNode<IntPtrT> tmp59;
    TNode<IntPtrT> tmp60;
    TNode<IntPtrT> tmp61;
    TNode<IntPtrT> tmp62;
    TNode<HeapObject> tmp63;
    TNode<IntPtrT> tmp64;
    ca_.Bind(&block11, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 46);
    ca_.Goto(&block9, tmp50, tmp51, tmp52, tmp53, tmp54, tmp55, tmp56, tmp57, tmp63, tmp64);
  }

  if (block10.is_used()) {
    TNode<Context> tmp65;
    TNode<FixedArray> tmp66;
    TNode<IntPtrT> tmp67;
    TNode<FixedArray> tmp68;
    TNode<IntPtrT> tmp69;
    TNode<IntPtrT> tmp70;
    TNode<IntPtrT> tmp71;
    TNode<IntPtrT> tmp72;
    ca_.Bind(&block10, &tmp65, &tmp66, &tmp67, &tmp68, &tmp69, &tmp70, &tmp71, &tmp72);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block9.is_used()) {
    TNode<Context> tmp73;
    TNode<FixedArray> tmp74;
    TNode<IntPtrT> tmp75;
    TNode<FixedArray> tmp76;
    TNode<IntPtrT> tmp77;
    TNode<IntPtrT> tmp78;
    TNode<IntPtrT> tmp79;
    TNode<IntPtrT> tmp80;
    TNode<HeapObject> tmp81;
    TNode<IntPtrT> tmp82;
    ca_.Bind(&block9, &tmp73, &tmp74, &tmp75, &tmp76, &tmp77, &tmp78, &tmp79, &tmp80, &tmp81, &tmp82);
    ca_.Goto(&block8, tmp73, tmp74, tmp75, tmp76, tmp77, tmp78, tmp79, tmp80, tmp81, tmp82);
  }

  if (block8.is_used()) {
    TNode<Context> tmp83;
    TNode<FixedArray> tmp84;
    TNode<IntPtrT> tmp85;
    TNode<FixedArray> tmp86;
    TNode<IntPtrT> tmp87;
    TNode<IntPtrT> tmp88;
    TNode<IntPtrT> tmp89;
    TNode<IntPtrT> tmp90;
    TNode<HeapObject> tmp91;
    TNode<IntPtrT> tmp92;
    ca_.Bind(&block8, &tmp83, &tmp84, &tmp85, &tmp86, &tmp87, &tmp88, &tmp89, &tmp90, &tmp91, &tmp92);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 876);
    TNode<Object>tmp93 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp91, tmp92});
    TNode<Smi> tmp94;
    USE(tmp94);
    tmp94 = UnsafeCast5ATSmi_1439(state_, TNode<Context>{tmp83}, TNode<Object>{tmp93});
    TNode<Smi> tmp95;
    USE(tmp95);
    tmp95 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 0);
    TNode<BoolT> tmp96;
    USE(tmp96);
    tmp96 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{tmp94}, TNode<Smi>{tmp95});
    ca_.Branch(tmp96, &block6, &block7, tmp83, tmp84, tmp85);
  }

  if (block7.is_used()) {
    TNode<Context> tmp97;
    TNode<FixedArray> tmp98;
    TNode<IntPtrT> tmp99;
    ca_.Bind(&block7, &tmp97, &tmp98, &tmp99);
    CodeStubAssembler(state_).FailAssert("Torque assert 'UnsafeCast<Smi>(fixedArray.objects[i]) == 0' failed", "test/torque/test-torque.tq", 876);
  }

  if (block6.is_used()) {
    TNode<Context> tmp100;
    TNode<FixedArray> tmp101;
    TNode<IntPtrT> tmp102;
    ca_.Bind(&block6, &tmp100, &tmp101, &tmp102);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 877);
    TNode<IntPtrT> tmp103 = ca_.IntPtrConstant(FixedArray::kObjectsOffset);
    USE(tmp103);
    TNode<IntPtrT> tmp104 = ca_.IntPtrConstant(FixedArrayBase::kLengthOffset);
    USE(tmp104);
    TNode<Smi>tmp105 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp101, tmp104});
    TNode<IntPtrT> tmp106;
    USE(tmp106);
    tmp106 = Convert8ATintptr5ATSmi_188(state_, TNode<Smi>{tmp105});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 46);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 37);
    TNode<UintPtrT> tmp107;
    USE(tmp107);
    tmp107 = Convert9ATuintptr8ATintptr_205(state_, TNode<IntPtrT>{tmp102});
    TNode<UintPtrT> tmp108;
    USE(tmp108);
    tmp108 = Convert9ATuintptr8ATintptr_205(state_, TNode<IntPtrT>{tmp106});
    TNode<BoolT> tmp109;
    USE(tmp109);
    tmp109 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp107}, TNode<UintPtrT>{tmp108});
    ca_.Branch(tmp109, &block19, &block20, tmp100, tmp101, tmp102, tmp101, tmp103, tmp106, tmp102, tmp102, tmp101, tmp103, tmp106, tmp102, tmp102);
  }

  if (block19.is_used()) {
    TNode<Context> tmp110;
    TNode<FixedArray> tmp111;
    TNode<IntPtrT> tmp112;
    TNode<FixedArray> tmp113;
    TNode<IntPtrT> tmp114;
    TNode<IntPtrT> tmp115;
    TNode<IntPtrT> tmp116;
    TNode<IntPtrT> tmp117;
    TNode<HeapObject> tmp118;
    TNode<IntPtrT> tmp119;
    TNode<IntPtrT> tmp120;
    TNode<IntPtrT> tmp121;
    TNode<IntPtrT> tmp122;
    ca_.Bind(&block19, &tmp110, &tmp111, &tmp112, &tmp113, &tmp114, &tmp115, &tmp116, &tmp117, &tmp118, &tmp119, &tmp120, &tmp121, &tmp122);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 39);
    TNode<IntPtrT> tmp123;
    USE(tmp123);
    tmp123 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, (SizeOf20UT5ATSmi10HeapObject_346(state_)));
    TNode<IntPtrT> tmp124;
    USE(tmp124);
    tmp124 = CodeStubAssembler(state_).IntPtrMul(TNode<IntPtrT>{tmp122}, TNode<IntPtrT>{tmp123});
    TNode<IntPtrT> tmp125;
    USE(tmp125);
    tmp125 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp119}, TNode<IntPtrT>{tmp124});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 38);
    TNode<HeapObject> tmp126;
    USE(tmp126);
    TNode<IntPtrT> tmp127;
    USE(tmp127);
    std::tie(tmp126, tmp127) = UnsafeNewReference20UT5ATSmi10HeapObject_1440(state_, TNode<HeapObject>{tmp118}, TNode<IntPtrT>{tmp125}).Flatten();
    ca_.Goto(&block18, tmp110, tmp111, tmp112, tmp113, tmp114, tmp115, tmp116, tmp117, tmp118, tmp119, tmp120, tmp121, tmp122, tmp126, tmp127);
  }

  if (block20.is_used()) {
    TNode<Context> tmp128;
    TNode<FixedArray> tmp129;
    TNode<IntPtrT> tmp130;
    TNode<FixedArray> tmp131;
    TNode<IntPtrT> tmp132;
    TNode<IntPtrT> tmp133;
    TNode<IntPtrT> tmp134;
    TNode<IntPtrT> tmp135;
    TNode<HeapObject> tmp136;
    TNode<IntPtrT> tmp137;
    TNode<IntPtrT> tmp138;
    TNode<IntPtrT> tmp139;
    TNode<IntPtrT> tmp140;
    ca_.Bind(&block20, &tmp128, &tmp129, &tmp130, &tmp131, &tmp132, &tmp133, &tmp134, &tmp135, &tmp136, &tmp137, &tmp138, &tmp139, &tmp140);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 41);
    ca_.Goto(&block17, tmp128, tmp129, tmp130, tmp131, tmp132, tmp133, tmp134, tmp135);
  }

  if (block18.is_used()) {
    TNode<Context> tmp141;
    TNode<FixedArray> tmp142;
    TNode<IntPtrT> tmp143;
    TNode<FixedArray> tmp144;
    TNode<IntPtrT> tmp145;
    TNode<IntPtrT> tmp146;
    TNode<IntPtrT> tmp147;
    TNode<IntPtrT> tmp148;
    TNode<HeapObject> tmp149;
    TNode<IntPtrT> tmp150;
    TNode<IntPtrT> tmp151;
    TNode<IntPtrT> tmp152;
    TNode<IntPtrT> tmp153;
    TNode<HeapObject> tmp154;
    TNode<IntPtrT> tmp155;
    ca_.Bind(&block18, &tmp141, &tmp142, &tmp143, &tmp144, &tmp145, &tmp146, &tmp147, &tmp148, &tmp149, &tmp150, &tmp151, &tmp152, &tmp153, &tmp154, &tmp155);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 46);
    ca_.Goto(&block16, tmp141, tmp142, tmp143, tmp144, tmp145, tmp146, tmp147, tmp148, tmp154, tmp155);
  }

  if (block17.is_used()) {
    TNode<Context> tmp156;
    TNode<FixedArray> tmp157;
    TNode<IntPtrT> tmp158;
    TNode<FixedArray> tmp159;
    TNode<IntPtrT> tmp160;
    TNode<IntPtrT> tmp161;
    TNode<IntPtrT> tmp162;
    TNode<IntPtrT> tmp163;
    ca_.Bind(&block17, &tmp156, &tmp157, &tmp158, &tmp159, &tmp160, &tmp161, &tmp162, &tmp163);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block16.is_used()) {
    TNode<Context> tmp164;
    TNode<FixedArray> tmp165;
    TNode<IntPtrT> tmp166;
    TNode<FixedArray> tmp167;
    TNode<IntPtrT> tmp168;
    TNode<IntPtrT> tmp169;
    TNode<IntPtrT> tmp170;
    TNode<IntPtrT> tmp171;
    TNode<HeapObject> tmp172;
    TNode<IntPtrT> tmp173;
    ca_.Bind(&block16, &tmp164, &tmp165, &tmp166, &tmp167, &tmp168, &tmp169, &tmp170, &tmp171, &tmp172, &tmp173);
    ca_.Goto(&block15, tmp164, tmp165, tmp166, tmp167, tmp168, tmp169, tmp170, tmp171, tmp172, tmp173);
  }

  if (block15.is_used()) {
    TNode<Context> tmp174;
    TNode<FixedArray> tmp175;
    TNode<IntPtrT> tmp176;
    TNode<FixedArray> tmp177;
    TNode<IntPtrT> tmp178;
    TNode<IntPtrT> tmp179;
    TNode<IntPtrT> tmp180;
    TNode<IntPtrT> tmp181;
    TNode<HeapObject> tmp182;
    TNode<IntPtrT> tmp183;
    ca_.Bind(&block15, &tmp174, &tmp175, &tmp176, &tmp177, &tmp178, &tmp179, &tmp180, &tmp181, &tmp182, &tmp183);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 877);
    TNode<Smi> tmp184;
    USE(tmp184);
    tmp184 = Convert5ATSmi8ATintptr_186(state_, TNode<IntPtrT>{tmp176});
    TNode<Smi> tmp185;
    USE(tmp185);
    tmp185 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 3);
    TNode<Smi> tmp186;
    USE(tmp186);
    tmp186 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{tmp184}, TNode<Smi>{tmp185});
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp182, tmp183}, tmp186);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 875);
    ca_.Goto(&block5, tmp174, tmp175, tmp176);
  }

  if (block5.is_used()) {
    TNode<Context> tmp187;
    TNode<FixedArray> tmp188;
    TNode<IntPtrT> tmp189;
    ca_.Bind(&block5, &tmp187, &tmp188, &tmp189);
    TNode<IntPtrT> tmp190;
    USE(tmp190);
    tmp190 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 1);
    TNode<IntPtrT> tmp191;
    USE(tmp191);
    tmp191 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp189}, TNode<IntPtrT>{tmp190});
    ca_.Goto(&block4, tmp187, tmp188, tmp191);
  }

  if (block3.is_used()) {
    TNode<Context> tmp192;
    TNode<FixedArray> tmp193;
    TNode<IntPtrT> tmp194;
    ca_.Bind(&block3, &tmp192, &tmp193, &tmp194);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 880);
    TNode<IntPtrT> tmp195 = ca_.IntPtrConstant(FixedArray::kObjectsOffset);
    USE(tmp195);
    TNode<IntPtrT> tmp196 = ca_.IntPtrConstant(FixedArrayBase::kLengthOffset);
    USE(tmp196);
    TNode<Smi>tmp197 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp193, tmp196});
    TNode<IntPtrT> tmp198;
    USE(tmp198);
    tmp198 = Convert8ATintptr5ATSmi_188(state_, TNode<Smi>{tmp197});
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 881);
    TNode<IntPtrT> tmp199;
    USE(tmp199);
    tmp199 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 0);
    ca_.Goto(&block24, tmp192, tmp193, tmp193, tmp195, tmp198, tmp199);
  }

  if (block24.is_used()) {
    TNode<Context> tmp200;
    TNode<FixedArray> tmp201;
    TNode<FixedArray> tmp202;
    TNode<IntPtrT> tmp203;
    TNode<IntPtrT> tmp204;
    TNode<IntPtrT> tmp205;
    ca_.Bind(&block24, &tmp200, &tmp201, &tmp202, &tmp203, &tmp204, &tmp205);
    TNode<BoolT> tmp206;
    USE(tmp206);
    tmp206 = CodeStubAssembler(state_).IntPtrLessThan(TNode<IntPtrT>{tmp205}, TNode<IntPtrT>{tmp204});
    ca_.Branch(tmp206, &block22, &block23, tmp200, tmp201, tmp202, tmp203, tmp204, tmp205);
  }

  if (block22.is_used()) {
    TNode<Context> tmp207;
    TNode<FixedArray> tmp208;
    TNode<FixedArray> tmp209;
    TNode<IntPtrT> tmp210;
    TNode<IntPtrT> tmp211;
    TNode<IntPtrT> tmp212;
    ca_.Bind(&block22, &tmp207, &tmp208, &tmp209, &tmp210, &tmp211, &tmp212);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 882);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 37);
    TNode<UintPtrT> tmp213;
    USE(tmp213);
    tmp213 = Convert9ATuintptr8ATintptr_205(state_, TNode<IntPtrT>{tmp212});
    TNode<UintPtrT> tmp214;
    USE(tmp214);
    tmp214 = Convert9ATuintptr8ATintptr_205(state_, TNode<IntPtrT>{tmp211});
    TNode<BoolT> tmp215;
    USE(tmp215);
    tmp215 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp213}, TNode<UintPtrT>{tmp214});
    ca_.Branch(tmp215, &block29, &block30, tmp207, tmp208, tmp209, tmp210, tmp211, tmp212, tmp212, tmp212);
  }

  if (block29.is_used()) {
    TNode<Context> tmp216;
    TNode<FixedArray> tmp217;
    TNode<FixedArray> tmp218;
    TNode<IntPtrT> tmp219;
    TNode<IntPtrT> tmp220;
    TNode<IntPtrT> tmp221;
    TNode<IntPtrT> tmp222;
    TNode<IntPtrT> tmp223;
    ca_.Bind(&block29, &tmp216, &tmp217, &tmp218, &tmp219, &tmp220, &tmp221, &tmp222, &tmp223);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 39);
    TNode<IntPtrT> tmp224;
    USE(tmp224);
    tmp224 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, (SizeOf20UT5ATSmi10HeapObject_346(state_)));
    TNode<IntPtrT> tmp225;
    USE(tmp225);
    tmp225 = CodeStubAssembler(state_).IntPtrMul(TNode<IntPtrT>{tmp223}, TNode<IntPtrT>{tmp224});
    TNode<IntPtrT> tmp226;
    USE(tmp226);
    tmp226 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp219}, TNode<IntPtrT>{tmp225});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 38);
    TNode<HeapObject> tmp227;
    USE(tmp227);
    TNode<IntPtrT> tmp228;
    USE(tmp228);
    std::tie(tmp227, tmp228) = UnsafeNewReference20UT5ATSmi10HeapObject_1440(state_, TNode<HeapObject>{tmp218}, TNode<IntPtrT>{tmp226}).Flatten();
    ca_.Goto(&block28, tmp216, tmp217, tmp218, tmp219, tmp220, tmp221, tmp222, tmp223, tmp227, tmp228);
  }

  if (block30.is_used()) {
    TNode<Context> tmp229;
    TNode<FixedArray> tmp230;
    TNode<FixedArray> tmp231;
    TNode<IntPtrT> tmp232;
    TNode<IntPtrT> tmp233;
    TNode<IntPtrT> tmp234;
    TNode<IntPtrT> tmp235;
    TNode<IntPtrT> tmp236;
    ca_.Bind(&block30, &tmp229, &tmp230, &tmp231, &tmp232, &tmp233, &tmp234, &tmp235, &tmp236);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 41);
    ca_.Goto(&block27, tmp229, tmp230, tmp231, tmp232, tmp233, tmp234);
  }

  if (block28.is_used()) {
    TNode<Context> tmp237;
    TNode<FixedArray> tmp238;
    TNode<FixedArray> tmp239;
    TNode<IntPtrT> tmp240;
    TNode<IntPtrT> tmp241;
    TNode<IntPtrT> tmp242;
    TNode<IntPtrT> tmp243;
    TNode<IntPtrT> tmp244;
    TNode<HeapObject> tmp245;
    TNode<IntPtrT> tmp246;
    ca_.Bind(&block28, &tmp237, &tmp238, &tmp239, &tmp240, &tmp241, &tmp242, &tmp243, &tmp244, &tmp245, &tmp246);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 882);
    ca_.Goto(&block26, tmp237, tmp238, tmp239, tmp240, tmp241, tmp242, tmp245, tmp246);
  }

  if (block27.is_used()) {
    TNode<Context> tmp247;
    TNode<FixedArray> tmp248;
    TNode<FixedArray> tmp249;
    TNode<IntPtrT> tmp250;
    TNode<IntPtrT> tmp251;
    TNode<IntPtrT> tmp252;
    ca_.Bind(&block27, &tmp247, &tmp248, &tmp249, &tmp250, &tmp251, &tmp252);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block26.is_used()) {
    TNode<Context> tmp253;
    TNode<FixedArray> tmp254;
    TNode<FixedArray> tmp255;
    TNode<IntPtrT> tmp256;
    TNode<IntPtrT> tmp257;
    TNode<IntPtrT> tmp258;
    TNode<HeapObject> tmp259;
    TNode<IntPtrT> tmp260;
    ca_.Bind(&block26, &tmp253, &tmp254, &tmp255, &tmp256, &tmp257, &tmp258, &tmp259, &tmp260);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 883);
    TNode<Object>tmp261 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp259, tmp260});
    TNode<Smi> tmp262;
    USE(tmp262);
    tmp262 = UnsafeCast5ATSmi_1439(state_, TNode<Context>{tmp253}, TNode<Object>{tmp261});
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 884);
    TNode<Smi> tmp263;
    USE(tmp263);
    tmp263 = Convert5ATSmi8ATintptr_186(state_, TNode<IntPtrT>{tmp258});
    TNode<Smi> tmp264;
    USE(tmp264);
    tmp264 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 3);
    TNode<Smi> tmp265;
    USE(tmp265);
    tmp265 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{tmp263}, TNode<Smi>{tmp264});
    TNode<BoolT> tmp266;
    USE(tmp266);
    tmp266 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{tmp262}, TNode<Smi>{tmp265});
    ca_.Branch(tmp266, &block32, &block33, tmp253, tmp254, tmp255, tmp256, tmp257, tmp258, tmp259, tmp260, tmp262);
  }

  if (block33.is_used()) {
    TNode<Context> tmp267;
    TNode<FixedArray> tmp268;
    TNode<FixedArray> tmp269;
    TNode<IntPtrT> tmp270;
    TNode<IntPtrT> tmp271;
    TNode<IntPtrT> tmp272;
    TNode<HeapObject> tmp273;
    TNode<IntPtrT> tmp274;
    TNode<Smi> tmp275;
    ca_.Bind(&block33, &tmp267, &tmp268, &tmp269, &tmp270, &tmp271, &tmp272, &tmp273, &tmp274, &tmp275);
    CodeStubAssembler(state_).FailAssert("Torque assert 'value == Convert<Smi>(i) + 3' failed", "test/torque/test-torque.tq", 884);
  }

  if (block32.is_used()) {
    TNode<Context> tmp276;
    TNode<FixedArray> tmp277;
    TNode<FixedArray> tmp278;
    TNode<IntPtrT> tmp279;
    TNode<IntPtrT> tmp280;
    TNode<IntPtrT> tmp281;
    TNode<HeapObject> tmp282;
    TNode<IntPtrT> tmp283;
    TNode<Smi> tmp284;
    ca_.Bind(&block32, &tmp276, &tmp277, &tmp278, &tmp279, &tmp280, &tmp281, &tmp282, &tmp283, &tmp284);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 885);
    TNode<Smi> tmp285;
    USE(tmp285);
    tmp285 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 4);
    TNode<Smi> tmp286;
    USE(tmp286);
    tmp286 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{tmp284}, TNode<Smi>{tmp285});
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp282, tmp283}, tmp286);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 881);
    ca_.Goto(&block25, tmp276, tmp277, tmp278, tmp279, tmp280, tmp281);
  }

  if (block25.is_used()) {
    TNode<Context> tmp287;
    TNode<FixedArray> tmp288;
    TNode<FixedArray> tmp289;
    TNode<IntPtrT> tmp290;
    TNode<IntPtrT> tmp291;
    TNode<IntPtrT> tmp292;
    ca_.Bind(&block25, &tmp287, &tmp288, &tmp289, &tmp290, &tmp291, &tmp292);
    TNode<IntPtrT> tmp293;
    USE(tmp293);
    tmp293 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 1);
    TNode<IntPtrT> tmp294;
    USE(tmp294);
    tmp294 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp292}, TNode<IntPtrT>{tmp293});
    ca_.Goto(&block24, tmp287, tmp288, tmp289, tmp290, tmp291, tmp294);
  }

  if (block23.is_used()) {
    TNode<Context> tmp295;
    TNode<FixedArray> tmp296;
    TNode<FixedArray> tmp297;
    TNode<IntPtrT> tmp298;
    TNode<IntPtrT> tmp299;
    TNode<IntPtrT> tmp300;
    ca_.Bind(&block23, &tmp295, &tmp296, &tmp297, &tmp298, &tmp299, &tmp300);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 60);
    TNode<IntPtrT> tmp301;
    USE(tmp301);
    tmp301 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, (SizeOf20UT5ATSmi10HeapObject_346(state_)));
    TNode<IntPtrT> tmp302;
    USE(tmp302);
    tmp302 = CodeStubAssembler(state_).IntPtrMul(TNode<IntPtrT>{tmp299}, TNode<IntPtrT>{tmp301});
    TNode<IntPtrT> tmp303;
    USE(tmp303);
    tmp303 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp298}, TNode<IntPtrT>{tmp302});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 62);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 63);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 64);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 61);
    ca_.Goto(&block34, tmp295, tmp296, tmp297, tmp298, tmp299, tmp297, tmp298, tmp303);
  }

  if (block34.is_used()) {
    TNode<Context> tmp304;
    TNode<FixedArray> tmp305;
    TNode<FixedArray> tmp306;
    TNode<IntPtrT> tmp307;
    TNode<IntPtrT> tmp308;
    TNode<HeapObject> tmp309;
    TNode<IntPtrT> tmp310;
    TNode<IntPtrT> tmp311;
    ca_.Bind(&block34, &tmp304, &tmp305, &tmp306, &tmp307, &tmp308, &tmp309, &tmp310, &tmp311);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 889);
    TNode<Smi> tmp312;
    USE(tmp312);
    tmp312 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 890);
    ca_.Goto(&block37, tmp304, tmp305, tmp306, tmp307, tmp308, tmp309, tmp310, tmp311, tmp312);
  }

  if (block37.is_used()) {
    TNode<Context> tmp313;
    TNode<FixedArray> tmp314;
    TNode<FixedArray> tmp315;
    TNode<IntPtrT> tmp316;
    TNode<IntPtrT> tmp317;
    TNode<HeapObject> tmp318;
    TNode<IntPtrT> tmp319;
    TNode<IntPtrT> tmp320;
    TNode<Smi> tmp321;
    ca_.Bind(&block37, &tmp313, &tmp314, &tmp315, &tmp316, &tmp317, &tmp318, &tmp319, &tmp320, &tmp321);
    TNode<BoolT> tmp322;
    USE(tmp322);
    tmp322 = FromConstexpr6ATbool16ATconstexpr_bool_167(state_, true);
    ca_.Branch(tmp322, &block35, &block36, tmp313, tmp314, tmp315, tmp316, tmp317, tmp318, tmp319, tmp320, tmp321);
  }

  if (block35.is_used()) {
    TNode<Context> tmp323;
    TNode<FixedArray> tmp324;
    TNode<FixedArray> tmp325;
    TNode<IntPtrT> tmp326;
    TNode<IntPtrT> tmp327;
    TNode<HeapObject> tmp328;
    TNode<IntPtrT> tmp329;
    TNode<IntPtrT> tmp330;
    TNode<Smi> tmp331;
    ca_.Bind(&block35, &tmp323, &tmp324, &tmp325, &tmp326, &tmp327, &tmp328, &tmp329, &tmp330, &tmp331);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 87);
    TNode<BoolT> tmp332;
    USE(tmp332);
    tmp332 = CodeStubAssembler(state_).WordEqual(TNode<IntPtrT>{tmp329}, TNode<IntPtrT>{tmp330});
    ca_.Goto(&block43, tmp323, tmp324, tmp325, tmp326, tmp327, tmp328, tmp329, tmp330, tmp331, tmp332);
  }

  if (block43.is_used()) {
    TNode<Context> tmp333;
    TNode<FixedArray> tmp334;
    TNode<FixedArray> tmp335;
    TNode<IntPtrT> tmp336;
    TNode<IntPtrT> tmp337;
    TNode<HeapObject> tmp338;
    TNode<IntPtrT> tmp339;
    TNode<IntPtrT> tmp340;
    TNode<Smi> tmp341;
    TNode<BoolT> tmp342;
    ca_.Bind(&block43, &tmp333, &tmp334, &tmp335, &tmp336, &tmp337, &tmp338, &tmp339, &tmp340, &tmp341, &tmp342);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 91);
    ca_.Branch(tmp342, &block41, &block42, tmp333, tmp334, tmp335, tmp336, tmp337, tmp338, tmp339, tmp340, tmp341);
  }

  if (block41.is_used()) {
    TNode<Context> tmp343;
    TNode<FixedArray> tmp344;
    TNode<FixedArray> tmp345;
    TNode<IntPtrT> tmp346;
    TNode<IntPtrT> tmp347;
    TNode<HeapObject> tmp348;
    TNode<IntPtrT> tmp349;
    TNode<IntPtrT> tmp350;
    TNode<Smi> tmp351;
    ca_.Bind(&block41, &tmp343, &tmp344, &tmp345, &tmp346, &tmp347, &tmp348, &tmp349, &tmp350, &tmp351);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 92);
    ca_.Goto(&block39, tmp343, tmp344, tmp345, tmp346, tmp347, tmp348, tmp349, tmp350, tmp351);
  }

  if (block42.is_used()) {
    TNode<Context> tmp352;
    TNode<FixedArray> tmp353;
    TNode<FixedArray> tmp354;
    TNode<IntPtrT> tmp355;
    TNode<IntPtrT> tmp356;
    TNode<HeapObject> tmp357;
    TNode<IntPtrT> tmp358;
    TNode<IntPtrT> tmp359;
    TNode<Smi> tmp360;
    ca_.Bind(&block42, &tmp352, &tmp353, &tmp354, &tmp355, &tmp356, &tmp357, &tmp358, &tmp359, &tmp360);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 94);
    TNode<HeapObject> tmp361;
    USE(tmp361);
    TNode<IntPtrT> tmp362;
    USE(tmp362);
    std::tie(tmp361, tmp362) = UnsafeNewReference20UT5ATSmi10HeapObject_1440(state_, TNode<HeapObject>{tmp357}, TNode<IntPtrT>{tmp358}).Flatten();
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 95);
    TNode<IntPtrT> tmp363;
    USE(tmp363);
    tmp363 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, (SizeOf20UT5ATSmi10HeapObject_346(state_)));
    TNode<IntPtrT> tmp364;
    USE(tmp364);
    tmp364 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp358}, TNode<IntPtrT>{tmp363});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 96);
    ca_.Goto(&block40, tmp352, tmp353, tmp354, tmp355, tmp356, tmp357, tmp364, tmp359, tmp360, tmp361, tmp362);
  }

  if (block40.is_used()) {
    TNode<Context> tmp365;
    TNode<FixedArray> tmp366;
    TNode<FixedArray> tmp367;
    TNode<IntPtrT> tmp368;
    TNode<IntPtrT> tmp369;
    TNode<HeapObject> tmp370;
    TNode<IntPtrT> tmp371;
    TNode<IntPtrT> tmp372;
    TNode<Smi> tmp373;
    TNode<HeapObject> tmp374;
    TNode<IntPtrT> tmp375;
    ca_.Bind(&block40, &tmp365, &tmp366, &tmp367, &tmp368, &tmp369, &tmp370, &tmp371, &tmp372, &tmp373, &tmp374, &tmp375);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 891);
    ca_.Goto(&block38, tmp365, tmp366, tmp367, tmp368, tmp369, tmp370, tmp371, tmp372, tmp373, tmp374, tmp375);
  }

  if (block39.is_used()) {
    TNode<Context> tmp376;
    TNode<FixedArray> tmp377;
    TNode<FixedArray> tmp378;
    TNode<IntPtrT> tmp379;
    TNode<IntPtrT> tmp380;
    TNode<HeapObject> tmp381;
    TNode<IntPtrT> tmp382;
    TNode<IntPtrT> tmp383;
    TNode<Smi> tmp384;
    ca_.Bind(&block39, &tmp376, &tmp377, &tmp378, &tmp379, &tmp380, &tmp381, &tmp382, &tmp383, &tmp384);
    ca_.Goto(&block36, tmp376, tmp377, tmp378, tmp379, tmp380, tmp381, tmp382, tmp383, tmp384);
  }

  if (block38.is_used()) {
    TNode<Context> tmp385;
    TNode<FixedArray> tmp386;
    TNode<FixedArray> tmp387;
    TNode<IntPtrT> tmp388;
    TNode<IntPtrT> tmp389;
    TNode<HeapObject> tmp390;
    TNode<IntPtrT> tmp391;
    TNode<IntPtrT> tmp392;
    TNode<Smi> tmp393;
    TNode<HeapObject> tmp394;
    TNode<IntPtrT> tmp395;
    ca_.Bind(&block38, &tmp385, &tmp386, &tmp387, &tmp388, &tmp389, &tmp390, &tmp391, &tmp392, &tmp393, &tmp394, &tmp395);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 892);
    TNode<Object>tmp396 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp394, tmp395});
    TNode<Smi> tmp397;
    USE(tmp397);
    tmp397 = UnsafeCast5ATSmi_1439(state_, TNode<Context>{tmp385}, TNode<Object>{tmp396});
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 893);
    TNode<Smi> tmp398;
    USE(tmp398);
    tmp398 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 7);
    TNode<Smi> tmp399;
    USE(tmp399);
    tmp399 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{tmp393}, TNode<Smi>{tmp398});
    TNode<BoolT> tmp400;
    USE(tmp400);
    tmp400 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{tmp397}, TNode<Smi>{tmp399});
    ca_.Branch(tmp400, &block45, &block46, tmp385, tmp386, tmp387, tmp388, tmp389, tmp390, tmp391, tmp392, tmp393, tmp394, tmp395, tmp397);
  }

  if (block46.is_used()) {
    TNode<Context> tmp401;
    TNode<FixedArray> tmp402;
    TNode<FixedArray> tmp403;
    TNode<IntPtrT> tmp404;
    TNode<IntPtrT> tmp405;
    TNode<HeapObject> tmp406;
    TNode<IntPtrT> tmp407;
    TNode<IntPtrT> tmp408;
    TNode<Smi> tmp409;
    TNode<HeapObject> tmp410;
    TNode<IntPtrT> tmp411;
    TNode<Smi> tmp412;
    ca_.Bind(&block46, &tmp401, &tmp402, &tmp403, &tmp404, &tmp405, &tmp406, &tmp407, &tmp408, &tmp409, &tmp410, &tmp411, &tmp412);
    CodeStubAssembler(state_).FailAssert("Torque assert 'value == count + 7' failed", "test/torque/test-torque.tq", 893);
  }

  if (block45.is_used()) {
    TNode<Context> tmp413;
    TNode<FixedArray> tmp414;
    TNode<FixedArray> tmp415;
    TNode<IntPtrT> tmp416;
    TNode<IntPtrT> tmp417;
    TNode<HeapObject> tmp418;
    TNode<IntPtrT> tmp419;
    TNode<IntPtrT> tmp420;
    TNode<Smi> tmp421;
    TNode<HeapObject> tmp422;
    TNode<IntPtrT> tmp423;
    TNode<Smi> tmp424;
    ca_.Bind(&block45, &tmp413, &tmp414, &tmp415, &tmp416, &tmp417, &tmp418, &tmp419, &tmp420, &tmp421, &tmp422, &tmp423, &tmp424);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 894);
    TNode<Smi> tmp425;
    USE(tmp425);
    tmp425 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 1);
    TNode<Smi> tmp426;
    USE(tmp426);
    tmp426 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{tmp421}, TNode<Smi>{tmp425});
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 890);
    ca_.Goto(&block37, tmp413, tmp414, tmp415, tmp416, tmp417, tmp418, tmp419, tmp420, tmp426);
  }

  if (block36.is_used()) {
    TNode<Context> tmp427;
    TNode<FixedArray> tmp428;
    TNode<FixedArray> tmp429;
    TNode<IntPtrT> tmp430;
    TNode<IntPtrT> tmp431;
    TNode<HeapObject> tmp432;
    TNode<IntPtrT> tmp433;
    TNode<IntPtrT> tmp434;
    TNode<Smi> tmp435;
    ca_.Bind(&block36, &tmp427, &tmp428, &tmp429, &tmp430, &tmp431, &tmp432, &tmp433, &tmp434, &tmp435);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 896);
    TNode<Smi> tmp436;
    USE(tmp436);
    tmp436 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 3);
    TNode<BoolT> tmp437;
    USE(tmp437);
    tmp437 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{tmp435}, TNode<Smi>{tmp436});
    ca_.Branch(tmp437, &block47, &block48, tmp427, tmp428, tmp429, tmp430, tmp431, tmp432, tmp433, tmp434, tmp435);
  }

  if (block48.is_used()) {
    TNode<Context> tmp438;
    TNode<FixedArray> tmp439;
    TNode<FixedArray> tmp440;
    TNode<IntPtrT> tmp441;
    TNode<IntPtrT> tmp442;
    TNode<HeapObject> tmp443;
    TNode<IntPtrT> tmp444;
    TNode<IntPtrT> tmp445;
    TNode<Smi> tmp446;
    ca_.Bind(&block48, &tmp438, &tmp439, &tmp440, &tmp441, &tmp442, &tmp443, &tmp444, &tmp445, &tmp446);
    CodeStubAssembler(state_).FailAssert("Torque assert 'count == 3' failed", "test/torque/test-torque.tq", 896);
  }

  if (block47.is_used()) {
    TNode<Context> tmp447;
    TNode<FixedArray> tmp448;
    TNode<FixedArray> tmp449;
    TNode<IntPtrT> tmp450;
    TNode<IntPtrT> tmp451;
    TNode<HeapObject> tmp452;
    TNode<IntPtrT> tmp453;
    TNode<IntPtrT> tmp454;
    TNode<Smi> tmp455;
    ca_.Bind(&block47, &tmp447, &tmp448, &tmp449, &tmp450, &tmp451, &tmp452, &tmp453, &tmp454, &tmp455);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 87);
    TNode<BoolT> tmp456;
    USE(tmp456);
    tmp456 = CodeStubAssembler(state_).WordEqual(TNode<IntPtrT>{tmp453}, TNode<IntPtrT>{tmp454});
    ca_.Goto(&block51, tmp447, tmp448, tmp449, tmp450, tmp451, tmp452, tmp453, tmp454, tmp455, tmp456);
  }

  if (block51.is_used()) {
    TNode<Context> tmp457;
    TNode<FixedArray> tmp458;
    TNode<FixedArray> tmp459;
    TNode<IntPtrT> tmp460;
    TNode<IntPtrT> tmp461;
    TNode<HeapObject> tmp462;
    TNode<IntPtrT> tmp463;
    TNode<IntPtrT> tmp464;
    TNode<Smi> tmp465;
    TNode<BoolT> tmp466;
    ca_.Bind(&block51, &tmp457, &tmp458, &tmp459, &tmp460, &tmp461, &tmp462, &tmp463, &tmp464, &tmp465, &tmp466);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 897);
    ca_.Branch(tmp466, &block49, &block50, tmp457, tmp458, tmp459, tmp460, tmp461, tmp462, tmp463, tmp464, tmp465);
  }

  if (block50.is_used()) {
    TNode<Context> tmp467;
    TNode<FixedArray> tmp468;
    TNode<FixedArray> tmp469;
    TNode<IntPtrT> tmp470;
    TNode<IntPtrT> tmp471;
    TNode<HeapObject> tmp472;
    TNode<IntPtrT> tmp473;
    TNode<IntPtrT> tmp474;
    TNode<Smi> tmp475;
    ca_.Bind(&block50, &tmp467, &tmp468, &tmp469, &tmp470, &tmp471, &tmp472, &tmp473, &tmp474, &tmp475);
    CodeStubAssembler(state_).FailAssert("Torque assert 'it.Empty()' failed", "test/torque/test-torque.tq", 897);
  }

  if (block49.is_used()) {
    TNode<Context> tmp476;
    TNode<FixedArray> tmp477;
    TNode<FixedArray> tmp478;
    TNode<IntPtrT> tmp479;
    TNode<IntPtrT> tmp480;
    TNode<HeapObject> tmp481;
    TNode<IntPtrT> tmp482;
    TNode<IntPtrT> tmp483;
    TNode<Smi> tmp484;
    ca_.Bind(&block49, &tmp476, &tmp477, &tmp478, &tmp479, &tmp480, &tmp481, &tmp482, &tmp483, &tmp484);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 899);
    TNode<Oddball> tmp485;
    USE(tmp485);
    tmp485 = Undefined_64(state_);
    ca_.Goto(&block1, tmp476, tmp485);
  }

  if (block1.is_used()) {
    TNode<Context> tmp486;
    TNode<Oddball> tmp487;
    ca_.Bind(&block1, &tmp486, &tmp487);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 872);
    ca_.Goto(&block52, tmp486, tmp487);
  }

    TNode<Context> tmp488;
    TNode<Oddball> tmp489;
    ca_.Bind(&block52, &tmp488, &tmp489);
  return TNode<Oddball>{tmp489};
}

void TestStaticAssert_463(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 904);
    TNode<BoolT> tmp0;
    USE(tmp0);
    tmp0 = FromConstexpr6ATbool16ATconstexpr_bool_167(state_, (CodeStubAssembler(state_).ConstexprInt31Equal((CodeStubAssembler(state_).ConstexprInt31Add(1, 2)), 3)));
    CodeStubAssembler(state_).StaticAssert(TNode<BoolT>{tmp0});
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 902);
    ca_.Goto(&block1);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(&block2);
  }

    ca_.Bind(&block2);
}

TF_BUILTIN(NewSmiBox, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  TNode<Smi> parameter1 = UncheckedCast<Smi>(Parameter(Descriptor::kValue));
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Smi> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 913);
    TNode<Map> tmp2;
    USE(tmp2);
    tmp2 = CodeStubAssembler(state_).GetStructMap(SMI_BOX_TYPE);
    TNode<IntPtrT> tmp3;
    USE(tmp3);
    tmp3 = CodeStubAssembler(state_).IntPtrConstant(((24)));
    TNode<SmiBox> tmp4;
    USE(tmp4);
    tmp4 = ca_.UncheckedCast<SmiBox>(CodeStubAssembler(state_).Allocate(TNode<IntPtrT>{tmp3}));
    CodeStubAssembler(state_).InitializeFieldsWithRoot(tmp4, CodeStubAssembler(state_).IntPtrConstant(24), TNode<IntPtrT>{tmp3}, RootIndex::kUndefinedValue);
    TNode<IntPtrT> tmp5 = ca_.IntPtrConstant(HeapObject::kMapOffset);
    USE(tmp5);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp4, tmp5}, tmp2);
    TNode<IntPtrT> tmp6 = ca_.IntPtrConstant(SmiBox::kValueOffset);
    USE(tmp6);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp4, tmp6}, tmp1);
    TNode<IntPtrT> tmp7 = ca_.IntPtrConstant(SmiBox::kUnrelatedOffset);
    USE(tmp7);
    TNode<Smi> tmp8;
    USE(tmp8);
    tmp8 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 0);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp4, tmp7}, tmp8);
    CodeStubAssembler(state_).Return(tmp4);
  }
}

void TestLoadEliminationFixed_464(compiler::CodeAssemblerState* state_, TNode<Context> p_context) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, SmiBox, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, SmiBox, Smi> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, SmiBox, Smi, Smi> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, SmiBox, Smi, Smi> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 918);
    TNode<Smi> tmp1;
    USE(tmp1);
    tmp1 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 123);
    TNode<SmiBox> tmp2;
    tmp2 = TORQUE_CAST(CodeStubAssembler(state_).CallBuiltin(Builtins::kNewSmiBox, tmp0, tmp1));
    USE(tmp2);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 919);
    TNode<IntPtrT> tmp3 = ca_.IntPtrConstant(SmiBox::kValueOffset);
    USE(tmp3);
    TNode<Smi>tmp4 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp2, tmp3});
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 920);
    TNode<IntPtrT> tmp5 = ca_.IntPtrConstant(SmiBox::kUnrelatedOffset);
    USE(tmp5);
    TNode<Smi> tmp6;
    USE(tmp6);
    tmp6 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 999);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp2, tmp5}, tmp6);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 921);
    TNode<IntPtrT> tmp7 = ca_.IntPtrConstant(SmiBox::kUnrelatedOffset);
    USE(tmp7);
    TNode<Smi>tmp8 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp2, tmp7});
    TNode<Smi> tmp9;
    USE(tmp9);
    tmp9 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 0);
    TNode<BoolT> tmp10;
    USE(tmp10);
    tmp10 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{tmp8}, TNode<Smi>{tmp9});
    ca_.Branch(tmp10, &block2, &block3, tmp0, tmp2, tmp4);
  }

  if (block2.is_used()) {
    TNode<Context> tmp11;
    TNode<SmiBox> tmp12;
    TNode<Smi> tmp13;
    ca_.Bind(&block2, &tmp11, &tmp12, &tmp13);
    TNode<IntPtrT> tmp14 = ca_.IntPtrConstant(SmiBox::kValueOffset);
    USE(tmp14);
    TNode<Smi>tmp15 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp12, tmp14});
    ca_.Goto(&block5, tmp11, tmp12, tmp13, tmp15);
  }

  if (block3.is_used()) {
    TNode<Context> tmp16;
    TNode<SmiBox> tmp17;
    TNode<Smi> tmp18;
    ca_.Bind(&block3, &tmp16, &tmp17, &tmp18);
    TNode<IntPtrT> tmp19 = ca_.IntPtrConstant(SmiBox::kValueOffset);
    USE(tmp19);
    TNode<Smi>tmp20 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp17, tmp19});
    ca_.Goto(&block4, tmp16, tmp17, tmp18, tmp20);
  }

  if (block5.is_used()) {
    TNode<Context> tmp21;
    TNode<SmiBox> tmp22;
    TNode<Smi> tmp23;
    TNode<Smi> tmp24;
    ca_.Bind(&block5, &tmp21, &tmp22, &tmp23, &tmp24);
    ca_.Goto(&block4, tmp21, tmp22, tmp23, tmp24);
  }

  if (block4.is_used()) {
    TNode<Context> tmp25;
    TNode<SmiBox> tmp26;
    TNode<Smi> tmp27;
    TNode<Smi> tmp28;
    ca_.Bind(&block4, &tmp25, &tmp26, &tmp27, &tmp28);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 922);
    TNode<BoolT> tmp29;
    USE(tmp29);
    tmp29 = CodeStubAssembler(state_).TaggedEqual(TNode<Object>{tmp27}, TNode<Object>{tmp28});
    CodeStubAssembler(state_).StaticAssert(TNode<BoolT>{tmp29});
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 924);
    TNode<IntPtrT> tmp30 = ca_.IntPtrConstant(SmiBox::kValueOffset);
    USE(tmp30);
    TNode<Smi> tmp31;
    USE(tmp31);
    tmp31 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 11);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp26, tmp30}, tmp31);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 925);
    TNode<IntPtrT> tmp32 = ca_.IntPtrConstant(SmiBox::kValueOffset);
    USE(tmp32);
    TNode<Smi>tmp33 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp26, tmp32});
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 926);
    TNode<Smi> tmp34;
    USE(tmp34);
    tmp34 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 11);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 927);
    TNode<BoolT> tmp35;
    USE(tmp35);
    tmp35 = CodeStubAssembler(state_).TaggedEqual(TNode<Object>{tmp33}, TNode<Object>{tmp34});
    CodeStubAssembler(state_).StaticAssert(TNode<BoolT>{tmp35});
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 917);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 916);
    ca_.Goto(&block1, tmp25);
  }

  if (block1.is_used()) {
    TNode<Context> tmp36;
    ca_.Bind(&block1, &tmp36);
    ca_.Goto(&block6, tmp36);
  }

    TNode<Context> tmp37;
    ca_.Bind(&block6, &tmp37);
}

void TestLoadEliminationVariable_465(compiler::CodeAssemblerState* state_, TNode<Context> p_context) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, SmiBox, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, SmiBox, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, SmiBox, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, SmiBox, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, SmiBox, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, SmiBox, FixedArray, IntPtrT, IntPtrT, Smi, Smi, HeapObject, IntPtrT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, SmiBox, Object, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, SmiBox, Object, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, SmiBox, Object, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, SmiBox, Object, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, SmiBox, Object, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, SmiBox, Object, FixedArray, IntPtrT, IntPtrT, Smi, Smi, HeapObject, IntPtrT> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, SmiBox, Object, Object, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, SmiBox, Object, Object, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block21(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, SmiBox, Object, Object, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, SmiBox, Object, Object, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, SmiBox, Object, Object, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, SmiBox, Object, Object, FixedArray, IntPtrT, IntPtrT, Smi, Smi, HeapObject, IntPtrT> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, SmiBox, Object, Object, Object, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block27(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, SmiBox, Object, Object, Object, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block28(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, SmiBox, Object, Object, Object, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT> block26(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, SmiBox, Object, Object, Object, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT> block25(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, SmiBox, Object, Object, Object, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT> block24(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, SmiBox, Object, Object, Object, FixedArray, IntPtrT, IntPtrT, Smi, Smi, HeapObject, IntPtrT> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context> block30(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 932);
    TNode<FixedArray> tmp1;
    USE(tmp1);
    tmp1 = kEmptyFixedArray_214(state_);
    TNode<FixedArray> tmp2;
    USE(tmp2);
    tmp2 = UnsafeCast10FixedArray_1438(state_, TNode<Context>{tmp0}, TNode<Object>{tmp1});
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 933);
    TNode<Smi> tmp3;
    USE(tmp3);
    tmp3 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 1);
    TNode<SmiBox> tmp4;
    tmp4 = TORQUE_CAST(CodeStubAssembler(state_).CallBuiltin(Builtins::kNewSmiBox, tmp0, tmp3));
    USE(tmp4);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 934);
    TNode<IntPtrT> tmp5 = ca_.IntPtrConstant(FixedArray::kObjectsOffset);
    USE(tmp5);
    TNode<IntPtrT> tmp6 = ca_.IntPtrConstant(FixedArrayBase::kLengthOffset);
    USE(tmp6);
    TNode<Smi>tmp7 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp2, tmp6});
    TNode<IntPtrT> tmp8;
    USE(tmp8);
    tmp8 = Convert8ATintptr5ATSmi_188(state_, TNode<Smi>{tmp7});
    TNode<IntPtrT> tmp9 = ca_.IntPtrConstant(SmiBox::kValueOffset);
    USE(tmp9);
    TNode<Smi>tmp10 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp4, tmp9});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 55);
    TNode<IntPtrT> tmp11;
    USE(tmp11);
    tmp11 = Convert8ATintptr5ATSmi_188(state_, TNode<Smi>{tmp10});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 56);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 37);
    TNode<UintPtrT> tmp12;
    USE(tmp12);
    tmp12 = Convert9ATuintptr8ATintptr_205(state_, TNode<IntPtrT>{tmp11});
    TNode<UintPtrT> tmp13;
    USE(tmp13);
    tmp13 = Convert9ATuintptr8ATintptr_205(state_, TNode<IntPtrT>{tmp8});
    TNode<BoolT> tmp14;
    USE(tmp14);
    tmp14 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp12}, TNode<UintPtrT>{tmp13});
    ca_.Branch(tmp14, &block6, &block7, tmp0, tmp2, tmp4, tmp2, tmp5, tmp8, tmp10, tmp10, tmp11, tmp2, tmp5, tmp8, tmp11, tmp11);
  }

  if (block6.is_used()) {
    TNode<Context> tmp15;
    TNode<FixedArray> tmp16;
    TNode<SmiBox> tmp17;
    TNode<FixedArray> tmp18;
    TNode<IntPtrT> tmp19;
    TNode<IntPtrT> tmp20;
    TNode<Smi> tmp21;
    TNode<Smi> tmp22;
    TNode<IntPtrT> tmp23;
    TNode<HeapObject> tmp24;
    TNode<IntPtrT> tmp25;
    TNode<IntPtrT> tmp26;
    TNode<IntPtrT> tmp27;
    TNode<IntPtrT> tmp28;
    ca_.Bind(&block6, &tmp15, &tmp16, &tmp17, &tmp18, &tmp19, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26, &tmp27, &tmp28);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 39);
    TNode<IntPtrT> tmp29;
    USE(tmp29);
    tmp29 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, (SizeOf20UT5ATSmi10HeapObject_346(state_)));
    TNode<IntPtrT> tmp30;
    USE(tmp30);
    tmp30 = CodeStubAssembler(state_).IntPtrMul(TNode<IntPtrT>{tmp28}, TNode<IntPtrT>{tmp29});
    TNode<IntPtrT> tmp31;
    USE(tmp31);
    tmp31 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp25}, TNode<IntPtrT>{tmp30});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 38);
    TNode<HeapObject> tmp32;
    USE(tmp32);
    TNode<IntPtrT> tmp33;
    USE(tmp33);
    std::tie(tmp32, tmp33) = UnsafeNewReference20UT5ATSmi10HeapObject_1440(state_, TNode<HeapObject>{tmp24}, TNode<IntPtrT>{tmp31}).Flatten();
    ca_.Goto(&block5, tmp15, tmp16, tmp17, tmp18, tmp19, tmp20, tmp21, tmp22, tmp23, tmp24, tmp25, tmp26, tmp27, tmp28, tmp32, tmp33);
  }

  if (block7.is_used()) {
    TNode<Context> tmp34;
    TNode<FixedArray> tmp35;
    TNode<SmiBox> tmp36;
    TNode<FixedArray> tmp37;
    TNode<IntPtrT> tmp38;
    TNode<IntPtrT> tmp39;
    TNode<Smi> tmp40;
    TNode<Smi> tmp41;
    TNode<IntPtrT> tmp42;
    TNode<HeapObject> tmp43;
    TNode<IntPtrT> tmp44;
    TNode<IntPtrT> tmp45;
    TNode<IntPtrT> tmp46;
    TNode<IntPtrT> tmp47;
    ca_.Bind(&block7, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40, &tmp41, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 41);
    ca_.Goto(&block4, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39, tmp40, tmp41, tmp42);
  }

  if (block5.is_used()) {
    TNode<Context> tmp48;
    TNode<FixedArray> tmp49;
    TNode<SmiBox> tmp50;
    TNode<FixedArray> tmp51;
    TNode<IntPtrT> tmp52;
    TNode<IntPtrT> tmp53;
    TNode<Smi> tmp54;
    TNode<Smi> tmp55;
    TNode<IntPtrT> tmp56;
    TNode<HeapObject> tmp57;
    TNode<IntPtrT> tmp58;
    TNode<IntPtrT> tmp59;
    TNode<IntPtrT> tmp60;
    TNode<IntPtrT> tmp61;
    TNode<HeapObject> tmp62;
    TNode<IntPtrT> tmp63;
    ca_.Bind(&block5, &tmp48, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62, &tmp63);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 56);
    ca_.Goto(&block3, tmp48, tmp49, tmp50, tmp51, tmp52, tmp53, tmp54, tmp55, tmp56, tmp62, tmp63);
  }

  if (block4.is_used()) {
    TNode<Context> tmp64;
    TNode<FixedArray> tmp65;
    TNode<SmiBox> tmp66;
    TNode<FixedArray> tmp67;
    TNode<IntPtrT> tmp68;
    TNode<IntPtrT> tmp69;
    TNode<Smi> tmp70;
    TNode<Smi> tmp71;
    TNode<IntPtrT> tmp72;
    ca_.Bind(&block4, &tmp64, &tmp65, &tmp66, &tmp67, &tmp68, &tmp69, &tmp70, &tmp71, &tmp72);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block3.is_used()) {
    TNode<Context> tmp73;
    TNode<FixedArray> tmp74;
    TNode<SmiBox> tmp75;
    TNode<FixedArray> tmp76;
    TNode<IntPtrT> tmp77;
    TNode<IntPtrT> tmp78;
    TNode<Smi> tmp79;
    TNode<Smi> tmp80;
    TNode<IntPtrT> tmp81;
    TNode<HeapObject> tmp82;
    TNode<IntPtrT> tmp83;
    ca_.Bind(&block3, &tmp73, &tmp74, &tmp75, &tmp76, &tmp77, &tmp78, &tmp79, &tmp80, &tmp81, &tmp82, &tmp83);
    ca_.Goto(&block2, tmp73, tmp74, tmp75, tmp76, tmp77, tmp78, tmp79, tmp80, tmp82, tmp83);
  }

  if (block2.is_used()) {
    TNode<Context> tmp84;
    TNode<FixedArray> tmp85;
    TNode<SmiBox> tmp86;
    TNode<FixedArray> tmp87;
    TNode<IntPtrT> tmp88;
    TNode<IntPtrT> tmp89;
    TNode<Smi> tmp90;
    TNode<Smi> tmp91;
    TNode<HeapObject> tmp92;
    TNode<IntPtrT> tmp93;
    ca_.Bind(&block2, &tmp84, &tmp85, &tmp86, &tmp87, &tmp88, &tmp89, &tmp90, &tmp91, &tmp92, &tmp93);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 934);
    TNode<Object>tmp94 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp92, tmp93});
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 935);
    TNode<IntPtrT> tmp95 = ca_.IntPtrConstant(FixedArray::kObjectsOffset);
    USE(tmp95);
    TNode<IntPtrT> tmp96 = ca_.IntPtrConstant(FixedArrayBase::kLengthOffset);
    USE(tmp96);
    TNode<Smi>tmp97 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp85, tmp96});
    TNode<IntPtrT> tmp98;
    USE(tmp98);
    tmp98 = Convert8ATintptr5ATSmi_188(state_, TNode<Smi>{tmp97});
    TNode<IntPtrT> tmp99 = ca_.IntPtrConstant(SmiBox::kValueOffset);
    USE(tmp99);
    TNode<Smi>tmp100 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp86, tmp99});
    TNode<Smi> tmp101;
    USE(tmp101);
    tmp101 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 2);
    TNode<Smi> tmp102;
    USE(tmp102);
    tmp102 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{tmp100}, TNode<Smi>{tmp101});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 55);
    TNode<IntPtrT> tmp103;
    USE(tmp103);
    tmp103 = Convert8ATintptr5ATSmi_188(state_, TNode<Smi>{tmp102});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 56);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 37);
    TNode<UintPtrT> tmp104;
    USE(tmp104);
    tmp104 = Convert9ATuintptr8ATintptr_205(state_, TNode<IntPtrT>{tmp103});
    TNode<UintPtrT> tmp105;
    USE(tmp105);
    tmp105 = Convert9ATuintptr8ATintptr_205(state_, TNode<IntPtrT>{tmp98});
    TNode<BoolT> tmp106;
    USE(tmp106);
    tmp106 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp104}, TNode<UintPtrT>{tmp105});
    ca_.Branch(tmp106, &block13, &block14, tmp84, tmp85, tmp86, tmp94, tmp85, tmp95, tmp98, tmp102, tmp102, tmp103, tmp85, tmp95, tmp98, tmp103, tmp103);
  }

  if (block13.is_used()) {
    TNode<Context> tmp107;
    TNode<FixedArray> tmp108;
    TNode<SmiBox> tmp109;
    TNode<Object> tmp110;
    TNode<FixedArray> tmp111;
    TNode<IntPtrT> tmp112;
    TNode<IntPtrT> tmp113;
    TNode<Smi> tmp114;
    TNode<Smi> tmp115;
    TNode<IntPtrT> tmp116;
    TNode<HeapObject> tmp117;
    TNode<IntPtrT> tmp118;
    TNode<IntPtrT> tmp119;
    TNode<IntPtrT> tmp120;
    TNode<IntPtrT> tmp121;
    ca_.Bind(&block13, &tmp107, &tmp108, &tmp109, &tmp110, &tmp111, &tmp112, &tmp113, &tmp114, &tmp115, &tmp116, &tmp117, &tmp118, &tmp119, &tmp120, &tmp121);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 39);
    TNode<IntPtrT> tmp122;
    USE(tmp122);
    tmp122 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, (SizeOf20UT5ATSmi10HeapObject_346(state_)));
    TNode<IntPtrT> tmp123;
    USE(tmp123);
    tmp123 = CodeStubAssembler(state_).IntPtrMul(TNode<IntPtrT>{tmp121}, TNode<IntPtrT>{tmp122});
    TNode<IntPtrT> tmp124;
    USE(tmp124);
    tmp124 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp118}, TNode<IntPtrT>{tmp123});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 38);
    TNode<HeapObject> tmp125;
    USE(tmp125);
    TNode<IntPtrT> tmp126;
    USE(tmp126);
    std::tie(tmp125, tmp126) = UnsafeNewReference20UT5ATSmi10HeapObject_1440(state_, TNode<HeapObject>{tmp117}, TNode<IntPtrT>{tmp124}).Flatten();
    ca_.Goto(&block12, tmp107, tmp108, tmp109, tmp110, tmp111, tmp112, tmp113, tmp114, tmp115, tmp116, tmp117, tmp118, tmp119, tmp120, tmp121, tmp125, tmp126);
  }

  if (block14.is_used()) {
    TNode<Context> tmp127;
    TNode<FixedArray> tmp128;
    TNode<SmiBox> tmp129;
    TNode<Object> tmp130;
    TNode<FixedArray> tmp131;
    TNode<IntPtrT> tmp132;
    TNode<IntPtrT> tmp133;
    TNode<Smi> tmp134;
    TNode<Smi> tmp135;
    TNode<IntPtrT> tmp136;
    TNode<HeapObject> tmp137;
    TNode<IntPtrT> tmp138;
    TNode<IntPtrT> tmp139;
    TNode<IntPtrT> tmp140;
    TNode<IntPtrT> tmp141;
    ca_.Bind(&block14, &tmp127, &tmp128, &tmp129, &tmp130, &tmp131, &tmp132, &tmp133, &tmp134, &tmp135, &tmp136, &tmp137, &tmp138, &tmp139, &tmp140, &tmp141);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 41);
    ca_.Goto(&block11, tmp127, tmp128, tmp129, tmp130, tmp131, tmp132, tmp133, tmp134, tmp135, tmp136);
  }

  if (block12.is_used()) {
    TNode<Context> tmp142;
    TNode<FixedArray> tmp143;
    TNode<SmiBox> tmp144;
    TNode<Object> tmp145;
    TNode<FixedArray> tmp146;
    TNode<IntPtrT> tmp147;
    TNode<IntPtrT> tmp148;
    TNode<Smi> tmp149;
    TNode<Smi> tmp150;
    TNode<IntPtrT> tmp151;
    TNode<HeapObject> tmp152;
    TNode<IntPtrT> tmp153;
    TNode<IntPtrT> tmp154;
    TNode<IntPtrT> tmp155;
    TNode<IntPtrT> tmp156;
    TNode<HeapObject> tmp157;
    TNode<IntPtrT> tmp158;
    ca_.Bind(&block12, &tmp142, &tmp143, &tmp144, &tmp145, &tmp146, &tmp147, &tmp148, &tmp149, &tmp150, &tmp151, &tmp152, &tmp153, &tmp154, &tmp155, &tmp156, &tmp157, &tmp158);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 56);
    ca_.Goto(&block10, tmp142, tmp143, tmp144, tmp145, tmp146, tmp147, tmp148, tmp149, tmp150, tmp151, tmp157, tmp158);
  }

  if (block11.is_used()) {
    TNode<Context> tmp159;
    TNode<FixedArray> tmp160;
    TNode<SmiBox> tmp161;
    TNode<Object> tmp162;
    TNode<FixedArray> tmp163;
    TNode<IntPtrT> tmp164;
    TNode<IntPtrT> tmp165;
    TNode<Smi> tmp166;
    TNode<Smi> tmp167;
    TNode<IntPtrT> tmp168;
    ca_.Bind(&block11, &tmp159, &tmp160, &tmp161, &tmp162, &tmp163, &tmp164, &tmp165, &tmp166, &tmp167, &tmp168);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block10.is_used()) {
    TNode<Context> tmp169;
    TNode<FixedArray> tmp170;
    TNode<SmiBox> tmp171;
    TNode<Object> tmp172;
    TNode<FixedArray> tmp173;
    TNode<IntPtrT> tmp174;
    TNode<IntPtrT> tmp175;
    TNode<Smi> tmp176;
    TNode<Smi> tmp177;
    TNode<IntPtrT> tmp178;
    TNode<HeapObject> tmp179;
    TNode<IntPtrT> tmp180;
    ca_.Bind(&block10, &tmp169, &tmp170, &tmp171, &tmp172, &tmp173, &tmp174, &tmp175, &tmp176, &tmp177, &tmp178, &tmp179, &tmp180);
    ca_.Goto(&block9, tmp169, tmp170, tmp171, tmp172, tmp173, tmp174, tmp175, tmp176, tmp177, tmp179, tmp180);
  }

  if (block9.is_used()) {
    TNode<Context> tmp181;
    TNode<FixedArray> tmp182;
    TNode<SmiBox> tmp183;
    TNode<Object> tmp184;
    TNode<FixedArray> tmp185;
    TNode<IntPtrT> tmp186;
    TNode<IntPtrT> tmp187;
    TNode<Smi> tmp188;
    TNode<Smi> tmp189;
    TNode<HeapObject> tmp190;
    TNode<IntPtrT> tmp191;
    ca_.Bind(&block9, &tmp181, &tmp182, &tmp183, &tmp184, &tmp185, &tmp186, &tmp187, &tmp188, &tmp189, &tmp190, &tmp191);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 935);
    TNode<Object>tmp192 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp190, tmp191});
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 936);
    TNode<IntPtrT> tmp193 = ca_.IntPtrConstant(FixedArray::kObjectsOffset);
    USE(tmp193);
    TNode<IntPtrT> tmp194 = ca_.IntPtrConstant(FixedArrayBase::kLengthOffset);
    USE(tmp194);
    TNode<Smi>tmp195 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp182, tmp194});
    TNode<IntPtrT> tmp196;
    USE(tmp196);
    tmp196 = Convert8ATintptr5ATSmi_188(state_, TNode<Smi>{tmp195});
    TNode<IntPtrT> tmp197 = ca_.IntPtrConstant(SmiBox::kValueOffset);
    USE(tmp197);
    TNode<Smi>tmp198 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp183, tmp197});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 55);
    TNode<IntPtrT> tmp199;
    USE(tmp199);
    tmp199 = Convert8ATintptr5ATSmi_188(state_, TNode<Smi>{tmp198});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 56);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 37);
    TNode<UintPtrT> tmp200;
    USE(tmp200);
    tmp200 = Convert9ATuintptr8ATintptr_205(state_, TNode<IntPtrT>{tmp199});
    TNode<UintPtrT> tmp201;
    USE(tmp201);
    tmp201 = Convert9ATuintptr8ATintptr_205(state_, TNode<IntPtrT>{tmp196});
    TNode<BoolT> tmp202;
    USE(tmp202);
    tmp202 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp200}, TNode<UintPtrT>{tmp201});
    ca_.Branch(tmp202, &block20, &block21, tmp181, tmp182, tmp183, tmp184, tmp192, tmp182, tmp193, tmp196, tmp198, tmp198, tmp199, tmp182, tmp193, tmp196, tmp199, tmp199);
  }

  if (block20.is_used()) {
    TNode<Context> tmp203;
    TNode<FixedArray> tmp204;
    TNode<SmiBox> tmp205;
    TNode<Object> tmp206;
    TNode<Object> tmp207;
    TNode<FixedArray> tmp208;
    TNode<IntPtrT> tmp209;
    TNode<IntPtrT> tmp210;
    TNode<Smi> tmp211;
    TNode<Smi> tmp212;
    TNode<IntPtrT> tmp213;
    TNode<HeapObject> tmp214;
    TNode<IntPtrT> tmp215;
    TNode<IntPtrT> tmp216;
    TNode<IntPtrT> tmp217;
    TNode<IntPtrT> tmp218;
    ca_.Bind(&block20, &tmp203, &tmp204, &tmp205, &tmp206, &tmp207, &tmp208, &tmp209, &tmp210, &tmp211, &tmp212, &tmp213, &tmp214, &tmp215, &tmp216, &tmp217, &tmp218);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 39);
    TNode<IntPtrT> tmp219;
    USE(tmp219);
    tmp219 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, (SizeOf20UT5ATSmi10HeapObject_346(state_)));
    TNode<IntPtrT> tmp220;
    USE(tmp220);
    tmp220 = CodeStubAssembler(state_).IntPtrMul(TNode<IntPtrT>{tmp218}, TNode<IntPtrT>{tmp219});
    TNode<IntPtrT> tmp221;
    USE(tmp221);
    tmp221 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp215}, TNode<IntPtrT>{tmp220});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 38);
    TNode<HeapObject> tmp222;
    USE(tmp222);
    TNode<IntPtrT> tmp223;
    USE(tmp223);
    std::tie(tmp222, tmp223) = UnsafeNewReference20UT5ATSmi10HeapObject_1440(state_, TNode<HeapObject>{tmp214}, TNode<IntPtrT>{tmp221}).Flatten();
    ca_.Goto(&block19, tmp203, tmp204, tmp205, tmp206, tmp207, tmp208, tmp209, tmp210, tmp211, tmp212, tmp213, tmp214, tmp215, tmp216, tmp217, tmp218, tmp222, tmp223);
  }

  if (block21.is_used()) {
    TNode<Context> tmp224;
    TNode<FixedArray> tmp225;
    TNode<SmiBox> tmp226;
    TNode<Object> tmp227;
    TNode<Object> tmp228;
    TNode<FixedArray> tmp229;
    TNode<IntPtrT> tmp230;
    TNode<IntPtrT> tmp231;
    TNode<Smi> tmp232;
    TNode<Smi> tmp233;
    TNode<IntPtrT> tmp234;
    TNode<HeapObject> tmp235;
    TNode<IntPtrT> tmp236;
    TNode<IntPtrT> tmp237;
    TNode<IntPtrT> tmp238;
    TNode<IntPtrT> tmp239;
    ca_.Bind(&block21, &tmp224, &tmp225, &tmp226, &tmp227, &tmp228, &tmp229, &tmp230, &tmp231, &tmp232, &tmp233, &tmp234, &tmp235, &tmp236, &tmp237, &tmp238, &tmp239);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 41);
    ca_.Goto(&block18, tmp224, tmp225, tmp226, tmp227, tmp228, tmp229, tmp230, tmp231, tmp232, tmp233, tmp234);
  }

  if (block19.is_used()) {
    TNode<Context> tmp240;
    TNode<FixedArray> tmp241;
    TNode<SmiBox> tmp242;
    TNode<Object> tmp243;
    TNode<Object> tmp244;
    TNode<FixedArray> tmp245;
    TNode<IntPtrT> tmp246;
    TNode<IntPtrT> tmp247;
    TNode<Smi> tmp248;
    TNode<Smi> tmp249;
    TNode<IntPtrT> tmp250;
    TNode<HeapObject> tmp251;
    TNode<IntPtrT> tmp252;
    TNode<IntPtrT> tmp253;
    TNode<IntPtrT> tmp254;
    TNode<IntPtrT> tmp255;
    TNode<HeapObject> tmp256;
    TNode<IntPtrT> tmp257;
    ca_.Bind(&block19, &tmp240, &tmp241, &tmp242, &tmp243, &tmp244, &tmp245, &tmp246, &tmp247, &tmp248, &tmp249, &tmp250, &tmp251, &tmp252, &tmp253, &tmp254, &tmp255, &tmp256, &tmp257);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 56);
    ca_.Goto(&block17, tmp240, tmp241, tmp242, tmp243, tmp244, tmp245, tmp246, tmp247, tmp248, tmp249, tmp250, tmp256, tmp257);
  }

  if (block18.is_used()) {
    TNode<Context> tmp258;
    TNode<FixedArray> tmp259;
    TNode<SmiBox> tmp260;
    TNode<Object> tmp261;
    TNode<Object> tmp262;
    TNode<FixedArray> tmp263;
    TNode<IntPtrT> tmp264;
    TNode<IntPtrT> tmp265;
    TNode<Smi> tmp266;
    TNode<Smi> tmp267;
    TNode<IntPtrT> tmp268;
    ca_.Bind(&block18, &tmp258, &tmp259, &tmp260, &tmp261, &tmp262, &tmp263, &tmp264, &tmp265, &tmp266, &tmp267, &tmp268);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block17.is_used()) {
    TNode<Context> tmp269;
    TNode<FixedArray> tmp270;
    TNode<SmiBox> tmp271;
    TNode<Object> tmp272;
    TNode<Object> tmp273;
    TNode<FixedArray> tmp274;
    TNode<IntPtrT> tmp275;
    TNode<IntPtrT> tmp276;
    TNode<Smi> tmp277;
    TNode<Smi> tmp278;
    TNode<IntPtrT> tmp279;
    TNode<HeapObject> tmp280;
    TNode<IntPtrT> tmp281;
    ca_.Bind(&block17, &tmp269, &tmp270, &tmp271, &tmp272, &tmp273, &tmp274, &tmp275, &tmp276, &tmp277, &tmp278, &tmp279, &tmp280, &tmp281);
    ca_.Goto(&block16, tmp269, tmp270, tmp271, tmp272, tmp273, tmp274, tmp275, tmp276, tmp277, tmp278, tmp280, tmp281);
  }

  if (block16.is_used()) {
    TNode<Context> tmp282;
    TNode<FixedArray> tmp283;
    TNode<SmiBox> tmp284;
    TNode<Object> tmp285;
    TNode<Object> tmp286;
    TNode<FixedArray> tmp287;
    TNode<IntPtrT> tmp288;
    TNode<IntPtrT> tmp289;
    TNode<Smi> tmp290;
    TNode<Smi> tmp291;
    TNode<HeapObject> tmp292;
    TNode<IntPtrT> tmp293;
    ca_.Bind(&block16, &tmp282, &tmp283, &tmp284, &tmp285, &tmp286, &tmp287, &tmp288, &tmp289, &tmp290, &tmp291, &tmp292, &tmp293);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 936);
    TNode<Object>tmp294 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp292, tmp293});
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 937);
    TNode<IntPtrT> tmp295 = ca_.IntPtrConstant(FixedArray::kObjectsOffset);
    USE(tmp295);
    TNode<IntPtrT> tmp296 = ca_.IntPtrConstant(FixedArrayBase::kLengthOffset);
    USE(tmp296);
    TNode<Smi>tmp297 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp283, tmp296});
    TNode<IntPtrT> tmp298;
    USE(tmp298);
    tmp298 = Convert8ATintptr5ATSmi_188(state_, TNode<Smi>{tmp297});
    TNode<IntPtrT> tmp299 = ca_.IntPtrConstant(SmiBox::kValueOffset);
    USE(tmp299);
    TNode<Smi>tmp300 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp284, tmp299});
    TNode<Smi> tmp301;
    USE(tmp301);
    tmp301 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 2);
    TNode<Smi> tmp302;
    USE(tmp302);
    tmp302 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{tmp300}, TNode<Smi>{tmp301});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 55);
    TNode<IntPtrT> tmp303;
    USE(tmp303);
    tmp303 = Convert8ATintptr5ATSmi_188(state_, TNode<Smi>{tmp302});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 56);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 37);
    TNode<UintPtrT> tmp304;
    USE(tmp304);
    tmp304 = Convert9ATuintptr8ATintptr_205(state_, TNode<IntPtrT>{tmp303});
    TNode<UintPtrT> tmp305;
    USE(tmp305);
    tmp305 = Convert9ATuintptr8ATintptr_205(state_, TNode<IntPtrT>{tmp298});
    TNode<BoolT> tmp306;
    USE(tmp306);
    tmp306 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp304}, TNode<UintPtrT>{tmp305});
    ca_.Branch(tmp306, &block27, &block28, tmp282, tmp283, tmp284, tmp285, tmp286, tmp294, tmp283, tmp295, tmp298, tmp302, tmp302, tmp303, tmp283, tmp295, tmp298, tmp303, tmp303);
  }

  if (block27.is_used()) {
    TNode<Context> tmp307;
    TNode<FixedArray> tmp308;
    TNode<SmiBox> tmp309;
    TNode<Object> tmp310;
    TNode<Object> tmp311;
    TNode<Object> tmp312;
    TNode<FixedArray> tmp313;
    TNode<IntPtrT> tmp314;
    TNode<IntPtrT> tmp315;
    TNode<Smi> tmp316;
    TNode<Smi> tmp317;
    TNode<IntPtrT> tmp318;
    TNode<HeapObject> tmp319;
    TNode<IntPtrT> tmp320;
    TNode<IntPtrT> tmp321;
    TNode<IntPtrT> tmp322;
    TNode<IntPtrT> tmp323;
    ca_.Bind(&block27, &tmp307, &tmp308, &tmp309, &tmp310, &tmp311, &tmp312, &tmp313, &tmp314, &tmp315, &tmp316, &tmp317, &tmp318, &tmp319, &tmp320, &tmp321, &tmp322, &tmp323);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 39);
    TNode<IntPtrT> tmp324;
    USE(tmp324);
    tmp324 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, (SizeOf20UT5ATSmi10HeapObject_346(state_)));
    TNode<IntPtrT> tmp325;
    USE(tmp325);
    tmp325 = CodeStubAssembler(state_).IntPtrMul(TNode<IntPtrT>{tmp323}, TNode<IntPtrT>{tmp324});
    TNode<IntPtrT> tmp326;
    USE(tmp326);
    tmp326 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp320}, TNode<IntPtrT>{tmp325});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 38);
    TNode<HeapObject> tmp327;
    USE(tmp327);
    TNode<IntPtrT> tmp328;
    USE(tmp328);
    std::tie(tmp327, tmp328) = UnsafeNewReference20UT5ATSmi10HeapObject_1440(state_, TNode<HeapObject>{tmp319}, TNode<IntPtrT>{tmp326}).Flatten();
    ca_.Goto(&block26, tmp307, tmp308, tmp309, tmp310, tmp311, tmp312, tmp313, tmp314, tmp315, tmp316, tmp317, tmp318, tmp319, tmp320, tmp321, tmp322, tmp323, tmp327, tmp328);
  }

  if (block28.is_used()) {
    TNode<Context> tmp329;
    TNode<FixedArray> tmp330;
    TNode<SmiBox> tmp331;
    TNode<Object> tmp332;
    TNode<Object> tmp333;
    TNode<Object> tmp334;
    TNode<FixedArray> tmp335;
    TNode<IntPtrT> tmp336;
    TNode<IntPtrT> tmp337;
    TNode<Smi> tmp338;
    TNode<Smi> tmp339;
    TNode<IntPtrT> tmp340;
    TNode<HeapObject> tmp341;
    TNode<IntPtrT> tmp342;
    TNode<IntPtrT> tmp343;
    TNode<IntPtrT> tmp344;
    TNode<IntPtrT> tmp345;
    ca_.Bind(&block28, &tmp329, &tmp330, &tmp331, &tmp332, &tmp333, &tmp334, &tmp335, &tmp336, &tmp337, &tmp338, &tmp339, &tmp340, &tmp341, &tmp342, &tmp343, &tmp344, &tmp345);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 41);
    ca_.Goto(&block25, tmp329, tmp330, tmp331, tmp332, tmp333, tmp334, tmp335, tmp336, tmp337, tmp338, tmp339, tmp340);
  }

  if (block26.is_used()) {
    TNode<Context> tmp346;
    TNode<FixedArray> tmp347;
    TNode<SmiBox> tmp348;
    TNode<Object> tmp349;
    TNode<Object> tmp350;
    TNode<Object> tmp351;
    TNode<FixedArray> tmp352;
    TNode<IntPtrT> tmp353;
    TNode<IntPtrT> tmp354;
    TNode<Smi> tmp355;
    TNode<Smi> tmp356;
    TNode<IntPtrT> tmp357;
    TNode<HeapObject> tmp358;
    TNode<IntPtrT> tmp359;
    TNode<IntPtrT> tmp360;
    TNode<IntPtrT> tmp361;
    TNode<IntPtrT> tmp362;
    TNode<HeapObject> tmp363;
    TNode<IntPtrT> tmp364;
    ca_.Bind(&block26, &tmp346, &tmp347, &tmp348, &tmp349, &tmp350, &tmp351, &tmp352, &tmp353, &tmp354, &tmp355, &tmp356, &tmp357, &tmp358, &tmp359, &tmp360, &tmp361, &tmp362, &tmp363, &tmp364);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 56);
    ca_.Goto(&block24, tmp346, tmp347, tmp348, tmp349, tmp350, tmp351, tmp352, tmp353, tmp354, tmp355, tmp356, tmp357, tmp363, tmp364);
  }

  if (block25.is_used()) {
    TNode<Context> tmp365;
    TNode<FixedArray> tmp366;
    TNode<SmiBox> tmp367;
    TNode<Object> tmp368;
    TNode<Object> tmp369;
    TNode<Object> tmp370;
    TNode<FixedArray> tmp371;
    TNode<IntPtrT> tmp372;
    TNode<IntPtrT> tmp373;
    TNode<Smi> tmp374;
    TNode<Smi> tmp375;
    TNode<IntPtrT> tmp376;
    ca_.Bind(&block25, &tmp365, &tmp366, &tmp367, &tmp368, &tmp369, &tmp370, &tmp371, &tmp372, &tmp373, &tmp374, &tmp375, &tmp376);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block24.is_used()) {
    TNode<Context> tmp377;
    TNode<FixedArray> tmp378;
    TNode<SmiBox> tmp379;
    TNode<Object> tmp380;
    TNode<Object> tmp381;
    TNode<Object> tmp382;
    TNode<FixedArray> tmp383;
    TNode<IntPtrT> tmp384;
    TNode<IntPtrT> tmp385;
    TNode<Smi> tmp386;
    TNode<Smi> tmp387;
    TNode<IntPtrT> tmp388;
    TNode<HeapObject> tmp389;
    TNode<IntPtrT> tmp390;
    ca_.Bind(&block24, &tmp377, &tmp378, &tmp379, &tmp380, &tmp381, &tmp382, &tmp383, &tmp384, &tmp385, &tmp386, &tmp387, &tmp388, &tmp389, &tmp390);
    ca_.Goto(&block23, tmp377, tmp378, tmp379, tmp380, tmp381, tmp382, tmp383, tmp384, tmp385, tmp386, tmp387, tmp389, tmp390);
  }

  if (block23.is_used()) {
    TNode<Context> tmp391;
    TNode<FixedArray> tmp392;
    TNode<SmiBox> tmp393;
    TNode<Object> tmp394;
    TNode<Object> tmp395;
    TNode<Object> tmp396;
    TNode<FixedArray> tmp397;
    TNode<IntPtrT> tmp398;
    TNode<IntPtrT> tmp399;
    TNode<Smi> tmp400;
    TNode<Smi> tmp401;
    TNode<HeapObject> tmp402;
    TNode<IntPtrT> tmp403;
    ca_.Bind(&block23, &tmp391, &tmp392, &tmp393, &tmp394, &tmp395, &tmp396, &tmp397, &tmp398, &tmp399, &tmp400, &tmp401, &tmp402, &tmp403);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 937);
    TNode<Object>tmp404 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp402, tmp403});
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 938);
    TNode<BoolT> tmp405;
    USE(tmp405);
    tmp405 = CodeStubAssembler(state_).TaggedEqual(TNode<Object>{tmp394}, TNode<Object>{tmp396});
    CodeStubAssembler(state_).StaticAssert(TNode<BoolT>{tmp405});
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 939);
    TNode<BoolT> tmp406;
    USE(tmp406);
    tmp406 = CodeStubAssembler(state_).TaggedEqual(TNode<Object>{tmp395}, TNode<Object>{tmp404});
    CodeStubAssembler(state_).StaticAssert(TNode<BoolT>{tmp406});
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 931);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 930);
    ca_.Goto(&block1, tmp391);
  }

  if (block1.is_used()) {
    TNode<Context> tmp407;
    ca_.Bind(&block1, &tmp407);
    ca_.Goto(&block30, tmp407);
  }

    TNode<Context> tmp408;
    ca_.Bind(&block30, &tmp408);
}

TNode<Smi> TestRedundantArrayElementCheck_466(compiler::CodeAssemblerState* state_, TNode<Context> p_context) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Smi> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, HeapObject, IntPtrT> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Smi> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block21(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, HeapObject, IntPtrT> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Smi> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Smi> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Smi> block24(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Smi> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Smi> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Smi> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi> block25(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 944);
    TNode<FixedArray> tmp1;
    USE(tmp1);
    tmp1 = kEmptyFixedArray_214(state_);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 945);
    TNode<Smi> tmp2;
    USE(tmp2);
    tmp2 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 0);
    ca_.Goto(&block4, tmp0, tmp1, tmp2);
  }

  if (block4.is_used()) {
    TNode<Context> tmp3;
    TNode<FixedArray> tmp4;
    TNode<Smi> tmp5;
    ca_.Bind(&block4, &tmp3, &tmp4, &tmp5);
    TNode<IntPtrT> tmp6 = ca_.IntPtrConstant(FixedArrayBase::kLengthOffset);
    USE(tmp6);
    TNode<Smi>tmp7 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp4, tmp6});
    TNode<BoolT> tmp8;
    USE(tmp8);
    tmp8 = CodeStubAssembler(state_).SmiLessThan(TNode<Smi>{tmp5}, TNode<Smi>{tmp7});
    ca_.Branch(tmp8, &block2, &block3, tmp3, tmp4, tmp5);
  }

  if (block2.is_used()) {
    TNode<Context> tmp9;
    TNode<FixedArray> tmp10;
    TNode<Smi> tmp11;
    ca_.Bind(&block2, &tmp9, &tmp10, &tmp11);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 946);
    TNode<IntPtrT> tmp12 = ca_.IntPtrConstant(FixedArray::kObjectsOffset);
    USE(tmp12);
    TNode<IntPtrT> tmp13 = ca_.IntPtrConstant(FixedArrayBase::kLengthOffset);
    USE(tmp13);
    TNode<Smi>tmp14 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp10, tmp13});
    TNode<IntPtrT> tmp15;
    USE(tmp15);
    tmp15 = Convert8ATintptr5ATSmi_188(state_, TNode<Smi>{tmp14});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 55);
    TNode<IntPtrT> tmp16;
    USE(tmp16);
    tmp16 = Convert8ATintptr5ATSmi_188(state_, TNode<Smi>{tmp11});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 56);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 37);
    TNode<UintPtrT> tmp17;
    USE(tmp17);
    tmp17 = Convert9ATuintptr8ATintptr_205(state_, TNode<IntPtrT>{tmp16});
    TNode<UintPtrT> tmp18;
    USE(tmp18);
    tmp18 = Convert9ATuintptr8ATintptr_205(state_, TNode<IntPtrT>{tmp15});
    TNode<BoolT> tmp19;
    USE(tmp19);
    tmp19 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp17}, TNode<UintPtrT>{tmp18});
    ca_.Branch(tmp19, &block12, &block13, tmp9, tmp10, tmp11, tmp10, tmp12, tmp15, tmp11, tmp11, tmp16, tmp10, tmp12, tmp15, tmp16, tmp16);
  }

  if (block12.is_used()) {
    TNode<Context> tmp20;
    TNode<FixedArray> tmp21;
    TNode<Smi> tmp22;
    TNode<FixedArray> tmp23;
    TNode<IntPtrT> tmp24;
    TNode<IntPtrT> tmp25;
    TNode<Smi> tmp26;
    TNode<Smi> tmp27;
    TNode<IntPtrT> tmp28;
    TNode<HeapObject> tmp29;
    TNode<IntPtrT> tmp30;
    TNode<IntPtrT> tmp31;
    TNode<IntPtrT> tmp32;
    TNode<IntPtrT> tmp33;
    ca_.Bind(&block12, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26, &tmp27, &tmp28, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 39);
    TNode<IntPtrT> tmp34;
    USE(tmp34);
    tmp34 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, (SizeOf20UT5ATSmi10HeapObject_346(state_)));
    TNode<IntPtrT> tmp35;
    USE(tmp35);
    tmp35 = CodeStubAssembler(state_).IntPtrMul(TNode<IntPtrT>{tmp33}, TNode<IntPtrT>{tmp34});
    TNode<IntPtrT> tmp36;
    USE(tmp36);
    tmp36 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp30}, TNode<IntPtrT>{tmp35});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 38);
    TNode<HeapObject> tmp37;
    USE(tmp37);
    TNode<IntPtrT> tmp38;
    USE(tmp38);
    std::tie(tmp37, tmp38) = UnsafeNewReference20UT5ATSmi10HeapObject_1440(state_, TNode<HeapObject>{tmp29}, TNode<IntPtrT>{tmp36}).Flatten();
    ca_.Goto(&block11, tmp20, tmp21, tmp22, tmp23, tmp24, tmp25, tmp26, tmp27, tmp28, tmp29, tmp30, tmp31, tmp32, tmp33, tmp37, tmp38);
  }

  if (block13.is_used()) {
    TNode<Context> tmp39;
    TNode<FixedArray> tmp40;
    TNode<Smi> tmp41;
    TNode<FixedArray> tmp42;
    TNode<IntPtrT> tmp43;
    TNode<IntPtrT> tmp44;
    TNode<Smi> tmp45;
    TNode<Smi> tmp46;
    TNode<IntPtrT> tmp47;
    TNode<HeapObject> tmp48;
    TNode<IntPtrT> tmp49;
    TNode<IntPtrT> tmp50;
    TNode<IntPtrT> tmp51;
    TNode<IntPtrT> tmp52;
    ca_.Bind(&block13, &tmp39, &tmp40, &tmp41, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47, &tmp48, &tmp49, &tmp50, &tmp51, &tmp52);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 41);
    ca_.Goto(&block10, tmp39, tmp40, tmp41, tmp42, tmp43, tmp44, tmp45, tmp46, tmp47);
  }

  if (block11.is_used()) {
    TNode<Context> tmp53;
    TNode<FixedArray> tmp54;
    TNode<Smi> tmp55;
    TNode<FixedArray> tmp56;
    TNode<IntPtrT> tmp57;
    TNode<IntPtrT> tmp58;
    TNode<Smi> tmp59;
    TNode<Smi> tmp60;
    TNode<IntPtrT> tmp61;
    TNode<HeapObject> tmp62;
    TNode<IntPtrT> tmp63;
    TNode<IntPtrT> tmp64;
    TNode<IntPtrT> tmp65;
    TNode<IntPtrT> tmp66;
    TNode<HeapObject> tmp67;
    TNode<IntPtrT> tmp68;
    ca_.Bind(&block11, &tmp53, &tmp54, &tmp55, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67, &tmp68);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 56);
    ca_.Goto(&block9, tmp53, tmp54, tmp55, tmp56, tmp57, tmp58, tmp59, tmp60, tmp61, tmp67, tmp68);
  }

  if (block10.is_used()) {
    TNode<Context> tmp69;
    TNode<FixedArray> tmp70;
    TNode<Smi> tmp71;
    TNode<FixedArray> tmp72;
    TNode<IntPtrT> tmp73;
    TNode<IntPtrT> tmp74;
    TNode<Smi> tmp75;
    TNode<Smi> tmp76;
    TNode<IntPtrT> tmp77;
    ca_.Bind(&block10, &tmp69, &tmp70, &tmp71, &tmp72, &tmp73, &tmp74, &tmp75, &tmp76, &tmp77);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block9.is_used()) {
    TNode<Context> tmp78;
    TNode<FixedArray> tmp79;
    TNode<Smi> tmp80;
    TNode<FixedArray> tmp81;
    TNode<IntPtrT> tmp82;
    TNode<IntPtrT> tmp83;
    TNode<Smi> tmp84;
    TNode<Smi> tmp85;
    TNode<IntPtrT> tmp86;
    TNode<HeapObject> tmp87;
    TNode<IntPtrT> tmp88;
    ca_.Bind(&block9, &tmp78, &tmp79, &tmp80, &tmp81, &tmp82, &tmp83, &tmp84, &tmp85, &tmp86, &tmp87, &tmp88);
    ca_.Goto(&block8, tmp78, tmp79, tmp80, tmp81, tmp82, tmp83, tmp84, tmp85, tmp87, tmp88);
  }

  if (block8.is_used()) {
    TNode<Context> tmp89;
    TNode<FixedArray> tmp90;
    TNode<Smi> tmp91;
    TNode<FixedArray> tmp92;
    TNode<IntPtrT> tmp93;
    TNode<IntPtrT> tmp94;
    TNode<Smi> tmp95;
    TNode<Smi> tmp96;
    TNode<HeapObject> tmp97;
    TNode<IntPtrT> tmp98;
    ca_.Bind(&block8, &tmp89, &tmp90, &tmp91, &tmp92, &tmp93, &tmp94, &tmp95, &tmp96, &tmp97, &tmp98);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 946);
    TNode<Object>tmp99 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp97, tmp98});
    TNode<Oddball> tmp100;
    USE(tmp100);
    tmp100 = TheHole_62(state_);
    TNode<BoolT> tmp101;
    USE(tmp101);
    tmp101 = CodeStubAssembler(state_).TaggedEqual(TNode<Object>{tmp99}, TNode<HeapObject>{tmp100});
    ca_.Branch(tmp101, &block6, &block7, tmp89, tmp90, tmp91);
  }

  if (block6.is_used()) {
    TNode<Context> tmp102;
    TNode<FixedArray> tmp103;
    TNode<Smi> tmp104;
    ca_.Bind(&block6, &tmp102, &tmp103, &tmp104);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 947);
    TNode<IntPtrT> tmp105 = ca_.IntPtrConstant(FixedArray::kObjectsOffset);
    USE(tmp105);
    TNode<IntPtrT> tmp106 = ca_.IntPtrConstant(FixedArrayBase::kLengthOffset);
    USE(tmp106);
    TNode<Smi>tmp107 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp103, tmp106});
    TNode<IntPtrT> tmp108;
    USE(tmp108);
    tmp108 = Convert8ATintptr5ATSmi_188(state_, TNode<Smi>{tmp107});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 55);
    TNode<IntPtrT> tmp109;
    USE(tmp109);
    tmp109 = Convert8ATintptr5ATSmi_188(state_, TNode<Smi>{tmp104});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 56);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 37);
    TNode<UintPtrT> tmp110;
    USE(tmp110);
    tmp110 = Convert9ATuintptr8ATintptr_205(state_, TNode<IntPtrT>{tmp109});
    TNode<UintPtrT> tmp111;
    USE(tmp111);
    tmp111 = Convert9ATuintptr8ATintptr_205(state_, TNode<IntPtrT>{tmp108});
    TNode<BoolT> tmp112;
    USE(tmp112);
    tmp112 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp110}, TNode<UintPtrT>{tmp111});
    ca_.Branch(tmp112, &block21, &block22, tmp102, tmp103, tmp104, tmp103, tmp105, tmp108, tmp104, tmp104, tmp109, tmp103, tmp105, tmp108, tmp109, tmp109);
  }

  if (block21.is_used()) {
    TNode<Context> tmp113;
    TNode<FixedArray> tmp114;
    TNode<Smi> tmp115;
    TNode<FixedArray> tmp116;
    TNode<IntPtrT> tmp117;
    TNode<IntPtrT> tmp118;
    TNode<Smi> tmp119;
    TNode<Smi> tmp120;
    TNode<IntPtrT> tmp121;
    TNode<HeapObject> tmp122;
    TNode<IntPtrT> tmp123;
    TNode<IntPtrT> tmp124;
    TNode<IntPtrT> tmp125;
    TNode<IntPtrT> tmp126;
    ca_.Bind(&block21, &tmp113, &tmp114, &tmp115, &tmp116, &tmp117, &tmp118, &tmp119, &tmp120, &tmp121, &tmp122, &tmp123, &tmp124, &tmp125, &tmp126);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 39);
    TNode<IntPtrT> tmp127;
    USE(tmp127);
    tmp127 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, (SizeOf20UT5ATSmi10HeapObject_346(state_)));
    TNode<IntPtrT> tmp128;
    USE(tmp128);
    tmp128 = CodeStubAssembler(state_).IntPtrMul(TNode<IntPtrT>{tmp126}, TNode<IntPtrT>{tmp127});
    TNode<IntPtrT> tmp129;
    USE(tmp129);
    tmp129 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp123}, TNode<IntPtrT>{tmp128});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 38);
    TNode<HeapObject> tmp130;
    USE(tmp130);
    TNode<IntPtrT> tmp131;
    USE(tmp131);
    std::tie(tmp130, tmp131) = UnsafeNewReference20UT5ATSmi10HeapObject_1440(state_, TNode<HeapObject>{tmp122}, TNode<IntPtrT>{tmp129}).Flatten();
    ca_.Goto(&block20, tmp113, tmp114, tmp115, tmp116, tmp117, tmp118, tmp119, tmp120, tmp121, tmp122, tmp123, tmp124, tmp125, tmp126, tmp130, tmp131);
  }

  if (block22.is_used()) {
    TNode<Context> tmp132;
    TNode<FixedArray> tmp133;
    TNode<Smi> tmp134;
    TNode<FixedArray> tmp135;
    TNode<IntPtrT> tmp136;
    TNode<IntPtrT> tmp137;
    TNode<Smi> tmp138;
    TNode<Smi> tmp139;
    TNode<IntPtrT> tmp140;
    TNode<HeapObject> tmp141;
    TNode<IntPtrT> tmp142;
    TNode<IntPtrT> tmp143;
    TNode<IntPtrT> tmp144;
    TNode<IntPtrT> tmp145;
    ca_.Bind(&block22, &tmp132, &tmp133, &tmp134, &tmp135, &tmp136, &tmp137, &tmp138, &tmp139, &tmp140, &tmp141, &tmp142, &tmp143, &tmp144, &tmp145);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 41);
    ca_.Goto(&block19, tmp132, tmp133, tmp134, tmp135, tmp136, tmp137, tmp138, tmp139, tmp140);
  }

  if (block20.is_used()) {
    TNode<Context> tmp146;
    TNode<FixedArray> tmp147;
    TNode<Smi> tmp148;
    TNode<FixedArray> tmp149;
    TNode<IntPtrT> tmp150;
    TNode<IntPtrT> tmp151;
    TNode<Smi> tmp152;
    TNode<Smi> tmp153;
    TNode<IntPtrT> tmp154;
    TNode<HeapObject> tmp155;
    TNode<IntPtrT> tmp156;
    TNode<IntPtrT> tmp157;
    TNode<IntPtrT> tmp158;
    TNode<IntPtrT> tmp159;
    TNode<HeapObject> tmp160;
    TNode<IntPtrT> tmp161;
    ca_.Bind(&block20, &tmp146, &tmp147, &tmp148, &tmp149, &tmp150, &tmp151, &tmp152, &tmp153, &tmp154, &tmp155, &tmp156, &tmp157, &tmp158, &tmp159, &tmp160, &tmp161);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 56);
    ca_.Goto(&block18, tmp146, tmp147, tmp148, tmp149, tmp150, tmp151, tmp152, tmp153, tmp154, tmp160, tmp161);
  }

  if (block19.is_used()) {
    TNode<Context> tmp162;
    TNode<FixedArray> tmp163;
    TNode<Smi> tmp164;
    TNode<FixedArray> tmp165;
    TNode<IntPtrT> tmp166;
    TNode<IntPtrT> tmp167;
    TNode<Smi> tmp168;
    TNode<Smi> tmp169;
    TNode<IntPtrT> tmp170;
    ca_.Bind(&block19, &tmp162, &tmp163, &tmp164, &tmp165, &tmp166, &tmp167, &tmp168, &tmp169, &tmp170);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block18.is_used()) {
    TNode<Context> tmp171;
    TNode<FixedArray> tmp172;
    TNode<Smi> tmp173;
    TNode<FixedArray> tmp174;
    TNode<IntPtrT> tmp175;
    TNode<IntPtrT> tmp176;
    TNode<Smi> tmp177;
    TNode<Smi> tmp178;
    TNode<IntPtrT> tmp179;
    TNode<HeapObject> tmp180;
    TNode<IntPtrT> tmp181;
    ca_.Bind(&block18, &tmp171, &tmp172, &tmp173, &tmp174, &tmp175, &tmp176, &tmp177, &tmp178, &tmp179, &tmp180, &tmp181);
    ca_.Goto(&block17, tmp171, tmp172, tmp173, tmp174, tmp175, tmp176, tmp177, tmp178, tmp180, tmp181);
  }

  if (block17.is_used()) {
    TNode<Context> tmp182;
    TNode<FixedArray> tmp183;
    TNode<Smi> tmp184;
    TNode<FixedArray> tmp185;
    TNode<IntPtrT> tmp186;
    TNode<IntPtrT> tmp187;
    TNode<Smi> tmp188;
    TNode<Smi> tmp189;
    TNode<HeapObject> tmp190;
    TNode<IntPtrT> tmp191;
    ca_.Bind(&block17, &tmp182, &tmp183, &tmp184, &tmp185, &tmp186, &tmp187, &tmp188, &tmp189, &tmp190, &tmp191);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 947);
    TNode<Object>tmp192 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp190, tmp191});
    TNode<Oddball> tmp193;
    USE(tmp193);
    tmp193 = TheHole_62(state_);
    TNode<BoolT> tmp194;
    USE(tmp194);
    tmp194 = CodeStubAssembler(state_).TaggedEqual(TNode<Object>{tmp192}, TNode<HeapObject>{tmp193});
    ca_.Branch(tmp194, &block15, &block16, tmp182, tmp183, tmp184);
  }

  if (block15.is_used()) {
    TNode<Context> tmp195;
    TNode<FixedArray> tmp196;
    TNode<Smi> tmp197;
    ca_.Bind(&block15, &tmp195, &tmp196, &tmp197);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 948);
    TNode<Smi> tmp198;
    USE(tmp198);
    tmp198 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, -1);
    ca_.Goto(&block1, tmp195, tmp198);
  }

  if (block16.is_used()) {
    TNode<Context> tmp199;
    TNode<FixedArray> tmp200;
    TNode<Smi> tmp201;
    ca_.Bind(&block16, &tmp199, &tmp200, &tmp201);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 950);
    TNode<BoolT> tmp202;
    USE(tmp202);
    tmp202 = FromConstexpr6ATbool16ATconstexpr_bool_167(state_, false);
    CodeStubAssembler(state_).StaticAssert(TNode<BoolT>{tmp202});
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 947);
    ca_.Goto(&block24, tmp199, tmp200, tmp201);
  }

  if (block24.is_used()) {
    TNode<Context> tmp203;
    TNode<FixedArray> tmp204;
    TNode<Smi> tmp205;
    ca_.Bind(&block24, &tmp203, &tmp204, &tmp205);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 946);
    ca_.Goto(&block7, tmp203, tmp204, tmp205);
  }

  if (block7.is_used()) {
    TNode<Context> tmp206;
    TNode<FixedArray> tmp207;
    TNode<Smi> tmp208;
    ca_.Bind(&block7, &tmp206, &tmp207, &tmp208);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 945);
    ca_.Goto(&block5, tmp206, tmp207, tmp208);
  }

  if (block5.is_used()) {
    TNode<Context> tmp209;
    TNode<FixedArray> tmp210;
    TNode<Smi> tmp211;
    ca_.Bind(&block5, &tmp209, &tmp210, &tmp211);
    TNode<Smi> tmp212;
    USE(tmp212);
    tmp212 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 1);
    TNode<Smi> tmp213;
    USE(tmp213);
    tmp213 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{tmp211}, TNode<Smi>{tmp212});
    ca_.Goto(&block4, tmp209, tmp210, tmp213);
  }

  if (block3.is_used()) {
    TNode<Context> tmp214;
    TNode<FixedArray> tmp215;
    TNode<Smi> tmp216;
    ca_.Bind(&block3, &tmp214, &tmp215, &tmp216);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 954);
    TNode<Smi> tmp217;
    USE(tmp217);
    tmp217 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 1);
    ca_.Goto(&block1, tmp214, tmp217);
  }

  if (block1.is_used()) {
    TNode<Context> tmp218;
    TNode<Smi> tmp219;
    ca_.Bind(&block1, &tmp218, &tmp219);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 942);
    ca_.Goto(&block25, tmp218, tmp219);
  }

    TNode<Context> tmp220;
    TNode<Smi> tmp221;
    ca_.Bind(&block25, &tmp220, &tmp221);
  return TNode<Smi>{tmp221};
}

TNode<Smi> TestRedundantSmiCheck_467(compiler::CodeAssemblerState* state_, TNode<Context> p_context) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, FixedArray, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, FixedArray, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, FixedArray, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, FixedArray, IntPtrT, IntPtrT, IntPtrT> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, FixedArray, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, FixedArray, IntPtrT, IntPtrT, HeapObject, IntPtrT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Object, Object, Object> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Object, Object, Object, Smi> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Object, Object, Smi, Object> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Object, Object, Smi, Object, Smi> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Object, Object, Smi> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Object, Object, Smi, Smi> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Object, Object> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Object, Object> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 959);
    TNode<FixedArray> tmp1;
    USE(tmp1);
    tmp1 = kEmptyFixedArray_214(state_);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 960);
    TNode<IntPtrT> tmp2 = ca_.IntPtrConstant(FixedArray::kObjectsOffset);
    USE(tmp2);
    TNode<IntPtrT> tmp3 = ca_.IntPtrConstant(FixedArrayBase::kLengthOffset);
    USE(tmp3);
    TNode<Smi>tmp4 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp1, tmp3});
    TNode<IntPtrT> tmp5;
    USE(tmp5);
    tmp5 = Convert8ATintptr5ATSmi_188(state_, TNode<Smi>{tmp4});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 50);
    TNode<IntPtrT> tmp6;
    USE(tmp6);
    tmp6 = Convert8ATintptr17ATconstexpr_int31_1444(state_, 1);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 51);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 37);
    TNode<UintPtrT> tmp7;
    USE(tmp7);
    tmp7 = Convert9ATuintptr8ATintptr_205(state_, TNode<IntPtrT>{tmp6});
    TNode<UintPtrT> tmp8;
    USE(tmp8);
    tmp8 = Convert9ATuintptr8ATintptr_205(state_, TNode<IntPtrT>{tmp5});
    TNode<BoolT> tmp9;
    USE(tmp9);
    tmp9 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp7}, TNode<UintPtrT>{tmp8});
    ca_.Branch(tmp9, &block6, &block7, tmp0, tmp1, tmp1, tmp2, tmp5, tmp6, tmp1, tmp2, tmp5, tmp6, tmp6);
  }

  if (block6.is_used()) {
    TNode<Context> tmp10;
    TNode<FixedArray> tmp11;
    TNode<FixedArray> tmp12;
    TNode<IntPtrT> tmp13;
    TNode<IntPtrT> tmp14;
    TNode<IntPtrT> tmp15;
    TNode<HeapObject> tmp16;
    TNode<IntPtrT> tmp17;
    TNode<IntPtrT> tmp18;
    TNode<IntPtrT> tmp19;
    TNode<IntPtrT> tmp20;
    ca_.Bind(&block6, &tmp10, &tmp11, &tmp12, &tmp13, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18, &tmp19, &tmp20);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 39);
    TNode<IntPtrT> tmp21;
    USE(tmp21);
    tmp21 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, (SizeOf20UT5ATSmi10HeapObject_346(state_)));
    TNode<IntPtrT> tmp22;
    USE(tmp22);
    tmp22 = CodeStubAssembler(state_).IntPtrMul(TNode<IntPtrT>{tmp20}, TNode<IntPtrT>{tmp21});
    TNode<IntPtrT> tmp23;
    USE(tmp23);
    tmp23 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp17}, TNode<IntPtrT>{tmp22});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 38);
    TNode<HeapObject> tmp24;
    USE(tmp24);
    TNode<IntPtrT> tmp25;
    USE(tmp25);
    std::tie(tmp24, tmp25) = UnsafeNewReference20UT5ATSmi10HeapObject_1440(state_, TNode<HeapObject>{tmp16}, TNode<IntPtrT>{tmp23}).Flatten();
    ca_.Goto(&block5, tmp10, tmp11, tmp12, tmp13, tmp14, tmp15, tmp16, tmp17, tmp18, tmp19, tmp20, tmp24, tmp25);
  }

  if (block7.is_used()) {
    TNode<Context> tmp26;
    TNode<FixedArray> tmp27;
    TNode<FixedArray> tmp28;
    TNode<IntPtrT> tmp29;
    TNode<IntPtrT> tmp30;
    TNode<IntPtrT> tmp31;
    TNode<HeapObject> tmp32;
    TNode<IntPtrT> tmp33;
    TNode<IntPtrT> tmp34;
    TNode<IntPtrT> tmp35;
    TNode<IntPtrT> tmp36;
    ca_.Bind(&block7, &tmp26, &tmp27, &tmp28, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33, &tmp34, &tmp35, &tmp36);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 41);
    ca_.Goto(&block4, tmp26, tmp27, tmp28, tmp29, tmp30, tmp31);
  }

  if (block5.is_used()) {
    TNode<Context> tmp37;
    TNode<FixedArray> tmp38;
    TNode<FixedArray> tmp39;
    TNode<IntPtrT> tmp40;
    TNode<IntPtrT> tmp41;
    TNode<IntPtrT> tmp42;
    TNode<HeapObject> tmp43;
    TNode<IntPtrT> tmp44;
    TNode<IntPtrT> tmp45;
    TNode<IntPtrT> tmp46;
    TNode<IntPtrT> tmp47;
    TNode<HeapObject> tmp48;
    TNode<IntPtrT> tmp49;
    ca_.Bind(&block5, &tmp37, &tmp38, &tmp39, &tmp40, &tmp41, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47, &tmp48, &tmp49);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 51);
    ca_.Goto(&block3, tmp37, tmp38, tmp39, tmp40, tmp41, tmp42, tmp48, tmp49);
  }

  if (block4.is_used()) {
    TNode<Context> tmp50;
    TNode<FixedArray> tmp51;
    TNode<FixedArray> tmp52;
    TNode<IntPtrT> tmp53;
    TNode<IntPtrT> tmp54;
    TNode<IntPtrT> tmp55;
    ca_.Bind(&block4, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block3.is_used()) {
    TNode<Context> tmp56;
    TNode<FixedArray> tmp57;
    TNode<FixedArray> tmp58;
    TNode<IntPtrT> tmp59;
    TNode<IntPtrT> tmp60;
    TNode<IntPtrT> tmp61;
    TNode<HeapObject> tmp62;
    TNode<IntPtrT> tmp63;
    ca_.Bind(&block3, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62, &tmp63);
    ca_.Goto(&block2, tmp56, tmp57, tmp58, tmp59, tmp60, tmp62, tmp63);
  }

  if (block2.is_used()) {
    TNode<Context> tmp64;
    TNode<FixedArray> tmp65;
    TNode<FixedArray> tmp66;
    TNode<IntPtrT> tmp67;
    TNode<IntPtrT> tmp68;
    TNode<HeapObject> tmp69;
    TNode<IntPtrT> tmp70;
    ca_.Bind(&block2, &tmp64, &tmp65, &tmp66, &tmp67, &tmp68, &tmp69, &tmp70);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 960);
    TNode<Object>tmp71 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp69, tmp70});
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 961);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 962);
    TNode<Smi> tmp72;
    USE(tmp72);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp72 = Cast5ATSmi_83(state_, TNode<Object>{tmp71}, &label0);
    ca_.Goto(&block11, tmp64, tmp65, tmp71, tmp71, tmp71, tmp72);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block12, tmp64, tmp65, tmp71, tmp71, tmp71);
    }
  }

  if (block12.is_used()) {
    TNode<Context> tmp73;
    TNode<FixedArray> tmp74;
    TNode<Object> tmp75;
    TNode<Object> tmp76;
    TNode<Object> tmp77;
    ca_.Bind(&block12, &tmp73, &tmp74, &tmp75, &tmp76, &tmp77);
    ca_.Goto(&block10, tmp73, tmp74, tmp75, tmp76);
  }

  if (block11.is_used()) {
    TNode<Context> tmp78;
    TNode<FixedArray> tmp79;
    TNode<Object> tmp80;
    TNode<Object> tmp81;
    TNode<Object> tmp82;
    TNode<Smi> tmp83;
    ca_.Bind(&block11, &tmp78, &tmp79, &tmp80, &tmp81, &tmp82, &tmp83);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 963);
    TNode<Smi> tmp84;
    USE(tmp84);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp84 = Cast5ATSmi_83(state_, TNode<Object>{tmp80}, &label0);
    ca_.Goto(&block15, tmp78, tmp79, tmp80, tmp81, tmp83, tmp80, tmp84);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block16, tmp78, tmp79, tmp80, tmp81, tmp83, tmp80);
    }
  }

  if (block16.is_used()) {
    TNode<Context> tmp85;
    TNode<FixedArray> tmp86;
    TNode<Object> tmp87;
    TNode<Object> tmp88;
    TNode<Smi> tmp89;
    TNode<Object> tmp90;
    ca_.Bind(&block16, &tmp85, &tmp86, &tmp87, &tmp88, &tmp89, &tmp90);
    ca_.Goto(&block14, tmp85, tmp86, tmp87, tmp88, tmp89);
  }

  if (block15.is_used()) {
    TNode<Context> tmp91;
    TNode<FixedArray> tmp92;
    TNode<Object> tmp93;
    TNode<Object> tmp94;
    TNode<Smi> tmp95;
    TNode<Object> tmp96;
    TNode<Smi> tmp97;
    ca_.Bind(&block15, &tmp91, &tmp92, &tmp93, &tmp94, &tmp95, &tmp96, &tmp97);
    ca_.Goto(&block13, tmp91, tmp92, tmp93, tmp94, tmp95, tmp97);
  }

  if (block14.is_used()) {
    TNode<Context> tmp98;
    TNode<FixedArray> tmp99;
    TNode<Object> tmp100;
    TNode<Object> tmp101;
    TNode<Smi> tmp102;
    ca_.Bind(&block14, &tmp98, &tmp99, &tmp100, &tmp101, &tmp102);
    VerifiedUnreachable_254(state_);
  }

  if (block13.is_used()) {
    TNode<Context> tmp103;
    TNode<FixedArray> tmp104;
    TNode<Object> tmp105;
    TNode<Object> tmp106;
    TNode<Smi> tmp107;
    TNode<Smi> tmp108;
    ca_.Bind(&block13, &tmp103, &tmp104, &tmp105, &tmp106, &tmp107, &tmp108);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 964);
    TNode<Smi> tmp109;
    USE(tmp109);
    tmp109 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, -1);
    ca_.Goto(&block1, tmp103, tmp109);
  }

  if (block10.is_used()) {
    TNode<Context> tmp110;
    TNode<FixedArray> tmp111;
    TNode<Object> tmp112;
    TNode<Object> tmp113;
    ca_.Bind(&block10, &tmp110, &tmp111, &tmp112, &tmp113);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 966);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 962);
    ca_.Goto(&block9, tmp110, tmp111, tmp112, tmp113);
  }

  if (block9.is_used()) {
    TNode<Context> tmp114;
    TNode<FixedArray> tmp115;
    TNode<Object> tmp116;
    TNode<Object> tmp117;
    ca_.Bind(&block9, &tmp114, &tmp115, &tmp116, &tmp117);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 961);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 969);
    TNode<Smi> tmp118;
    USE(tmp118);
    tmp118 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 1);
    ca_.Goto(&block1, tmp114, tmp118);
  }

  if (block1.is_used()) {
    TNode<Context> tmp119;
    TNode<Smi> tmp120;
    ca_.Bind(&block1, &tmp119, &tmp120);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 957);
    ca_.Goto(&block17, tmp119, tmp120);
  }

    TNode<Context> tmp121;
    TNode<Smi> tmp122;
    ca_.Bind(&block17, &tmp121, &tmp122);
  return TNode<Smi>{tmp122};
}

TNode<IntPtrT> TestGenericStruct1_468(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT> block3(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT> block5(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, IntPtrT, IntPtrT> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 978);
    TNode<IntPtrT> tmp0;
    USE(tmp0);
    tmp0 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 123);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 979);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 980);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 981);
    TNode<IntPtrT> tmp1;
    USE(tmp1);
    tmp1 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 123);
    TNode<BoolT> tmp2;
    USE(tmp2);
    tmp2 = CodeStubAssembler(state_).WordEqual(TNode<IntPtrT>{tmp0}, TNode<IntPtrT>{tmp1});
    ca_.Branch(tmp2, &block2, &block3, tmp0, tmp0, tmp0);
  }

  if (block3.is_used()) {
    TNode<IntPtrT> tmp3;
    TNode<IntPtrT> tmp4;
    TNode<IntPtrT> tmp5;
    ca_.Bind(&block3, &tmp3, &tmp4, &tmp5);
    CodeStubAssembler(state_).FailAssert("Torque assert 'box.value == 123' failed", "test/torque/test-torque.tq", 981);
  }

  if (block2.is_used()) {
    TNode<IntPtrT> tmp6;
    TNode<IntPtrT> tmp7;
    TNode<IntPtrT> tmp8;
    ca_.Bind(&block2, &tmp6, &tmp7, &tmp8);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 982);
    TNode<IntPtrT> tmp9;
    USE(tmp9);
    tmp9 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 2);
    TNode<IntPtrT> tmp10;
    USE(tmp10);
    tmp10 = CodeStubAssembler(state_).IntPtrMul(TNode<IntPtrT>{tmp8}, TNode<IntPtrT>{tmp9});
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 983);
    TNode<IntPtrT> tmp11;
    USE(tmp11);
    tmp11 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 246);
    TNode<BoolT> tmp12;
    USE(tmp12);
    tmp12 = CodeStubAssembler(state_).WordEqual(TNode<IntPtrT>{tmp10}, TNode<IntPtrT>{tmp11});
    ca_.Branch(tmp12, &block4, &block5, tmp6, tmp7, tmp10);
  }

  if (block5.is_used()) {
    TNode<IntPtrT> tmp13;
    TNode<IntPtrT> tmp14;
    TNode<IntPtrT> tmp15;
    ca_.Bind(&block5, &tmp13, &tmp14, &tmp15);
    CodeStubAssembler(state_).FailAssert("Torque assert 'boxbox.value.value == 246' failed", "test/torque/test-torque.tq", 983);
  }

  if (block4.is_used()) {
    TNode<IntPtrT> tmp16;
    TNode<IntPtrT> tmp17;
    TNode<IntPtrT> tmp18;
    ca_.Bind(&block4, &tmp16, &tmp17, &tmp18);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 984);
    ca_.Goto(&block1, tmp18);
  }

  if (block1.is_used()) {
    TNode<IntPtrT> tmp19;
    ca_.Bind(&block1, &tmp19);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 976);
    ca_.Goto(&block6, tmp19);
  }

    TNode<IntPtrT> tmp20;
    ca_.Bind(&block6, &tmp20);
  return TNode<IntPtrT>{tmp20};
}

TorqueStructTestTuple24TestTuple8ATintptr5ATSmi24TestTuple5ATSmi8ATintptr TestGenericStruct2_469(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, Smi, Smi, IntPtrT> block3(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, Smi, Smi, IntPtrT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, Smi, Smi, IntPtrT> block5(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, Smi, Smi, IntPtrT> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, Smi, Smi, IntPtrT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, Smi, Smi, IntPtrT> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 1000);
    TNode<IntPtrT> tmp0;
    USE(tmp0);
    tmp0 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 1);
    TNode<Smi> tmp1;
    USE(tmp1);
    tmp1 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 2);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 1001);
    TNode<Smi> tmp2;
    USE(tmp2);
    TNode<IntPtrT> tmp3;
    USE(tmp3);
    std::tie(tmp2, tmp3) = TupleSwap8ATintptr5ATSmi_1513(state_, TorqueStructTestTuple8ATintptr5ATSmi{TNode<IntPtrT>{tmp0}, TNode<Smi>{tmp1}}).Flatten();
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 1002);
    TNode<BoolT> tmp4;
    USE(tmp4);
    tmp4 = CodeStubAssembler(state_).WordEqual(TNode<IntPtrT>{tmp0}, TNode<IntPtrT>{tmp3});
    ca_.Branch(tmp4, &block2, &block3, tmp0, tmp1, tmp2, tmp3);
  }

  if (block3.is_used()) {
    TNode<IntPtrT> tmp5;
    TNode<Smi> tmp6;
    TNode<Smi> tmp7;
    TNode<IntPtrT> tmp8;
    ca_.Bind(&block3, &tmp5, &tmp6, &tmp7, &tmp8);
    CodeStubAssembler(state_).FailAssert("Torque assert 'intptrAndSmi.fst == smiAndIntptr.snd' failed", "test/torque/test-torque.tq", 1002);
  }

  if (block2.is_used()) {
    TNode<IntPtrT> tmp9;
    TNode<Smi> tmp10;
    TNode<Smi> tmp11;
    TNode<IntPtrT> tmp12;
    ca_.Bind(&block2, &tmp9, &tmp10, &tmp11, &tmp12);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 1003);
    TNode<BoolT> tmp13;
    USE(tmp13);
    tmp13 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{tmp10}, TNode<Smi>{tmp11});
    ca_.Branch(tmp13, &block4, &block5, tmp9, tmp10, tmp11, tmp12);
  }

  if (block5.is_used()) {
    TNode<IntPtrT> tmp14;
    TNode<Smi> tmp15;
    TNode<Smi> tmp16;
    TNode<IntPtrT> tmp17;
    ca_.Bind(&block5, &tmp14, &tmp15, &tmp16, &tmp17);
    CodeStubAssembler(state_).FailAssert("Torque assert 'intptrAndSmi.snd == smiAndIntptr.fst' failed", "test/torque/test-torque.tq", 1003);
  }

  if (block4.is_used()) {
    TNode<IntPtrT> tmp18;
    TNode<Smi> tmp19;
    TNode<Smi> tmp20;
    TNode<IntPtrT> tmp21;
    ca_.Bind(&block4, &tmp18, &tmp19, &tmp20, &tmp21);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 1005);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 1006);
    ca_.Goto(&block1, tmp18, tmp19, tmp20, tmp21);
  }

  if (block1.is_used()) {
    TNode<IntPtrT> tmp22;
    TNode<Smi> tmp23;
    TNode<Smi> tmp24;
    TNode<IntPtrT> tmp25;
    ca_.Bind(&block1, &tmp22, &tmp23, &tmp24, &tmp25);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 997);
    ca_.Goto(&block6, tmp22, tmp23, tmp24, tmp25);
  }

    TNode<IntPtrT> tmp26;
    TNode<Smi> tmp27;
    TNode<Smi> tmp28;
    TNode<IntPtrT> tmp29;
    ca_.Bind(&block6, &tmp26, &tmp27, &tmp28, &tmp29);
  return TorqueStructTestTuple24TestTuple8ATintptr5ATSmi24TestTuple5ATSmi8ATintptr{TorqueStructTestTuple8ATintptr5ATSmi{TNode<IntPtrT>{tmp26}, TNode<Smi>{tmp27}}, TorqueStructTestTuple5ATSmi8ATintptr{TNode<Smi>{tmp28}, TNode<IntPtrT>{tmp29}}};
}

TNode<BoolT> BranchAndWriteResult_470(compiler::CodeAssemblerState* state_, TNode<Smi> p_x, TNode<SmiBox> p_box) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Smi, SmiBox> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, SmiBox, BoolT> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, SmiBox, BoolT> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, SmiBox, BoolT, BoolT> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, SmiBox> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, SmiBox> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, SmiBox, BoolT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, SmiBox, BoolT> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_x, p_box);

  if (block0.is_used()) {
    TNode<Smi> tmp0;
    TNode<SmiBox> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 1010);
    TNode<Smi> tmp2;
    USE(tmp2);
    tmp2 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 5);
    TNode<BoolT> tmp3;
    USE(tmp3);
    tmp3 = CodeStubAssembler(state_).SmiGreaterThan(TNode<Smi>{tmp0}, TNode<Smi>{tmp2});
    ca_.Branch(tmp3, &block4, &block5, tmp0, tmp1, tmp3);
  }

  if (block4.is_used()) {
    TNode<Smi> tmp4;
    TNode<SmiBox> tmp5;
    TNode<BoolT> tmp6;
    ca_.Bind(&block4, &tmp4, &tmp5, &tmp6);
    TNode<BoolT> tmp7;
    USE(tmp7);
    tmp7 = FromConstexpr6ATbool16ATconstexpr_bool_167(state_, true);
    ca_.Goto(&block6, tmp4, tmp5, tmp6, tmp7);
  }

  if (block5.is_used()) {
    TNode<Smi> tmp8;
    TNode<SmiBox> tmp9;
    TNode<BoolT> tmp10;
    ca_.Bind(&block5, &tmp8, &tmp9, &tmp10);
    TNode<Smi> tmp11;
    USE(tmp11);
    tmp11 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 0);
    TNode<BoolT> tmp12;
    USE(tmp12);
    tmp12 = CodeStubAssembler(state_).SmiLessThan(TNode<Smi>{tmp8}, TNode<Smi>{tmp11});
    ca_.Goto(&block6, tmp8, tmp9, tmp10, tmp12);
  }

  if (block6.is_used()) {
    TNode<Smi> tmp13;
    TNode<SmiBox> tmp14;
    TNode<BoolT> tmp15;
    TNode<BoolT> tmp16;
    ca_.Bind(&block6, &tmp13, &tmp14, &tmp15, &tmp16);
    ca_.Branch(tmp16, &block2, &block3, tmp13, tmp14);
  }

  if (block2.is_used()) {
    TNode<Smi> tmp17;
    TNode<SmiBox> tmp18;
    ca_.Bind(&block2, &tmp17, &tmp18);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 1011);
    TNode<IntPtrT> tmp19 = ca_.IntPtrConstant(SmiBox::kValueOffset);
    USE(tmp19);
    TNode<Smi> tmp20;
    USE(tmp20);
    tmp20 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 1);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp18, tmp19}, tmp20);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 1012);
    TNode<BoolT> tmp21;
    USE(tmp21);
    tmp21 = FromConstexpr6ATbool16ATconstexpr_bool_167(state_, true);
    ca_.Goto(&block1, tmp17, tmp18, tmp21);
  }

  if (block3.is_used()) {
    TNode<Smi> tmp22;
    TNode<SmiBox> tmp23;
    ca_.Bind(&block3, &tmp22, &tmp23);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 1014);
    TNode<IntPtrT> tmp24 = ca_.IntPtrConstant(SmiBox::kValueOffset);
    USE(tmp24);
    TNode<Smi> tmp25;
    USE(tmp25);
    tmp25 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 2);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp23, tmp24}, tmp25);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 1015);
    TNode<BoolT> tmp26;
    USE(tmp26);
    tmp26 = FromConstexpr6ATbool16ATconstexpr_bool_167(state_, false);
    ca_.Goto(&block1, tmp22, tmp23, tmp26);
  }

  if (block1.is_used()) {
    TNode<Smi> tmp27;
    TNode<SmiBox> tmp28;
    TNode<BoolT> tmp29;
    ca_.Bind(&block1, &tmp27, &tmp28, &tmp29);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 1009);
    ca_.Goto(&block8, tmp27, tmp28, tmp29);
  }

    TNode<Smi> tmp30;
    TNode<SmiBox> tmp31;
    TNode<BoolT> tmp32;
    ca_.Bind(&block8, &tmp30, &tmp31, &tmp32);
  return TNode<BoolT>{tmp32};
}

void TestBranchOnBoolOptimization_471(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Smi> p_input) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi, SmiBox> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi, SmiBox> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi, SmiBox> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_input);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Smi> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 1021);
    TNode<Smi> tmp2;
    USE(tmp2);
    tmp2 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 1);
    TNode<SmiBox> tmp3;
    tmp3 = TORQUE_CAST(CodeStubAssembler(state_).CallBuiltin(Builtins::kNewSmiBox, tmp0, tmp2));
    USE(tmp3);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 1024);
    TNode<BoolT> tmp4;
    USE(tmp4);
    tmp4 = BranchAndWriteResult_470(state_, TNode<Smi>{tmp1}, TNode<SmiBox>{tmp3});
    ca_.Branch(tmp4, &block2, &block3, tmp0, tmp1, tmp3);
  }

  if (block2.is_used()) {
    TNode<Context> tmp5;
    TNode<Smi> tmp6;
    TNode<SmiBox> tmp7;
    ca_.Bind(&block2, &tmp5, &tmp6, &tmp7);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 1025);
    TNode<IntPtrT> tmp8 = ca_.IntPtrConstant(SmiBox::kValueOffset);
    USE(tmp8);
    TNode<Smi>tmp9 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp7, tmp8});
    TNode<Smi> tmp10;
    USE(tmp10);
    tmp10 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 1);
    TNode<BoolT> tmp11;
    USE(tmp11);
    tmp11 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{tmp9}, TNode<Smi>{tmp10});
    CodeStubAssembler(state_).StaticAssert(TNode<BoolT>{tmp11});
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 1024);
    ca_.Goto(&block4, tmp5, tmp6, tmp7);
  }

  if (block3.is_used()) {
    TNode<Context> tmp12;
    TNode<Smi> tmp13;
    TNode<SmiBox> tmp14;
    ca_.Bind(&block3, &tmp12, &tmp13, &tmp14);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 1027);
    TNode<IntPtrT> tmp15 = ca_.IntPtrConstant(SmiBox::kValueOffset);
    USE(tmp15);
    TNode<Smi>tmp16 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp14, tmp15});
    TNode<Smi> tmp17;
    USE(tmp17);
    tmp17 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 2);
    TNode<BoolT> tmp18;
    USE(tmp18);
    tmp18 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{tmp16}, TNode<Smi>{tmp17});
    CodeStubAssembler(state_).StaticAssert(TNode<BoolT>{tmp18});
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 1024);
    ca_.Goto(&block4, tmp12, tmp13, tmp14);
  }

  if (block4.is_used()) {
    TNode<Context> tmp19;
    TNode<Smi> tmp20;
    TNode<SmiBox> tmp21;
    ca_.Bind(&block4, &tmp19, &tmp20, &tmp21);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 1020);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 1019);
    ca_.Goto(&block1, tmp19, tmp20);
  }

  if (block1.is_used()) {
    TNode<Context> tmp22;
    TNode<Smi> tmp23;
    ca_.Bind(&block1, &tmp22, &tmp23);
    ca_.Goto(&block5, tmp22, tmp23);
  }

    TNode<Context> tmp24;
    TNode<Smi> tmp25;
    ca_.Bind(&block5, &tmp24, &tmp25);
}

TNode<Smi> LoadInternalClassA_1389(compiler::CodeAssemblerState* state_, TNode<InternalClass> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<InternalClass> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<InternalClass, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<InternalClass, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    TNode<InternalClass> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 767);
    TNode<IntPtrT> tmp1 = ca_.IntPtrConstant(InternalClass::kAOffset);
    USE(tmp1);
    TNode<Smi>tmp2 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp0, tmp1});
    ca_.Goto(&block1, tmp0, tmp2);
  }

  if (block1.is_used()) {
    TNode<InternalClass> tmp3;
    TNode<Smi> tmp4;
    ca_.Bind(&block1, &tmp3, &tmp4);
    ca_.Goto(&block2, tmp3, tmp4);
  }

    TNode<InternalClass> tmp5;
    TNode<Smi> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
  return TNode<Smi>{tmp6};
}

void StoreInternalClassA_1390(compiler::CodeAssemblerState* state_, TNode<InternalClass> p_o, TNode<Smi> p_v) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<InternalClass, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<InternalClass, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<InternalClass, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    TNode<InternalClass> tmp0;
    TNode<Smi> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 767);
    TNode<IntPtrT> tmp2 = ca_.IntPtrConstant(InternalClass::kAOffset);
    USE(tmp2);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp0, tmp2}, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    TNode<InternalClass> tmp3;
    TNode<Smi> tmp4;
    ca_.Bind(&block1, &tmp3, &tmp4);
    ca_.Goto(&block2, tmp3, tmp4);
  }

    TNode<InternalClass> tmp5;
    TNode<Smi> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
}

TNode<Number> LoadInternalClassB_1391(compiler::CodeAssemblerState* state_, TNode<InternalClass> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<InternalClass> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<InternalClass, Number> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<InternalClass, Number> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    TNode<InternalClass> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 768);
    TNode<IntPtrT> tmp1 = ca_.IntPtrConstant(InternalClass::kBOffset);
    USE(tmp1);
    TNode<Number>tmp2 = CodeStubAssembler(state_).LoadReference<Number>(CodeStubAssembler::Reference{tmp0, tmp1});
    ca_.Goto(&block1, tmp0, tmp2);
  }

  if (block1.is_used()) {
    TNode<InternalClass> tmp3;
    TNode<Number> tmp4;
    ca_.Bind(&block1, &tmp3, &tmp4);
    ca_.Goto(&block2, tmp3, tmp4);
  }

    TNode<InternalClass> tmp5;
    TNode<Number> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
  return TNode<Number>{tmp6};
}

void StoreInternalClassB_1392(compiler::CodeAssemblerState* state_, TNode<InternalClass> p_o, TNode<Number> p_v) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<InternalClass, Number> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<InternalClass, Number> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<InternalClass, Number> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    TNode<InternalClass> tmp0;
    TNode<Number> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 768);
    TNode<IntPtrT> tmp2 = ca_.IntPtrConstant(InternalClass::kBOffset);
    USE(tmp2);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp0, tmp2}, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    TNode<InternalClass> tmp3;
    TNode<Number> tmp4;
    ca_.Bind(&block1, &tmp3, &tmp4);
    ca_.Goto(&block2, tmp3, tmp4);
  }

    TNode<InternalClass> tmp5;
    TNode<Number> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
}

void _method_InternalClass_Flip(compiler::CodeAssemblerState* state_, TNode<InternalClass> p_this, compiler::CodeAssemblerLabel* label_NotASmi) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<InternalClass> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<InternalClass, Number> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<InternalClass, Number, Smi> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<InternalClass> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<InternalClass> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_this);

  if (block0.is_used()) {
    TNode<InternalClass> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 763);
    TNode<IntPtrT> tmp1 = ca_.IntPtrConstant(InternalClass::kBOffset);
    USE(tmp1);
    TNode<Number>tmp2 = CodeStubAssembler(state_).LoadReference<Number>(CodeStubAssembler::Reference{tmp0, tmp1});
    TNode<Smi> tmp3;
    USE(tmp3);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp3 = Cast5ATSmi_83(state_, TNode<Object>{tmp2}, &label0);
    ca_.Goto(&block3, tmp0, tmp2, tmp3);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp2);
    }
  }

  if (block4.is_used()) {
    TNode<InternalClass> tmp4;
    TNode<Number> tmp5;
    ca_.Bind(&block4, &tmp4, &tmp5);
    ca_.Goto(&block1);
  }

  if (block3.is_used()) {
    TNode<InternalClass> tmp6;
    TNode<Number> tmp7;
    TNode<Smi> tmp8;
    ca_.Bind(&block3, &tmp6, &tmp7, &tmp8);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 764);
    TNode<IntPtrT> tmp9 = ca_.IntPtrConstant(InternalClass::kBOffset);
    USE(tmp9);
    TNode<IntPtrT> tmp10 = ca_.IntPtrConstant(InternalClass::kAOffset);
    USE(tmp10);
    TNode<Smi>tmp11 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp6, tmp10});
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp6, tmp9}, tmp11);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 765);
    TNode<IntPtrT> tmp12 = ca_.IntPtrConstant(InternalClass::kAOffset);
    USE(tmp12);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp6, tmp12}, tmp8);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 762);
    ca_.Goto(&block2, tmp6);
  }

  if (block2.is_used()) {
    TNode<InternalClass> tmp13;
    ca_.Bind(&block2, &tmp13);
    ca_.Goto(&block5, tmp13);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_NotASmi);
  }

    TNode<InternalClass> tmp14;
    ca_.Bind(&block5, &tmp14);
}

TNode<Smi> LoadSmiPairA_1393(compiler::CodeAssemblerState* state_, TNode<SmiPair> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<SmiPair> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<SmiPair, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<SmiPair, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    TNode<SmiPair> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 823);
    TNode<IntPtrT> tmp1 = ca_.IntPtrConstant(SmiPair::kAOffset);
    USE(tmp1);
    TNode<Smi>tmp2 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp0, tmp1});
    ca_.Goto(&block1, tmp0, tmp2);
  }

  if (block1.is_used()) {
    TNode<SmiPair> tmp3;
    TNode<Smi> tmp4;
    ca_.Bind(&block1, &tmp3, &tmp4);
    ca_.Goto(&block2, tmp3, tmp4);
  }

    TNode<SmiPair> tmp5;
    TNode<Smi> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
  return TNode<Smi>{tmp6};
}

void StoreSmiPairA_1394(compiler::CodeAssemblerState* state_, TNode<SmiPair> p_o, TNode<Smi> p_v) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<SmiPair, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<SmiPair, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<SmiPair, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    TNode<SmiPair> tmp0;
    TNode<Smi> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 823);
    TNode<IntPtrT> tmp2 = ca_.IntPtrConstant(SmiPair::kAOffset);
    USE(tmp2);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp0, tmp2}, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    TNode<SmiPair> tmp3;
    TNode<Smi> tmp4;
    ca_.Bind(&block1, &tmp3, &tmp4);
    ca_.Goto(&block2, tmp3, tmp4);
  }

    TNode<SmiPair> tmp5;
    TNode<Smi> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
}

TNode<Smi> LoadSmiPairB_1395(compiler::CodeAssemblerState* state_, TNode<SmiPair> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<SmiPair> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<SmiPair, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<SmiPair, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    TNode<SmiPair> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 824);
    TNode<IntPtrT> tmp1 = ca_.IntPtrConstant(SmiPair::kBOffset);
    USE(tmp1);
    TNode<Smi>tmp2 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp0, tmp1});
    ca_.Goto(&block1, tmp0, tmp2);
  }

  if (block1.is_used()) {
    TNode<SmiPair> tmp3;
    TNode<Smi> tmp4;
    ca_.Bind(&block1, &tmp3, &tmp4);
    ca_.Goto(&block2, tmp3, tmp4);
  }

    TNode<SmiPair> tmp5;
    TNode<Smi> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
  return TNode<Smi>{tmp6};
}

void StoreSmiPairB_1396(compiler::CodeAssemblerState* state_, TNode<SmiPair> p_o, TNode<Smi> p_v) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<SmiPair, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<SmiPair, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<SmiPair, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    TNode<SmiPair> tmp0;
    TNode<Smi> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 824);
    TNode<IntPtrT> tmp2 = ca_.IntPtrConstant(SmiPair::kBOffset);
    USE(tmp2);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp0, tmp2}, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    TNode<SmiPair> tmp3;
    TNode<Smi> tmp4;
    ca_.Bind(&block1, &tmp3, &tmp4);
    ca_.Goto(&block2, tmp3, tmp4);
  }

    TNode<SmiPair> tmp5;
    TNode<Smi> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
}

TorqueStructReference5ATSmi _method_SmiPair_GetA(compiler::CodeAssemblerState* state_, TNode<SmiPair> p_this) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<SmiPair> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<SmiPair, HeapObject, IntPtrT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<SmiPair, HeapObject, IntPtrT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_this);

  if (block0.is_used()) {
    TNode<SmiPair> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 821);
    TNode<IntPtrT> tmp1 = ca_.IntPtrConstant(SmiPair::kAOffset);
    USE(tmp1);
    ca_.Goto(&block1, tmp0, tmp0, tmp1);
  }

  if (block1.is_used()) {
    TNode<SmiPair> tmp2;
    TNode<HeapObject> tmp3;
    TNode<IntPtrT> tmp4;
    ca_.Bind(&block1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 820);
    ca_.Goto(&block2, tmp2, tmp3, tmp4);
  }

    TNode<SmiPair> tmp5;
    TNode<HeapObject> tmp6;
    TNode<IntPtrT> tmp7;
    ca_.Bind(&block2, &tmp5, &tmp6, &tmp7);
  return TorqueStructReference5ATSmi{TNode<HeapObject>{tmp6}, TNode<IntPtrT>{tmp7}, TorqueStructUnsafe{}};
}

TNode<Smi> LoadSmiBoxValue_1397(compiler::CodeAssemblerState* state_, TNode<SmiBox> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<SmiBox> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<SmiBox, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<SmiBox, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    TNode<SmiBox> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 908);
    TNode<IntPtrT> tmp1 = ca_.IntPtrConstant(SmiBox::kValueOffset);
    USE(tmp1);
    TNode<Smi>tmp2 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp0, tmp1});
    ca_.Goto(&block1, tmp0, tmp2);
  }

  if (block1.is_used()) {
    TNode<SmiBox> tmp3;
    TNode<Smi> tmp4;
    ca_.Bind(&block1, &tmp3, &tmp4);
    ca_.Goto(&block2, tmp3, tmp4);
  }

    TNode<SmiBox> tmp5;
    TNode<Smi> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
  return TNode<Smi>{tmp6};
}

void StoreSmiBoxValue_1398(compiler::CodeAssemblerState* state_, TNode<SmiBox> p_o, TNode<Smi> p_v) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<SmiBox, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<SmiBox, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<SmiBox, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    TNode<SmiBox> tmp0;
    TNode<Smi> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 908);
    TNode<IntPtrT> tmp2 = ca_.IntPtrConstant(SmiBox::kValueOffset);
    USE(tmp2);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp0, tmp2}, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    TNode<SmiBox> tmp3;
    TNode<Smi> tmp4;
    ca_.Bind(&block1, &tmp3, &tmp4);
    ca_.Goto(&block2, tmp3, tmp4);
  }

    TNode<SmiBox> tmp5;
    TNode<Smi> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
}

TNode<Smi> LoadSmiBoxUnrelated_1399(compiler::CodeAssemblerState* state_, TNode<SmiBox> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<SmiBox> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<SmiBox, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<SmiBox, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    TNode<SmiBox> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 909);
    TNode<IntPtrT> tmp1 = ca_.IntPtrConstant(SmiBox::kUnrelatedOffset);
    USE(tmp1);
    TNode<Smi>tmp2 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp0, tmp1});
    ca_.Goto(&block1, tmp0, tmp2);
  }

  if (block1.is_used()) {
    TNode<SmiBox> tmp3;
    TNode<Smi> tmp4;
    ca_.Bind(&block1, &tmp3, &tmp4);
    ca_.Goto(&block2, tmp3, tmp4);
  }

    TNode<SmiBox> tmp5;
    TNode<Smi> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
  return TNode<Smi>{tmp6};
}

void StoreSmiBoxUnrelated_1400(compiler::CodeAssemblerState* state_, TNode<SmiBox> p_o, TNode<Smi> p_v) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<SmiBox, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<SmiBox, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<SmiBox, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_v);

  if (block0.is_used()) {
    TNode<SmiBox> tmp0;
    TNode<Smi> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 909);
    TNode<IntPtrT> tmp2 = ca_.IntPtrConstant(SmiBox::kUnrelatedOffset);
    USE(tmp2);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp0, tmp2}, tmp1);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    TNode<SmiBox> tmp3;
    TNode<Smi> tmp4;
    ca_.Bind(&block1, &tmp3, &tmp4);
    ca_.Goto(&block2, tmp3, tmp4);
  }

    TNode<SmiBox> tmp5;
    TNode<Smi> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
}

TF_BUILTIN(GenericBuiltinTest5ATSmi, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  TNode<Smi> parameter1 = UncheckedCast<Smi>(Parameter(Descriptor::kParam));
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Smi> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 87);
    TNode<Oddball> tmp2;
    USE(tmp2);
    tmp2 = Null_63(state_);
    CodeStubAssembler(state_).Return(tmp2);
  }
}

TNode<Object> GenericMacroTest5ATSmi_1504(compiler::CodeAssemblerState* state_, TNode<Smi> p__param) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p__param);

  if (block0.is_used()) {
    TNode<Smi> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 136);
    TNode<Oddball> tmp1;
    USE(tmp1);
    tmp1 = Undefined_64(state_);
    ca_.Goto(&block1, tmp0, tmp1);
  }

  if (block1.is_used()) {
    TNode<Smi> tmp2;
    TNode<Object> tmp3;
    ca_.Bind(&block1, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 157);
    ca_.Goto(&block2, tmp2, tmp3);
  }

    TNode<Smi> tmp4;
    TNode<Object> tmp5;
    ca_.Bind(&block2, &tmp4, &tmp5);
  return TNode<Object>{tmp5};
}

TNode<Object> GenericMacroTestWithLabels5ATSmi_1505(compiler::CodeAssemblerState* state_, TNode<Smi> p__param, compiler::CodeAssemblerLabel* label__X) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Object> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p__param);

  if (block0.is_used()) {
    TNode<Smi> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 145);
    TNode<Oddball> tmp1;
    USE(tmp1);
    tmp1 = Undefined_64(state_);
    ca_.Goto(&block2, tmp0, tmp1);
  }

  if (block2.is_used()) {
    TNode<Smi> tmp2;
    TNode<Object> tmp3;
    ca_.Bind(&block2, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 162);
    ca_.Goto(&block3, tmp2, tmp3);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label__X);
  }

    TNode<Smi> tmp4;
    TNode<Object> tmp5;
    ca_.Bind(&block3, &tmp4, &tmp5);
  return TNode<Object>{tmp5};
}

TNode<Object> IncrementIfSmi32UT5ATSmi10FixedArray10HeapNumber_1506(compiler::CodeAssemblerState* state_, TNode<Object> p_x) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Object, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Object, Object, Smi> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Object> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_x);

  if (block0.is_used()) {
    TNode<Object> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 458);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 459);
    TNode<Smi> tmp1;
    USE(tmp1);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp1 = Cast5ATSmi_83(state_, TNode<Object>{tmp0}, &label0);
    ca_.Goto(&block4, tmp0, tmp0, tmp0, tmp1);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block5, tmp0, tmp0, tmp0);
    }
  }

  if (block5.is_used()) {
    TNode<Object> tmp2;
    TNode<Object> tmp3;
    TNode<Object> tmp4;
    ca_.Bind(&block5, &tmp2, &tmp3, &tmp4);
    ca_.Goto(&block3, tmp2, tmp3);
  }

  if (block4.is_used()) {
    TNode<Object> tmp5;
    TNode<Object> tmp6;
    TNode<Object> tmp7;
    TNode<Smi> tmp8;
    ca_.Bind(&block4, &tmp5, &tmp6, &tmp7, &tmp8);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 460);
    TNode<Smi> tmp9;
    USE(tmp9);
    tmp9 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 1);
    TNode<Smi> tmp10;
    USE(tmp10);
    tmp10 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{tmp8}, TNode<Smi>{tmp9});
    ca_.Goto(&block1, tmp5, tmp10);
  }

  if (block3.is_used()) {
    TNode<Object> tmp11;
    TNode<Object> tmp12;
    ca_.Bind(&block3, &tmp11, &tmp12);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 462);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 463);
    ca_.Goto(&block1, tmp11, ca_.UncheckedCast<HeapObject>(tmp12));
  }

  if (block1.is_used()) {
    TNode<Object> tmp13;
    TNode<Object> tmp14;
    ca_.Bind(&block1, &tmp13, &tmp14);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 472);
    ca_.Goto(&block6, tmp13, tmp14);
  }

    TNode<Object> tmp15;
    TNode<Object> tmp16;
    ca_.Bind(&block6, &tmp15, &tmp16);
  return TNode<Object>{tmp16};
}

TNode<Smi> ExampleGenericOverload5ATSmi_1507(compiler::CodeAssemblerState* state_, TNode<Smi> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    TNode<Smi> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 524);
    TNode<Smi> tmp1;
    USE(tmp1);
    tmp1 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 1);
    TNode<Smi> tmp2;
    USE(tmp2);
    tmp2 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{tmp0}, TNode<Smi>{tmp1});
    ca_.Goto(&block1, tmp0, tmp2);
  }

  if (block1.is_used()) {
    TNode<Smi> tmp3;
    TNode<Smi> tmp4;
    ca_.Bind(&block1, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 531);
    ca_.Goto(&block2, tmp3, tmp4);
  }

    TNode<Smi> tmp5;
    TNode<Smi> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
  return TNode<Smi>{tmp6};
}

TNode<Object> ExampleGenericOverload20UT5ATSmi10HeapObject_1508(compiler::CodeAssemblerState* state_, TNode<Object> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    TNode<Object> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 521);
    ca_.Goto(&block1, tmp0, tmp0);
  }

  if (block1.is_used()) {
    TNode<Object> tmp1;
    TNode<Object> tmp2;
    ca_.Bind(&block1, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 532);
    ca_.Goto(&block2, tmp1, tmp2);
  }

    TNode<Object> tmp3;
    TNode<Object> tmp4;
    ca_.Bind(&block2, &tmp3, &tmp4);
  return TNode<Object>{tmp4};
}

TNode<BoolT> Is7JSArray5ATSmi_1509(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Smi> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi, Smi> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi, Smi, JSArray> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi, JSArray> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi, BoolT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi, BoolT> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Smi> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 2840);
    TNode<JSArray> tmp2;
    USE(tmp2);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp2 = Cast7JSArray_1478(state_, TNode<Context>{tmp0}, TNode<Object>{tmp1}, &label0);
    ca_.Goto(&block4, tmp0, tmp1, tmp1, tmp2);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block5, tmp0, tmp1, tmp1);
    }
  }

  if (block5.is_used()) {
    TNode<Context> tmp3;
    TNode<Smi> tmp4;
    TNode<Smi> tmp5;
    ca_.Bind(&block5, &tmp3, &tmp4, &tmp5);
    ca_.Goto(&block3, tmp3, tmp4);
  }

  if (block4.is_used()) {
    TNode<Context> tmp6;
    TNode<Smi> tmp7;
    TNode<Smi> tmp8;
    TNode<JSArray> tmp9;
    ca_.Bind(&block4, &tmp6, &tmp7, &tmp8, &tmp9);
    ca_.Goto(&block2, tmp6, tmp7, tmp9);
  }

  if (block3.is_used()) {
    TNode<Context> tmp10;
    TNode<Smi> tmp11;
    ca_.Bind(&block3, &tmp10, &tmp11);
    TNode<BoolT> tmp12;
    USE(tmp12);
    tmp12 = FromConstexpr6ATbool16ATconstexpr_bool_167(state_, false);
    ca_.Goto(&block1, tmp10, tmp11, tmp12);
  }

  if (block2.is_used()) {
    TNode<Context> tmp13;
    TNode<Smi> tmp14;
    TNode<JSArray> tmp15;
    ca_.Bind(&block2, &tmp13, &tmp14, &tmp15);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 2841);
    TNode<BoolT> tmp16;
    USE(tmp16);
    tmp16 = FromConstexpr6ATbool16ATconstexpr_bool_167(state_, true);
    ca_.Goto(&block1, tmp13, tmp14, tmp16);
  }

  if (block1.is_used()) {
    TNode<Context> tmp17;
    TNode<Smi> tmp18;
    TNode<BoolT> tmp19;
    ca_.Bind(&block1, &tmp17, &tmp18, &tmp19);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 629);
    ca_.Goto(&block6, tmp17, tmp18, tmp19);
  }

    TNode<Context> tmp20;
    TNode<Smi> tmp21;
    TNode<BoolT> tmp22;
    ca_.Bind(&block6, &tmp20, &tmp21, &tmp22);
  return TNode<BoolT>{tmp22};
}

void Swap5ATSmi_1512(compiler::CodeAssemblerState* state_, TorqueStructReference5ATSmi p_a, TorqueStructReference5ATSmi p_b) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<HeapObject, IntPtrT, HeapObject, IntPtrT> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<HeapObject, IntPtrT, HeapObject, IntPtrT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<HeapObject, IntPtrT, HeapObject, IntPtrT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_a.object, p_a.offset, p_b.object, p_b.offset);

  if (block0.is_used()) {
    TNode<HeapObject> tmp0;
    TNode<IntPtrT> tmp1;
    TNode<HeapObject> tmp2;
    TNode<IntPtrT> tmp3;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 828);
    TNode<Smi>tmp4 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp0, tmp1});
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 829);
    TNode<Smi>tmp5 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp2, tmp3});
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp0, tmp1}, tmp5);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 830);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp2, tmp3}, tmp4);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 827);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 839);
    ca_.Goto(&block1, tmp0, tmp1, tmp2, tmp3);
  }

  if (block1.is_used()) {
    TNode<HeapObject> tmp6;
    TNode<IntPtrT> tmp7;
    TNode<HeapObject> tmp8;
    TNode<IntPtrT> tmp9;
    ca_.Bind(&block1, &tmp6, &tmp7, &tmp8, &tmp9);
    ca_.Goto(&block2, tmp6, tmp7, tmp8, tmp9);
  }

    TNode<HeapObject> tmp10;
    TNode<IntPtrT> tmp11;
    TNode<HeapObject> tmp12;
    TNode<IntPtrT> tmp13;
    ca_.Bind(&block2, &tmp10, &tmp11, &tmp12, &tmp13);
}

TorqueStructTestTuple5ATSmi8ATintptr TupleSwap8ATintptr5ATSmi_1513(compiler::CodeAssemblerState* state_, TorqueStructTestTuple8ATintptr5ATSmi p_tuple) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, Smi, Smi, IntPtrT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT, Smi, Smi, IntPtrT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_tuple.fst, p_tuple.snd);

  if (block0.is_used()) {
    TNode<IntPtrT> tmp0;
    TNode<Smi> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 994);
    ca_.Goto(&block1, tmp0, tmp1, tmp1, tmp0);
  }

  if (block1.is_used()) {
    TNode<IntPtrT> tmp2;
    TNode<Smi> tmp3;
    TNode<Smi> tmp4;
    TNode<IntPtrT> tmp5;
    ca_.Bind(&block1, &tmp2, &tmp3, &tmp4, &tmp5);
    ca_.SetSourcePosition("../../test/torque/test-torque.tq", 1001);
    ca_.Goto(&block2, tmp2, tmp3, tmp4, tmp5);
  }

    TNode<IntPtrT> tmp6;
    TNode<Smi> tmp7;
    TNode<Smi> tmp8;
    TNode<IntPtrT> tmp9;
    ca_.Bind(&block2, &tmp6, &tmp7, &tmp8, &tmp9);
  return TorqueStructTestTuple5ATSmi8ATintptr{TNode<Smi>{tmp8}, TNode<IntPtrT>{tmp9}};
}

}  // namespace internal
}  // namespace v8

