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

TNode<String> MakeDataViewGetterNameString_271(compiler::CodeAssemblerState* state_, ElementsKind p_kind) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block21(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block24(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block26(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block27(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block29(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block30(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<String> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<String> block32(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 10);
    if (((CodeStubAssembler(state_).ElementsKindEqual(p_kind, UINT8_ELEMENTS)))) {
      ca_.Goto(&block2);
    } else {
      ca_.Goto(&block3);
    }
  }

  if (block2.is_used()) {
    ca_.Bind(&block2);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 11);
    TNode<String> tmp0;
    USE(tmp0);
    tmp0 = FromConstexpr6String18ATconstexpr_string_156(state_, "DataView.prototype.getUint8");
    ca_.Goto(&block1, tmp0);
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 12);
    if (((CodeStubAssembler(state_).ElementsKindEqual(p_kind, INT8_ELEMENTS)))) {
      ca_.Goto(&block5);
    } else {
      ca_.Goto(&block6);
    }
  }

  if (block5.is_used()) {
    ca_.Bind(&block5);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 13);
    TNode<String> tmp1;
    USE(tmp1);
    tmp1 = FromConstexpr6String18ATconstexpr_string_156(state_, "DataView.prototype.getInt8");
    ca_.Goto(&block1, tmp1);
  }

  if (block6.is_used()) {
    ca_.Bind(&block6);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 14);
    if (((CodeStubAssembler(state_).ElementsKindEqual(p_kind, UINT16_ELEMENTS)))) {
      ca_.Goto(&block8);
    } else {
      ca_.Goto(&block9);
    }
  }

  if (block8.is_used()) {
    ca_.Bind(&block8);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 15);
    TNode<String> tmp2;
    USE(tmp2);
    tmp2 = FromConstexpr6String18ATconstexpr_string_156(state_, "DataView.prototype.getUint16");
    ca_.Goto(&block1, tmp2);
  }

  if (block9.is_used()) {
    ca_.Bind(&block9);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 16);
    if (((CodeStubAssembler(state_).ElementsKindEqual(p_kind, INT16_ELEMENTS)))) {
      ca_.Goto(&block11);
    } else {
      ca_.Goto(&block12);
    }
  }

  if (block11.is_used()) {
    ca_.Bind(&block11);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 17);
    TNode<String> tmp3;
    USE(tmp3);
    tmp3 = FromConstexpr6String18ATconstexpr_string_156(state_, "DataView.prototype.getInt16");
    ca_.Goto(&block1, tmp3);
  }

  if (block12.is_used()) {
    ca_.Bind(&block12);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 18);
    if (((CodeStubAssembler(state_).ElementsKindEqual(p_kind, UINT32_ELEMENTS)))) {
      ca_.Goto(&block14);
    } else {
      ca_.Goto(&block15);
    }
  }

  if (block14.is_used()) {
    ca_.Bind(&block14);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 19);
    TNode<String> tmp4;
    USE(tmp4);
    tmp4 = FromConstexpr6String18ATconstexpr_string_156(state_, "DataView.prototype.getUint32");
    ca_.Goto(&block1, tmp4);
  }

  if (block15.is_used()) {
    ca_.Bind(&block15);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 20);
    if (((CodeStubAssembler(state_).ElementsKindEqual(p_kind, INT32_ELEMENTS)))) {
      ca_.Goto(&block17);
    } else {
      ca_.Goto(&block18);
    }
  }

  if (block17.is_used()) {
    ca_.Bind(&block17);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 21);
    TNode<String> tmp5;
    USE(tmp5);
    tmp5 = FromConstexpr6String18ATconstexpr_string_156(state_, "DataView.prototype.getInt32");
    ca_.Goto(&block1, tmp5);
  }

  if (block18.is_used()) {
    ca_.Bind(&block18);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 22);
    if (((CodeStubAssembler(state_).ElementsKindEqual(p_kind, FLOAT32_ELEMENTS)))) {
      ca_.Goto(&block20);
    } else {
      ca_.Goto(&block21);
    }
  }

  if (block20.is_used()) {
    ca_.Bind(&block20);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 23);
    TNode<String> tmp6;
    USE(tmp6);
    tmp6 = FromConstexpr6String18ATconstexpr_string_156(state_, "DataView.prototype.getFloat32");
    ca_.Goto(&block1, tmp6);
  }

  if (block21.is_used()) {
    ca_.Bind(&block21);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 24);
    if (((CodeStubAssembler(state_).ElementsKindEqual(p_kind, FLOAT64_ELEMENTS)))) {
      ca_.Goto(&block23);
    } else {
      ca_.Goto(&block24);
    }
  }

  if (block23.is_used()) {
    ca_.Bind(&block23);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 25);
    TNode<String> tmp7;
    USE(tmp7);
    tmp7 = FromConstexpr6String18ATconstexpr_string_156(state_, "DataView.prototype.getFloat64");
    ca_.Goto(&block1, tmp7);
  }

  if (block24.is_used()) {
    ca_.Bind(&block24);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 26);
    if (((CodeStubAssembler(state_).ElementsKindEqual(p_kind, BIGINT64_ELEMENTS)))) {
      ca_.Goto(&block26);
    } else {
      ca_.Goto(&block27);
    }
  }

  if (block26.is_used()) {
    ca_.Bind(&block26);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 27);
    TNode<String> tmp8;
    USE(tmp8);
    tmp8 = FromConstexpr6String18ATconstexpr_string_156(state_, "DataView.prototype.getBigInt64");
    ca_.Goto(&block1, tmp8);
  }

  if (block27.is_used()) {
    ca_.Bind(&block27);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 28);
    if (((CodeStubAssembler(state_).ElementsKindEqual(p_kind, BIGUINT64_ELEMENTS)))) {
      ca_.Goto(&block29);
    } else {
      ca_.Goto(&block30);
    }
  }

  if (block29.is_used()) {
    ca_.Bind(&block29);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 29);
    TNode<String> tmp9;
    USE(tmp9);
    tmp9 = FromConstexpr6String18ATconstexpr_string_156(state_, "DataView.prototype.getBigUint64");
    ca_.Goto(&block1, tmp9);
  }

  if (block30.is_used()) {
    ca_.Bind(&block30);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 31);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block1.is_used()) {
    TNode<String> tmp10;
    ca_.Bind(&block1, &tmp10);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 9);
    ca_.Goto(&block32, tmp10);
  }

    TNode<String> tmp11;
    ca_.Bind(&block32, &tmp11);
  return TNode<String>{tmp11};
}

TNode<String> MakeDataViewSetterNameString_272(compiler::CodeAssemblerState* state_, ElementsKind p_kind) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block21(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block24(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block26(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block27(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block29(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block30(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<String> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<String> block32(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 36);
    if (((CodeStubAssembler(state_).ElementsKindEqual(p_kind, UINT8_ELEMENTS)))) {
      ca_.Goto(&block2);
    } else {
      ca_.Goto(&block3);
    }
  }

  if (block2.is_used()) {
    ca_.Bind(&block2);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 37);
    TNode<String> tmp0;
    USE(tmp0);
    tmp0 = FromConstexpr6String18ATconstexpr_string_156(state_, "DataView.prototype.setUint8");
    ca_.Goto(&block1, tmp0);
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 38);
    if (((CodeStubAssembler(state_).ElementsKindEqual(p_kind, INT8_ELEMENTS)))) {
      ca_.Goto(&block5);
    } else {
      ca_.Goto(&block6);
    }
  }

  if (block5.is_used()) {
    ca_.Bind(&block5);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 39);
    TNode<String> tmp1;
    USE(tmp1);
    tmp1 = FromConstexpr6String18ATconstexpr_string_156(state_, "DataView.prototype.setInt8");
    ca_.Goto(&block1, tmp1);
  }

  if (block6.is_used()) {
    ca_.Bind(&block6);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 40);
    if (((CodeStubAssembler(state_).ElementsKindEqual(p_kind, UINT16_ELEMENTS)))) {
      ca_.Goto(&block8);
    } else {
      ca_.Goto(&block9);
    }
  }

  if (block8.is_used()) {
    ca_.Bind(&block8);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 41);
    TNode<String> tmp2;
    USE(tmp2);
    tmp2 = FromConstexpr6String18ATconstexpr_string_156(state_, "DataView.prototype.setUint16");
    ca_.Goto(&block1, tmp2);
  }

  if (block9.is_used()) {
    ca_.Bind(&block9);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 42);
    if (((CodeStubAssembler(state_).ElementsKindEqual(p_kind, INT16_ELEMENTS)))) {
      ca_.Goto(&block11);
    } else {
      ca_.Goto(&block12);
    }
  }

  if (block11.is_used()) {
    ca_.Bind(&block11);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 43);
    TNode<String> tmp3;
    USE(tmp3);
    tmp3 = FromConstexpr6String18ATconstexpr_string_156(state_, "DataView.prototype.setInt16");
    ca_.Goto(&block1, tmp3);
  }

  if (block12.is_used()) {
    ca_.Bind(&block12);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 44);
    if (((CodeStubAssembler(state_).ElementsKindEqual(p_kind, UINT32_ELEMENTS)))) {
      ca_.Goto(&block14);
    } else {
      ca_.Goto(&block15);
    }
  }

  if (block14.is_used()) {
    ca_.Bind(&block14);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 45);
    TNode<String> tmp4;
    USE(tmp4);
    tmp4 = FromConstexpr6String18ATconstexpr_string_156(state_, "DataView.prototype.setUint32");
    ca_.Goto(&block1, tmp4);
  }

  if (block15.is_used()) {
    ca_.Bind(&block15);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 46);
    if (((CodeStubAssembler(state_).ElementsKindEqual(p_kind, INT32_ELEMENTS)))) {
      ca_.Goto(&block17);
    } else {
      ca_.Goto(&block18);
    }
  }

  if (block17.is_used()) {
    ca_.Bind(&block17);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 47);
    TNode<String> tmp5;
    USE(tmp5);
    tmp5 = FromConstexpr6String18ATconstexpr_string_156(state_, "DataView.prototype.setInt32");
    ca_.Goto(&block1, tmp5);
  }

  if (block18.is_used()) {
    ca_.Bind(&block18);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 48);
    if (((CodeStubAssembler(state_).ElementsKindEqual(p_kind, FLOAT32_ELEMENTS)))) {
      ca_.Goto(&block20);
    } else {
      ca_.Goto(&block21);
    }
  }

  if (block20.is_used()) {
    ca_.Bind(&block20);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 49);
    TNode<String> tmp6;
    USE(tmp6);
    tmp6 = FromConstexpr6String18ATconstexpr_string_156(state_, "DataView.prototype.setFloat32");
    ca_.Goto(&block1, tmp6);
  }

  if (block21.is_used()) {
    ca_.Bind(&block21);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 50);
    if (((CodeStubAssembler(state_).ElementsKindEqual(p_kind, FLOAT64_ELEMENTS)))) {
      ca_.Goto(&block23);
    } else {
      ca_.Goto(&block24);
    }
  }

  if (block23.is_used()) {
    ca_.Bind(&block23);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 51);
    TNode<String> tmp7;
    USE(tmp7);
    tmp7 = FromConstexpr6String18ATconstexpr_string_156(state_, "DataView.prototype.setFloat64");
    ca_.Goto(&block1, tmp7);
  }

  if (block24.is_used()) {
    ca_.Bind(&block24);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 52);
    if (((CodeStubAssembler(state_).ElementsKindEqual(p_kind, BIGINT64_ELEMENTS)))) {
      ca_.Goto(&block26);
    } else {
      ca_.Goto(&block27);
    }
  }

  if (block26.is_used()) {
    ca_.Bind(&block26);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 53);
    TNode<String> tmp8;
    USE(tmp8);
    tmp8 = FromConstexpr6String18ATconstexpr_string_156(state_, "DataView.prototype.setBigInt64");
    ca_.Goto(&block1, tmp8);
  }

  if (block27.is_used()) {
    ca_.Bind(&block27);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 54);
    if (((CodeStubAssembler(state_).ElementsKindEqual(p_kind, BIGUINT64_ELEMENTS)))) {
      ca_.Goto(&block29);
    } else {
      ca_.Goto(&block30);
    }
  }

  if (block29.is_used()) {
    ca_.Bind(&block29);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 55);
    TNode<String> tmp9;
    USE(tmp9);
    tmp9 = FromConstexpr6String18ATconstexpr_string_156(state_, "DataView.prototype.setBigUint64");
    ca_.Goto(&block1, tmp9);
  }

  if (block30.is_used()) {
    ca_.Bind(&block30);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 57);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block1.is_used()) {
    TNode<String> tmp10;
    ca_.Bind(&block1, &tmp10);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 35);
    ca_.Goto(&block32, tmp10);
  }

    TNode<String> tmp11;
    ca_.Bind(&block32, &tmp11);
  return TNode<String>{tmp11};
}

TNode<BoolT> WasDetached_273(compiler::CodeAssemblerState* state_, TNode<JSArrayBufferView> p_view) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBufferView> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBufferView, BoolT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBufferView, BoolT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_view);

  if (block0.is_used()) {
    TNode<JSArrayBufferView> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 62);
    TNode<IntPtrT> tmp1 = ca_.IntPtrConstant(JSArrayBufferView::kBufferOffset);
    USE(tmp1);
    TNode<JSArrayBuffer>tmp2 = CodeStubAssembler(state_).LoadReference<JSArrayBuffer>(CodeStubAssembler::Reference{tmp0, tmp1});
    TNode<BoolT> tmp3;
    USE(tmp3);
    tmp3 = CodeStubAssembler(state_).IsDetachedBuffer(TNode<JSArrayBuffer>{tmp2});
    ca_.Goto(&block1, tmp0, tmp3);
  }

  if (block1.is_used()) {
    TNode<JSArrayBufferView> tmp4;
    TNode<BoolT> tmp5;
    ca_.Bind(&block1, &tmp4, &tmp5);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 61);
    ca_.Goto(&block2, tmp4, tmp5);
  }

    TNode<JSArrayBufferView> tmp6;
    TNode<BoolT> tmp7;
    ca_.Bind(&block2, &tmp6, &tmp7);
  return TNode<BoolT>{tmp7};
}

TNode<JSDataView> ValidateDataView_274(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o, TNode<String> p_method) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, String> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, String, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, String, Object, JSDataView> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, String> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, String, JSDataView> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, String, JSDataView> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o, p_method);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Object> tmp1;
    TNode<String> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 68);
    TNode<JSDataView> tmp3;
    USE(tmp3);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp3 = Cast10JSDataView_1482(state_, TNode<Context>{tmp0}, TNode<Object>{tmp1}, &label0);
    ca_.Goto(&block4, tmp0, tmp1, tmp2, tmp1, tmp3);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block5, tmp0, tmp1, tmp2, tmp1);
    }
  }

  if (block5.is_used()) {
    TNode<Context> tmp4;
    TNode<Object> tmp5;
    TNode<String> tmp6;
    TNode<Object> tmp7;
    ca_.Bind(&block5, &tmp4, &tmp5, &tmp6, &tmp7);
    ca_.Goto(&block3, tmp4, tmp5, tmp6);
  }

  if (block4.is_used()) {
    TNode<Context> tmp8;
    TNode<Object> tmp9;
    TNode<String> tmp10;
    TNode<Object> tmp11;
    TNode<JSDataView> tmp12;
    ca_.Bind(&block4, &tmp8, &tmp9, &tmp10, &tmp11, &tmp12);
    ca_.Goto(&block1, tmp8, tmp9, tmp10, tmp12);
  }

  if (block3.is_used()) {
    TNode<Context> tmp13;
    TNode<Object> tmp14;
    TNode<String> tmp15;
    ca_.Bind(&block3, &tmp13, &tmp14, &tmp15);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 71);
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{tmp13}, MessageTemplate::kIncompatibleMethodReceiver, TNode<Object>{tmp15});
  }

  if (block1.is_used()) {
    TNode<Context> tmp16;
    TNode<Object> tmp17;
    TNode<String> tmp18;
    TNode<JSDataView> tmp19;
    ca_.Bind(&block1, &tmp16, &tmp17, &tmp18, &tmp19);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 65);
    ca_.Goto(&block6, tmp16, tmp17, tmp18, tmp19);
  }

    TNode<Context> tmp20;
    TNode<Object> tmp21;
    TNode<String> tmp22;
    TNode<JSDataView> tmp23;
    ca_.Bind(&block6, &tmp20, &tmp21, &tmp22, &tmp23);
  return TNode<JSDataView>{tmp23};
}

TF_BUILTIN(DataViewPrototypeGetBuffer, CodeStubAssembler) {
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
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 80);
    TNode<String> tmp5;
    USE(tmp5);
    tmp5 = FromConstexpr6String18ATconstexpr_string_156(state_, "get DataView.prototype.buffer");
    TNode<JSDataView> tmp6;
    USE(tmp6);
    tmp6 = ValidateDataView_274(state_, TNode<Context>{tmp3}, TNode<Object>{tmp4}, TNode<String>{tmp5});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 79);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 81);
    TNode<IntPtrT> tmp7 = ca_.IntPtrConstant(JSArrayBufferView::kBufferOffset);
    USE(tmp7);
    TNode<JSArrayBuffer>tmp8 = CodeStubAssembler(state_).LoadReference<JSArrayBuffer>(CodeStubAssembler::Reference{tmp6, tmp7});
    arguments.PopAndReturn(tmp8);
  }
}

TF_BUILTIN(DataViewPrototypeGetByteLength, CodeStubAssembler) {
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
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSDataView> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSDataView> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, torque_arguments.frame, torque_arguments.base, torque_arguments.length, parameter0, parameter1);

  if (block0.is_used()) {
    TNode<RawPtrT> tmp0;
    TNode<RawPtrT> tmp1;
    TNode<IntPtrT> tmp2;
    TNode<Context> tmp3;
    TNode<Object> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 88);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 87);
    TNode<String> tmp5;
    USE(tmp5);
    tmp5 = FromConstexpr6String18ATconstexpr_string_156(state_, "get DataView.prototype.byte_length");
    TNode<JSDataView> tmp6;
    USE(tmp6);
    tmp6 = ValidateDataView_274(state_, TNode<Context>{tmp3}, TNode<Object>{tmp4}, TNode<String>{tmp5});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 89);
    TNode<BoolT> tmp7;
    USE(tmp7);
    tmp7 = WasDetached_273(state_, TNode<JSArrayBufferView>{tmp6});
    ca_.Branch(tmp7, &block1, &block2, tmp0, tmp1, tmp2, tmp3, tmp4, tmp6);
  }

  if (block1.is_used()) {
    TNode<RawPtrT> tmp8;
    TNode<RawPtrT> tmp9;
    TNode<IntPtrT> tmp10;
    TNode<Context> tmp11;
    TNode<Object> tmp12;
    TNode<JSDataView> tmp13;
    ca_.Bind(&block1, &tmp8, &tmp9, &tmp10, &tmp11, &tmp12, &tmp13);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 92);
    TNode<Number> tmp14;
    USE(tmp14);
    tmp14 = FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_160(state_, 0);
    arguments.PopAndReturn(tmp14);
  }

  if (block2.is_used()) {
    TNode<RawPtrT> tmp15;
    TNode<RawPtrT> tmp16;
    TNode<IntPtrT> tmp17;
    TNode<Context> tmp18;
    TNode<Object> tmp19;
    TNode<JSDataView> tmp20;
    ca_.Bind(&block2, &tmp15, &tmp16, &tmp17, &tmp18, &tmp19, &tmp20);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 94);
    TNode<IntPtrT> tmp21 = ca_.IntPtrConstant(JSArrayBufferView::kByteLengthOffset);
    USE(tmp21);
    TNode<UintPtrT>tmp22 = CodeStubAssembler(state_).LoadReference<UintPtrT>(CodeStubAssembler::Reference{tmp20, tmp21});
    TNode<Number> tmp23;
    USE(tmp23);
    tmp23 = Convert20UT5ATSmi10HeapNumber9ATuintptr_203(state_, TNode<UintPtrT>{tmp22});
    arguments.PopAndReturn(tmp23);
  }
}

TF_BUILTIN(DataViewPrototypeGetByteOffset, CodeStubAssembler) {
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
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSDataView> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, JSDataView> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, torque_arguments.frame, torque_arguments.base, torque_arguments.length, parameter0, parameter1);

  if (block0.is_used()) {
    TNode<RawPtrT> tmp0;
    TNode<RawPtrT> tmp1;
    TNode<IntPtrT> tmp2;
    TNode<Context> tmp3;
    TNode<Object> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 101);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 100);
    TNode<String> tmp5;
    USE(tmp5);
    tmp5 = FromConstexpr6String18ATconstexpr_string_156(state_, "get DataView.prototype.byte_offset");
    TNode<JSDataView> tmp6;
    USE(tmp6);
    tmp6 = ValidateDataView_274(state_, TNode<Context>{tmp3}, TNode<Object>{tmp4}, TNode<String>{tmp5});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 102);
    TNode<BoolT> tmp7;
    USE(tmp7);
    tmp7 = WasDetached_273(state_, TNode<JSArrayBufferView>{tmp6});
    ca_.Branch(tmp7, &block1, &block2, tmp0, tmp1, tmp2, tmp3, tmp4, tmp6);
  }

  if (block1.is_used()) {
    TNode<RawPtrT> tmp8;
    TNode<RawPtrT> tmp9;
    TNode<IntPtrT> tmp10;
    TNode<Context> tmp11;
    TNode<Object> tmp12;
    TNode<JSDataView> tmp13;
    ca_.Bind(&block1, &tmp8, &tmp9, &tmp10, &tmp11, &tmp12, &tmp13);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 105);
    TNode<Number> tmp14;
    USE(tmp14);
    tmp14 = FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_160(state_, 0);
    arguments.PopAndReturn(tmp14);
  }

  if (block2.is_used()) {
    TNode<RawPtrT> tmp15;
    TNode<RawPtrT> tmp16;
    TNode<IntPtrT> tmp17;
    TNode<Context> tmp18;
    TNode<Object> tmp19;
    TNode<JSDataView> tmp20;
    ca_.Bind(&block2, &tmp15, &tmp16, &tmp17, &tmp18, &tmp19, &tmp20);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 107);
    TNode<IntPtrT> tmp21 = ca_.IntPtrConstant(JSArrayBufferView::kByteOffsetOffset);
    USE(tmp21);
    TNode<UintPtrT>tmp22 = CodeStubAssembler(state_).LoadReference<UintPtrT>(CodeStubAssembler::Reference{tmp20, tmp21});
    TNode<Number> tmp23;
    USE(tmp23);
    tmp23 = Convert20UT5ATSmi10HeapNumber9ATuintptr_203(state_, TNode<UintPtrT>{tmp22});
    arguments.PopAndReturn(tmp23);
  }
}

TNode<Smi> LoadDataView8_275(compiler::CodeAssemblerState* state_, TNode<JSArrayBuffer> p_buffer, TNode<UintPtrT> p_offset, bool p_signed) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, Smi> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_buffer, p_offset);

  if (block0.is_used()) {
    TNode<JSArrayBuffer> tmp0;
    TNode<UintPtrT> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 122);
    if ((p_signed)) {
      ca_.Goto(&block2, tmp0, tmp1);
    } else {
      ca_.Goto(&block3, tmp0, tmp1);
    }
  }

  if (block2.is_used()) {
    TNode<JSArrayBuffer> tmp2;
    TNode<UintPtrT> tmp3;
    ca_.Bind(&block2, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 123);
    TNode<IntPtrT> tmp4 = ca_.IntPtrConstant(JSArrayBuffer::kBackingStoreOffset);
    USE(tmp4);
    TNode<RawPtrT>tmp5 = CodeStubAssembler(state_).LoadReference<RawPtrT>(CodeStubAssembler::Reference{tmp2, tmp4});
    TNode<Int32T> tmp6;
    USE(tmp6);
    tmp6 = DataViewBuiltinsAssembler(state_).LoadInt8(TNode<RawPtrT>{tmp5}, TNode<UintPtrT>{tmp3});
    TNode<Smi> tmp7;
    USE(tmp7);
    tmp7 = Convert5ATSmi7ATint32_178(state_, TNode<Int32T>{tmp6});
    ca_.Goto(&block1, tmp2, tmp3, tmp7);
  }

  if (block3.is_used()) {
    TNode<JSArrayBuffer> tmp8;
    TNode<UintPtrT> tmp9;
    ca_.Bind(&block3, &tmp8, &tmp9);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 125);
    TNode<IntPtrT> tmp10 = ca_.IntPtrConstant(JSArrayBuffer::kBackingStoreOffset);
    USE(tmp10);
    TNode<RawPtrT>tmp11 = CodeStubAssembler(state_).LoadReference<RawPtrT>(CodeStubAssembler::Reference{tmp8, tmp10});
    TNode<Uint32T> tmp12;
    USE(tmp12);
    tmp12 = DataViewBuiltinsAssembler(state_).LoadUint8(TNode<RawPtrT>{tmp11}, TNode<UintPtrT>{tmp9});
    TNode<Smi> tmp13;
    USE(tmp13);
    tmp13 = Convert5ATSmi8ATuint32_180(state_, TNode<Uint32T>{tmp12});
    ca_.Goto(&block1, tmp8, tmp9, tmp13);
  }

  if (block1.is_used()) {
    TNode<JSArrayBuffer> tmp14;
    TNode<UintPtrT> tmp15;
    TNode<Smi> tmp16;
    ca_.Bind(&block1, &tmp14, &tmp15, &tmp16);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 120);
    ca_.Goto(&block5, tmp14, tmp15, tmp16);
  }

    TNode<JSArrayBuffer> tmp17;
    TNode<UintPtrT> tmp18;
    TNode<Smi> tmp19;
    ca_.Bind(&block5, &tmp17, &tmp18, &tmp19);
  return TNode<Smi>{tmp19};
}

TNode<Number> LoadDataView16_276(compiler::CodeAssemblerState* state_, TNode<JSArrayBuffer> p_buffer, TNode<UintPtrT> p_offset, TNode<BoolT> p_requestedLittleEndian, bool p_signed) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, BoolT> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, BoolT, RawPtrT, Int32T, Int32T, Int32T> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, BoolT, RawPtrT, Int32T, Int32T, Int32T> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, BoolT, RawPtrT, Int32T, Int32T, Int32T> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, BoolT, RawPtrT, Int32T, Int32T, Int32T> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, BoolT, RawPtrT, Int32T, Int32T, Int32T> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, BoolT, Number> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, BoolT, Number> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_buffer, p_offset, p_requestedLittleEndian);

  if (block0.is_used()) {
    TNode<JSArrayBuffer> tmp0;
    TNode<UintPtrT> tmp1;
    TNode<BoolT> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 132);
    TNode<IntPtrT> tmp3 = ca_.IntPtrConstant(JSArrayBuffer::kBackingStoreOffset);
    USE(tmp3);
    TNode<RawPtrT>tmp4 = CodeStubAssembler(state_).LoadReference<RawPtrT>(CodeStubAssembler::Reference{tmp0, tmp3});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 134);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 135);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 136);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 139);
    ca_.Branch(tmp2, &block2, &block3, tmp0, tmp1, tmp2, tmp4, ca_.Uninitialized<Int32T>(), ca_.Uninitialized<Int32T>(), ca_.Uninitialized<Int32T>());
  }

  if (block2.is_used()) {
    TNode<JSArrayBuffer> tmp5;
    TNode<UintPtrT> tmp6;
    TNode<BoolT> tmp7;
    TNode<RawPtrT> tmp8;
    TNode<Int32T> tmp9;
    TNode<Int32T> tmp10;
    TNode<Int32T> tmp11;
    ca_.Bind(&block2, &tmp5, &tmp6, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 140);
    TNode<Uint32T> tmp12;
    USE(tmp12);
    tmp12 = DataViewBuiltinsAssembler(state_).LoadUint8(TNode<RawPtrT>{tmp8}, TNode<UintPtrT>{tmp6});
    TNode<Int32T> tmp13;
    USE(tmp13);
    tmp13 = CodeStubAssembler(state_).Signed(TNode<Uint32T>{tmp12});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 141);
    TNode<UintPtrT> tmp14;
    USE(tmp14);
    tmp14 = FromConstexpr9ATuintptr17ATconstexpr_int31_164(state_, 1);
    TNode<UintPtrT> tmp15;
    USE(tmp15);
    tmp15 = CodeStubAssembler(state_).UintPtrAdd(TNode<UintPtrT>{tmp6}, TNode<UintPtrT>{tmp14});
    TNode<Int32T> tmp16;
    USE(tmp16);
    tmp16 = DataViewBuiltinsAssembler(state_).LoadInt8(TNode<RawPtrT>{tmp8}, TNode<UintPtrT>{tmp15});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 142);
    TNode<Int32T> tmp17;
    USE(tmp17);
    tmp17 = FromConstexpr7ATint3217ATconstexpr_int31_148(state_, 8);
    TNode<Int32T> tmp18;
    USE(tmp18);
    tmp18 = CodeStubAssembler(state_).Word32Shl(TNode<Int32T>{tmp16}, TNode<Int32T>{tmp17});
    TNode<Int32T> tmp19;
    USE(tmp19);
    tmp19 = CodeStubAssembler(state_).Int32Add(TNode<Int32T>{tmp18}, TNode<Int32T>{tmp13});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 139);
    ca_.Goto(&block4, tmp5, tmp6, tmp7, tmp8, tmp13, tmp16, tmp19);
  }

  if (block3.is_used()) {
    TNode<JSArrayBuffer> tmp20;
    TNode<UintPtrT> tmp21;
    TNode<BoolT> tmp22;
    TNode<RawPtrT> tmp23;
    TNode<Int32T> tmp24;
    TNode<Int32T> tmp25;
    TNode<Int32T> tmp26;
    ca_.Bind(&block3, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 144);
    TNode<Int32T> tmp27;
    USE(tmp27);
    tmp27 = DataViewBuiltinsAssembler(state_).LoadInt8(TNode<RawPtrT>{tmp23}, TNode<UintPtrT>{tmp21});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 145);
    TNode<UintPtrT> tmp28;
    USE(tmp28);
    tmp28 = FromConstexpr9ATuintptr17ATconstexpr_int31_164(state_, 1);
    TNode<UintPtrT> tmp29;
    USE(tmp29);
    tmp29 = CodeStubAssembler(state_).UintPtrAdd(TNode<UintPtrT>{tmp21}, TNode<UintPtrT>{tmp28});
    TNode<Uint32T> tmp30;
    USE(tmp30);
    tmp30 = DataViewBuiltinsAssembler(state_).LoadUint8(TNode<RawPtrT>{tmp23}, TNode<UintPtrT>{tmp29});
    TNode<Int32T> tmp31;
    USE(tmp31);
    tmp31 = CodeStubAssembler(state_).Signed(TNode<Uint32T>{tmp30});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 146);
    TNode<Int32T> tmp32;
    USE(tmp32);
    tmp32 = FromConstexpr7ATint3217ATconstexpr_int31_148(state_, 8);
    TNode<Int32T> tmp33;
    USE(tmp33);
    tmp33 = CodeStubAssembler(state_).Word32Shl(TNode<Int32T>{tmp27}, TNode<Int32T>{tmp32});
    TNode<Int32T> tmp34;
    USE(tmp34);
    tmp34 = CodeStubAssembler(state_).Int32Add(TNode<Int32T>{tmp33}, TNode<Int32T>{tmp31});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 139);
    ca_.Goto(&block4, tmp20, tmp21, tmp22, tmp23, tmp27, tmp31, tmp34);
  }

  if (block4.is_used()) {
    TNode<JSArrayBuffer> tmp35;
    TNode<UintPtrT> tmp36;
    TNode<BoolT> tmp37;
    TNode<RawPtrT> tmp38;
    TNode<Int32T> tmp39;
    TNode<Int32T> tmp40;
    TNode<Int32T> tmp41;
    ca_.Bind(&block4, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40, &tmp41);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 148);
    if ((p_signed)) {
      ca_.Goto(&block5, tmp35, tmp36, tmp37, tmp38, tmp39, tmp40, tmp41);
    } else {
      ca_.Goto(&block6, tmp35, tmp36, tmp37, tmp38, tmp39, tmp40, tmp41);
    }
  }

  if (block5.is_used()) {
    TNode<JSArrayBuffer> tmp42;
    TNode<UintPtrT> tmp43;
    TNode<BoolT> tmp44;
    TNode<RawPtrT> tmp45;
    TNode<Int32T> tmp46;
    TNode<Int32T> tmp47;
    TNode<Int32T> tmp48;
    ca_.Bind(&block5, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47, &tmp48);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 149);
    TNode<Smi> tmp49;
    USE(tmp49);
    tmp49 = Convert5ATSmi7ATint32_178(state_, TNode<Int32T>{tmp48});
    ca_.Goto(&block1, tmp42, tmp43, tmp44, tmp49);
  }

  if (block6.is_used()) {
    TNode<JSArrayBuffer> tmp50;
    TNode<UintPtrT> tmp51;
    TNode<BoolT> tmp52;
    TNode<RawPtrT> tmp53;
    TNode<Int32T> tmp54;
    TNode<Int32T> tmp55;
    TNode<Int32T> tmp56;
    ca_.Bind(&block6, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 152);
    TNode<Int32T> tmp57;
    USE(tmp57);
    tmp57 = FromConstexpr7ATint3217ATconstexpr_int31_148(state_, 0xFFFF);
    TNode<Int32T> tmp58;
    USE(tmp58);
    tmp58 = CodeStubAssembler(state_).Word32And(TNode<Int32T>{tmp56}, TNode<Int32T>{tmp57});
    TNode<Smi> tmp59;
    USE(tmp59);
    tmp59 = Convert5ATSmi7ATint32_178(state_, TNode<Int32T>{tmp58});
    ca_.Goto(&block1, tmp50, tmp51, tmp52, tmp59);
  }

  if (block1.is_used()) {
    TNode<JSArrayBuffer> tmp60;
    TNode<UintPtrT> tmp61;
    TNode<BoolT> tmp62;
    TNode<Number> tmp63;
    ca_.Bind(&block1, &tmp60, &tmp61, &tmp62, &tmp63);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 129);
    ca_.Goto(&block8, tmp60, tmp61, tmp62, tmp63);
  }

    TNode<JSArrayBuffer> tmp64;
    TNode<UintPtrT> tmp65;
    TNode<BoolT> tmp66;
    TNode<Number> tmp67;
    ca_.Bind(&block8, &tmp64, &tmp65, &tmp66, &tmp67);
  return TNode<Number>{tmp67};
}

TNode<Number> LoadDataView32_277(compiler::CodeAssemblerState* state_, TNode<JSArrayBuffer> p_buffer, TNode<UintPtrT> p_offset, TNode<BoolT> p_requestedLittleEndian, ElementsKind p_kind) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, BoolT> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, BoolT, RawPtrT, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, BoolT, RawPtrT, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, BoolT, RawPtrT, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, BoolT, RawPtrT, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, BoolT, RawPtrT, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, BoolT, RawPtrT, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, BoolT, RawPtrT, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, BoolT, RawPtrT, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, BoolT, RawPtrT, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, BoolT, Number> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, BoolT, Number> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_buffer, p_offset, p_requestedLittleEndian);

  if (block0.is_used()) {
    TNode<JSArrayBuffer> tmp0;
    TNode<UintPtrT> tmp1;
    TNode<BoolT> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 159);
    TNode<IntPtrT> tmp3 = ca_.IntPtrConstant(JSArrayBuffer::kBackingStoreOffset);
    USE(tmp3);
    TNode<RawPtrT>tmp4 = CodeStubAssembler(state_).LoadReference<RawPtrT>(CodeStubAssembler::Reference{tmp0, tmp3});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 161);
    TNode<Uint32T> tmp5;
    USE(tmp5);
    tmp5 = DataViewBuiltinsAssembler(state_).LoadUint8(TNode<RawPtrT>{tmp4}, TNode<UintPtrT>{tmp1});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 162);
    TNode<UintPtrT> tmp6;
    USE(tmp6);
    tmp6 = FromConstexpr9ATuintptr17ATconstexpr_int31_164(state_, 1);
    TNode<UintPtrT> tmp7;
    USE(tmp7);
    tmp7 = CodeStubAssembler(state_).UintPtrAdd(TNode<UintPtrT>{tmp1}, TNode<UintPtrT>{tmp6});
    TNode<Uint32T> tmp8;
    USE(tmp8);
    tmp8 = DataViewBuiltinsAssembler(state_).LoadUint8(TNode<RawPtrT>{tmp4}, TNode<UintPtrT>{tmp7});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 163);
    TNode<UintPtrT> tmp9;
    USE(tmp9);
    tmp9 = FromConstexpr9ATuintptr17ATconstexpr_int31_164(state_, 2);
    TNode<UintPtrT> tmp10;
    USE(tmp10);
    tmp10 = CodeStubAssembler(state_).UintPtrAdd(TNode<UintPtrT>{tmp1}, TNode<UintPtrT>{tmp9});
    TNode<Uint32T> tmp11;
    USE(tmp11);
    tmp11 = DataViewBuiltinsAssembler(state_).LoadUint8(TNode<RawPtrT>{tmp4}, TNode<UintPtrT>{tmp10});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 164);
    TNode<UintPtrT> tmp12;
    USE(tmp12);
    tmp12 = FromConstexpr9ATuintptr17ATconstexpr_int31_164(state_, 3);
    TNode<UintPtrT> tmp13;
    USE(tmp13);
    tmp13 = CodeStubAssembler(state_).UintPtrAdd(TNode<UintPtrT>{tmp1}, TNode<UintPtrT>{tmp12});
    TNode<Uint32T> tmp14;
    USE(tmp14);
    tmp14 = DataViewBuiltinsAssembler(state_).LoadUint8(TNode<RawPtrT>{tmp4}, TNode<UintPtrT>{tmp13});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 165);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 167);
    ca_.Branch(tmp2, &block2, &block3, tmp0, tmp1, tmp2, tmp4, tmp5, tmp8, tmp11, tmp14, ca_.Uninitialized<Uint32T>());
  }

  if (block2.is_used()) {
    TNode<JSArrayBuffer> tmp15;
    TNode<UintPtrT> tmp16;
    TNode<BoolT> tmp17;
    TNode<RawPtrT> tmp18;
    TNode<Uint32T> tmp19;
    TNode<Uint32T> tmp20;
    TNode<Uint32T> tmp21;
    TNode<Uint32T> tmp22;
    TNode<Uint32T> tmp23;
    ca_.Bind(&block2, &tmp15, &tmp16, &tmp17, &tmp18, &tmp19, &tmp20, &tmp21, &tmp22, &tmp23);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 168);
    TNode<Uint32T> tmp24;
    USE(tmp24);
    tmp24 = FromConstexpr8ATuint3217ATconstexpr_int31_163(state_, 24);
    TNode<Uint32T> tmp25;
    USE(tmp25);
    tmp25 = CodeStubAssembler(state_).Word32Shl(TNode<Uint32T>{tmp22}, TNode<Uint32T>{tmp24});
    TNode<Uint32T> tmp26;
    USE(tmp26);
    tmp26 = FromConstexpr8ATuint3217ATconstexpr_int31_163(state_, 16);
    TNode<Uint32T> tmp27;
    USE(tmp27);
    tmp27 = CodeStubAssembler(state_).Word32Shl(TNode<Uint32T>{tmp21}, TNode<Uint32T>{tmp26});
    TNode<Uint32T> tmp28;
    USE(tmp28);
    tmp28 = CodeStubAssembler(state_).Word32Or(TNode<Uint32T>{tmp25}, TNode<Uint32T>{tmp27});
    TNode<Uint32T> tmp29;
    USE(tmp29);
    tmp29 = FromConstexpr8ATuint3217ATconstexpr_int31_163(state_, 8);
    TNode<Uint32T> tmp30;
    USE(tmp30);
    tmp30 = CodeStubAssembler(state_).Word32Shl(TNode<Uint32T>{tmp20}, TNode<Uint32T>{tmp29});
    TNode<Uint32T> tmp31;
    USE(tmp31);
    tmp31 = CodeStubAssembler(state_).Word32Or(TNode<Uint32T>{tmp28}, TNode<Uint32T>{tmp30});
    TNode<Uint32T> tmp32;
    USE(tmp32);
    tmp32 = CodeStubAssembler(state_).Word32Or(TNode<Uint32T>{tmp31}, TNode<Uint32T>{tmp19});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 167);
    ca_.Goto(&block4, tmp15, tmp16, tmp17, tmp18, tmp19, tmp20, tmp21, tmp22, tmp32);
  }

  if (block3.is_used()) {
    TNode<JSArrayBuffer> tmp33;
    TNode<UintPtrT> tmp34;
    TNode<BoolT> tmp35;
    TNode<RawPtrT> tmp36;
    TNode<Uint32T> tmp37;
    TNode<Uint32T> tmp38;
    TNode<Uint32T> tmp39;
    TNode<Uint32T> tmp40;
    TNode<Uint32T> tmp41;
    ca_.Bind(&block3, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40, &tmp41);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 170);
    TNode<Uint32T> tmp42;
    USE(tmp42);
    tmp42 = FromConstexpr8ATuint3217ATconstexpr_int31_163(state_, 24);
    TNode<Uint32T> tmp43;
    USE(tmp43);
    tmp43 = CodeStubAssembler(state_).Word32Shl(TNode<Uint32T>{tmp37}, TNode<Uint32T>{tmp42});
    TNode<Uint32T> tmp44;
    USE(tmp44);
    tmp44 = FromConstexpr8ATuint3217ATconstexpr_int31_163(state_, 16);
    TNode<Uint32T> tmp45;
    USE(tmp45);
    tmp45 = CodeStubAssembler(state_).Word32Shl(TNode<Uint32T>{tmp38}, TNode<Uint32T>{tmp44});
    TNode<Uint32T> tmp46;
    USE(tmp46);
    tmp46 = CodeStubAssembler(state_).Word32Or(TNode<Uint32T>{tmp43}, TNode<Uint32T>{tmp45});
    TNode<Uint32T> tmp47;
    USE(tmp47);
    tmp47 = FromConstexpr8ATuint3217ATconstexpr_int31_163(state_, 8);
    TNode<Uint32T> tmp48;
    USE(tmp48);
    tmp48 = CodeStubAssembler(state_).Word32Shl(TNode<Uint32T>{tmp39}, TNode<Uint32T>{tmp47});
    TNode<Uint32T> tmp49;
    USE(tmp49);
    tmp49 = CodeStubAssembler(state_).Word32Or(TNode<Uint32T>{tmp46}, TNode<Uint32T>{tmp48});
    TNode<Uint32T> tmp50;
    USE(tmp50);
    tmp50 = CodeStubAssembler(state_).Word32Or(TNode<Uint32T>{tmp49}, TNode<Uint32T>{tmp40});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 167);
    ca_.Goto(&block4, tmp33, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39, tmp40, tmp50);
  }

  if (block4.is_used()) {
    TNode<JSArrayBuffer> tmp51;
    TNode<UintPtrT> tmp52;
    TNode<BoolT> tmp53;
    TNode<RawPtrT> tmp54;
    TNode<Uint32T> tmp55;
    TNode<Uint32T> tmp56;
    TNode<Uint32T> tmp57;
    TNode<Uint32T> tmp58;
    TNode<Uint32T> tmp59;
    ca_.Bind(&block4, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56, &tmp57, &tmp58, &tmp59);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 173);
    if (((CodeStubAssembler(state_).ElementsKindEqual(p_kind, INT32_ELEMENTS)))) {
      ca_.Goto(&block5, tmp51, tmp52, tmp53, tmp54, tmp55, tmp56, tmp57, tmp58, tmp59);
    } else {
      ca_.Goto(&block6, tmp51, tmp52, tmp53, tmp54, tmp55, tmp56, tmp57, tmp58, tmp59);
    }
  }

  if (block5.is_used()) {
    TNode<JSArrayBuffer> tmp60;
    TNode<UintPtrT> tmp61;
    TNode<BoolT> tmp62;
    TNode<RawPtrT> tmp63;
    TNode<Uint32T> tmp64;
    TNode<Uint32T> tmp65;
    TNode<Uint32T> tmp66;
    TNode<Uint32T> tmp67;
    TNode<Uint32T> tmp68;
    ca_.Bind(&block5, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67, &tmp68);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 174);
    TNode<Int32T> tmp69;
    USE(tmp69);
    tmp69 = CodeStubAssembler(state_).Signed(TNode<Uint32T>{tmp68});
    TNode<Number> tmp70;
    USE(tmp70);
    tmp70 = Convert20UT5ATSmi10HeapNumber7ATint32_175(state_, TNode<Int32T>{tmp69});
    ca_.Goto(&block1, tmp60, tmp61, tmp62, tmp70);
  }

  if (block6.is_used()) {
    TNode<JSArrayBuffer> tmp71;
    TNode<UintPtrT> tmp72;
    TNode<BoolT> tmp73;
    TNode<RawPtrT> tmp74;
    TNode<Uint32T> tmp75;
    TNode<Uint32T> tmp76;
    TNode<Uint32T> tmp77;
    TNode<Uint32T> tmp78;
    TNode<Uint32T> tmp79;
    ca_.Bind(&block6, &tmp71, &tmp72, &tmp73, &tmp74, &tmp75, &tmp76, &tmp77, &tmp78, &tmp79);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 175);
    if (((CodeStubAssembler(state_).ElementsKindEqual(p_kind, UINT32_ELEMENTS)))) {
      ca_.Goto(&block8, tmp71, tmp72, tmp73, tmp74, tmp75, tmp76, tmp77, tmp78, tmp79);
    } else {
      ca_.Goto(&block9, tmp71, tmp72, tmp73, tmp74, tmp75, tmp76, tmp77, tmp78, tmp79);
    }
  }

  if (block8.is_used()) {
    TNode<JSArrayBuffer> tmp80;
    TNode<UintPtrT> tmp81;
    TNode<BoolT> tmp82;
    TNode<RawPtrT> tmp83;
    TNode<Uint32T> tmp84;
    TNode<Uint32T> tmp85;
    TNode<Uint32T> tmp86;
    TNode<Uint32T> tmp87;
    TNode<Uint32T> tmp88;
    ca_.Bind(&block8, &tmp80, &tmp81, &tmp82, &tmp83, &tmp84, &tmp85, &tmp86, &tmp87, &tmp88);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 176);
    TNode<Number> tmp89;
    USE(tmp89);
    tmp89 = Convert20UT5ATSmi10HeapNumber8ATuint32_179(state_, TNode<Uint32T>{tmp88});
    ca_.Goto(&block1, tmp80, tmp81, tmp82, tmp89);
  }

  if (block9.is_used()) {
    TNode<JSArrayBuffer> tmp90;
    TNode<UintPtrT> tmp91;
    TNode<BoolT> tmp92;
    TNode<RawPtrT> tmp93;
    TNode<Uint32T> tmp94;
    TNode<Uint32T> tmp95;
    TNode<Uint32T> tmp96;
    TNode<Uint32T> tmp97;
    TNode<Uint32T> tmp98;
    ca_.Bind(&block9, &tmp90, &tmp91, &tmp92, &tmp93, &tmp94, &tmp95, &tmp96, &tmp97, &tmp98);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 177);
    if (((CodeStubAssembler(state_).ElementsKindEqual(p_kind, FLOAT32_ELEMENTS)))) {
      ca_.Goto(&block11, tmp90, tmp91, tmp92, tmp93, tmp94, tmp95, tmp96, tmp97, tmp98);
    } else {
      ca_.Goto(&block12, tmp90, tmp91, tmp92, tmp93, tmp94, tmp95, tmp96, tmp97, tmp98);
    }
  }

  if (block11.is_used()) {
    TNode<JSArrayBuffer> tmp99;
    TNode<UintPtrT> tmp100;
    TNode<BoolT> tmp101;
    TNode<RawPtrT> tmp102;
    TNode<Uint32T> tmp103;
    TNode<Uint32T> tmp104;
    TNode<Uint32T> tmp105;
    TNode<Uint32T> tmp106;
    TNode<Uint32T> tmp107;
    ca_.Bind(&block11, &tmp99, &tmp100, &tmp101, &tmp102, &tmp103, &tmp104, &tmp105, &tmp106, &tmp107);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 178);
    TNode<Float32T> tmp108;
    USE(tmp108);
    tmp108 = CodeStubAssembler(state_).BitcastInt32ToFloat32(TNode<Uint32T>{tmp107});
    TNode<Float64T> tmp109;
    USE(tmp109);
    tmp109 = Convert9ATfloat649ATfloat32_198(state_, TNode<Float32T>{tmp108});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 179);
    TNode<Number> tmp110;
    USE(tmp110);
    tmp110 = Convert20UT5ATSmi10HeapNumber9ATfloat64_201(state_, TNode<Float64T>{tmp109});
    ca_.Goto(&block1, tmp99, tmp100, tmp101, tmp110);
  }

  if (block12.is_used()) {
    TNode<JSArrayBuffer> tmp111;
    TNode<UintPtrT> tmp112;
    TNode<BoolT> tmp113;
    TNode<RawPtrT> tmp114;
    TNode<Uint32T> tmp115;
    TNode<Uint32T> tmp116;
    TNode<Uint32T> tmp117;
    TNode<Uint32T> tmp118;
    TNode<Uint32T> tmp119;
    ca_.Bind(&block12, &tmp111, &tmp112, &tmp113, &tmp114, &tmp115, &tmp116, &tmp117, &tmp118, &tmp119);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 181);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block1.is_used()) {
    TNode<JSArrayBuffer> tmp120;
    TNode<UintPtrT> tmp121;
    TNode<BoolT> tmp122;
    TNode<Number> tmp123;
    ca_.Bind(&block1, &tmp120, &tmp121, &tmp122, &tmp123);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 156);
    ca_.Goto(&block14, tmp120, tmp121, tmp122, tmp123);
  }

    TNode<JSArrayBuffer> tmp124;
    TNode<UintPtrT> tmp125;
    TNode<BoolT> tmp126;
    TNode<Number> tmp127;
    ca_.Bind(&block14, &tmp124, &tmp125, &tmp126, &tmp127);
  return TNode<Number>{tmp127};
}

TNode<Number> LoadDataViewFloat64_278(compiler::CodeAssemblerState* state_, TNode<JSArrayBuffer> p_buffer, TNode<UintPtrT> p_offset, TNode<BoolT> p_requestedLittleEndian) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, BoolT> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, BoolT, RawPtrT, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, BoolT, RawPtrT, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, BoolT, RawPtrT, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, BoolT, Number> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, BoolT, Number> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_buffer, p_offset, p_requestedLittleEndian);

  if (block0.is_used()) {
    TNode<JSArrayBuffer> tmp0;
    TNode<UintPtrT> tmp1;
    TNode<BoolT> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 188);
    TNode<IntPtrT> tmp3 = ca_.IntPtrConstant(JSArrayBuffer::kBackingStoreOffset);
    USE(tmp3);
    TNode<RawPtrT>tmp4 = CodeStubAssembler(state_).LoadReference<RawPtrT>(CodeStubAssembler::Reference{tmp0, tmp3});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 190);
    TNode<Uint32T> tmp5;
    USE(tmp5);
    tmp5 = DataViewBuiltinsAssembler(state_).LoadUint8(TNode<RawPtrT>{tmp4}, TNode<UintPtrT>{tmp1});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 191);
    TNode<UintPtrT> tmp6;
    USE(tmp6);
    tmp6 = FromConstexpr9ATuintptr17ATconstexpr_int31_164(state_, 1);
    TNode<UintPtrT> tmp7;
    USE(tmp7);
    tmp7 = CodeStubAssembler(state_).UintPtrAdd(TNode<UintPtrT>{tmp1}, TNode<UintPtrT>{tmp6});
    TNode<Uint32T> tmp8;
    USE(tmp8);
    tmp8 = DataViewBuiltinsAssembler(state_).LoadUint8(TNode<RawPtrT>{tmp4}, TNode<UintPtrT>{tmp7});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 192);
    TNode<UintPtrT> tmp9;
    USE(tmp9);
    tmp9 = FromConstexpr9ATuintptr17ATconstexpr_int31_164(state_, 2);
    TNode<UintPtrT> tmp10;
    USE(tmp10);
    tmp10 = CodeStubAssembler(state_).UintPtrAdd(TNode<UintPtrT>{tmp1}, TNode<UintPtrT>{tmp9});
    TNode<Uint32T> tmp11;
    USE(tmp11);
    tmp11 = DataViewBuiltinsAssembler(state_).LoadUint8(TNode<RawPtrT>{tmp4}, TNode<UintPtrT>{tmp10});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 193);
    TNode<UintPtrT> tmp12;
    USE(tmp12);
    tmp12 = FromConstexpr9ATuintptr17ATconstexpr_int31_164(state_, 3);
    TNode<UintPtrT> tmp13;
    USE(tmp13);
    tmp13 = CodeStubAssembler(state_).UintPtrAdd(TNode<UintPtrT>{tmp1}, TNode<UintPtrT>{tmp12});
    TNode<Uint32T> tmp14;
    USE(tmp14);
    tmp14 = DataViewBuiltinsAssembler(state_).LoadUint8(TNode<RawPtrT>{tmp4}, TNode<UintPtrT>{tmp13});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 194);
    TNode<UintPtrT> tmp15;
    USE(tmp15);
    tmp15 = FromConstexpr9ATuintptr17ATconstexpr_int31_164(state_, 4);
    TNode<UintPtrT> tmp16;
    USE(tmp16);
    tmp16 = CodeStubAssembler(state_).UintPtrAdd(TNode<UintPtrT>{tmp1}, TNode<UintPtrT>{tmp15});
    TNode<Uint32T> tmp17;
    USE(tmp17);
    tmp17 = DataViewBuiltinsAssembler(state_).LoadUint8(TNode<RawPtrT>{tmp4}, TNode<UintPtrT>{tmp16});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 195);
    TNode<UintPtrT> tmp18;
    USE(tmp18);
    tmp18 = FromConstexpr9ATuintptr17ATconstexpr_int31_164(state_, 5);
    TNode<UintPtrT> tmp19;
    USE(tmp19);
    tmp19 = CodeStubAssembler(state_).UintPtrAdd(TNode<UintPtrT>{tmp1}, TNode<UintPtrT>{tmp18});
    TNode<Uint32T> tmp20;
    USE(tmp20);
    tmp20 = DataViewBuiltinsAssembler(state_).LoadUint8(TNode<RawPtrT>{tmp4}, TNode<UintPtrT>{tmp19});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 196);
    TNode<UintPtrT> tmp21;
    USE(tmp21);
    tmp21 = FromConstexpr9ATuintptr17ATconstexpr_int31_164(state_, 6);
    TNode<UintPtrT> tmp22;
    USE(tmp22);
    tmp22 = CodeStubAssembler(state_).UintPtrAdd(TNode<UintPtrT>{tmp1}, TNode<UintPtrT>{tmp21});
    TNode<Uint32T> tmp23;
    USE(tmp23);
    tmp23 = DataViewBuiltinsAssembler(state_).LoadUint8(TNode<RawPtrT>{tmp4}, TNode<UintPtrT>{tmp22});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 197);
    TNode<UintPtrT> tmp24;
    USE(tmp24);
    tmp24 = FromConstexpr9ATuintptr17ATconstexpr_int31_164(state_, 7);
    TNode<UintPtrT> tmp25;
    USE(tmp25);
    tmp25 = CodeStubAssembler(state_).UintPtrAdd(TNode<UintPtrT>{tmp1}, TNode<UintPtrT>{tmp24});
    TNode<Uint32T> tmp26;
    USE(tmp26);
    tmp26 = DataViewBuiltinsAssembler(state_).LoadUint8(TNode<RawPtrT>{tmp4}, TNode<UintPtrT>{tmp25});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 198);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 199);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 201);
    ca_.Branch(tmp2, &block2, &block3, tmp0, tmp1, tmp2, tmp4, tmp5, tmp8, tmp11, tmp14, tmp17, tmp20, tmp23, tmp26, ca_.Uninitialized<Uint32T>(), ca_.Uninitialized<Uint32T>());
  }

  if (block2.is_used()) {
    TNode<JSArrayBuffer> tmp27;
    TNode<UintPtrT> tmp28;
    TNode<BoolT> tmp29;
    TNode<RawPtrT> tmp30;
    TNode<Uint32T> tmp31;
    TNode<Uint32T> tmp32;
    TNode<Uint32T> tmp33;
    TNode<Uint32T> tmp34;
    TNode<Uint32T> tmp35;
    TNode<Uint32T> tmp36;
    TNode<Uint32T> tmp37;
    TNode<Uint32T> tmp38;
    TNode<Uint32T> tmp39;
    TNode<Uint32T> tmp40;
    ca_.Bind(&block2, &tmp27, &tmp28, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 202);
    TNode<Uint32T> tmp41;
    USE(tmp41);
    tmp41 = FromConstexpr8ATuint3217ATconstexpr_int31_163(state_, 24);
    TNode<Uint32T> tmp42;
    USE(tmp42);
    tmp42 = CodeStubAssembler(state_).Word32Shl(TNode<Uint32T>{tmp34}, TNode<Uint32T>{tmp41});
    TNode<Uint32T> tmp43;
    USE(tmp43);
    tmp43 = FromConstexpr8ATuint3217ATconstexpr_int31_163(state_, 16);
    TNode<Uint32T> tmp44;
    USE(tmp44);
    tmp44 = CodeStubAssembler(state_).Word32Shl(TNode<Uint32T>{tmp33}, TNode<Uint32T>{tmp43});
    TNode<Uint32T> tmp45;
    USE(tmp45);
    tmp45 = CodeStubAssembler(state_).Word32Or(TNode<Uint32T>{tmp42}, TNode<Uint32T>{tmp44});
    TNode<Uint32T> tmp46;
    USE(tmp46);
    tmp46 = FromConstexpr8ATuint3217ATconstexpr_int31_163(state_, 8);
    TNode<Uint32T> tmp47;
    USE(tmp47);
    tmp47 = CodeStubAssembler(state_).Word32Shl(TNode<Uint32T>{tmp32}, TNode<Uint32T>{tmp46});
    TNode<Uint32T> tmp48;
    USE(tmp48);
    tmp48 = CodeStubAssembler(state_).Word32Or(TNode<Uint32T>{tmp45}, TNode<Uint32T>{tmp47});
    TNode<Uint32T> tmp49;
    USE(tmp49);
    tmp49 = CodeStubAssembler(state_).Word32Or(TNode<Uint32T>{tmp48}, TNode<Uint32T>{tmp31});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 203);
    TNode<Uint32T> tmp50;
    USE(tmp50);
    tmp50 = FromConstexpr8ATuint3217ATconstexpr_int31_163(state_, 24);
    TNode<Uint32T> tmp51;
    USE(tmp51);
    tmp51 = CodeStubAssembler(state_).Word32Shl(TNode<Uint32T>{tmp38}, TNode<Uint32T>{tmp50});
    TNode<Uint32T> tmp52;
    USE(tmp52);
    tmp52 = FromConstexpr8ATuint3217ATconstexpr_int31_163(state_, 16);
    TNode<Uint32T> tmp53;
    USE(tmp53);
    tmp53 = CodeStubAssembler(state_).Word32Shl(TNode<Uint32T>{tmp37}, TNode<Uint32T>{tmp52});
    TNode<Uint32T> tmp54;
    USE(tmp54);
    tmp54 = CodeStubAssembler(state_).Word32Or(TNode<Uint32T>{tmp51}, TNode<Uint32T>{tmp53});
    TNode<Uint32T> tmp55;
    USE(tmp55);
    tmp55 = FromConstexpr8ATuint3217ATconstexpr_int31_163(state_, 8);
    TNode<Uint32T> tmp56;
    USE(tmp56);
    tmp56 = CodeStubAssembler(state_).Word32Shl(TNode<Uint32T>{tmp36}, TNode<Uint32T>{tmp55});
    TNode<Uint32T> tmp57;
    USE(tmp57);
    tmp57 = CodeStubAssembler(state_).Word32Or(TNode<Uint32T>{tmp54}, TNode<Uint32T>{tmp56});
    TNode<Uint32T> tmp58;
    USE(tmp58);
    tmp58 = CodeStubAssembler(state_).Word32Or(TNode<Uint32T>{tmp57}, TNode<Uint32T>{tmp35});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 201);
    ca_.Goto(&block4, tmp27, tmp28, tmp29, tmp30, tmp31, tmp32, tmp33, tmp34, tmp35, tmp36, tmp37, tmp38, tmp49, tmp58);
  }

  if (block3.is_used()) {
    TNode<JSArrayBuffer> tmp59;
    TNode<UintPtrT> tmp60;
    TNode<BoolT> tmp61;
    TNode<RawPtrT> tmp62;
    TNode<Uint32T> tmp63;
    TNode<Uint32T> tmp64;
    TNode<Uint32T> tmp65;
    TNode<Uint32T> tmp66;
    TNode<Uint32T> tmp67;
    TNode<Uint32T> tmp68;
    TNode<Uint32T> tmp69;
    TNode<Uint32T> tmp70;
    TNode<Uint32T> tmp71;
    TNode<Uint32T> tmp72;
    ca_.Bind(&block3, &tmp59, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67, &tmp68, &tmp69, &tmp70, &tmp71, &tmp72);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 205);
    TNode<Uint32T> tmp73;
    USE(tmp73);
    tmp73 = FromConstexpr8ATuint3217ATconstexpr_int31_163(state_, 24);
    TNode<Uint32T> tmp74;
    USE(tmp74);
    tmp74 = CodeStubAssembler(state_).Word32Shl(TNode<Uint32T>{tmp63}, TNode<Uint32T>{tmp73});
    TNode<Uint32T> tmp75;
    USE(tmp75);
    tmp75 = FromConstexpr8ATuint3217ATconstexpr_int31_163(state_, 16);
    TNode<Uint32T> tmp76;
    USE(tmp76);
    tmp76 = CodeStubAssembler(state_).Word32Shl(TNode<Uint32T>{tmp64}, TNode<Uint32T>{tmp75});
    TNode<Uint32T> tmp77;
    USE(tmp77);
    tmp77 = CodeStubAssembler(state_).Word32Or(TNode<Uint32T>{tmp74}, TNode<Uint32T>{tmp76});
    TNode<Uint32T> tmp78;
    USE(tmp78);
    tmp78 = FromConstexpr8ATuint3217ATconstexpr_int31_163(state_, 8);
    TNode<Uint32T> tmp79;
    USE(tmp79);
    tmp79 = CodeStubAssembler(state_).Word32Shl(TNode<Uint32T>{tmp65}, TNode<Uint32T>{tmp78});
    TNode<Uint32T> tmp80;
    USE(tmp80);
    tmp80 = CodeStubAssembler(state_).Word32Or(TNode<Uint32T>{tmp77}, TNode<Uint32T>{tmp79});
    TNode<Uint32T> tmp81;
    USE(tmp81);
    tmp81 = CodeStubAssembler(state_).Word32Or(TNode<Uint32T>{tmp80}, TNode<Uint32T>{tmp66});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 206);
    TNode<Uint32T> tmp82;
    USE(tmp82);
    tmp82 = FromConstexpr8ATuint3217ATconstexpr_int31_163(state_, 24);
    TNode<Uint32T> tmp83;
    USE(tmp83);
    tmp83 = CodeStubAssembler(state_).Word32Shl(TNode<Uint32T>{tmp67}, TNode<Uint32T>{tmp82});
    TNode<Uint32T> tmp84;
    USE(tmp84);
    tmp84 = FromConstexpr8ATuint3217ATconstexpr_int31_163(state_, 16);
    TNode<Uint32T> tmp85;
    USE(tmp85);
    tmp85 = CodeStubAssembler(state_).Word32Shl(TNode<Uint32T>{tmp68}, TNode<Uint32T>{tmp84});
    TNode<Uint32T> tmp86;
    USE(tmp86);
    tmp86 = CodeStubAssembler(state_).Word32Or(TNode<Uint32T>{tmp83}, TNode<Uint32T>{tmp85});
    TNode<Uint32T> tmp87;
    USE(tmp87);
    tmp87 = FromConstexpr8ATuint3217ATconstexpr_int31_163(state_, 8);
    TNode<Uint32T> tmp88;
    USE(tmp88);
    tmp88 = CodeStubAssembler(state_).Word32Shl(TNode<Uint32T>{tmp69}, TNode<Uint32T>{tmp87});
    TNode<Uint32T> tmp89;
    USE(tmp89);
    tmp89 = CodeStubAssembler(state_).Word32Or(TNode<Uint32T>{tmp86}, TNode<Uint32T>{tmp88});
    TNode<Uint32T> tmp90;
    USE(tmp90);
    tmp90 = CodeStubAssembler(state_).Word32Or(TNode<Uint32T>{tmp89}, TNode<Uint32T>{tmp70});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 201);
    ca_.Goto(&block4, tmp59, tmp60, tmp61, tmp62, tmp63, tmp64, tmp65, tmp66, tmp67, tmp68, tmp69, tmp70, tmp90, tmp81);
  }

  if (block4.is_used()) {
    TNode<JSArrayBuffer> tmp91;
    TNode<UintPtrT> tmp92;
    TNode<BoolT> tmp93;
    TNode<RawPtrT> tmp94;
    TNode<Uint32T> tmp95;
    TNode<Uint32T> tmp96;
    TNode<Uint32T> tmp97;
    TNode<Uint32T> tmp98;
    TNode<Uint32T> tmp99;
    TNode<Uint32T> tmp100;
    TNode<Uint32T> tmp101;
    TNode<Uint32T> tmp102;
    TNode<Uint32T> tmp103;
    TNode<Uint32T> tmp104;
    ca_.Bind(&block4, &tmp91, &tmp92, &tmp93, &tmp94, &tmp95, &tmp96, &tmp97, &tmp98, &tmp99, &tmp100, &tmp101, &tmp102, &tmp103, &tmp104);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 209);
    TNode<Float64T> tmp105;
    USE(tmp105);
    tmp105 = FromConstexpr9ATfloat6417ATconstexpr_int31_165(state_, 0);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 210);
    TNode<Float64T> tmp106;
    USE(tmp106);
    tmp106 = CodeStubAssembler(state_).Float64InsertLowWord32(TNode<Float64T>{tmp105}, TNode<Uint32T>{tmp103});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 211);
    TNode<Float64T> tmp107;
    USE(tmp107);
    tmp107 = CodeStubAssembler(state_).Float64InsertHighWord32(TNode<Float64T>{tmp106}, TNode<Uint32T>{tmp104});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 213);
    TNode<Number> tmp108;
    USE(tmp108);
    tmp108 = Convert20UT5ATSmi10HeapNumber9ATfloat64_201(state_, TNode<Float64T>{tmp107});
    ca_.Goto(&block1, tmp91, tmp92, tmp93, tmp108);
  }

  if (block1.is_used()) {
    TNode<JSArrayBuffer> tmp109;
    TNode<UintPtrT> tmp110;
    TNode<BoolT> tmp111;
    TNode<Number> tmp112;
    ca_.Bind(&block1, &tmp109, &tmp110, &tmp111, &tmp112);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 185);
    ca_.Goto(&block5, tmp109, tmp110, tmp111, tmp112);
  }

    TNode<JSArrayBuffer> tmp113;
    TNode<UintPtrT> tmp114;
    TNode<BoolT> tmp115;
    TNode<Number> tmp116;
    ca_.Bind(&block5, &tmp113, &tmp114, &tmp115, &tmp116);
  return TNode<Number>{tmp116};
}

int31_t kZeroDigitBigInt_279(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

    ca_.Bind(&block0);
return 0;
}

int31_t kOneDigitBigInt_280(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

    ca_.Bind(&block0);
return 1;
}

int31_t kTwoDigitBigInt_281(compiler::CodeAssemblerState* state_) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

    ca_.Bind(&block0);
return 2;
}

TNode<BigInt> MakeBigIntOn64Bit_282(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Uint32T> p_lowWord, TNode<Uint32T> p_highWord, bool p_signed) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, Uint32T, Uint32T> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Uint32T, Uint32T, BoolT> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Uint32T, Uint32T, BoolT> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Uint32T, Uint32T, BoolT, BoolT> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Uint32T, Uint32T> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Uint32T, Uint32T> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Uint32T, Uint32T, Uint32T, IntPtrT, IntPtrT, IntPtrT> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Uint32T, Uint32T, Uint32T, IntPtrT, IntPtrT, IntPtrT> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Uint32T, Uint32T, Uint32T, IntPtrT, IntPtrT, IntPtrT> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Uint32T, Uint32T, Uint32T, IntPtrT, IntPtrT, IntPtrT> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Uint32T, Uint32T, Uint32T, IntPtrT, IntPtrT, IntPtrT> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Uint32T, Uint32T, BigInt> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Uint32T, Uint32T, BigInt> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_lowWord, p_highWord);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Uint32T> tmp1;
    TNode<Uint32T> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 224);
    TNode<Uint32T> tmp3;
    USE(tmp3);
    tmp3 = FromConstexpr8ATuint3217ATconstexpr_int31_163(state_, 0);
    TNode<BoolT> tmp4;
    USE(tmp4);
    tmp4 = CodeStubAssembler(state_).Word32Equal(TNode<Uint32T>{tmp1}, TNode<Uint32T>{tmp3});
    ca_.Branch(tmp4, &block4, &block5, tmp0, tmp1, tmp2, tmp4);
  }

  if (block4.is_used()) {
    TNode<Context> tmp5;
    TNode<Uint32T> tmp6;
    TNode<Uint32T> tmp7;
    TNode<BoolT> tmp8;
    ca_.Bind(&block4, &tmp5, &tmp6, &tmp7, &tmp8);
    TNode<Uint32T> tmp9;
    USE(tmp9);
    tmp9 = FromConstexpr8ATuint3217ATconstexpr_int31_163(state_, 0);
    TNode<BoolT> tmp10;
    USE(tmp10);
    tmp10 = CodeStubAssembler(state_).Word32Equal(TNode<Uint32T>{tmp7}, TNode<Uint32T>{tmp9});
    ca_.Goto(&block6, tmp5, tmp6, tmp7, tmp8, tmp10);
  }

  if (block5.is_used()) {
    TNode<Context> tmp11;
    TNode<Uint32T> tmp12;
    TNode<Uint32T> tmp13;
    TNode<BoolT> tmp14;
    ca_.Bind(&block5, &tmp11, &tmp12, &tmp13, &tmp14);
    TNode<BoolT> tmp15;
    USE(tmp15);
    tmp15 = FromConstexpr6ATbool16ATconstexpr_bool_167(state_, false);
    ca_.Goto(&block6, tmp11, tmp12, tmp13, tmp14, tmp15);
  }

  if (block6.is_used()) {
    TNode<Context> tmp16;
    TNode<Uint32T> tmp17;
    TNode<Uint32T> tmp18;
    TNode<BoolT> tmp19;
    TNode<BoolT> tmp20;
    ca_.Bind(&block6, &tmp16, &tmp17, &tmp18, &tmp19, &tmp20);
    ca_.Branch(tmp20, &block2, &block3, tmp16, tmp17, tmp18);
  }

  if (block2.is_used()) {
    TNode<Context> tmp21;
    TNode<Uint32T> tmp22;
    TNode<Uint32T> tmp23;
    ca_.Bind(&block2, &tmp21, &tmp22, &tmp23);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 225);
    TNode<IntPtrT> tmp24;
    USE(tmp24);
    tmp24 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, kZeroDigitBigInt_279(state_));
    TNode<BigInt> tmp25;
    USE(tmp25);
    tmp25 = CodeStubAssembler(state_).AllocateBigInt(TNode<IntPtrT>{tmp24});
    TNode<BigInt> tmp26;
    USE(tmp26);
    tmp26 = Convert8ATBigInt13MutableBigInt_258(state_, TNode<BigInt>{tmp25});
    ca_.Goto(&block1, tmp21, tmp22, tmp23, tmp26);
  }

  if (block3.is_used()) {
    TNode<Context> tmp27;
    TNode<Uint32T> tmp28;
    TNode<Uint32T> tmp29;
    ca_.Bind(&block3, &tmp27, &tmp28, &tmp29);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 228);
    TNode<Uint32T> tmp30;
    USE(tmp30);
    tmp30 = kPositiveSign_259(state_);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 229);
    TNode<UintPtrT> tmp31;
    USE(tmp31);
    tmp31 = Convert9ATuintptr8ATuint32_181(state_, TNode<Uint32T>{tmp29});
    TNode<IntPtrT> tmp32;
    USE(tmp32);
    tmp32 = CodeStubAssembler(state_).Signed(TNode<UintPtrT>{tmp31});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 230);
    TNode<UintPtrT> tmp33;
    USE(tmp33);
    tmp33 = Convert9ATuintptr8ATuint32_181(state_, TNode<Uint32T>{tmp28});
    TNode<IntPtrT> tmp34;
    USE(tmp34);
    tmp34 = CodeStubAssembler(state_).Signed(TNode<UintPtrT>{tmp33});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 231);
    TNode<IntPtrT> tmp35;
    USE(tmp35);
    tmp35 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 32);
    TNode<IntPtrT> tmp36;
    USE(tmp36);
    tmp36 = CodeStubAssembler(state_).WordShl(TNode<IntPtrT>{tmp32}, TNode<IntPtrT>{tmp35});
    TNode<IntPtrT> tmp37;
    USE(tmp37);
    tmp37 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp36}, TNode<IntPtrT>{tmp34});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 233);
    if ((p_signed)) {
      ca_.Goto(&block7, tmp27, tmp28, tmp29, tmp30, tmp32, tmp34, tmp37);
    } else {
      ca_.Goto(&block8, tmp27, tmp28, tmp29, tmp30, tmp32, tmp34, tmp37);
    }
  }

  if (block7.is_used()) {
    TNode<Context> tmp38;
    TNode<Uint32T> tmp39;
    TNode<Uint32T> tmp40;
    TNode<Uint32T> tmp41;
    TNode<IntPtrT> tmp42;
    TNode<IntPtrT> tmp43;
    TNode<IntPtrT> tmp44;
    ca_.Bind(&block7, &tmp38, &tmp39, &tmp40, &tmp41, &tmp42, &tmp43, &tmp44);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 234);
    TNode<IntPtrT> tmp45;
    USE(tmp45);
    tmp45 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 0);
    TNode<BoolT> tmp46;
    USE(tmp46);
    tmp46 = CodeStubAssembler(state_).IntPtrLessThan(TNode<IntPtrT>{tmp44}, TNode<IntPtrT>{tmp45});
    ca_.Branch(tmp46, &block10, &block11, tmp38, tmp39, tmp40, tmp41, tmp42, tmp43, tmp44);
  }

  if (block10.is_used()) {
    TNode<Context> tmp47;
    TNode<Uint32T> tmp48;
    TNode<Uint32T> tmp49;
    TNode<Uint32T> tmp50;
    TNode<IntPtrT> tmp51;
    TNode<IntPtrT> tmp52;
    TNode<IntPtrT> tmp53;
    ca_.Bind(&block10, &tmp47, &tmp48, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 235);
    TNode<Uint32T> tmp54;
    USE(tmp54);
    tmp54 = kNegativeSign_260(state_);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 237);
    TNode<IntPtrT> tmp55;
    USE(tmp55);
    tmp55 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 0);
    TNode<IntPtrT> tmp56;
    USE(tmp56);
    tmp56 = CodeStubAssembler(state_).IntPtrSub(TNode<IntPtrT>{tmp55}, TNode<IntPtrT>{tmp53});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 234);
    ca_.Goto(&block11, tmp47, tmp48, tmp49, tmp54, tmp51, tmp52, tmp56);
  }

  if (block11.is_used()) {
    TNode<Context> tmp57;
    TNode<Uint32T> tmp58;
    TNode<Uint32T> tmp59;
    TNode<Uint32T> tmp60;
    TNode<IntPtrT> tmp61;
    TNode<IntPtrT> tmp62;
    TNode<IntPtrT> tmp63;
    ca_.Bind(&block11, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62, &tmp63);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 233);
    ca_.Goto(&block9, tmp57, tmp58, tmp59, tmp60, tmp61, tmp62, tmp63);
  }

  if (block8.is_used()) {
    TNode<Context> tmp64;
    TNode<Uint32T> tmp65;
    TNode<Uint32T> tmp66;
    TNode<Uint32T> tmp67;
    TNode<IntPtrT> tmp68;
    TNode<IntPtrT> tmp69;
    TNode<IntPtrT> tmp70;
    ca_.Bind(&block8, &tmp64, &tmp65, &tmp66, &tmp67, &tmp68, &tmp69, &tmp70);
    ca_.Goto(&block9, tmp64, tmp65, tmp66, tmp67, tmp68, tmp69, tmp70);
  }

  if (block9.is_used()) {
    TNode<Context> tmp71;
    TNode<Uint32T> tmp72;
    TNode<Uint32T> tmp73;
    TNode<Uint32T> tmp74;
    TNode<IntPtrT> tmp75;
    TNode<IntPtrT> tmp76;
    TNode<IntPtrT> tmp77;
    ca_.Bind(&block9, &tmp71, &tmp72, &tmp73, &tmp74, &tmp75, &tmp76, &tmp77);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 243);
    TNode<IntPtrT> tmp78;
    USE(tmp78);
    tmp78 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, kOneDigitBigInt_280(state_));
    TNode<BigInt> tmp79;
    USE(tmp79);
    tmp79 = AllocateEmptyBigInt_264(state_, TNode<Context>{tmp71}, TNode<Uint32T>{tmp74}, TNode<IntPtrT>{tmp78});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 242);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 244);
    TNode<UintPtrT> tmp80;
    USE(tmp80);
    tmp80 = CodeStubAssembler(state_).Unsigned(TNode<IntPtrT>{tmp77});
    TNode<IntPtrT> tmp81;
    USE(tmp81);
    tmp81 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 0);
    CodeStubAssembler(state_).StoreBigIntDigit(TNode<BigInt>{tmp79}, TNode<IntPtrT>{tmp81}, TNode<UintPtrT>{tmp80});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 245);
    TNode<BigInt> tmp82;
    USE(tmp82);
    tmp82 = Convert8ATBigInt13MutableBigInt_258(state_, TNode<BigInt>{tmp79});
    ca_.Goto(&block1, tmp71, tmp72, tmp73, tmp82);
  }

  if (block1.is_used()) {
    TNode<Context> tmp83;
    TNode<Uint32T> tmp84;
    TNode<Uint32T> tmp85;
    TNode<BigInt> tmp86;
    ca_.Bind(&block1, &tmp83, &tmp84, &tmp85, &tmp86);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 221);
    ca_.Goto(&block12, tmp83, tmp84, tmp85, tmp86);
  }

    TNode<Context> tmp87;
    TNode<Uint32T> tmp88;
    TNode<Uint32T> tmp89;
    TNode<BigInt> tmp90;
    ca_.Bind(&block12, &tmp87, &tmp88, &tmp89, &tmp90);
  return TNode<BigInt>{tmp90};
}

TNode<BigInt> MakeBigIntOn32Bit_283(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Uint32T> p_lowWord, TNode<Uint32T> p_highWord, bool p_signed) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, Uint32T, Uint32T> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Uint32T, Uint32T, BoolT> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Uint32T, Uint32T, BoolT> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Uint32T, Uint32T, BoolT, BoolT> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Uint32T, Uint32T> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Uint32T, Uint32T> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Uint32T, Uint32T, BoolT, Uint32T, Int32T, Int32T> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Uint32T, Uint32T, BoolT, Uint32T, Int32T, Int32T> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Uint32T, Uint32T, BoolT, Uint32T, Int32T, Int32T> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Uint32T, Uint32T, BoolT, Uint32T, Int32T, Int32T> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Uint32T, Uint32T, BoolT, Uint32T, Int32T, Int32T> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Uint32T, Uint32T, BoolT, Uint32T, Int32T, Int32T> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Uint32T, Uint32T, BoolT, Uint32T, Int32T, Int32T> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Uint32T, Uint32T, BoolT, Uint32T, Int32T, Int32T> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Uint32T, Uint32T, BoolT, Uint32T, Int32T, Int32T> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Uint32T, Uint32T, BoolT, Uint32T, Int32T, Int32T> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Uint32T, Uint32T, BoolT, Uint32T, Int32T, Int32T> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Uint32T, Uint32T, BoolT, Uint32T, Int32T, Int32T> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Uint32T, Uint32T, BoolT, Uint32T, Int32T, Int32T, BigInt> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Uint32T, Uint32T, BoolT, Uint32T, Int32T, Int32T, BigInt> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Uint32T, Uint32T, BoolT, Uint32T, Int32T, Int32T, BigInt> block21(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Uint32T, Uint32T, BoolT, Uint32T, Int32T, Int32T, BigInt> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Uint32T, Uint32T, BoolT, Uint32T, Int32T, Int32T, BigInt> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Uint32T, Uint32T, BigInt> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Uint32T, Uint32T, BigInt> block24(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_lowWord, p_highWord);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Uint32T> tmp1;
    TNode<Uint32T> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 252);
    TNode<Uint32T> tmp3;
    USE(tmp3);
    tmp3 = FromConstexpr8ATuint3217ATconstexpr_int31_163(state_, 0);
    TNode<BoolT> tmp4;
    USE(tmp4);
    tmp4 = CodeStubAssembler(state_).Word32Equal(TNode<Uint32T>{tmp1}, TNode<Uint32T>{tmp3});
    ca_.Branch(tmp4, &block4, &block5, tmp0, tmp1, tmp2, tmp4);
  }

  if (block4.is_used()) {
    TNode<Context> tmp5;
    TNode<Uint32T> tmp6;
    TNode<Uint32T> tmp7;
    TNode<BoolT> tmp8;
    ca_.Bind(&block4, &tmp5, &tmp6, &tmp7, &tmp8);
    TNode<Uint32T> tmp9;
    USE(tmp9);
    tmp9 = FromConstexpr8ATuint3217ATconstexpr_int31_163(state_, 0);
    TNode<BoolT> tmp10;
    USE(tmp10);
    tmp10 = CodeStubAssembler(state_).Word32Equal(TNode<Uint32T>{tmp7}, TNode<Uint32T>{tmp9});
    ca_.Goto(&block6, tmp5, tmp6, tmp7, tmp8, tmp10);
  }

  if (block5.is_used()) {
    TNode<Context> tmp11;
    TNode<Uint32T> tmp12;
    TNode<Uint32T> tmp13;
    TNode<BoolT> tmp14;
    ca_.Bind(&block5, &tmp11, &tmp12, &tmp13, &tmp14);
    TNode<BoolT> tmp15;
    USE(tmp15);
    tmp15 = FromConstexpr6ATbool16ATconstexpr_bool_167(state_, false);
    ca_.Goto(&block6, tmp11, tmp12, tmp13, tmp14, tmp15);
  }

  if (block6.is_used()) {
    TNode<Context> tmp16;
    TNode<Uint32T> tmp17;
    TNode<Uint32T> tmp18;
    TNode<BoolT> tmp19;
    TNode<BoolT> tmp20;
    ca_.Bind(&block6, &tmp16, &tmp17, &tmp18, &tmp19, &tmp20);
    ca_.Branch(tmp20, &block2, &block3, tmp16, tmp17, tmp18);
  }

  if (block2.is_used()) {
    TNode<Context> tmp21;
    TNode<Uint32T> tmp22;
    TNode<Uint32T> tmp23;
    ca_.Bind(&block2, &tmp21, &tmp22, &tmp23);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 253);
    TNode<IntPtrT> tmp24;
    USE(tmp24);
    tmp24 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, kZeroDigitBigInt_279(state_));
    TNode<BigInt> tmp25;
    USE(tmp25);
    tmp25 = CodeStubAssembler(state_).AllocateBigInt(TNode<IntPtrT>{tmp24});
    TNode<BigInt> tmp26;
    USE(tmp26);
    tmp26 = Convert8ATBigInt13MutableBigInt_258(state_, TNode<BigInt>{tmp25});
    ca_.Goto(&block1, tmp21, tmp22, tmp23, tmp26);
  }

  if (block3.is_used()) {
    TNode<Context> tmp27;
    TNode<Uint32T> tmp28;
    TNode<Uint32T> tmp29;
    ca_.Bind(&block3, &tmp27, &tmp28, &tmp29);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 257);
    TNode<BoolT> tmp30;
    USE(tmp30);
    tmp30 = FromConstexpr6ATbool16ATconstexpr_bool_167(state_, false);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 258);
    TNode<Uint32T> tmp31;
    USE(tmp31);
    tmp31 = kPositiveSign_259(state_);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 262);
    TNode<Int32T> tmp32;
    USE(tmp32);
    tmp32 = CodeStubAssembler(state_).Signed(TNode<Uint32T>{tmp28});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 263);
    TNode<Int32T> tmp33;
    USE(tmp33);
    tmp33 = CodeStubAssembler(state_).Signed(TNode<Uint32T>{tmp29});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 268);
    TNode<Uint32T> tmp34;
    USE(tmp34);
    tmp34 = FromConstexpr8ATuint3217ATconstexpr_int31_163(state_, 0);
    TNode<BoolT> tmp35;
    USE(tmp35);
    tmp35 = CodeStubAssembler(state_).Word32NotEqual(TNode<Uint32T>{tmp29}, TNode<Uint32T>{tmp34});
    ca_.Branch(tmp35, &block7, &block8, tmp27, tmp28, tmp29, tmp30, tmp31, tmp32, tmp33);
  }

  if (block7.is_used()) {
    TNode<Context> tmp36;
    TNode<Uint32T> tmp37;
    TNode<Uint32T> tmp38;
    TNode<BoolT> tmp39;
    TNode<Uint32T> tmp40;
    TNode<Int32T> tmp41;
    TNode<Int32T> tmp42;
    ca_.Bind(&block7, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40, &tmp41, &tmp42);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 269);
    if ((p_signed)) {
      ca_.Goto(&block9, tmp36, tmp37, tmp38, tmp39, tmp40, tmp41, tmp42);
    } else {
      ca_.Goto(&block10, tmp36, tmp37, tmp38, tmp39, tmp40, tmp41, tmp42);
    }
  }

  if (block9.is_used()) {
    TNode<Context> tmp43;
    TNode<Uint32T> tmp44;
    TNode<Uint32T> tmp45;
    TNode<BoolT> tmp46;
    TNode<Uint32T> tmp47;
    TNode<Int32T> tmp48;
    TNode<Int32T> tmp49;
    ca_.Bind(&block9, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47, &tmp48, &tmp49);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 271);
    TNode<Int32T> tmp50;
    USE(tmp50);
    tmp50 = FromConstexpr7ATint3217ATconstexpr_int31_148(state_, 0);
    TNode<BoolT> tmp51;
    USE(tmp51);
    tmp51 = CodeStubAssembler(state_).Int32LessThan(TNode<Int32T>{tmp49}, TNode<Int32T>{tmp50});
    ca_.Branch(tmp51, &block12, &block13, tmp43, tmp44, tmp45, tmp46, tmp47, tmp48, tmp49);
  }

  if (block12.is_used()) {
    TNode<Context> tmp52;
    TNode<Uint32T> tmp53;
    TNode<Uint32T> tmp54;
    TNode<BoolT> tmp55;
    TNode<Uint32T> tmp56;
    TNode<Int32T> tmp57;
    TNode<Int32T> tmp58;
    ca_.Bind(&block12, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56, &tmp57, &tmp58);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 272);
    TNode<Uint32T> tmp59;
    USE(tmp59);
    tmp59 = kNegativeSign_260(state_);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 277);
    TNode<Int32T> tmp60;
    USE(tmp60);
    tmp60 = FromConstexpr7ATint3217ATconstexpr_int31_148(state_, 0);
    TNode<Int32T> tmp61;
    USE(tmp61);
    tmp61 = CodeStubAssembler(state_).Int32Sub(TNode<Int32T>{tmp60}, TNode<Int32T>{tmp58});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 278);
    TNode<Int32T> tmp62;
    USE(tmp62);
    tmp62 = FromConstexpr7ATint3217ATconstexpr_int31_148(state_, 0);
    TNode<BoolT> tmp63;
    USE(tmp63);
    tmp63 = CodeStubAssembler(state_).Word32NotEqual(TNode<Int32T>{tmp57}, TNode<Int32T>{tmp62});
    ca_.Branch(tmp63, &block15, &block16, tmp52, tmp53, tmp54, tmp55, tmp59, tmp57, tmp61);
  }

  if (block15.is_used()) {
    TNode<Context> tmp64;
    TNode<Uint32T> tmp65;
    TNode<Uint32T> tmp66;
    TNode<BoolT> tmp67;
    TNode<Uint32T> tmp68;
    TNode<Int32T> tmp69;
    TNode<Int32T> tmp70;
    ca_.Bind(&block15, &tmp64, &tmp65, &tmp66, &tmp67, &tmp68, &tmp69, &tmp70);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 279);
    TNode<Int32T> tmp71;
    USE(tmp71);
    tmp71 = FromConstexpr7ATint3217ATconstexpr_int31_148(state_, 1);
    TNode<Int32T> tmp72;
    USE(tmp72);
    tmp72 = CodeStubAssembler(state_).Int32Sub(TNode<Int32T>{tmp70}, TNode<Int32T>{tmp71});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 278);
    ca_.Goto(&block16, tmp64, tmp65, tmp66, tmp67, tmp68, tmp69, tmp72);
  }

  if (block16.is_used()) {
    TNode<Context> tmp73;
    TNode<Uint32T> tmp74;
    TNode<Uint32T> tmp75;
    TNode<BoolT> tmp76;
    TNode<Uint32T> tmp77;
    TNode<Int32T> tmp78;
    TNode<Int32T> tmp79;
    ca_.Bind(&block16, &tmp73, &tmp74, &tmp75, &tmp76, &tmp77, &tmp78, &tmp79);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 281);
    TNode<Int32T> tmp80;
    USE(tmp80);
    tmp80 = FromConstexpr7ATint3217ATconstexpr_int31_148(state_, 0);
    TNode<Int32T> tmp81;
    USE(tmp81);
    tmp81 = CodeStubAssembler(state_).Int32Sub(TNode<Int32T>{tmp80}, TNode<Int32T>{tmp78});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 284);
    TNode<Int32T> tmp82;
    USE(tmp82);
    tmp82 = FromConstexpr7ATint3217ATconstexpr_int31_148(state_, 0);
    TNode<BoolT> tmp83;
    USE(tmp83);
    tmp83 = CodeStubAssembler(state_).Word32NotEqual(TNode<Int32T>{tmp79}, TNode<Int32T>{tmp82});
    ca_.Branch(tmp83, &block17, &block18, tmp73, tmp74, tmp75, tmp76, tmp77, tmp81, tmp79);
  }

  if (block17.is_used()) {
    TNode<Context> tmp84;
    TNode<Uint32T> tmp85;
    TNode<Uint32T> tmp86;
    TNode<BoolT> tmp87;
    TNode<Uint32T> tmp88;
    TNode<Int32T> tmp89;
    TNode<Int32T> tmp90;
    ca_.Bind(&block17, &tmp84, &tmp85, &tmp86, &tmp87, &tmp88, &tmp89, &tmp90);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 285);
    TNode<BoolT> tmp91;
    USE(tmp91);
    tmp91 = FromConstexpr6ATbool16ATconstexpr_bool_167(state_, true);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 284);
    ca_.Goto(&block18, tmp84, tmp85, tmp86, tmp91, tmp88, tmp89, tmp90);
  }

  if (block18.is_used()) {
    TNode<Context> tmp92;
    TNode<Uint32T> tmp93;
    TNode<Uint32T> tmp94;
    TNode<BoolT> tmp95;
    TNode<Uint32T> tmp96;
    TNode<Int32T> tmp97;
    TNode<Int32T> tmp98;
    ca_.Bind(&block18, &tmp92, &tmp93, &tmp94, &tmp95, &tmp96, &tmp97, &tmp98);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 271);
    ca_.Goto(&block14, tmp92, tmp93, tmp94, tmp95, tmp96, tmp97, tmp98);
  }

  if (block13.is_used()) {
    TNode<Context> tmp99;
    TNode<Uint32T> tmp100;
    TNode<Uint32T> tmp101;
    TNode<BoolT> tmp102;
    TNode<Uint32T> tmp103;
    TNode<Int32T> tmp104;
    TNode<Int32T> tmp105;
    ca_.Bind(&block13, &tmp99, &tmp100, &tmp101, &tmp102, &tmp103, &tmp104, &tmp105);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 290);
    TNode<BoolT> tmp106;
    USE(tmp106);
    tmp106 = FromConstexpr6ATbool16ATconstexpr_bool_167(state_, true);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 271);
    ca_.Goto(&block14, tmp99, tmp100, tmp101, tmp106, tmp103, tmp104, tmp105);
  }

  if (block14.is_used()) {
    TNode<Context> tmp107;
    TNode<Uint32T> tmp108;
    TNode<Uint32T> tmp109;
    TNode<BoolT> tmp110;
    TNode<Uint32T> tmp111;
    TNode<Int32T> tmp112;
    TNode<Int32T> tmp113;
    ca_.Bind(&block14, &tmp107, &tmp108, &tmp109, &tmp110, &tmp111, &tmp112, &tmp113);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 269);
    ca_.Goto(&block11, tmp107, tmp108, tmp109, tmp110, tmp111, tmp112, tmp113);
  }

  if (block10.is_used()) {
    TNode<Context> tmp114;
    TNode<Uint32T> tmp115;
    TNode<Uint32T> tmp116;
    TNode<BoolT> tmp117;
    TNode<Uint32T> tmp118;
    TNode<Int32T> tmp119;
    TNode<Int32T> tmp120;
    ca_.Bind(&block10, &tmp114, &tmp115, &tmp116, &tmp117, &tmp118, &tmp119, &tmp120);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 296);
    TNode<BoolT> tmp121;
    USE(tmp121);
    tmp121 = FromConstexpr6ATbool16ATconstexpr_bool_167(state_, true);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 269);
    ca_.Goto(&block11, tmp114, tmp115, tmp116, tmp121, tmp118, tmp119, tmp120);
  }

  if (block11.is_used()) {
    TNode<Context> tmp122;
    TNode<Uint32T> tmp123;
    TNode<Uint32T> tmp124;
    TNode<BoolT> tmp125;
    TNode<Uint32T> tmp126;
    TNode<Int32T> tmp127;
    TNode<Int32T> tmp128;
    ca_.Bind(&block11, &tmp122, &tmp123, &tmp124, &tmp125, &tmp126, &tmp127, &tmp128);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 268);
    ca_.Goto(&block8, tmp122, tmp123, tmp124, tmp125, tmp126, tmp127, tmp128);
  }

  if (block8.is_used()) {
    TNode<Context> tmp129;
    TNode<Uint32T> tmp130;
    TNode<Uint32T> tmp131;
    TNode<BoolT> tmp132;
    TNode<Uint32T> tmp133;
    TNode<Int32T> tmp134;
    TNode<Int32T> tmp135;
    ca_.Bind(&block8, &tmp129, &tmp130, &tmp131, &tmp132, &tmp133, &tmp134, &tmp135);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 301);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 302);
    ca_.Branch(tmp132, &block19, &block20, tmp129, tmp130, tmp131, tmp132, tmp133, tmp134, tmp135, ca_.Uninitialized<BigInt>());
  }

  if (block19.is_used()) {
    TNode<Context> tmp136;
    TNode<Uint32T> tmp137;
    TNode<Uint32T> tmp138;
    TNode<BoolT> tmp139;
    TNode<Uint32T> tmp140;
    TNode<Int32T> tmp141;
    TNode<Int32T> tmp142;
    TNode<BigInt> tmp143;
    ca_.Bind(&block19, &tmp136, &tmp137, &tmp138, &tmp139, &tmp140, &tmp141, &tmp142, &tmp143);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 303);
    TNode<IntPtrT> tmp144;
    USE(tmp144);
    tmp144 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, kTwoDigitBigInt_281(state_));
    TNode<BigInt> tmp145;
    USE(tmp145);
    tmp145 = AllocateEmptyBigInt_264(state_, TNode<Context>{tmp136}, TNode<Uint32T>{tmp140}, TNode<IntPtrT>{tmp144});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 302);
    ca_.Goto(&block21, tmp136, tmp137, tmp138, tmp139, tmp140, tmp141, tmp142, tmp145);
  }

  if (block20.is_used()) {
    TNode<Context> tmp146;
    TNode<Uint32T> tmp147;
    TNode<Uint32T> tmp148;
    TNode<BoolT> tmp149;
    TNode<Uint32T> tmp150;
    TNode<Int32T> tmp151;
    TNode<Int32T> tmp152;
    TNode<BigInt> tmp153;
    ca_.Bind(&block20, &tmp146, &tmp147, &tmp148, &tmp149, &tmp150, &tmp151, &tmp152, &tmp153);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 305);
    TNode<IntPtrT> tmp154;
    USE(tmp154);
    tmp154 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, kOneDigitBigInt_280(state_));
    TNode<BigInt> tmp155;
    USE(tmp155);
    tmp155 = AllocateEmptyBigInt_264(state_, TNode<Context>{tmp146}, TNode<Uint32T>{tmp150}, TNode<IntPtrT>{tmp154});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 302);
    ca_.Goto(&block21, tmp146, tmp147, tmp148, tmp149, tmp150, tmp151, tmp152, tmp155);
  }

  if (block21.is_used()) {
    TNode<Context> tmp156;
    TNode<Uint32T> tmp157;
    TNode<Uint32T> tmp158;
    TNode<BoolT> tmp159;
    TNode<Uint32T> tmp160;
    TNode<Int32T> tmp161;
    TNode<Int32T> tmp162;
    TNode<BigInt> tmp163;
    ca_.Bind(&block21, &tmp156, &tmp157, &tmp158, &tmp159, &tmp160, &tmp161, &tmp162, &tmp163);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 309);
    TNode<IntPtrT> tmp164;
    USE(tmp164);
    tmp164 = Convert8ATintptr7ATint32_176(state_, TNode<Int32T>{tmp161});
    TNode<UintPtrT> tmp165;
    USE(tmp165);
    tmp165 = CodeStubAssembler(state_).Unsigned(TNode<IntPtrT>{tmp164});
    TNode<IntPtrT> tmp166;
    USE(tmp166);
    tmp166 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 0);
    CodeStubAssembler(state_).StoreBigIntDigit(TNode<BigInt>{tmp163}, TNode<IntPtrT>{tmp166}, TNode<UintPtrT>{tmp165});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 310);
    ca_.Branch(tmp159, &block22, &block23, tmp156, tmp157, tmp158, tmp159, tmp160, tmp161, tmp162, tmp163);
  }

  if (block22.is_used()) {
    TNode<Context> tmp167;
    TNode<Uint32T> tmp168;
    TNode<Uint32T> tmp169;
    TNode<BoolT> tmp170;
    TNode<Uint32T> tmp171;
    TNode<Int32T> tmp172;
    TNode<Int32T> tmp173;
    TNode<BigInt> tmp174;
    ca_.Bind(&block22, &tmp167, &tmp168, &tmp169, &tmp170, &tmp171, &tmp172, &tmp173, &tmp174);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 311);
    TNode<IntPtrT> tmp175;
    USE(tmp175);
    tmp175 = Convert8ATintptr7ATint32_176(state_, TNode<Int32T>{tmp173});
    TNode<UintPtrT> tmp176;
    USE(tmp176);
    tmp176 = CodeStubAssembler(state_).Unsigned(TNode<IntPtrT>{tmp175});
    TNode<IntPtrT> tmp177;
    USE(tmp177);
    tmp177 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 1);
    CodeStubAssembler(state_).StoreBigIntDigit(TNode<BigInt>{tmp174}, TNode<IntPtrT>{tmp177}, TNode<UintPtrT>{tmp176});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 310);
    ca_.Goto(&block23, tmp167, tmp168, tmp169, tmp170, tmp171, tmp172, tmp173, tmp174);
  }

  if (block23.is_used()) {
    TNode<Context> tmp178;
    TNode<Uint32T> tmp179;
    TNode<Uint32T> tmp180;
    TNode<BoolT> tmp181;
    TNode<Uint32T> tmp182;
    TNode<Int32T> tmp183;
    TNode<Int32T> tmp184;
    TNode<BigInt> tmp185;
    ca_.Bind(&block23, &tmp178, &tmp179, &tmp180, &tmp181, &tmp182, &tmp183, &tmp184, &tmp185);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 313);
    TNode<BigInt> tmp186;
    USE(tmp186);
    tmp186 = Convert8ATBigInt13MutableBigInt_258(state_, TNode<BigInt>{tmp185});
    ca_.Goto(&block1, tmp178, tmp179, tmp180, tmp186);
  }

  if (block1.is_used()) {
    TNode<Context> tmp187;
    TNode<Uint32T> tmp188;
    TNode<Uint32T> tmp189;
    TNode<BigInt> tmp190;
    ca_.Bind(&block1, &tmp187, &tmp188, &tmp189, &tmp190);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 249);
    ca_.Goto(&block24, tmp187, tmp188, tmp189, tmp190);
  }

    TNode<Context> tmp191;
    TNode<Uint32T> tmp192;
    TNode<Uint32T> tmp193;
    TNode<BigInt> tmp194;
    ca_.Bind(&block24, &tmp191, &tmp192, &tmp193, &tmp194);
  return TNode<BigInt>{tmp194};
}

TNode<BigInt> MakeBigInt_284(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Uint32T> p_lowWord, TNode<Uint32T> p_highWord, bool p_signed) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, Uint32T, Uint32T> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Uint32T, Uint32T> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Uint32T, Uint32T> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Uint32T, Uint32T, BigInt> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Uint32T, Uint32T, BigInt> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_lowWord, p_highWord);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Uint32T> tmp1;
    TNode<Uint32T> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 320);
    if (((CodeStubAssembler(state_).Is64()))) {
      ca_.Goto(&block2, tmp0, tmp1, tmp2);
    } else {
      ca_.Goto(&block3, tmp0, tmp1, tmp2);
    }
  }

  if (block2.is_used()) {
    TNode<Context> tmp3;
    TNode<Uint32T> tmp4;
    TNode<Uint32T> tmp5;
    ca_.Bind(&block2, &tmp3, &tmp4, &tmp5);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 321);
    TNode<BigInt> tmp6;
    USE(tmp6);
    tmp6 = MakeBigIntOn64Bit_282(state_, TNode<Context>{tmp3}, TNode<Uint32T>{tmp4}, TNode<Uint32T>{tmp5}, p_signed);
    ca_.Goto(&block1, tmp3, tmp4, tmp5, tmp6);
  }

  if (block3.is_used()) {
    TNode<Context> tmp7;
    TNode<Uint32T> tmp8;
    TNode<Uint32T> tmp9;
    ca_.Bind(&block3, &tmp7, &tmp8, &tmp9);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 323);
    TNode<BigInt> tmp10;
    USE(tmp10);
    tmp10 = MakeBigIntOn32Bit_283(state_, TNode<Context>{tmp7}, TNode<Uint32T>{tmp8}, TNode<Uint32T>{tmp9}, p_signed);
    ca_.Goto(&block1, tmp7, tmp8, tmp9, tmp10);
  }

  if (block1.is_used()) {
    TNode<Context> tmp11;
    TNode<Uint32T> tmp12;
    TNode<Uint32T> tmp13;
    TNode<BigInt> tmp14;
    ca_.Bind(&block1, &tmp11, &tmp12, &tmp13, &tmp14);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 316);
    ca_.Goto(&block5, tmp11, tmp12, tmp13, tmp14);
  }

    TNode<Context> tmp15;
    TNode<Uint32T> tmp16;
    TNode<Uint32T> tmp17;
    TNode<BigInt> tmp18;
    ca_.Bind(&block5, &tmp15, &tmp16, &tmp17, &tmp18);
  return TNode<BigInt>{tmp18};
}

TNode<BigInt> LoadDataViewBigInt_285(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSArrayBuffer> p_buffer, TNode<UintPtrT> p_offset, TNode<BoolT> p_requestedLittleEndian, bool p_signed) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArrayBuffer, UintPtrT, BoolT> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArrayBuffer, UintPtrT, BoolT, RawPtrT, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArrayBuffer, UintPtrT, BoolT, RawPtrT, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArrayBuffer, UintPtrT, BoolT, RawPtrT, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArrayBuffer, UintPtrT, BoolT, BigInt> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArrayBuffer, UintPtrT, BoolT, BigInt> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_buffer, p_offset, p_requestedLittleEndian);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<JSArrayBuffer> tmp1;
    TNode<UintPtrT> tmp2;
    TNode<BoolT> tmp3;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 330);
    TNode<IntPtrT> tmp4 = ca_.IntPtrConstant(JSArrayBuffer::kBackingStoreOffset);
    USE(tmp4);
    TNode<RawPtrT>tmp5 = CodeStubAssembler(state_).LoadReference<RawPtrT>(CodeStubAssembler::Reference{tmp1, tmp4});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 332);
    TNode<Uint32T> tmp6;
    USE(tmp6);
    tmp6 = DataViewBuiltinsAssembler(state_).LoadUint8(TNode<RawPtrT>{tmp5}, TNode<UintPtrT>{tmp2});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 333);
    TNode<UintPtrT> tmp7;
    USE(tmp7);
    tmp7 = FromConstexpr9ATuintptr17ATconstexpr_int31_164(state_, 1);
    TNode<UintPtrT> tmp8;
    USE(tmp8);
    tmp8 = CodeStubAssembler(state_).UintPtrAdd(TNode<UintPtrT>{tmp2}, TNode<UintPtrT>{tmp7});
    TNode<Uint32T> tmp9;
    USE(tmp9);
    tmp9 = DataViewBuiltinsAssembler(state_).LoadUint8(TNode<RawPtrT>{tmp5}, TNode<UintPtrT>{tmp8});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 334);
    TNode<UintPtrT> tmp10;
    USE(tmp10);
    tmp10 = FromConstexpr9ATuintptr17ATconstexpr_int31_164(state_, 2);
    TNode<UintPtrT> tmp11;
    USE(tmp11);
    tmp11 = CodeStubAssembler(state_).UintPtrAdd(TNode<UintPtrT>{tmp2}, TNode<UintPtrT>{tmp10});
    TNode<Uint32T> tmp12;
    USE(tmp12);
    tmp12 = DataViewBuiltinsAssembler(state_).LoadUint8(TNode<RawPtrT>{tmp5}, TNode<UintPtrT>{tmp11});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 335);
    TNode<UintPtrT> tmp13;
    USE(tmp13);
    tmp13 = FromConstexpr9ATuintptr17ATconstexpr_int31_164(state_, 3);
    TNode<UintPtrT> tmp14;
    USE(tmp14);
    tmp14 = CodeStubAssembler(state_).UintPtrAdd(TNode<UintPtrT>{tmp2}, TNode<UintPtrT>{tmp13});
    TNode<Uint32T> tmp15;
    USE(tmp15);
    tmp15 = DataViewBuiltinsAssembler(state_).LoadUint8(TNode<RawPtrT>{tmp5}, TNode<UintPtrT>{tmp14});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 336);
    TNode<UintPtrT> tmp16;
    USE(tmp16);
    tmp16 = FromConstexpr9ATuintptr17ATconstexpr_int31_164(state_, 4);
    TNode<UintPtrT> tmp17;
    USE(tmp17);
    tmp17 = CodeStubAssembler(state_).UintPtrAdd(TNode<UintPtrT>{tmp2}, TNode<UintPtrT>{tmp16});
    TNode<Uint32T> tmp18;
    USE(tmp18);
    tmp18 = DataViewBuiltinsAssembler(state_).LoadUint8(TNode<RawPtrT>{tmp5}, TNode<UintPtrT>{tmp17});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 337);
    TNode<UintPtrT> tmp19;
    USE(tmp19);
    tmp19 = FromConstexpr9ATuintptr17ATconstexpr_int31_164(state_, 5);
    TNode<UintPtrT> tmp20;
    USE(tmp20);
    tmp20 = CodeStubAssembler(state_).UintPtrAdd(TNode<UintPtrT>{tmp2}, TNode<UintPtrT>{tmp19});
    TNode<Uint32T> tmp21;
    USE(tmp21);
    tmp21 = DataViewBuiltinsAssembler(state_).LoadUint8(TNode<RawPtrT>{tmp5}, TNode<UintPtrT>{tmp20});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 338);
    TNode<UintPtrT> tmp22;
    USE(tmp22);
    tmp22 = FromConstexpr9ATuintptr17ATconstexpr_int31_164(state_, 6);
    TNode<UintPtrT> tmp23;
    USE(tmp23);
    tmp23 = CodeStubAssembler(state_).UintPtrAdd(TNode<UintPtrT>{tmp2}, TNode<UintPtrT>{tmp22});
    TNode<Uint32T> tmp24;
    USE(tmp24);
    tmp24 = DataViewBuiltinsAssembler(state_).LoadUint8(TNode<RawPtrT>{tmp5}, TNode<UintPtrT>{tmp23});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 339);
    TNode<UintPtrT> tmp25;
    USE(tmp25);
    tmp25 = FromConstexpr9ATuintptr17ATconstexpr_int31_164(state_, 7);
    TNode<UintPtrT> tmp26;
    USE(tmp26);
    tmp26 = CodeStubAssembler(state_).UintPtrAdd(TNode<UintPtrT>{tmp2}, TNode<UintPtrT>{tmp25});
    TNode<Uint32T> tmp27;
    USE(tmp27);
    tmp27 = DataViewBuiltinsAssembler(state_).LoadUint8(TNode<RawPtrT>{tmp5}, TNode<UintPtrT>{tmp26});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 340);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 341);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 343);
    ca_.Branch(tmp3, &block2, &block3, tmp0, tmp1, tmp2, tmp3, tmp5, tmp6, tmp9, tmp12, tmp15, tmp18, tmp21, tmp24, tmp27, ca_.Uninitialized<Uint32T>(), ca_.Uninitialized<Uint32T>());
  }

  if (block2.is_used()) {
    TNode<Context> tmp28;
    TNode<JSArrayBuffer> tmp29;
    TNode<UintPtrT> tmp30;
    TNode<BoolT> tmp31;
    TNode<RawPtrT> tmp32;
    TNode<Uint32T> tmp33;
    TNode<Uint32T> tmp34;
    TNode<Uint32T> tmp35;
    TNode<Uint32T> tmp36;
    TNode<Uint32T> tmp37;
    TNode<Uint32T> tmp38;
    TNode<Uint32T> tmp39;
    TNode<Uint32T> tmp40;
    TNode<Uint32T> tmp41;
    TNode<Uint32T> tmp42;
    ca_.Bind(&block2, &tmp28, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40, &tmp41, &tmp42);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 344);
    TNode<Uint32T> tmp43;
    USE(tmp43);
    tmp43 = FromConstexpr8ATuint3217ATconstexpr_int31_163(state_, 24);
    TNode<Uint32T> tmp44;
    USE(tmp44);
    tmp44 = CodeStubAssembler(state_).Word32Shl(TNode<Uint32T>{tmp36}, TNode<Uint32T>{tmp43});
    TNode<Uint32T> tmp45;
    USE(tmp45);
    tmp45 = FromConstexpr8ATuint3217ATconstexpr_int31_163(state_, 16);
    TNode<Uint32T> tmp46;
    USE(tmp46);
    tmp46 = CodeStubAssembler(state_).Word32Shl(TNode<Uint32T>{tmp35}, TNode<Uint32T>{tmp45});
    TNode<Uint32T> tmp47;
    USE(tmp47);
    tmp47 = CodeStubAssembler(state_).Word32Or(TNode<Uint32T>{tmp44}, TNode<Uint32T>{tmp46});
    TNode<Uint32T> tmp48;
    USE(tmp48);
    tmp48 = FromConstexpr8ATuint3217ATconstexpr_int31_163(state_, 8);
    TNode<Uint32T> tmp49;
    USE(tmp49);
    tmp49 = CodeStubAssembler(state_).Word32Shl(TNode<Uint32T>{tmp34}, TNode<Uint32T>{tmp48});
    TNode<Uint32T> tmp50;
    USE(tmp50);
    tmp50 = CodeStubAssembler(state_).Word32Or(TNode<Uint32T>{tmp47}, TNode<Uint32T>{tmp49});
    TNode<Uint32T> tmp51;
    USE(tmp51);
    tmp51 = CodeStubAssembler(state_).Word32Or(TNode<Uint32T>{tmp50}, TNode<Uint32T>{tmp33});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 345);
    TNode<Uint32T> tmp52;
    USE(tmp52);
    tmp52 = FromConstexpr8ATuint3217ATconstexpr_int31_163(state_, 24);
    TNode<Uint32T> tmp53;
    USE(tmp53);
    tmp53 = CodeStubAssembler(state_).Word32Shl(TNode<Uint32T>{tmp40}, TNode<Uint32T>{tmp52});
    TNode<Uint32T> tmp54;
    USE(tmp54);
    tmp54 = FromConstexpr8ATuint3217ATconstexpr_int31_163(state_, 16);
    TNode<Uint32T> tmp55;
    USE(tmp55);
    tmp55 = CodeStubAssembler(state_).Word32Shl(TNode<Uint32T>{tmp39}, TNode<Uint32T>{tmp54});
    TNode<Uint32T> tmp56;
    USE(tmp56);
    tmp56 = CodeStubAssembler(state_).Word32Or(TNode<Uint32T>{tmp53}, TNode<Uint32T>{tmp55});
    TNode<Uint32T> tmp57;
    USE(tmp57);
    tmp57 = FromConstexpr8ATuint3217ATconstexpr_int31_163(state_, 8);
    TNode<Uint32T> tmp58;
    USE(tmp58);
    tmp58 = CodeStubAssembler(state_).Word32Shl(TNode<Uint32T>{tmp38}, TNode<Uint32T>{tmp57});
    TNode<Uint32T> tmp59;
    USE(tmp59);
    tmp59 = CodeStubAssembler(state_).Word32Or(TNode<Uint32T>{tmp56}, TNode<Uint32T>{tmp58});
    TNode<Uint32T> tmp60;
    USE(tmp60);
    tmp60 = CodeStubAssembler(state_).Word32Or(TNode<Uint32T>{tmp59}, TNode<Uint32T>{tmp37});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 343);
    ca_.Goto(&block4, tmp28, tmp29, tmp30, tmp31, tmp32, tmp33, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39, tmp40, tmp51, tmp60);
  }

  if (block3.is_used()) {
    TNode<Context> tmp61;
    TNode<JSArrayBuffer> tmp62;
    TNode<UintPtrT> tmp63;
    TNode<BoolT> tmp64;
    TNode<RawPtrT> tmp65;
    TNode<Uint32T> tmp66;
    TNode<Uint32T> tmp67;
    TNode<Uint32T> tmp68;
    TNode<Uint32T> tmp69;
    TNode<Uint32T> tmp70;
    TNode<Uint32T> tmp71;
    TNode<Uint32T> tmp72;
    TNode<Uint32T> tmp73;
    TNode<Uint32T> tmp74;
    TNode<Uint32T> tmp75;
    ca_.Bind(&block3, &tmp61, &tmp62, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67, &tmp68, &tmp69, &tmp70, &tmp71, &tmp72, &tmp73, &tmp74, &tmp75);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 347);
    TNode<Uint32T> tmp76;
    USE(tmp76);
    tmp76 = FromConstexpr8ATuint3217ATconstexpr_int31_163(state_, 24);
    TNode<Uint32T> tmp77;
    USE(tmp77);
    tmp77 = CodeStubAssembler(state_).Word32Shl(TNode<Uint32T>{tmp66}, TNode<Uint32T>{tmp76});
    TNode<Uint32T> tmp78;
    USE(tmp78);
    tmp78 = FromConstexpr8ATuint3217ATconstexpr_int31_163(state_, 16);
    TNode<Uint32T> tmp79;
    USE(tmp79);
    tmp79 = CodeStubAssembler(state_).Word32Shl(TNode<Uint32T>{tmp67}, TNode<Uint32T>{tmp78});
    TNode<Uint32T> tmp80;
    USE(tmp80);
    tmp80 = CodeStubAssembler(state_).Word32Or(TNode<Uint32T>{tmp77}, TNode<Uint32T>{tmp79});
    TNode<Uint32T> tmp81;
    USE(tmp81);
    tmp81 = FromConstexpr8ATuint3217ATconstexpr_int31_163(state_, 8);
    TNode<Uint32T> tmp82;
    USE(tmp82);
    tmp82 = CodeStubAssembler(state_).Word32Shl(TNode<Uint32T>{tmp68}, TNode<Uint32T>{tmp81});
    TNode<Uint32T> tmp83;
    USE(tmp83);
    tmp83 = CodeStubAssembler(state_).Word32Or(TNode<Uint32T>{tmp80}, TNode<Uint32T>{tmp82});
    TNode<Uint32T> tmp84;
    USE(tmp84);
    tmp84 = CodeStubAssembler(state_).Word32Or(TNode<Uint32T>{tmp83}, TNode<Uint32T>{tmp69});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 348);
    TNode<Uint32T> tmp85;
    USE(tmp85);
    tmp85 = FromConstexpr8ATuint3217ATconstexpr_int31_163(state_, 24);
    TNode<Uint32T> tmp86;
    USE(tmp86);
    tmp86 = CodeStubAssembler(state_).Word32Shl(TNode<Uint32T>{tmp70}, TNode<Uint32T>{tmp85});
    TNode<Uint32T> tmp87;
    USE(tmp87);
    tmp87 = FromConstexpr8ATuint3217ATconstexpr_int31_163(state_, 16);
    TNode<Uint32T> tmp88;
    USE(tmp88);
    tmp88 = CodeStubAssembler(state_).Word32Shl(TNode<Uint32T>{tmp71}, TNode<Uint32T>{tmp87});
    TNode<Uint32T> tmp89;
    USE(tmp89);
    tmp89 = CodeStubAssembler(state_).Word32Or(TNode<Uint32T>{tmp86}, TNode<Uint32T>{tmp88});
    TNode<Uint32T> tmp90;
    USE(tmp90);
    tmp90 = FromConstexpr8ATuint3217ATconstexpr_int31_163(state_, 8);
    TNode<Uint32T> tmp91;
    USE(tmp91);
    tmp91 = CodeStubAssembler(state_).Word32Shl(TNode<Uint32T>{tmp72}, TNode<Uint32T>{tmp90});
    TNode<Uint32T> tmp92;
    USE(tmp92);
    tmp92 = CodeStubAssembler(state_).Word32Or(TNode<Uint32T>{tmp89}, TNode<Uint32T>{tmp91});
    TNode<Uint32T> tmp93;
    USE(tmp93);
    tmp93 = CodeStubAssembler(state_).Word32Or(TNode<Uint32T>{tmp92}, TNode<Uint32T>{tmp73});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 343);
    ca_.Goto(&block4, tmp61, tmp62, tmp63, tmp64, tmp65, tmp66, tmp67, tmp68, tmp69, tmp70, tmp71, tmp72, tmp73, tmp93, tmp84);
  }

  if (block4.is_used()) {
    TNode<Context> tmp94;
    TNode<JSArrayBuffer> tmp95;
    TNode<UintPtrT> tmp96;
    TNode<BoolT> tmp97;
    TNode<RawPtrT> tmp98;
    TNode<Uint32T> tmp99;
    TNode<Uint32T> tmp100;
    TNode<Uint32T> tmp101;
    TNode<Uint32T> tmp102;
    TNode<Uint32T> tmp103;
    TNode<Uint32T> tmp104;
    TNode<Uint32T> tmp105;
    TNode<Uint32T> tmp106;
    TNode<Uint32T> tmp107;
    TNode<Uint32T> tmp108;
    ca_.Bind(&block4, &tmp94, &tmp95, &tmp96, &tmp97, &tmp98, &tmp99, &tmp100, &tmp101, &tmp102, &tmp103, &tmp104, &tmp105, &tmp106, &tmp107, &tmp108);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 351);
    TNode<BigInt> tmp109;
    USE(tmp109);
    tmp109 = MakeBigInt_284(state_, TNode<Context>{tmp94}, TNode<Uint32T>{tmp107}, TNode<Uint32T>{tmp108}, p_signed);
    ca_.Goto(&block1, tmp94, tmp95, tmp96, tmp97, tmp109);
  }

  if (block1.is_used()) {
    TNode<Context> tmp110;
    TNode<JSArrayBuffer> tmp111;
    TNode<UintPtrT> tmp112;
    TNode<BoolT> tmp113;
    TNode<BigInt> tmp114;
    ca_.Bind(&block1, &tmp110, &tmp111, &tmp112, &tmp113, &tmp114);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 327);
    ca_.Goto(&block5, tmp110, tmp111, tmp112, tmp113, tmp114);
  }

    TNode<Context> tmp115;
    TNode<JSArrayBuffer> tmp116;
    TNode<UintPtrT> tmp117;
    TNode<BoolT> tmp118;
    TNode<BigInt> tmp119;
    ca_.Bind(&block5, &tmp115, &tmp116, &tmp117, &tmp118, &tmp119);
  return TNode<BigInt>{tmp119};
}

TNode<Numeric> DataViewGet_286(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_receiver, TNode<Object> p_offset, TNode<Object> p_requestedLittleEndian, ElementsKind p_kind) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSDataView, Number, Object, Context> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSDataView, Number, Object, Context, Number> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSDataView, Number> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSDataView, Number> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Float64T, UintPtrT, UintPtrT, Float64T, Float64T> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Float64T, UintPtrT, UintPtrT, Float64T, Float64T> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Float64T, UintPtrT, UintPtrT, Float64T, Float64T, UintPtrT> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Float64T, UintPtrT, UintPtrT, Float64T, Float64T, UintPtrT> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Float64T, UintPtrT, UintPtrT, Float64T, Float64T, UintPtrT> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Float64T, UintPtrT, UintPtrT, Float64T, Float64T, UintPtrT> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Float64T, UintPtrT, UintPtrT, Float64T, Float64T, UintPtrT> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Float64T, UintPtrT, UintPtrT, Float64T, Float64T, UintPtrT> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Float64T, UintPtrT, UintPtrT, Float64T, Float64T, UintPtrT> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Float64T, UintPtrT, UintPtrT, Float64T, Float64T, UintPtrT> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Float64T, UintPtrT, UintPtrT, Float64T, Float64T, UintPtrT> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Float64T, UintPtrT, UintPtrT, Float64T, Float64T, UintPtrT> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Float64T, UintPtrT, UintPtrT, Float64T, Float64T, UintPtrT> block25(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Float64T, UintPtrT, UintPtrT, Float64T, Float64T, UintPtrT> block26(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Float64T, UintPtrT, UintPtrT, Float64T, Float64T, UintPtrT> block28(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Float64T, UintPtrT, UintPtrT, Float64T, Float64T, UintPtrT> block29(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Float64T, UintPtrT, UintPtrT, Float64T, Float64T, UintPtrT> block31(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Float64T, UintPtrT, UintPtrT, Float64T, Float64T, UintPtrT> block32(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Float64T, UintPtrT, UintPtrT, Float64T, Float64T, UintPtrT> block34(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Float64T, UintPtrT, UintPtrT, Float64T, Float64T, UintPtrT> block35(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Float64T, UintPtrT, UintPtrT, Float64T, Float64T, UintPtrT> block37(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Float64T, UintPtrT, UintPtrT, Float64T, Float64T, UintPtrT> block38(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Numeric> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Numeric> block40(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_receiver, p_offset, p_requestedLittleEndian);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Object> tmp1;
    TNode<Object> tmp2;
    TNode<Object> tmp3;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 363);
    TNode<String> tmp4;
    USE(tmp4);
    tmp4 = MakeDataViewGetterNameString_271(state_, p_kind);
    TNode<JSDataView> tmp5;
    USE(tmp5);
    tmp5 = ValidateDataView_274(state_, TNode<Context>{tmp0}, TNode<Object>{tmp1}, TNode<String>{tmp4});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 362);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 365);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 367);
    TNode<Number> tmp6;
    USE(tmp6);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp6 = ToIndex_245(state_, TNode<Object>{tmp2}, TNode<Context>{tmp0}, &label0);
    ca_.Goto(&block4, tmp0, tmp1, tmp2, tmp3, tmp5, ca_.Uninitialized<Number>(), tmp2, tmp0, tmp6);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block5, tmp0, tmp1, tmp2, tmp3, tmp5, ca_.Uninitialized<Number>(), tmp2, tmp0);
    }
  }

  if (block5.is_used()) {
    TNode<Context> tmp7;
    TNode<Object> tmp8;
    TNode<Object> tmp9;
    TNode<Object> tmp10;
    TNode<JSDataView> tmp11;
    TNode<Number> tmp12;
    TNode<Object> tmp13;
    TNode<Context> tmp14;
    ca_.Bind(&block5, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11, &tmp12, &tmp13, &tmp14);
    ca_.Goto(&block3, tmp7, tmp8, tmp9, tmp10, tmp11, tmp12);
  }

  if (block4.is_used()) {
    TNode<Context> tmp15;
    TNode<Object> tmp16;
    TNode<Object> tmp17;
    TNode<Object> tmp18;
    TNode<JSDataView> tmp19;
    TNode<Number> tmp20;
    TNode<Object> tmp21;
    TNode<Context> tmp22;
    TNode<Number> tmp23;
    ca_.Bind(&block4, &tmp15, &tmp16, &tmp17, &tmp18, &tmp19, &tmp20, &tmp21, &tmp22, &tmp23);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 369);
    ca_.Goto(&block2, tmp15, tmp16, tmp17, tmp18, tmp19, tmp23);
  }

  if (block3.is_used()) {
    TNode<Context> tmp24;
    TNode<Object> tmp25;
    TNode<Object> tmp26;
    TNode<Object> tmp27;
    TNode<JSDataView> tmp28;
    TNode<Number> tmp29;
    ca_.Bind(&block3, &tmp24, &tmp25, &tmp26, &tmp27, &tmp28, &tmp29);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 370);
    CodeStubAssembler(state_).ThrowRangeError(TNode<Context>{tmp24}, MessageTemplate::kInvalidDataViewAccessorOffset);
  }

  if (block2.is_used()) {
    TNode<Context> tmp30;
    TNode<Object> tmp31;
    TNode<Object> tmp32;
    TNode<Object> tmp33;
    TNode<JSDataView> tmp34;
    TNode<Number> tmp35;
    ca_.Bind(&block2, &tmp30, &tmp31, &tmp32, &tmp33, &tmp34, &tmp35);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 373);
    TNode<BoolT> tmp36;
    USE(tmp36);
    tmp36 = ToBoolean_242(state_, TNode<Object>{tmp33});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 374);
    TNode<IntPtrT> tmp37 = ca_.IntPtrConstant(JSArrayBufferView::kBufferOffset);
    USE(tmp37);
    TNode<JSArrayBuffer>tmp38 = CodeStubAssembler(state_).LoadReference<JSArrayBuffer>(CodeStubAssembler::Reference{tmp34, tmp37});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 376);
    TNode<BoolT> tmp39;
    USE(tmp39);
    tmp39 = CodeStubAssembler(state_).IsDetachedBuffer(TNode<JSArrayBuffer>{tmp38});
    ca_.Branch(tmp39, &block6, &block7, tmp30, tmp31, tmp32, tmp33, tmp34, tmp35, tmp36, tmp38);
  }

  if (block6.is_used()) {
    TNode<Context> tmp40;
    TNode<Object> tmp41;
    TNode<Object> tmp42;
    TNode<Object> tmp43;
    TNode<JSDataView> tmp44;
    TNode<Number> tmp45;
    TNode<BoolT> tmp46;
    TNode<JSArrayBuffer> tmp47;
    ca_.Bind(&block6, &tmp40, &tmp41, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 377);
    TNode<String> tmp48;
    USE(tmp48);
    tmp48 = MakeDataViewGetterNameString_271(state_, p_kind);
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{tmp40}, MessageTemplate::kDetachedOperation, TNode<Object>{tmp48});
  }

  if (block7.is_used()) {
    TNode<Context> tmp49;
    TNode<Object> tmp50;
    TNode<Object> tmp51;
    TNode<Object> tmp52;
    TNode<JSDataView> tmp53;
    TNode<Number> tmp54;
    TNode<BoolT> tmp55;
    TNode<JSArrayBuffer> tmp56;
    ca_.Bind(&block7, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 380);
    TNode<Float64T> tmp57;
    USE(tmp57);
    tmp57 = Convert9ATfloat6420UT5ATSmi10HeapNumber_196(state_, TNode<Number>{tmp54});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 381);
    TNode<UintPtrT> tmp58;
    USE(tmp58);
    tmp58 = Convert9ATuintptr9ATfloat64_204(state_, TNode<Float64T>{tmp57});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 383);
    TNode<IntPtrT> tmp59 = ca_.IntPtrConstant(JSArrayBufferView::kByteOffsetOffset);
    USE(tmp59);
    TNode<UintPtrT>tmp60 = CodeStubAssembler(state_).LoadReference<UintPtrT>(CodeStubAssembler::Reference{tmp53, tmp59});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 384);
    TNode<IntPtrT> tmp61 = ca_.IntPtrConstant(JSArrayBufferView::kByteLengthOffset);
    USE(tmp61);
    TNode<UintPtrT>tmp62 = CodeStubAssembler(state_).LoadReference<UintPtrT>(CodeStubAssembler::Reference{tmp53, tmp61});
    TNode<Float64T> tmp63;
    USE(tmp63);
    tmp63 = Convert9ATfloat649ATuintptr_202(state_, TNode<UintPtrT>{tmp62});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 385);
    TNode<Float64T> tmp64;
    USE(tmp64);
    tmp64 = FromConstexpr9ATfloat6417ATconstexpr_int31_165(state_, (DataViewBuiltinsAssembler(state_).DataViewElementSize(p_kind)));
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 387);
    TNode<Float64T> tmp65;
    USE(tmp65);
    tmp65 = CodeStubAssembler(state_).Float64Add(TNode<Float64T>{tmp57}, TNode<Float64T>{tmp64});
    TNode<BoolT> tmp66;
    USE(tmp66);
    tmp66 = CodeStubAssembler(state_).Float64GreaterThan(TNode<Float64T>{tmp65}, TNode<Float64T>{tmp63});
    ca_.Branch(tmp66, &block8, &block9, tmp49, tmp50, tmp51, tmp52, tmp53, tmp54, tmp55, tmp56, tmp57, tmp58, tmp60, tmp63, tmp64);
  }

  if (block8.is_used()) {
    TNode<Context> tmp67;
    TNode<Object> tmp68;
    TNode<Object> tmp69;
    TNode<Object> tmp70;
    TNode<JSDataView> tmp71;
    TNode<Number> tmp72;
    TNode<BoolT> tmp73;
    TNode<JSArrayBuffer> tmp74;
    TNode<Float64T> tmp75;
    TNode<UintPtrT> tmp76;
    TNode<UintPtrT> tmp77;
    TNode<Float64T> tmp78;
    TNode<Float64T> tmp79;
    ca_.Bind(&block8, &tmp67, &tmp68, &tmp69, &tmp70, &tmp71, &tmp72, &tmp73, &tmp74, &tmp75, &tmp76, &tmp77, &tmp78, &tmp79);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 388);
    CodeStubAssembler(state_).ThrowRangeError(TNode<Context>{tmp67}, MessageTemplate::kInvalidDataViewAccessorOffset);
  }

  if (block9.is_used()) {
    TNode<Context> tmp80;
    TNode<Object> tmp81;
    TNode<Object> tmp82;
    TNode<Object> tmp83;
    TNode<JSDataView> tmp84;
    TNode<Number> tmp85;
    TNode<BoolT> tmp86;
    TNode<JSArrayBuffer> tmp87;
    TNode<Float64T> tmp88;
    TNode<UintPtrT> tmp89;
    TNode<UintPtrT> tmp90;
    TNode<Float64T> tmp91;
    TNode<Float64T> tmp92;
    ca_.Bind(&block9, &tmp80, &tmp81, &tmp82, &tmp83, &tmp84, &tmp85, &tmp86, &tmp87, &tmp88, &tmp89, &tmp90, &tmp91, &tmp92);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 391);
    TNode<UintPtrT> tmp93;
    USE(tmp93);
    tmp93 = CodeStubAssembler(state_).UintPtrAdd(TNode<UintPtrT>{tmp89}, TNode<UintPtrT>{tmp90});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 393);
    if (((CodeStubAssembler(state_).ElementsKindEqual(p_kind, UINT8_ELEMENTS)))) {
      ca_.Goto(&block10, tmp80, tmp81, tmp82, tmp83, tmp84, tmp85, tmp86, tmp87, tmp88, tmp89, tmp90, tmp91, tmp92, tmp93);
    } else {
      ca_.Goto(&block11, tmp80, tmp81, tmp82, tmp83, tmp84, tmp85, tmp86, tmp87, tmp88, tmp89, tmp90, tmp91, tmp92, tmp93);
    }
  }

  if (block10.is_used()) {
    TNode<Context> tmp94;
    TNode<Object> tmp95;
    TNode<Object> tmp96;
    TNode<Object> tmp97;
    TNode<JSDataView> tmp98;
    TNode<Number> tmp99;
    TNode<BoolT> tmp100;
    TNode<JSArrayBuffer> tmp101;
    TNode<Float64T> tmp102;
    TNode<UintPtrT> tmp103;
    TNode<UintPtrT> tmp104;
    TNode<Float64T> tmp105;
    TNode<Float64T> tmp106;
    TNode<UintPtrT> tmp107;
    ca_.Bind(&block10, &tmp94, &tmp95, &tmp96, &tmp97, &tmp98, &tmp99, &tmp100, &tmp101, &tmp102, &tmp103, &tmp104, &tmp105, &tmp106, &tmp107);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 394);
    TNode<Smi> tmp108;
    USE(tmp108);
    tmp108 = LoadDataView8_275(state_, TNode<JSArrayBuffer>{tmp101}, TNode<UintPtrT>{tmp107}, false);
    ca_.Goto(&block1, tmp94, tmp95, tmp96, tmp97, tmp108);
  }

  if (block11.is_used()) {
    TNode<Context> tmp109;
    TNode<Object> tmp110;
    TNode<Object> tmp111;
    TNode<Object> tmp112;
    TNode<JSDataView> tmp113;
    TNode<Number> tmp114;
    TNode<BoolT> tmp115;
    TNode<JSArrayBuffer> tmp116;
    TNode<Float64T> tmp117;
    TNode<UintPtrT> tmp118;
    TNode<UintPtrT> tmp119;
    TNode<Float64T> tmp120;
    TNode<Float64T> tmp121;
    TNode<UintPtrT> tmp122;
    ca_.Bind(&block11, &tmp109, &tmp110, &tmp111, &tmp112, &tmp113, &tmp114, &tmp115, &tmp116, &tmp117, &tmp118, &tmp119, &tmp120, &tmp121, &tmp122);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 395);
    if (((CodeStubAssembler(state_).ElementsKindEqual(p_kind, INT8_ELEMENTS)))) {
      ca_.Goto(&block13, tmp109, tmp110, tmp111, tmp112, tmp113, tmp114, tmp115, tmp116, tmp117, tmp118, tmp119, tmp120, tmp121, tmp122);
    } else {
      ca_.Goto(&block14, tmp109, tmp110, tmp111, tmp112, tmp113, tmp114, tmp115, tmp116, tmp117, tmp118, tmp119, tmp120, tmp121, tmp122);
    }
  }

  if (block13.is_used()) {
    TNode<Context> tmp123;
    TNode<Object> tmp124;
    TNode<Object> tmp125;
    TNode<Object> tmp126;
    TNode<JSDataView> tmp127;
    TNode<Number> tmp128;
    TNode<BoolT> tmp129;
    TNode<JSArrayBuffer> tmp130;
    TNode<Float64T> tmp131;
    TNode<UintPtrT> tmp132;
    TNode<UintPtrT> tmp133;
    TNode<Float64T> tmp134;
    TNode<Float64T> tmp135;
    TNode<UintPtrT> tmp136;
    ca_.Bind(&block13, &tmp123, &tmp124, &tmp125, &tmp126, &tmp127, &tmp128, &tmp129, &tmp130, &tmp131, &tmp132, &tmp133, &tmp134, &tmp135, &tmp136);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 396);
    TNode<Smi> tmp137;
    USE(tmp137);
    tmp137 = LoadDataView8_275(state_, TNode<JSArrayBuffer>{tmp130}, TNode<UintPtrT>{tmp136}, true);
    ca_.Goto(&block1, tmp123, tmp124, tmp125, tmp126, tmp137);
  }

  if (block14.is_used()) {
    TNode<Context> tmp138;
    TNode<Object> tmp139;
    TNode<Object> tmp140;
    TNode<Object> tmp141;
    TNode<JSDataView> tmp142;
    TNode<Number> tmp143;
    TNode<BoolT> tmp144;
    TNode<JSArrayBuffer> tmp145;
    TNode<Float64T> tmp146;
    TNode<UintPtrT> tmp147;
    TNode<UintPtrT> tmp148;
    TNode<Float64T> tmp149;
    TNode<Float64T> tmp150;
    TNode<UintPtrT> tmp151;
    ca_.Bind(&block14, &tmp138, &tmp139, &tmp140, &tmp141, &tmp142, &tmp143, &tmp144, &tmp145, &tmp146, &tmp147, &tmp148, &tmp149, &tmp150, &tmp151);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 397);
    if (((CodeStubAssembler(state_).ElementsKindEqual(p_kind, UINT16_ELEMENTS)))) {
      ca_.Goto(&block16, tmp138, tmp139, tmp140, tmp141, tmp142, tmp143, tmp144, tmp145, tmp146, tmp147, tmp148, tmp149, tmp150, tmp151);
    } else {
      ca_.Goto(&block17, tmp138, tmp139, tmp140, tmp141, tmp142, tmp143, tmp144, tmp145, tmp146, tmp147, tmp148, tmp149, tmp150, tmp151);
    }
  }

  if (block16.is_used()) {
    TNode<Context> tmp152;
    TNode<Object> tmp153;
    TNode<Object> tmp154;
    TNode<Object> tmp155;
    TNode<JSDataView> tmp156;
    TNode<Number> tmp157;
    TNode<BoolT> tmp158;
    TNode<JSArrayBuffer> tmp159;
    TNode<Float64T> tmp160;
    TNode<UintPtrT> tmp161;
    TNode<UintPtrT> tmp162;
    TNode<Float64T> tmp163;
    TNode<Float64T> tmp164;
    TNode<UintPtrT> tmp165;
    ca_.Bind(&block16, &tmp152, &tmp153, &tmp154, &tmp155, &tmp156, &tmp157, &tmp158, &tmp159, &tmp160, &tmp161, &tmp162, &tmp163, &tmp164, &tmp165);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 398);
    TNode<Number> tmp166;
    USE(tmp166);
    tmp166 = LoadDataView16_276(state_, TNode<JSArrayBuffer>{tmp159}, TNode<UintPtrT>{tmp165}, TNode<BoolT>{tmp158}, false);
    ca_.Goto(&block1, tmp152, tmp153, tmp154, tmp155, tmp166);
  }

  if (block17.is_used()) {
    TNode<Context> tmp167;
    TNode<Object> tmp168;
    TNode<Object> tmp169;
    TNode<Object> tmp170;
    TNode<JSDataView> tmp171;
    TNode<Number> tmp172;
    TNode<BoolT> tmp173;
    TNode<JSArrayBuffer> tmp174;
    TNode<Float64T> tmp175;
    TNode<UintPtrT> tmp176;
    TNode<UintPtrT> tmp177;
    TNode<Float64T> tmp178;
    TNode<Float64T> tmp179;
    TNode<UintPtrT> tmp180;
    ca_.Bind(&block17, &tmp167, &tmp168, &tmp169, &tmp170, &tmp171, &tmp172, &tmp173, &tmp174, &tmp175, &tmp176, &tmp177, &tmp178, &tmp179, &tmp180);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 399);
    if (((CodeStubAssembler(state_).ElementsKindEqual(p_kind, INT16_ELEMENTS)))) {
      ca_.Goto(&block19, tmp167, tmp168, tmp169, tmp170, tmp171, tmp172, tmp173, tmp174, tmp175, tmp176, tmp177, tmp178, tmp179, tmp180);
    } else {
      ca_.Goto(&block20, tmp167, tmp168, tmp169, tmp170, tmp171, tmp172, tmp173, tmp174, tmp175, tmp176, tmp177, tmp178, tmp179, tmp180);
    }
  }

  if (block19.is_used()) {
    TNode<Context> tmp181;
    TNode<Object> tmp182;
    TNode<Object> tmp183;
    TNode<Object> tmp184;
    TNode<JSDataView> tmp185;
    TNode<Number> tmp186;
    TNode<BoolT> tmp187;
    TNode<JSArrayBuffer> tmp188;
    TNode<Float64T> tmp189;
    TNode<UintPtrT> tmp190;
    TNode<UintPtrT> tmp191;
    TNode<Float64T> tmp192;
    TNode<Float64T> tmp193;
    TNode<UintPtrT> tmp194;
    ca_.Bind(&block19, &tmp181, &tmp182, &tmp183, &tmp184, &tmp185, &tmp186, &tmp187, &tmp188, &tmp189, &tmp190, &tmp191, &tmp192, &tmp193, &tmp194);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 400);
    TNode<Number> tmp195;
    USE(tmp195);
    tmp195 = LoadDataView16_276(state_, TNode<JSArrayBuffer>{tmp188}, TNode<UintPtrT>{tmp194}, TNode<BoolT>{tmp187}, true);
    ca_.Goto(&block1, tmp181, tmp182, tmp183, tmp184, tmp195);
  }

  if (block20.is_used()) {
    TNode<Context> tmp196;
    TNode<Object> tmp197;
    TNode<Object> tmp198;
    TNode<Object> tmp199;
    TNode<JSDataView> tmp200;
    TNode<Number> tmp201;
    TNode<BoolT> tmp202;
    TNode<JSArrayBuffer> tmp203;
    TNode<Float64T> tmp204;
    TNode<UintPtrT> tmp205;
    TNode<UintPtrT> tmp206;
    TNode<Float64T> tmp207;
    TNode<Float64T> tmp208;
    TNode<UintPtrT> tmp209;
    ca_.Bind(&block20, &tmp196, &tmp197, &tmp198, &tmp199, &tmp200, &tmp201, &tmp202, &tmp203, &tmp204, &tmp205, &tmp206, &tmp207, &tmp208, &tmp209);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 401);
    if (((CodeStubAssembler(state_).ElementsKindEqual(p_kind, UINT32_ELEMENTS)))) {
      ca_.Goto(&block22, tmp196, tmp197, tmp198, tmp199, tmp200, tmp201, tmp202, tmp203, tmp204, tmp205, tmp206, tmp207, tmp208, tmp209);
    } else {
      ca_.Goto(&block23, tmp196, tmp197, tmp198, tmp199, tmp200, tmp201, tmp202, tmp203, tmp204, tmp205, tmp206, tmp207, tmp208, tmp209);
    }
  }

  if (block22.is_used()) {
    TNode<Context> tmp210;
    TNode<Object> tmp211;
    TNode<Object> tmp212;
    TNode<Object> tmp213;
    TNode<JSDataView> tmp214;
    TNode<Number> tmp215;
    TNode<BoolT> tmp216;
    TNode<JSArrayBuffer> tmp217;
    TNode<Float64T> tmp218;
    TNode<UintPtrT> tmp219;
    TNode<UintPtrT> tmp220;
    TNode<Float64T> tmp221;
    TNode<Float64T> tmp222;
    TNode<UintPtrT> tmp223;
    ca_.Bind(&block22, &tmp210, &tmp211, &tmp212, &tmp213, &tmp214, &tmp215, &tmp216, &tmp217, &tmp218, &tmp219, &tmp220, &tmp221, &tmp222, &tmp223);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 402);
    TNode<Number> tmp224;
    USE(tmp224);
    tmp224 = LoadDataView32_277(state_, TNode<JSArrayBuffer>{tmp217}, TNode<UintPtrT>{tmp223}, TNode<BoolT>{tmp216}, p_kind);
    ca_.Goto(&block1, tmp210, tmp211, tmp212, tmp213, tmp224);
  }

  if (block23.is_used()) {
    TNode<Context> tmp225;
    TNode<Object> tmp226;
    TNode<Object> tmp227;
    TNode<Object> tmp228;
    TNode<JSDataView> tmp229;
    TNode<Number> tmp230;
    TNode<BoolT> tmp231;
    TNode<JSArrayBuffer> tmp232;
    TNode<Float64T> tmp233;
    TNode<UintPtrT> tmp234;
    TNode<UintPtrT> tmp235;
    TNode<Float64T> tmp236;
    TNode<Float64T> tmp237;
    TNode<UintPtrT> tmp238;
    ca_.Bind(&block23, &tmp225, &tmp226, &tmp227, &tmp228, &tmp229, &tmp230, &tmp231, &tmp232, &tmp233, &tmp234, &tmp235, &tmp236, &tmp237, &tmp238);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 403);
    if (((CodeStubAssembler(state_).ElementsKindEqual(p_kind, INT32_ELEMENTS)))) {
      ca_.Goto(&block25, tmp225, tmp226, tmp227, tmp228, tmp229, tmp230, tmp231, tmp232, tmp233, tmp234, tmp235, tmp236, tmp237, tmp238);
    } else {
      ca_.Goto(&block26, tmp225, tmp226, tmp227, tmp228, tmp229, tmp230, tmp231, tmp232, tmp233, tmp234, tmp235, tmp236, tmp237, tmp238);
    }
  }

  if (block25.is_used()) {
    TNode<Context> tmp239;
    TNode<Object> tmp240;
    TNode<Object> tmp241;
    TNode<Object> tmp242;
    TNode<JSDataView> tmp243;
    TNode<Number> tmp244;
    TNode<BoolT> tmp245;
    TNode<JSArrayBuffer> tmp246;
    TNode<Float64T> tmp247;
    TNode<UintPtrT> tmp248;
    TNode<UintPtrT> tmp249;
    TNode<Float64T> tmp250;
    TNode<Float64T> tmp251;
    TNode<UintPtrT> tmp252;
    ca_.Bind(&block25, &tmp239, &tmp240, &tmp241, &tmp242, &tmp243, &tmp244, &tmp245, &tmp246, &tmp247, &tmp248, &tmp249, &tmp250, &tmp251, &tmp252);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 404);
    TNode<Number> tmp253;
    USE(tmp253);
    tmp253 = LoadDataView32_277(state_, TNode<JSArrayBuffer>{tmp246}, TNode<UintPtrT>{tmp252}, TNode<BoolT>{tmp245}, p_kind);
    ca_.Goto(&block1, tmp239, tmp240, tmp241, tmp242, tmp253);
  }

  if (block26.is_used()) {
    TNode<Context> tmp254;
    TNode<Object> tmp255;
    TNode<Object> tmp256;
    TNode<Object> tmp257;
    TNode<JSDataView> tmp258;
    TNode<Number> tmp259;
    TNode<BoolT> tmp260;
    TNode<JSArrayBuffer> tmp261;
    TNode<Float64T> tmp262;
    TNode<UintPtrT> tmp263;
    TNode<UintPtrT> tmp264;
    TNode<Float64T> tmp265;
    TNode<Float64T> tmp266;
    TNode<UintPtrT> tmp267;
    ca_.Bind(&block26, &tmp254, &tmp255, &tmp256, &tmp257, &tmp258, &tmp259, &tmp260, &tmp261, &tmp262, &tmp263, &tmp264, &tmp265, &tmp266, &tmp267);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 405);
    if (((CodeStubAssembler(state_).ElementsKindEqual(p_kind, FLOAT32_ELEMENTS)))) {
      ca_.Goto(&block28, tmp254, tmp255, tmp256, tmp257, tmp258, tmp259, tmp260, tmp261, tmp262, tmp263, tmp264, tmp265, tmp266, tmp267);
    } else {
      ca_.Goto(&block29, tmp254, tmp255, tmp256, tmp257, tmp258, tmp259, tmp260, tmp261, tmp262, tmp263, tmp264, tmp265, tmp266, tmp267);
    }
  }

  if (block28.is_used()) {
    TNode<Context> tmp268;
    TNode<Object> tmp269;
    TNode<Object> tmp270;
    TNode<Object> tmp271;
    TNode<JSDataView> tmp272;
    TNode<Number> tmp273;
    TNode<BoolT> tmp274;
    TNode<JSArrayBuffer> tmp275;
    TNode<Float64T> tmp276;
    TNode<UintPtrT> tmp277;
    TNode<UintPtrT> tmp278;
    TNode<Float64T> tmp279;
    TNode<Float64T> tmp280;
    TNode<UintPtrT> tmp281;
    ca_.Bind(&block28, &tmp268, &tmp269, &tmp270, &tmp271, &tmp272, &tmp273, &tmp274, &tmp275, &tmp276, &tmp277, &tmp278, &tmp279, &tmp280, &tmp281);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 406);
    TNode<Number> tmp282;
    USE(tmp282);
    tmp282 = LoadDataView32_277(state_, TNode<JSArrayBuffer>{tmp275}, TNode<UintPtrT>{tmp281}, TNode<BoolT>{tmp274}, p_kind);
    ca_.Goto(&block1, tmp268, tmp269, tmp270, tmp271, tmp282);
  }

  if (block29.is_used()) {
    TNode<Context> tmp283;
    TNode<Object> tmp284;
    TNode<Object> tmp285;
    TNode<Object> tmp286;
    TNode<JSDataView> tmp287;
    TNode<Number> tmp288;
    TNode<BoolT> tmp289;
    TNode<JSArrayBuffer> tmp290;
    TNode<Float64T> tmp291;
    TNode<UintPtrT> tmp292;
    TNode<UintPtrT> tmp293;
    TNode<Float64T> tmp294;
    TNode<Float64T> tmp295;
    TNode<UintPtrT> tmp296;
    ca_.Bind(&block29, &tmp283, &tmp284, &tmp285, &tmp286, &tmp287, &tmp288, &tmp289, &tmp290, &tmp291, &tmp292, &tmp293, &tmp294, &tmp295, &tmp296);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 407);
    if (((CodeStubAssembler(state_).ElementsKindEqual(p_kind, FLOAT64_ELEMENTS)))) {
      ca_.Goto(&block31, tmp283, tmp284, tmp285, tmp286, tmp287, tmp288, tmp289, tmp290, tmp291, tmp292, tmp293, tmp294, tmp295, tmp296);
    } else {
      ca_.Goto(&block32, tmp283, tmp284, tmp285, tmp286, tmp287, tmp288, tmp289, tmp290, tmp291, tmp292, tmp293, tmp294, tmp295, tmp296);
    }
  }

  if (block31.is_used()) {
    TNode<Context> tmp297;
    TNode<Object> tmp298;
    TNode<Object> tmp299;
    TNode<Object> tmp300;
    TNode<JSDataView> tmp301;
    TNode<Number> tmp302;
    TNode<BoolT> tmp303;
    TNode<JSArrayBuffer> tmp304;
    TNode<Float64T> tmp305;
    TNode<UintPtrT> tmp306;
    TNode<UintPtrT> tmp307;
    TNode<Float64T> tmp308;
    TNode<Float64T> tmp309;
    TNode<UintPtrT> tmp310;
    ca_.Bind(&block31, &tmp297, &tmp298, &tmp299, &tmp300, &tmp301, &tmp302, &tmp303, &tmp304, &tmp305, &tmp306, &tmp307, &tmp308, &tmp309, &tmp310);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 408);
    TNode<Number> tmp311;
    USE(tmp311);
    tmp311 = LoadDataViewFloat64_278(state_, TNode<JSArrayBuffer>{tmp304}, TNode<UintPtrT>{tmp310}, TNode<BoolT>{tmp303});
    ca_.Goto(&block1, tmp297, tmp298, tmp299, tmp300, tmp311);
  }

  if (block32.is_used()) {
    TNode<Context> tmp312;
    TNode<Object> tmp313;
    TNode<Object> tmp314;
    TNode<Object> tmp315;
    TNode<JSDataView> tmp316;
    TNode<Number> tmp317;
    TNode<BoolT> tmp318;
    TNode<JSArrayBuffer> tmp319;
    TNode<Float64T> tmp320;
    TNode<UintPtrT> tmp321;
    TNode<UintPtrT> tmp322;
    TNode<Float64T> tmp323;
    TNode<Float64T> tmp324;
    TNode<UintPtrT> tmp325;
    ca_.Bind(&block32, &tmp312, &tmp313, &tmp314, &tmp315, &tmp316, &tmp317, &tmp318, &tmp319, &tmp320, &tmp321, &tmp322, &tmp323, &tmp324, &tmp325);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 409);
    if (((CodeStubAssembler(state_).ElementsKindEqual(p_kind, BIGUINT64_ELEMENTS)))) {
      ca_.Goto(&block34, tmp312, tmp313, tmp314, tmp315, tmp316, tmp317, tmp318, tmp319, tmp320, tmp321, tmp322, tmp323, tmp324, tmp325);
    } else {
      ca_.Goto(&block35, tmp312, tmp313, tmp314, tmp315, tmp316, tmp317, tmp318, tmp319, tmp320, tmp321, tmp322, tmp323, tmp324, tmp325);
    }
  }

  if (block34.is_used()) {
    TNode<Context> tmp326;
    TNode<Object> tmp327;
    TNode<Object> tmp328;
    TNode<Object> tmp329;
    TNode<JSDataView> tmp330;
    TNode<Number> tmp331;
    TNode<BoolT> tmp332;
    TNode<JSArrayBuffer> tmp333;
    TNode<Float64T> tmp334;
    TNode<UintPtrT> tmp335;
    TNode<UintPtrT> tmp336;
    TNode<Float64T> tmp337;
    TNode<Float64T> tmp338;
    TNode<UintPtrT> tmp339;
    ca_.Bind(&block34, &tmp326, &tmp327, &tmp328, &tmp329, &tmp330, &tmp331, &tmp332, &tmp333, &tmp334, &tmp335, &tmp336, &tmp337, &tmp338, &tmp339);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 410);
    TNode<BigInt> tmp340;
    USE(tmp340);
    tmp340 = LoadDataViewBigInt_285(state_, TNode<Context>{tmp326}, TNode<JSArrayBuffer>{tmp333}, TNode<UintPtrT>{tmp339}, TNode<BoolT>{tmp332}, false);
    ca_.Goto(&block1, tmp326, tmp327, tmp328, tmp329, tmp340);
  }

  if (block35.is_used()) {
    TNode<Context> tmp341;
    TNode<Object> tmp342;
    TNode<Object> tmp343;
    TNode<Object> tmp344;
    TNode<JSDataView> tmp345;
    TNode<Number> tmp346;
    TNode<BoolT> tmp347;
    TNode<JSArrayBuffer> tmp348;
    TNode<Float64T> tmp349;
    TNode<UintPtrT> tmp350;
    TNode<UintPtrT> tmp351;
    TNode<Float64T> tmp352;
    TNode<Float64T> tmp353;
    TNode<UintPtrT> tmp354;
    ca_.Bind(&block35, &tmp341, &tmp342, &tmp343, &tmp344, &tmp345, &tmp346, &tmp347, &tmp348, &tmp349, &tmp350, &tmp351, &tmp352, &tmp353, &tmp354);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 411);
    if (((CodeStubAssembler(state_).ElementsKindEqual(p_kind, BIGINT64_ELEMENTS)))) {
      ca_.Goto(&block37, tmp341, tmp342, tmp343, tmp344, tmp345, tmp346, tmp347, tmp348, tmp349, tmp350, tmp351, tmp352, tmp353, tmp354);
    } else {
      ca_.Goto(&block38, tmp341, tmp342, tmp343, tmp344, tmp345, tmp346, tmp347, tmp348, tmp349, tmp350, tmp351, tmp352, tmp353, tmp354);
    }
  }

  if (block37.is_used()) {
    TNode<Context> tmp355;
    TNode<Object> tmp356;
    TNode<Object> tmp357;
    TNode<Object> tmp358;
    TNode<JSDataView> tmp359;
    TNode<Number> tmp360;
    TNode<BoolT> tmp361;
    TNode<JSArrayBuffer> tmp362;
    TNode<Float64T> tmp363;
    TNode<UintPtrT> tmp364;
    TNode<UintPtrT> tmp365;
    TNode<Float64T> tmp366;
    TNode<Float64T> tmp367;
    TNode<UintPtrT> tmp368;
    ca_.Bind(&block37, &tmp355, &tmp356, &tmp357, &tmp358, &tmp359, &tmp360, &tmp361, &tmp362, &tmp363, &tmp364, &tmp365, &tmp366, &tmp367, &tmp368);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 412);
    TNode<BigInt> tmp369;
    USE(tmp369);
    tmp369 = LoadDataViewBigInt_285(state_, TNode<Context>{tmp355}, TNode<JSArrayBuffer>{tmp362}, TNode<UintPtrT>{tmp368}, TNode<BoolT>{tmp361}, true);
    ca_.Goto(&block1, tmp355, tmp356, tmp357, tmp358, tmp369);
  }

  if (block38.is_used()) {
    TNode<Context> tmp370;
    TNode<Object> tmp371;
    TNode<Object> tmp372;
    TNode<Object> tmp373;
    TNode<JSDataView> tmp374;
    TNode<Number> tmp375;
    TNode<BoolT> tmp376;
    TNode<JSArrayBuffer> tmp377;
    TNode<Float64T> tmp378;
    TNode<UintPtrT> tmp379;
    TNode<UintPtrT> tmp380;
    TNode<Float64T> tmp381;
    TNode<Float64T> tmp382;
    TNode<UintPtrT> tmp383;
    ca_.Bind(&block38, &tmp370, &tmp371, &tmp372, &tmp373, &tmp374, &tmp375, &tmp376, &tmp377, &tmp378, &tmp379, &tmp380, &tmp381, &tmp382, &tmp383);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 414);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block1.is_used()) {
    TNode<Context> tmp384;
    TNode<Object> tmp385;
    TNode<Object> tmp386;
    TNode<Object> tmp387;
    TNode<Numeric> tmp388;
    ca_.Bind(&block1, &tmp384, &tmp385, &tmp386, &tmp387, &tmp388);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 359);
    ca_.Goto(&block40, tmp384, tmp385, tmp386, tmp387, tmp388);
  }

    TNode<Context> tmp389;
    TNode<Object> tmp390;
    TNode<Object> tmp391;
    TNode<Object> tmp392;
    TNode<Numeric> tmp393;
    ca_.Bind(&block40, &tmp389, &tmp390, &tmp391, &tmp392, &tmp393);
  return TNode<Numeric>{tmp393};
}

TF_BUILTIN(DataViewPrototypeGetUint8, CodeStubAssembler) {
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
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, torque_arguments.frame, torque_arguments.base, torque_arguments.length, parameter0, parameter1);

  if (block0.is_used()) {
    TNode<RawPtrT> tmp0;
    TNode<RawPtrT> tmp1;
    TNode<IntPtrT> tmp2;
    TNode<Context> tmp3;
    TNode<Object> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 420);
    TNode<IntPtrT> tmp5;
    USE(tmp5);
    tmp5 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 0);
    TNode<BoolT> tmp6;
    USE(tmp6);
    tmp6 = CodeStubAssembler(state_).IntPtrGreaterThan(TNode<IntPtrT>{tmp2}, TNode<IntPtrT>{tmp5});
    ca_.Branch(tmp6, &block1, &block2, tmp0, tmp1, tmp2, tmp3, tmp4);
  }

  if (block1.is_used()) {
    TNode<RawPtrT> tmp7;
    TNode<RawPtrT> tmp8;
    TNode<IntPtrT> tmp9;
    TNode<Context> tmp10;
    TNode<Object> tmp11;
    ca_.Bind(&block1, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11);
    TNode<IntPtrT> tmp12;
    USE(tmp12);
    tmp12 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 0);
    TNode<Object> tmp13;
    USE(tmp13);
    tmp13 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{tmp7}, TNode<RawPtrT>{tmp8}, TNode<IntPtrT>{tmp9}}, TNode<IntPtrT>{tmp12});
    ca_.Goto(&block4, tmp7, tmp8, tmp9, tmp10, tmp11, tmp13);
  }

  if (block2.is_used()) {
    TNode<RawPtrT> tmp14;
    TNode<RawPtrT> tmp15;
    TNode<IntPtrT> tmp16;
    TNode<Context> tmp17;
    TNode<Object> tmp18;
    ca_.Bind(&block2, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18);
    TNode<Oddball> tmp19;
    USE(tmp19);
    tmp19 = Undefined_64(state_);
    ca_.Goto(&block3, tmp14, tmp15, tmp16, tmp17, tmp18, tmp19);
  }

  if (block4.is_used()) {
    TNode<RawPtrT> tmp20;
    TNode<RawPtrT> tmp21;
    TNode<IntPtrT> tmp22;
    TNode<Context> tmp23;
    TNode<Object> tmp24;
    TNode<Object> tmp25;
    ca_.Bind(&block4, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25);
    ca_.Goto(&block3, tmp20, tmp21, tmp22, tmp23, tmp24, tmp25);
  }

  if (block3.is_used()) {
    TNode<RawPtrT> tmp26;
    TNode<RawPtrT> tmp27;
    TNode<IntPtrT> tmp28;
    TNode<Context> tmp29;
    TNode<Object> tmp30;
    TNode<Object> tmp31;
    ca_.Bind(&block3, &tmp26, &tmp27, &tmp28, &tmp29, &tmp30, &tmp31);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 421);
    TNode<Oddball> tmp32;
    USE(tmp32);
    tmp32 = Undefined_64(state_);
    TNode<Numeric> tmp33;
    USE(tmp33);
    tmp33 = DataViewGet_286(state_, TNode<Context>{tmp29}, TNode<Object>{tmp30}, TNode<Object>{tmp31}, TNode<Object>{tmp32}, UINT8_ELEMENTS);
    arguments.PopAndReturn(tmp33);
  }
}

TF_BUILTIN(DataViewPrototypeGetInt8, CodeStubAssembler) {
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
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, torque_arguments.frame, torque_arguments.base, torque_arguments.length, parameter0, parameter1);

  if (block0.is_used()) {
    TNode<RawPtrT> tmp0;
    TNode<RawPtrT> tmp1;
    TNode<IntPtrT> tmp2;
    TNode<Context> tmp3;
    TNode<Object> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 426);
    TNode<IntPtrT> tmp5;
    USE(tmp5);
    tmp5 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 0);
    TNode<BoolT> tmp6;
    USE(tmp6);
    tmp6 = CodeStubAssembler(state_).IntPtrGreaterThan(TNode<IntPtrT>{tmp2}, TNode<IntPtrT>{tmp5});
    ca_.Branch(tmp6, &block1, &block2, tmp0, tmp1, tmp2, tmp3, tmp4);
  }

  if (block1.is_used()) {
    TNode<RawPtrT> tmp7;
    TNode<RawPtrT> tmp8;
    TNode<IntPtrT> tmp9;
    TNode<Context> tmp10;
    TNode<Object> tmp11;
    ca_.Bind(&block1, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11);
    TNode<IntPtrT> tmp12;
    USE(tmp12);
    tmp12 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 0);
    TNode<Object> tmp13;
    USE(tmp13);
    tmp13 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{tmp7}, TNode<RawPtrT>{tmp8}, TNode<IntPtrT>{tmp9}}, TNode<IntPtrT>{tmp12});
    ca_.Goto(&block4, tmp7, tmp8, tmp9, tmp10, tmp11, tmp13);
  }

  if (block2.is_used()) {
    TNode<RawPtrT> tmp14;
    TNode<RawPtrT> tmp15;
    TNode<IntPtrT> tmp16;
    TNode<Context> tmp17;
    TNode<Object> tmp18;
    ca_.Bind(&block2, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18);
    TNode<Oddball> tmp19;
    USE(tmp19);
    tmp19 = Undefined_64(state_);
    ca_.Goto(&block3, tmp14, tmp15, tmp16, tmp17, tmp18, tmp19);
  }

  if (block4.is_used()) {
    TNode<RawPtrT> tmp20;
    TNode<RawPtrT> tmp21;
    TNode<IntPtrT> tmp22;
    TNode<Context> tmp23;
    TNode<Object> tmp24;
    TNode<Object> tmp25;
    ca_.Bind(&block4, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25);
    ca_.Goto(&block3, tmp20, tmp21, tmp22, tmp23, tmp24, tmp25);
  }

  if (block3.is_used()) {
    TNode<RawPtrT> tmp26;
    TNode<RawPtrT> tmp27;
    TNode<IntPtrT> tmp28;
    TNode<Context> tmp29;
    TNode<Object> tmp30;
    TNode<Object> tmp31;
    ca_.Bind(&block3, &tmp26, &tmp27, &tmp28, &tmp29, &tmp30, &tmp31);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 427);
    TNode<Oddball> tmp32;
    USE(tmp32);
    tmp32 = Undefined_64(state_);
    TNode<Numeric> tmp33;
    USE(tmp33);
    tmp33 = DataViewGet_286(state_, TNode<Context>{tmp29}, TNode<Object>{tmp30}, TNode<Object>{tmp31}, TNode<Object>{tmp32}, INT8_ELEMENTS);
    arguments.PopAndReturn(tmp33);
  }
}

TF_BUILTIN(DataViewPrototypeGetUint16, CodeStubAssembler) {
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
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, torque_arguments.frame, torque_arguments.base, torque_arguments.length, parameter0, parameter1);

  if (block0.is_used()) {
    TNode<RawPtrT> tmp0;
    TNode<RawPtrT> tmp1;
    TNode<IntPtrT> tmp2;
    TNode<Context> tmp3;
    TNode<Object> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 432);
    TNode<IntPtrT> tmp5;
    USE(tmp5);
    tmp5 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 0);
    TNode<BoolT> tmp6;
    USE(tmp6);
    tmp6 = CodeStubAssembler(state_).IntPtrGreaterThan(TNode<IntPtrT>{tmp2}, TNode<IntPtrT>{tmp5});
    ca_.Branch(tmp6, &block1, &block2, tmp0, tmp1, tmp2, tmp3, tmp4);
  }

  if (block1.is_used()) {
    TNode<RawPtrT> tmp7;
    TNode<RawPtrT> tmp8;
    TNode<IntPtrT> tmp9;
    TNode<Context> tmp10;
    TNode<Object> tmp11;
    ca_.Bind(&block1, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11);
    TNode<IntPtrT> tmp12;
    USE(tmp12);
    tmp12 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 0);
    TNode<Object> tmp13;
    USE(tmp13);
    tmp13 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{tmp7}, TNode<RawPtrT>{tmp8}, TNode<IntPtrT>{tmp9}}, TNode<IntPtrT>{tmp12});
    ca_.Goto(&block4, tmp7, tmp8, tmp9, tmp10, tmp11, tmp13);
  }

  if (block2.is_used()) {
    TNode<RawPtrT> tmp14;
    TNode<RawPtrT> tmp15;
    TNode<IntPtrT> tmp16;
    TNode<Context> tmp17;
    TNode<Object> tmp18;
    ca_.Bind(&block2, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18);
    TNode<Oddball> tmp19;
    USE(tmp19);
    tmp19 = Undefined_64(state_);
    ca_.Goto(&block3, tmp14, tmp15, tmp16, tmp17, tmp18, tmp19);
  }

  if (block4.is_used()) {
    TNode<RawPtrT> tmp20;
    TNode<RawPtrT> tmp21;
    TNode<IntPtrT> tmp22;
    TNode<Context> tmp23;
    TNode<Object> tmp24;
    TNode<Object> tmp25;
    ca_.Bind(&block4, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25);
    ca_.Goto(&block3, tmp20, tmp21, tmp22, tmp23, tmp24, tmp25);
  }

  if (block3.is_used()) {
    TNode<RawPtrT> tmp26;
    TNode<RawPtrT> tmp27;
    TNode<IntPtrT> tmp28;
    TNode<Context> tmp29;
    TNode<Object> tmp30;
    TNode<Object> tmp31;
    ca_.Bind(&block3, &tmp26, &tmp27, &tmp28, &tmp29, &tmp30, &tmp31);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 434);
    TNode<IntPtrT> tmp32;
    USE(tmp32);
    tmp32 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 1);
    TNode<BoolT> tmp33;
    USE(tmp33);
    tmp33 = CodeStubAssembler(state_).IntPtrGreaterThan(TNode<IntPtrT>{tmp28}, TNode<IntPtrT>{tmp32});
    ca_.Branch(tmp33, &block5, &block6, tmp26, tmp27, tmp28, tmp29, tmp30, tmp31);
  }

  if (block5.is_used()) {
    TNode<RawPtrT> tmp34;
    TNode<RawPtrT> tmp35;
    TNode<IntPtrT> tmp36;
    TNode<Context> tmp37;
    TNode<Object> tmp38;
    TNode<Object> tmp39;
    ca_.Bind(&block5, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39);
    TNode<IntPtrT> tmp40;
    USE(tmp40);
    tmp40 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 1);
    TNode<Object> tmp41;
    USE(tmp41);
    tmp41 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{tmp34}, TNode<RawPtrT>{tmp35}, TNode<IntPtrT>{tmp36}}, TNode<IntPtrT>{tmp40});
    ca_.Goto(&block8, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39, tmp41);
  }

  if (block6.is_used()) {
    TNode<RawPtrT> tmp42;
    TNode<RawPtrT> tmp43;
    TNode<IntPtrT> tmp44;
    TNode<Context> tmp45;
    TNode<Object> tmp46;
    TNode<Object> tmp47;
    ca_.Bind(&block6, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47);
    TNode<Oddball> tmp48;
    USE(tmp48);
    tmp48 = Undefined_64(state_);
    ca_.Goto(&block7, tmp42, tmp43, tmp44, tmp45, tmp46, tmp47, tmp48);
  }

  if (block8.is_used()) {
    TNode<RawPtrT> tmp49;
    TNode<RawPtrT> tmp50;
    TNode<IntPtrT> tmp51;
    TNode<Context> tmp52;
    TNode<Object> tmp53;
    TNode<Object> tmp54;
    TNode<Object> tmp55;
    ca_.Bind(&block8, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55);
    ca_.Goto(&block7, tmp49, tmp50, tmp51, tmp52, tmp53, tmp54, tmp55);
  }

  if (block7.is_used()) {
    TNode<RawPtrT> tmp56;
    TNode<RawPtrT> tmp57;
    TNode<IntPtrT> tmp58;
    TNode<Context> tmp59;
    TNode<Object> tmp60;
    TNode<Object> tmp61;
    TNode<Object> tmp62;
    ca_.Bind(&block7, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 433);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 436);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 435);
    TNode<Numeric> tmp63;
    USE(tmp63);
    tmp63 = DataViewGet_286(state_, TNode<Context>{tmp59}, TNode<Object>{tmp60}, TNode<Object>{tmp61}, TNode<Object>{tmp62}, UINT16_ELEMENTS);
    arguments.PopAndReturn(tmp63);
  }
}

TF_BUILTIN(DataViewPrototypeGetInt16, CodeStubAssembler) {
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
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, torque_arguments.frame, torque_arguments.base, torque_arguments.length, parameter0, parameter1);

  if (block0.is_used()) {
    TNode<RawPtrT> tmp0;
    TNode<RawPtrT> tmp1;
    TNode<IntPtrT> tmp2;
    TNode<Context> tmp3;
    TNode<Object> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 441);
    TNode<IntPtrT> tmp5;
    USE(tmp5);
    tmp5 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 0);
    TNode<BoolT> tmp6;
    USE(tmp6);
    tmp6 = CodeStubAssembler(state_).IntPtrGreaterThan(TNode<IntPtrT>{tmp2}, TNode<IntPtrT>{tmp5});
    ca_.Branch(tmp6, &block1, &block2, tmp0, tmp1, tmp2, tmp3, tmp4);
  }

  if (block1.is_used()) {
    TNode<RawPtrT> tmp7;
    TNode<RawPtrT> tmp8;
    TNode<IntPtrT> tmp9;
    TNode<Context> tmp10;
    TNode<Object> tmp11;
    ca_.Bind(&block1, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11);
    TNode<IntPtrT> tmp12;
    USE(tmp12);
    tmp12 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 0);
    TNode<Object> tmp13;
    USE(tmp13);
    tmp13 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{tmp7}, TNode<RawPtrT>{tmp8}, TNode<IntPtrT>{tmp9}}, TNode<IntPtrT>{tmp12});
    ca_.Goto(&block4, tmp7, tmp8, tmp9, tmp10, tmp11, tmp13);
  }

  if (block2.is_used()) {
    TNode<RawPtrT> tmp14;
    TNode<RawPtrT> tmp15;
    TNode<IntPtrT> tmp16;
    TNode<Context> tmp17;
    TNode<Object> tmp18;
    ca_.Bind(&block2, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18);
    TNode<Oddball> tmp19;
    USE(tmp19);
    tmp19 = Undefined_64(state_);
    ca_.Goto(&block3, tmp14, tmp15, tmp16, tmp17, tmp18, tmp19);
  }

  if (block4.is_used()) {
    TNode<RawPtrT> tmp20;
    TNode<RawPtrT> tmp21;
    TNode<IntPtrT> tmp22;
    TNode<Context> tmp23;
    TNode<Object> tmp24;
    TNode<Object> tmp25;
    ca_.Bind(&block4, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25);
    ca_.Goto(&block3, tmp20, tmp21, tmp22, tmp23, tmp24, tmp25);
  }

  if (block3.is_used()) {
    TNode<RawPtrT> tmp26;
    TNode<RawPtrT> tmp27;
    TNode<IntPtrT> tmp28;
    TNode<Context> tmp29;
    TNode<Object> tmp30;
    TNode<Object> tmp31;
    ca_.Bind(&block3, &tmp26, &tmp27, &tmp28, &tmp29, &tmp30, &tmp31);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 443);
    TNode<IntPtrT> tmp32;
    USE(tmp32);
    tmp32 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 1);
    TNode<BoolT> tmp33;
    USE(tmp33);
    tmp33 = CodeStubAssembler(state_).IntPtrGreaterThan(TNode<IntPtrT>{tmp28}, TNode<IntPtrT>{tmp32});
    ca_.Branch(tmp33, &block5, &block6, tmp26, tmp27, tmp28, tmp29, tmp30, tmp31);
  }

  if (block5.is_used()) {
    TNode<RawPtrT> tmp34;
    TNode<RawPtrT> tmp35;
    TNode<IntPtrT> tmp36;
    TNode<Context> tmp37;
    TNode<Object> tmp38;
    TNode<Object> tmp39;
    ca_.Bind(&block5, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39);
    TNode<IntPtrT> tmp40;
    USE(tmp40);
    tmp40 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 1);
    TNode<Object> tmp41;
    USE(tmp41);
    tmp41 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{tmp34}, TNode<RawPtrT>{tmp35}, TNode<IntPtrT>{tmp36}}, TNode<IntPtrT>{tmp40});
    ca_.Goto(&block8, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39, tmp41);
  }

  if (block6.is_used()) {
    TNode<RawPtrT> tmp42;
    TNode<RawPtrT> tmp43;
    TNode<IntPtrT> tmp44;
    TNode<Context> tmp45;
    TNode<Object> tmp46;
    TNode<Object> tmp47;
    ca_.Bind(&block6, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47);
    TNode<Oddball> tmp48;
    USE(tmp48);
    tmp48 = Undefined_64(state_);
    ca_.Goto(&block7, tmp42, tmp43, tmp44, tmp45, tmp46, tmp47, tmp48);
  }

  if (block8.is_used()) {
    TNode<RawPtrT> tmp49;
    TNode<RawPtrT> tmp50;
    TNode<IntPtrT> tmp51;
    TNode<Context> tmp52;
    TNode<Object> tmp53;
    TNode<Object> tmp54;
    TNode<Object> tmp55;
    ca_.Bind(&block8, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55);
    ca_.Goto(&block7, tmp49, tmp50, tmp51, tmp52, tmp53, tmp54, tmp55);
  }

  if (block7.is_used()) {
    TNode<RawPtrT> tmp56;
    TNode<RawPtrT> tmp57;
    TNode<IntPtrT> tmp58;
    TNode<Context> tmp59;
    TNode<Object> tmp60;
    TNode<Object> tmp61;
    TNode<Object> tmp62;
    ca_.Bind(&block7, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 442);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 445);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 444);
    TNode<Numeric> tmp63;
    USE(tmp63);
    tmp63 = DataViewGet_286(state_, TNode<Context>{tmp59}, TNode<Object>{tmp60}, TNode<Object>{tmp61}, TNode<Object>{tmp62}, INT16_ELEMENTS);
    arguments.PopAndReturn(tmp63);
  }
}

TF_BUILTIN(DataViewPrototypeGetUint32, CodeStubAssembler) {
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
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, torque_arguments.frame, torque_arguments.base, torque_arguments.length, parameter0, parameter1);

  if (block0.is_used()) {
    TNode<RawPtrT> tmp0;
    TNode<RawPtrT> tmp1;
    TNode<IntPtrT> tmp2;
    TNode<Context> tmp3;
    TNode<Object> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 450);
    TNode<IntPtrT> tmp5;
    USE(tmp5);
    tmp5 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 0);
    TNode<BoolT> tmp6;
    USE(tmp6);
    tmp6 = CodeStubAssembler(state_).IntPtrGreaterThan(TNode<IntPtrT>{tmp2}, TNode<IntPtrT>{tmp5});
    ca_.Branch(tmp6, &block1, &block2, tmp0, tmp1, tmp2, tmp3, tmp4);
  }

  if (block1.is_used()) {
    TNode<RawPtrT> tmp7;
    TNode<RawPtrT> tmp8;
    TNode<IntPtrT> tmp9;
    TNode<Context> tmp10;
    TNode<Object> tmp11;
    ca_.Bind(&block1, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11);
    TNode<IntPtrT> tmp12;
    USE(tmp12);
    tmp12 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 0);
    TNode<Object> tmp13;
    USE(tmp13);
    tmp13 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{tmp7}, TNode<RawPtrT>{tmp8}, TNode<IntPtrT>{tmp9}}, TNode<IntPtrT>{tmp12});
    ca_.Goto(&block4, tmp7, tmp8, tmp9, tmp10, tmp11, tmp13);
  }

  if (block2.is_used()) {
    TNode<RawPtrT> tmp14;
    TNode<RawPtrT> tmp15;
    TNode<IntPtrT> tmp16;
    TNode<Context> tmp17;
    TNode<Object> tmp18;
    ca_.Bind(&block2, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18);
    TNode<Oddball> tmp19;
    USE(tmp19);
    tmp19 = Undefined_64(state_);
    ca_.Goto(&block3, tmp14, tmp15, tmp16, tmp17, tmp18, tmp19);
  }

  if (block4.is_used()) {
    TNode<RawPtrT> tmp20;
    TNode<RawPtrT> tmp21;
    TNode<IntPtrT> tmp22;
    TNode<Context> tmp23;
    TNode<Object> tmp24;
    TNode<Object> tmp25;
    ca_.Bind(&block4, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25);
    ca_.Goto(&block3, tmp20, tmp21, tmp22, tmp23, tmp24, tmp25);
  }

  if (block3.is_used()) {
    TNode<RawPtrT> tmp26;
    TNode<RawPtrT> tmp27;
    TNode<IntPtrT> tmp28;
    TNode<Context> tmp29;
    TNode<Object> tmp30;
    TNode<Object> tmp31;
    ca_.Bind(&block3, &tmp26, &tmp27, &tmp28, &tmp29, &tmp30, &tmp31);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 452);
    TNode<IntPtrT> tmp32;
    USE(tmp32);
    tmp32 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 1);
    TNode<BoolT> tmp33;
    USE(tmp33);
    tmp33 = CodeStubAssembler(state_).IntPtrGreaterThan(TNode<IntPtrT>{tmp28}, TNode<IntPtrT>{tmp32});
    ca_.Branch(tmp33, &block5, &block6, tmp26, tmp27, tmp28, tmp29, tmp30, tmp31);
  }

  if (block5.is_used()) {
    TNode<RawPtrT> tmp34;
    TNode<RawPtrT> tmp35;
    TNode<IntPtrT> tmp36;
    TNode<Context> tmp37;
    TNode<Object> tmp38;
    TNode<Object> tmp39;
    ca_.Bind(&block5, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39);
    TNode<IntPtrT> tmp40;
    USE(tmp40);
    tmp40 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 1);
    TNode<Object> tmp41;
    USE(tmp41);
    tmp41 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{tmp34}, TNode<RawPtrT>{tmp35}, TNode<IntPtrT>{tmp36}}, TNode<IntPtrT>{tmp40});
    ca_.Goto(&block8, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39, tmp41);
  }

  if (block6.is_used()) {
    TNode<RawPtrT> tmp42;
    TNode<RawPtrT> tmp43;
    TNode<IntPtrT> tmp44;
    TNode<Context> tmp45;
    TNode<Object> tmp46;
    TNode<Object> tmp47;
    ca_.Bind(&block6, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47);
    TNode<Oddball> tmp48;
    USE(tmp48);
    tmp48 = Undefined_64(state_);
    ca_.Goto(&block7, tmp42, tmp43, tmp44, tmp45, tmp46, tmp47, tmp48);
  }

  if (block8.is_used()) {
    TNode<RawPtrT> tmp49;
    TNode<RawPtrT> tmp50;
    TNode<IntPtrT> tmp51;
    TNode<Context> tmp52;
    TNode<Object> tmp53;
    TNode<Object> tmp54;
    TNode<Object> tmp55;
    ca_.Bind(&block8, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55);
    ca_.Goto(&block7, tmp49, tmp50, tmp51, tmp52, tmp53, tmp54, tmp55);
  }

  if (block7.is_used()) {
    TNode<RawPtrT> tmp56;
    TNode<RawPtrT> tmp57;
    TNode<IntPtrT> tmp58;
    TNode<Context> tmp59;
    TNode<Object> tmp60;
    TNode<Object> tmp61;
    TNode<Object> tmp62;
    ca_.Bind(&block7, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 451);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 454);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 453);
    TNode<Numeric> tmp63;
    USE(tmp63);
    tmp63 = DataViewGet_286(state_, TNode<Context>{tmp59}, TNode<Object>{tmp60}, TNode<Object>{tmp61}, TNode<Object>{tmp62}, UINT32_ELEMENTS);
    arguments.PopAndReturn(tmp63);
  }
}

TF_BUILTIN(DataViewPrototypeGetInt32, CodeStubAssembler) {
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
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, torque_arguments.frame, torque_arguments.base, torque_arguments.length, parameter0, parameter1);

  if (block0.is_used()) {
    TNode<RawPtrT> tmp0;
    TNode<RawPtrT> tmp1;
    TNode<IntPtrT> tmp2;
    TNode<Context> tmp3;
    TNode<Object> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 459);
    TNode<IntPtrT> tmp5;
    USE(tmp5);
    tmp5 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 0);
    TNode<BoolT> tmp6;
    USE(tmp6);
    tmp6 = CodeStubAssembler(state_).IntPtrGreaterThan(TNode<IntPtrT>{tmp2}, TNode<IntPtrT>{tmp5});
    ca_.Branch(tmp6, &block1, &block2, tmp0, tmp1, tmp2, tmp3, tmp4);
  }

  if (block1.is_used()) {
    TNode<RawPtrT> tmp7;
    TNode<RawPtrT> tmp8;
    TNode<IntPtrT> tmp9;
    TNode<Context> tmp10;
    TNode<Object> tmp11;
    ca_.Bind(&block1, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11);
    TNode<IntPtrT> tmp12;
    USE(tmp12);
    tmp12 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 0);
    TNode<Object> tmp13;
    USE(tmp13);
    tmp13 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{tmp7}, TNode<RawPtrT>{tmp8}, TNode<IntPtrT>{tmp9}}, TNode<IntPtrT>{tmp12});
    ca_.Goto(&block4, tmp7, tmp8, tmp9, tmp10, tmp11, tmp13);
  }

  if (block2.is_used()) {
    TNode<RawPtrT> tmp14;
    TNode<RawPtrT> tmp15;
    TNode<IntPtrT> tmp16;
    TNode<Context> tmp17;
    TNode<Object> tmp18;
    ca_.Bind(&block2, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18);
    TNode<Oddball> tmp19;
    USE(tmp19);
    tmp19 = Undefined_64(state_);
    ca_.Goto(&block3, tmp14, tmp15, tmp16, tmp17, tmp18, tmp19);
  }

  if (block4.is_used()) {
    TNode<RawPtrT> tmp20;
    TNode<RawPtrT> tmp21;
    TNode<IntPtrT> tmp22;
    TNode<Context> tmp23;
    TNode<Object> tmp24;
    TNode<Object> tmp25;
    ca_.Bind(&block4, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25);
    ca_.Goto(&block3, tmp20, tmp21, tmp22, tmp23, tmp24, tmp25);
  }

  if (block3.is_used()) {
    TNode<RawPtrT> tmp26;
    TNode<RawPtrT> tmp27;
    TNode<IntPtrT> tmp28;
    TNode<Context> tmp29;
    TNode<Object> tmp30;
    TNode<Object> tmp31;
    ca_.Bind(&block3, &tmp26, &tmp27, &tmp28, &tmp29, &tmp30, &tmp31);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 461);
    TNode<IntPtrT> tmp32;
    USE(tmp32);
    tmp32 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 1);
    TNode<BoolT> tmp33;
    USE(tmp33);
    tmp33 = CodeStubAssembler(state_).IntPtrGreaterThan(TNode<IntPtrT>{tmp28}, TNode<IntPtrT>{tmp32});
    ca_.Branch(tmp33, &block5, &block6, tmp26, tmp27, tmp28, tmp29, tmp30, tmp31);
  }

  if (block5.is_used()) {
    TNode<RawPtrT> tmp34;
    TNode<RawPtrT> tmp35;
    TNode<IntPtrT> tmp36;
    TNode<Context> tmp37;
    TNode<Object> tmp38;
    TNode<Object> tmp39;
    ca_.Bind(&block5, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39);
    TNode<IntPtrT> tmp40;
    USE(tmp40);
    tmp40 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 1);
    TNode<Object> tmp41;
    USE(tmp41);
    tmp41 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{tmp34}, TNode<RawPtrT>{tmp35}, TNode<IntPtrT>{tmp36}}, TNode<IntPtrT>{tmp40});
    ca_.Goto(&block8, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39, tmp41);
  }

  if (block6.is_used()) {
    TNode<RawPtrT> tmp42;
    TNode<RawPtrT> tmp43;
    TNode<IntPtrT> tmp44;
    TNode<Context> tmp45;
    TNode<Object> tmp46;
    TNode<Object> tmp47;
    ca_.Bind(&block6, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47);
    TNode<Oddball> tmp48;
    USE(tmp48);
    tmp48 = Undefined_64(state_);
    ca_.Goto(&block7, tmp42, tmp43, tmp44, tmp45, tmp46, tmp47, tmp48);
  }

  if (block8.is_used()) {
    TNode<RawPtrT> tmp49;
    TNode<RawPtrT> tmp50;
    TNode<IntPtrT> tmp51;
    TNode<Context> tmp52;
    TNode<Object> tmp53;
    TNode<Object> tmp54;
    TNode<Object> tmp55;
    ca_.Bind(&block8, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55);
    ca_.Goto(&block7, tmp49, tmp50, tmp51, tmp52, tmp53, tmp54, tmp55);
  }

  if (block7.is_used()) {
    TNode<RawPtrT> tmp56;
    TNode<RawPtrT> tmp57;
    TNode<IntPtrT> tmp58;
    TNode<Context> tmp59;
    TNode<Object> tmp60;
    TNode<Object> tmp61;
    TNode<Object> tmp62;
    ca_.Bind(&block7, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 460);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 463);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 462);
    TNode<Numeric> tmp63;
    USE(tmp63);
    tmp63 = DataViewGet_286(state_, TNode<Context>{tmp59}, TNode<Object>{tmp60}, TNode<Object>{tmp61}, TNode<Object>{tmp62}, INT32_ELEMENTS);
    arguments.PopAndReturn(tmp63);
  }
}

TF_BUILTIN(DataViewPrototypeGetFloat32, CodeStubAssembler) {
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
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, torque_arguments.frame, torque_arguments.base, torque_arguments.length, parameter0, parameter1);

  if (block0.is_used()) {
    TNode<RawPtrT> tmp0;
    TNode<RawPtrT> tmp1;
    TNode<IntPtrT> tmp2;
    TNode<Context> tmp3;
    TNode<Object> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 468);
    TNode<IntPtrT> tmp5;
    USE(tmp5);
    tmp5 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 0);
    TNode<BoolT> tmp6;
    USE(tmp6);
    tmp6 = CodeStubAssembler(state_).IntPtrGreaterThan(TNode<IntPtrT>{tmp2}, TNode<IntPtrT>{tmp5});
    ca_.Branch(tmp6, &block1, &block2, tmp0, tmp1, tmp2, tmp3, tmp4);
  }

  if (block1.is_used()) {
    TNode<RawPtrT> tmp7;
    TNode<RawPtrT> tmp8;
    TNode<IntPtrT> tmp9;
    TNode<Context> tmp10;
    TNode<Object> tmp11;
    ca_.Bind(&block1, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11);
    TNode<IntPtrT> tmp12;
    USE(tmp12);
    tmp12 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 0);
    TNode<Object> tmp13;
    USE(tmp13);
    tmp13 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{tmp7}, TNode<RawPtrT>{tmp8}, TNode<IntPtrT>{tmp9}}, TNode<IntPtrT>{tmp12});
    ca_.Goto(&block4, tmp7, tmp8, tmp9, tmp10, tmp11, tmp13);
  }

  if (block2.is_used()) {
    TNode<RawPtrT> tmp14;
    TNode<RawPtrT> tmp15;
    TNode<IntPtrT> tmp16;
    TNode<Context> tmp17;
    TNode<Object> tmp18;
    ca_.Bind(&block2, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18);
    TNode<Oddball> tmp19;
    USE(tmp19);
    tmp19 = Undefined_64(state_);
    ca_.Goto(&block3, tmp14, tmp15, tmp16, tmp17, tmp18, tmp19);
  }

  if (block4.is_used()) {
    TNode<RawPtrT> tmp20;
    TNode<RawPtrT> tmp21;
    TNode<IntPtrT> tmp22;
    TNode<Context> tmp23;
    TNode<Object> tmp24;
    TNode<Object> tmp25;
    ca_.Bind(&block4, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25);
    ca_.Goto(&block3, tmp20, tmp21, tmp22, tmp23, tmp24, tmp25);
  }

  if (block3.is_used()) {
    TNode<RawPtrT> tmp26;
    TNode<RawPtrT> tmp27;
    TNode<IntPtrT> tmp28;
    TNode<Context> tmp29;
    TNode<Object> tmp30;
    TNode<Object> tmp31;
    ca_.Bind(&block3, &tmp26, &tmp27, &tmp28, &tmp29, &tmp30, &tmp31);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 470);
    TNode<IntPtrT> tmp32;
    USE(tmp32);
    tmp32 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 1);
    TNode<BoolT> tmp33;
    USE(tmp33);
    tmp33 = CodeStubAssembler(state_).IntPtrGreaterThan(TNode<IntPtrT>{tmp28}, TNode<IntPtrT>{tmp32});
    ca_.Branch(tmp33, &block5, &block6, tmp26, tmp27, tmp28, tmp29, tmp30, tmp31);
  }

  if (block5.is_used()) {
    TNode<RawPtrT> tmp34;
    TNode<RawPtrT> tmp35;
    TNode<IntPtrT> tmp36;
    TNode<Context> tmp37;
    TNode<Object> tmp38;
    TNode<Object> tmp39;
    ca_.Bind(&block5, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39);
    TNode<IntPtrT> tmp40;
    USE(tmp40);
    tmp40 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 1);
    TNode<Object> tmp41;
    USE(tmp41);
    tmp41 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{tmp34}, TNode<RawPtrT>{tmp35}, TNode<IntPtrT>{tmp36}}, TNode<IntPtrT>{tmp40});
    ca_.Goto(&block8, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39, tmp41);
  }

  if (block6.is_used()) {
    TNode<RawPtrT> tmp42;
    TNode<RawPtrT> tmp43;
    TNode<IntPtrT> tmp44;
    TNode<Context> tmp45;
    TNode<Object> tmp46;
    TNode<Object> tmp47;
    ca_.Bind(&block6, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47);
    TNode<Oddball> tmp48;
    USE(tmp48);
    tmp48 = Undefined_64(state_);
    ca_.Goto(&block7, tmp42, tmp43, tmp44, tmp45, tmp46, tmp47, tmp48);
  }

  if (block8.is_used()) {
    TNode<RawPtrT> tmp49;
    TNode<RawPtrT> tmp50;
    TNode<IntPtrT> tmp51;
    TNode<Context> tmp52;
    TNode<Object> tmp53;
    TNode<Object> tmp54;
    TNode<Object> tmp55;
    ca_.Bind(&block8, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55);
    ca_.Goto(&block7, tmp49, tmp50, tmp51, tmp52, tmp53, tmp54, tmp55);
  }

  if (block7.is_used()) {
    TNode<RawPtrT> tmp56;
    TNode<RawPtrT> tmp57;
    TNode<IntPtrT> tmp58;
    TNode<Context> tmp59;
    TNode<Object> tmp60;
    TNode<Object> tmp61;
    TNode<Object> tmp62;
    ca_.Bind(&block7, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 469);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 472);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 471);
    TNode<Numeric> tmp63;
    USE(tmp63);
    tmp63 = DataViewGet_286(state_, TNode<Context>{tmp59}, TNode<Object>{tmp60}, TNode<Object>{tmp61}, TNode<Object>{tmp62}, FLOAT32_ELEMENTS);
    arguments.PopAndReturn(tmp63);
  }
}

TF_BUILTIN(DataViewPrototypeGetFloat64, CodeStubAssembler) {
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
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, torque_arguments.frame, torque_arguments.base, torque_arguments.length, parameter0, parameter1);

  if (block0.is_used()) {
    TNode<RawPtrT> tmp0;
    TNode<RawPtrT> tmp1;
    TNode<IntPtrT> tmp2;
    TNode<Context> tmp3;
    TNode<Object> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 477);
    TNode<IntPtrT> tmp5;
    USE(tmp5);
    tmp5 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 0);
    TNode<BoolT> tmp6;
    USE(tmp6);
    tmp6 = CodeStubAssembler(state_).IntPtrGreaterThan(TNode<IntPtrT>{tmp2}, TNode<IntPtrT>{tmp5});
    ca_.Branch(tmp6, &block1, &block2, tmp0, tmp1, tmp2, tmp3, tmp4);
  }

  if (block1.is_used()) {
    TNode<RawPtrT> tmp7;
    TNode<RawPtrT> tmp8;
    TNode<IntPtrT> tmp9;
    TNode<Context> tmp10;
    TNode<Object> tmp11;
    ca_.Bind(&block1, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11);
    TNode<IntPtrT> tmp12;
    USE(tmp12);
    tmp12 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 0);
    TNode<Object> tmp13;
    USE(tmp13);
    tmp13 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{tmp7}, TNode<RawPtrT>{tmp8}, TNode<IntPtrT>{tmp9}}, TNode<IntPtrT>{tmp12});
    ca_.Goto(&block4, tmp7, tmp8, tmp9, tmp10, tmp11, tmp13);
  }

  if (block2.is_used()) {
    TNode<RawPtrT> tmp14;
    TNode<RawPtrT> tmp15;
    TNode<IntPtrT> tmp16;
    TNode<Context> tmp17;
    TNode<Object> tmp18;
    ca_.Bind(&block2, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18);
    TNode<Oddball> tmp19;
    USE(tmp19);
    tmp19 = Undefined_64(state_);
    ca_.Goto(&block3, tmp14, tmp15, tmp16, tmp17, tmp18, tmp19);
  }

  if (block4.is_used()) {
    TNode<RawPtrT> tmp20;
    TNode<RawPtrT> tmp21;
    TNode<IntPtrT> tmp22;
    TNode<Context> tmp23;
    TNode<Object> tmp24;
    TNode<Object> tmp25;
    ca_.Bind(&block4, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25);
    ca_.Goto(&block3, tmp20, tmp21, tmp22, tmp23, tmp24, tmp25);
  }

  if (block3.is_used()) {
    TNode<RawPtrT> tmp26;
    TNode<RawPtrT> tmp27;
    TNode<IntPtrT> tmp28;
    TNode<Context> tmp29;
    TNode<Object> tmp30;
    TNode<Object> tmp31;
    ca_.Bind(&block3, &tmp26, &tmp27, &tmp28, &tmp29, &tmp30, &tmp31);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 479);
    TNode<IntPtrT> tmp32;
    USE(tmp32);
    tmp32 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 1);
    TNode<BoolT> tmp33;
    USE(tmp33);
    tmp33 = CodeStubAssembler(state_).IntPtrGreaterThan(TNode<IntPtrT>{tmp28}, TNode<IntPtrT>{tmp32});
    ca_.Branch(tmp33, &block5, &block6, tmp26, tmp27, tmp28, tmp29, tmp30, tmp31);
  }

  if (block5.is_used()) {
    TNode<RawPtrT> tmp34;
    TNode<RawPtrT> tmp35;
    TNode<IntPtrT> tmp36;
    TNode<Context> tmp37;
    TNode<Object> tmp38;
    TNode<Object> tmp39;
    ca_.Bind(&block5, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39);
    TNode<IntPtrT> tmp40;
    USE(tmp40);
    tmp40 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 1);
    TNode<Object> tmp41;
    USE(tmp41);
    tmp41 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{tmp34}, TNode<RawPtrT>{tmp35}, TNode<IntPtrT>{tmp36}}, TNode<IntPtrT>{tmp40});
    ca_.Goto(&block8, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39, tmp41);
  }

  if (block6.is_used()) {
    TNode<RawPtrT> tmp42;
    TNode<RawPtrT> tmp43;
    TNode<IntPtrT> tmp44;
    TNode<Context> tmp45;
    TNode<Object> tmp46;
    TNode<Object> tmp47;
    ca_.Bind(&block6, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47);
    TNode<Oddball> tmp48;
    USE(tmp48);
    tmp48 = Undefined_64(state_);
    ca_.Goto(&block7, tmp42, tmp43, tmp44, tmp45, tmp46, tmp47, tmp48);
  }

  if (block8.is_used()) {
    TNode<RawPtrT> tmp49;
    TNode<RawPtrT> tmp50;
    TNode<IntPtrT> tmp51;
    TNode<Context> tmp52;
    TNode<Object> tmp53;
    TNode<Object> tmp54;
    TNode<Object> tmp55;
    ca_.Bind(&block8, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55);
    ca_.Goto(&block7, tmp49, tmp50, tmp51, tmp52, tmp53, tmp54, tmp55);
  }

  if (block7.is_used()) {
    TNode<RawPtrT> tmp56;
    TNode<RawPtrT> tmp57;
    TNode<IntPtrT> tmp58;
    TNode<Context> tmp59;
    TNode<Object> tmp60;
    TNode<Object> tmp61;
    TNode<Object> tmp62;
    ca_.Bind(&block7, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 478);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 481);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 480);
    TNode<Numeric> tmp63;
    USE(tmp63);
    tmp63 = DataViewGet_286(state_, TNode<Context>{tmp59}, TNode<Object>{tmp60}, TNode<Object>{tmp61}, TNode<Object>{tmp62}, FLOAT64_ELEMENTS);
    arguments.PopAndReturn(tmp63);
  }
}

TF_BUILTIN(DataViewPrototypeGetBigUint64, CodeStubAssembler) {
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
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, torque_arguments.frame, torque_arguments.base, torque_arguments.length, parameter0, parameter1);

  if (block0.is_used()) {
    TNode<RawPtrT> tmp0;
    TNode<RawPtrT> tmp1;
    TNode<IntPtrT> tmp2;
    TNode<Context> tmp3;
    TNode<Object> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 486);
    TNode<IntPtrT> tmp5;
    USE(tmp5);
    tmp5 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 0);
    TNode<BoolT> tmp6;
    USE(tmp6);
    tmp6 = CodeStubAssembler(state_).IntPtrGreaterThan(TNode<IntPtrT>{tmp2}, TNode<IntPtrT>{tmp5});
    ca_.Branch(tmp6, &block1, &block2, tmp0, tmp1, tmp2, tmp3, tmp4);
  }

  if (block1.is_used()) {
    TNode<RawPtrT> tmp7;
    TNode<RawPtrT> tmp8;
    TNode<IntPtrT> tmp9;
    TNode<Context> tmp10;
    TNode<Object> tmp11;
    ca_.Bind(&block1, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11);
    TNode<IntPtrT> tmp12;
    USE(tmp12);
    tmp12 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 0);
    TNode<Object> tmp13;
    USE(tmp13);
    tmp13 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{tmp7}, TNode<RawPtrT>{tmp8}, TNode<IntPtrT>{tmp9}}, TNode<IntPtrT>{tmp12});
    ca_.Goto(&block4, tmp7, tmp8, tmp9, tmp10, tmp11, tmp13);
  }

  if (block2.is_used()) {
    TNode<RawPtrT> tmp14;
    TNode<RawPtrT> tmp15;
    TNode<IntPtrT> tmp16;
    TNode<Context> tmp17;
    TNode<Object> tmp18;
    ca_.Bind(&block2, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18);
    TNode<Oddball> tmp19;
    USE(tmp19);
    tmp19 = Undefined_64(state_);
    ca_.Goto(&block3, tmp14, tmp15, tmp16, tmp17, tmp18, tmp19);
  }

  if (block4.is_used()) {
    TNode<RawPtrT> tmp20;
    TNode<RawPtrT> tmp21;
    TNode<IntPtrT> tmp22;
    TNode<Context> tmp23;
    TNode<Object> tmp24;
    TNode<Object> tmp25;
    ca_.Bind(&block4, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25);
    ca_.Goto(&block3, tmp20, tmp21, tmp22, tmp23, tmp24, tmp25);
  }

  if (block3.is_used()) {
    TNode<RawPtrT> tmp26;
    TNode<RawPtrT> tmp27;
    TNode<IntPtrT> tmp28;
    TNode<Context> tmp29;
    TNode<Object> tmp30;
    TNode<Object> tmp31;
    ca_.Bind(&block3, &tmp26, &tmp27, &tmp28, &tmp29, &tmp30, &tmp31);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 488);
    TNode<IntPtrT> tmp32;
    USE(tmp32);
    tmp32 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 1);
    TNode<BoolT> tmp33;
    USE(tmp33);
    tmp33 = CodeStubAssembler(state_).IntPtrGreaterThan(TNode<IntPtrT>{tmp28}, TNode<IntPtrT>{tmp32});
    ca_.Branch(tmp33, &block5, &block6, tmp26, tmp27, tmp28, tmp29, tmp30, tmp31);
  }

  if (block5.is_used()) {
    TNode<RawPtrT> tmp34;
    TNode<RawPtrT> tmp35;
    TNode<IntPtrT> tmp36;
    TNode<Context> tmp37;
    TNode<Object> tmp38;
    TNode<Object> tmp39;
    ca_.Bind(&block5, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39);
    TNode<IntPtrT> tmp40;
    USE(tmp40);
    tmp40 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 1);
    TNode<Object> tmp41;
    USE(tmp41);
    tmp41 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{tmp34}, TNode<RawPtrT>{tmp35}, TNode<IntPtrT>{tmp36}}, TNode<IntPtrT>{tmp40});
    ca_.Goto(&block8, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39, tmp41);
  }

  if (block6.is_used()) {
    TNode<RawPtrT> tmp42;
    TNode<RawPtrT> tmp43;
    TNode<IntPtrT> tmp44;
    TNode<Context> tmp45;
    TNode<Object> tmp46;
    TNode<Object> tmp47;
    ca_.Bind(&block6, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47);
    TNode<Oddball> tmp48;
    USE(tmp48);
    tmp48 = Undefined_64(state_);
    ca_.Goto(&block7, tmp42, tmp43, tmp44, tmp45, tmp46, tmp47, tmp48);
  }

  if (block8.is_used()) {
    TNode<RawPtrT> tmp49;
    TNode<RawPtrT> tmp50;
    TNode<IntPtrT> tmp51;
    TNode<Context> tmp52;
    TNode<Object> tmp53;
    TNode<Object> tmp54;
    TNode<Object> tmp55;
    ca_.Bind(&block8, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55);
    ca_.Goto(&block7, tmp49, tmp50, tmp51, tmp52, tmp53, tmp54, tmp55);
  }

  if (block7.is_used()) {
    TNode<RawPtrT> tmp56;
    TNode<RawPtrT> tmp57;
    TNode<IntPtrT> tmp58;
    TNode<Context> tmp59;
    TNode<Object> tmp60;
    TNode<Object> tmp61;
    TNode<Object> tmp62;
    ca_.Bind(&block7, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 487);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 490);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 489);
    TNode<Numeric> tmp63;
    USE(tmp63);
    tmp63 = DataViewGet_286(state_, TNode<Context>{tmp59}, TNode<Object>{tmp60}, TNode<Object>{tmp61}, TNode<Object>{tmp62}, BIGUINT64_ELEMENTS);
    arguments.PopAndReturn(tmp63);
  }
}

TF_BUILTIN(DataViewPrototypeGetBigInt64, CodeStubAssembler) {
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
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, torque_arguments.frame, torque_arguments.base, torque_arguments.length, parameter0, parameter1);

  if (block0.is_used()) {
    TNode<RawPtrT> tmp0;
    TNode<RawPtrT> tmp1;
    TNode<IntPtrT> tmp2;
    TNode<Context> tmp3;
    TNode<Object> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 495);
    TNode<IntPtrT> tmp5;
    USE(tmp5);
    tmp5 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 0);
    TNode<BoolT> tmp6;
    USE(tmp6);
    tmp6 = CodeStubAssembler(state_).IntPtrGreaterThan(TNode<IntPtrT>{tmp2}, TNode<IntPtrT>{tmp5});
    ca_.Branch(tmp6, &block1, &block2, tmp0, tmp1, tmp2, tmp3, tmp4);
  }

  if (block1.is_used()) {
    TNode<RawPtrT> tmp7;
    TNode<RawPtrT> tmp8;
    TNode<IntPtrT> tmp9;
    TNode<Context> tmp10;
    TNode<Object> tmp11;
    ca_.Bind(&block1, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11);
    TNode<IntPtrT> tmp12;
    USE(tmp12);
    tmp12 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 0);
    TNode<Object> tmp13;
    USE(tmp13);
    tmp13 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{tmp7}, TNode<RawPtrT>{tmp8}, TNode<IntPtrT>{tmp9}}, TNode<IntPtrT>{tmp12});
    ca_.Goto(&block4, tmp7, tmp8, tmp9, tmp10, tmp11, tmp13);
  }

  if (block2.is_used()) {
    TNode<RawPtrT> tmp14;
    TNode<RawPtrT> tmp15;
    TNode<IntPtrT> tmp16;
    TNode<Context> tmp17;
    TNode<Object> tmp18;
    ca_.Bind(&block2, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18);
    TNode<Oddball> tmp19;
    USE(tmp19);
    tmp19 = Undefined_64(state_);
    ca_.Goto(&block3, tmp14, tmp15, tmp16, tmp17, tmp18, tmp19);
  }

  if (block4.is_used()) {
    TNode<RawPtrT> tmp20;
    TNode<RawPtrT> tmp21;
    TNode<IntPtrT> tmp22;
    TNode<Context> tmp23;
    TNode<Object> tmp24;
    TNode<Object> tmp25;
    ca_.Bind(&block4, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25);
    ca_.Goto(&block3, tmp20, tmp21, tmp22, tmp23, tmp24, tmp25);
  }

  if (block3.is_used()) {
    TNode<RawPtrT> tmp26;
    TNode<RawPtrT> tmp27;
    TNode<IntPtrT> tmp28;
    TNode<Context> tmp29;
    TNode<Object> tmp30;
    TNode<Object> tmp31;
    ca_.Bind(&block3, &tmp26, &tmp27, &tmp28, &tmp29, &tmp30, &tmp31);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 497);
    TNode<IntPtrT> tmp32;
    USE(tmp32);
    tmp32 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 1);
    TNode<BoolT> tmp33;
    USE(tmp33);
    tmp33 = CodeStubAssembler(state_).IntPtrGreaterThan(TNode<IntPtrT>{tmp28}, TNode<IntPtrT>{tmp32});
    ca_.Branch(tmp33, &block5, &block6, tmp26, tmp27, tmp28, tmp29, tmp30, tmp31);
  }

  if (block5.is_used()) {
    TNode<RawPtrT> tmp34;
    TNode<RawPtrT> tmp35;
    TNode<IntPtrT> tmp36;
    TNode<Context> tmp37;
    TNode<Object> tmp38;
    TNode<Object> tmp39;
    ca_.Bind(&block5, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39);
    TNode<IntPtrT> tmp40;
    USE(tmp40);
    tmp40 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 1);
    TNode<Object> tmp41;
    USE(tmp41);
    tmp41 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{tmp34}, TNode<RawPtrT>{tmp35}, TNode<IntPtrT>{tmp36}}, TNode<IntPtrT>{tmp40});
    ca_.Goto(&block8, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39, tmp41);
  }

  if (block6.is_used()) {
    TNode<RawPtrT> tmp42;
    TNode<RawPtrT> tmp43;
    TNode<IntPtrT> tmp44;
    TNode<Context> tmp45;
    TNode<Object> tmp46;
    TNode<Object> tmp47;
    ca_.Bind(&block6, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47);
    TNode<Oddball> tmp48;
    USE(tmp48);
    tmp48 = Undefined_64(state_);
    ca_.Goto(&block7, tmp42, tmp43, tmp44, tmp45, tmp46, tmp47, tmp48);
  }

  if (block8.is_used()) {
    TNode<RawPtrT> tmp49;
    TNode<RawPtrT> tmp50;
    TNode<IntPtrT> tmp51;
    TNode<Context> tmp52;
    TNode<Object> tmp53;
    TNode<Object> tmp54;
    TNode<Object> tmp55;
    ca_.Bind(&block8, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55);
    ca_.Goto(&block7, tmp49, tmp50, tmp51, tmp52, tmp53, tmp54, tmp55);
  }

  if (block7.is_used()) {
    TNode<RawPtrT> tmp56;
    TNode<RawPtrT> tmp57;
    TNode<IntPtrT> tmp58;
    TNode<Context> tmp59;
    TNode<Object> tmp60;
    TNode<Object> tmp61;
    TNode<Object> tmp62;
    ca_.Bind(&block7, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 496);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 499);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 498);
    TNode<Numeric> tmp63;
    USE(tmp63);
    tmp63 = DataViewGet_286(state_, TNode<Context>{tmp59}, TNode<Object>{tmp60}, TNode<Object>{tmp61}, TNode<Object>{tmp62}, BIGINT64_ELEMENTS);
    arguments.PopAndReturn(tmp63);
  }
}

void StoreDataView8_287(compiler::CodeAssemblerState* state_, TNode<JSArrayBuffer> p_buffer, TNode<UintPtrT> p_offset, TNode<Uint32T> p_value) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, Uint32T> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, Uint32T> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, Uint32T> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_buffer, p_offset, p_value);

  if (block0.is_used()) {
    TNode<JSArrayBuffer> tmp0;
    TNode<UintPtrT> tmp1;
    TNode<Uint32T> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 510);
    TNode<IntPtrT> tmp3 = ca_.IntPtrConstant(JSArrayBuffer::kBackingStoreOffset);
    USE(tmp3);
    TNode<RawPtrT>tmp4 = CodeStubAssembler(state_).LoadReference<RawPtrT>(CodeStubAssembler::Reference{tmp0, tmp3});
    TNode<Uint32T> tmp5;
    USE(tmp5);
    tmp5 = FromConstexpr8ATuint3217ATconstexpr_int31_163(state_, 0xFF);
    TNode<Uint32T> tmp6;
    USE(tmp6);
    tmp6 = CodeStubAssembler(state_).Word32And(TNode<Uint32T>{tmp2}, TNode<Uint32T>{tmp5});
    DataViewBuiltinsAssembler(state_).StoreWord8(TNode<RawPtrT>{tmp4}, TNode<UintPtrT>{tmp1}, TNode<Uint32T>{tmp6});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 509);
    ca_.Goto(&block1, tmp0, tmp1, tmp2);
  }

  if (block1.is_used()) {
    TNode<JSArrayBuffer> tmp7;
    TNode<UintPtrT> tmp8;
    TNode<Uint32T> tmp9;
    ca_.Bind(&block1, &tmp7, &tmp8, &tmp9);
    ca_.Goto(&block2, tmp7, tmp8, tmp9);
  }

    TNode<JSArrayBuffer> tmp10;
    TNode<UintPtrT> tmp11;
    TNode<Uint32T> tmp12;
    ca_.Bind(&block2, &tmp10, &tmp11, &tmp12);
}

void StoreDataView16_288(compiler::CodeAssemblerState* state_, TNode<JSArrayBuffer> p_buffer, TNode<UintPtrT> p_offset, TNode<Uint32T> p_value, TNode<BoolT> p_requestedLittleEndian) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, Uint32T, BoolT> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, Uint32T, BoolT, RawPtrT, Uint32T, Uint32T> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, Uint32T, BoolT, RawPtrT, Uint32T, Uint32T> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, Uint32T, BoolT, RawPtrT, Uint32T, Uint32T> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, Uint32T, BoolT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, Uint32T, BoolT> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_buffer, p_offset, p_value, p_requestedLittleEndian);

  if (block0.is_used()) {
    TNode<JSArrayBuffer> tmp0;
    TNode<UintPtrT> tmp1;
    TNode<Uint32T> tmp2;
    TNode<BoolT> tmp3;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 516);
    TNode<IntPtrT> tmp4 = ca_.IntPtrConstant(JSArrayBuffer::kBackingStoreOffset);
    USE(tmp4);
    TNode<RawPtrT>tmp5 = CodeStubAssembler(state_).LoadReference<RawPtrT>(CodeStubAssembler::Reference{tmp0, tmp4});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 518);
    TNode<Uint32T> tmp6;
    USE(tmp6);
    tmp6 = FromConstexpr8ATuint3217ATconstexpr_int31_163(state_, 0xFF);
    TNode<Uint32T> tmp7;
    USE(tmp7);
    tmp7 = CodeStubAssembler(state_).Word32And(TNode<Uint32T>{tmp2}, TNode<Uint32T>{tmp6});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 519);
    TNode<Uint32T> tmp8;
    USE(tmp8);
    tmp8 = FromConstexpr8ATuint3217ATconstexpr_int31_163(state_, 8);
    TNode<Uint32T> tmp9;
    USE(tmp9);
    tmp9 = CodeStubAssembler(state_).Word32Shr(TNode<Uint32T>{tmp2}, TNode<Uint32T>{tmp8});
    TNode<Uint32T> tmp10;
    USE(tmp10);
    tmp10 = FromConstexpr8ATuint3217ATconstexpr_int31_163(state_, 0xFF);
    TNode<Uint32T> tmp11;
    USE(tmp11);
    tmp11 = CodeStubAssembler(state_).Word32And(TNode<Uint32T>{tmp9}, TNode<Uint32T>{tmp10});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 521);
    ca_.Branch(tmp3, &block2, &block3, tmp0, tmp1, tmp2, tmp3, tmp5, tmp7, tmp11);
  }

  if (block2.is_used()) {
    TNode<JSArrayBuffer> tmp12;
    TNode<UintPtrT> tmp13;
    TNode<Uint32T> tmp14;
    TNode<BoolT> tmp15;
    TNode<RawPtrT> tmp16;
    TNode<Uint32T> tmp17;
    TNode<Uint32T> tmp18;
    ca_.Bind(&block2, &tmp12, &tmp13, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 522);
    DataViewBuiltinsAssembler(state_).StoreWord8(TNode<RawPtrT>{tmp16}, TNode<UintPtrT>{tmp13}, TNode<Uint32T>{tmp17});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 523);
    TNode<UintPtrT> tmp19;
    USE(tmp19);
    tmp19 = FromConstexpr9ATuintptr17ATconstexpr_int31_164(state_, 1);
    TNode<UintPtrT> tmp20;
    USE(tmp20);
    tmp20 = CodeStubAssembler(state_).UintPtrAdd(TNode<UintPtrT>{tmp13}, TNode<UintPtrT>{tmp19});
    DataViewBuiltinsAssembler(state_).StoreWord8(TNode<RawPtrT>{tmp16}, TNode<UintPtrT>{tmp20}, TNode<Uint32T>{tmp18});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 521);
    ca_.Goto(&block4, tmp12, tmp13, tmp14, tmp15, tmp16, tmp17, tmp18);
  }

  if (block3.is_used()) {
    TNode<JSArrayBuffer> tmp21;
    TNode<UintPtrT> tmp22;
    TNode<Uint32T> tmp23;
    TNode<BoolT> tmp24;
    TNode<RawPtrT> tmp25;
    TNode<Uint32T> tmp26;
    TNode<Uint32T> tmp27;
    ca_.Bind(&block3, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26, &tmp27);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 525);
    DataViewBuiltinsAssembler(state_).StoreWord8(TNode<RawPtrT>{tmp25}, TNode<UintPtrT>{tmp22}, TNode<Uint32T>{tmp27});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 526);
    TNode<UintPtrT> tmp28;
    USE(tmp28);
    tmp28 = FromConstexpr9ATuintptr17ATconstexpr_int31_164(state_, 1);
    TNode<UintPtrT> tmp29;
    USE(tmp29);
    tmp29 = CodeStubAssembler(state_).UintPtrAdd(TNode<UintPtrT>{tmp22}, TNode<UintPtrT>{tmp28});
    DataViewBuiltinsAssembler(state_).StoreWord8(TNode<RawPtrT>{tmp25}, TNode<UintPtrT>{tmp29}, TNode<Uint32T>{tmp26});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 521);
    ca_.Goto(&block4, tmp21, tmp22, tmp23, tmp24, tmp25, tmp26, tmp27);
  }

  if (block4.is_used()) {
    TNode<JSArrayBuffer> tmp30;
    TNode<UintPtrT> tmp31;
    TNode<Uint32T> tmp32;
    TNode<BoolT> tmp33;
    TNode<RawPtrT> tmp34;
    TNode<Uint32T> tmp35;
    TNode<Uint32T> tmp36;
    ca_.Bind(&block4, &tmp30, &tmp31, &tmp32, &tmp33, &tmp34, &tmp35, &tmp36);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 515);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 513);
    ca_.Goto(&block1, tmp30, tmp31, tmp32, tmp33);
  }

  if (block1.is_used()) {
    TNode<JSArrayBuffer> tmp37;
    TNode<UintPtrT> tmp38;
    TNode<Uint32T> tmp39;
    TNode<BoolT> tmp40;
    ca_.Bind(&block1, &tmp37, &tmp38, &tmp39, &tmp40);
    ca_.Goto(&block5, tmp37, tmp38, tmp39, tmp40);
  }

    TNode<JSArrayBuffer> tmp41;
    TNode<UintPtrT> tmp42;
    TNode<Uint32T> tmp43;
    TNode<BoolT> tmp44;
    ca_.Bind(&block5, &tmp41, &tmp42, &tmp43, &tmp44);
}

void StoreDataView32_289(compiler::CodeAssemblerState* state_, TNode<JSArrayBuffer> p_buffer, TNode<UintPtrT> p_offset, TNode<Uint32T> p_value, TNode<BoolT> p_requestedLittleEndian) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, Uint32T, BoolT> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, Uint32T, BoolT, RawPtrT, Uint32T, Uint32T, Uint32T, Uint32T> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, Uint32T, BoolT, RawPtrT, Uint32T, Uint32T, Uint32T, Uint32T> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, Uint32T, BoolT, RawPtrT, Uint32T, Uint32T, Uint32T, Uint32T> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, Uint32T, BoolT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, Uint32T, BoolT> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_buffer, p_offset, p_value, p_requestedLittleEndian);

  if (block0.is_used()) {
    TNode<JSArrayBuffer> tmp0;
    TNode<UintPtrT> tmp1;
    TNode<Uint32T> tmp2;
    TNode<BoolT> tmp3;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 533);
    TNode<IntPtrT> tmp4 = ca_.IntPtrConstant(JSArrayBuffer::kBackingStoreOffset);
    USE(tmp4);
    TNode<RawPtrT>tmp5 = CodeStubAssembler(state_).LoadReference<RawPtrT>(CodeStubAssembler::Reference{tmp0, tmp4});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 535);
    TNode<Uint32T> tmp6;
    USE(tmp6);
    tmp6 = FromConstexpr8ATuint3217ATconstexpr_int31_163(state_, 0xFF);
    TNode<Uint32T> tmp7;
    USE(tmp7);
    tmp7 = CodeStubAssembler(state_).Word32And(TNode<Uint32T>{tmp2}, TNode<Uint32T>{tmp6});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 536);
    TNode<Uint32T> tmp8;
    USE(tmp8);
    tmp8 = FromConstexpr8ATuint3217ATconstexpr_int31_163(state_, 8);
    TNode<Uint32T> tmp9;
    USE(tmp9);
    tmp9 = CodeStubAssembler(state_).Word32Shr(TNode<Uint32T>{tmp2}, TNode<Uint32T>{tmp8});
    TNode<Uint32T> tmp10;
    USE(tmp10);
    tmp10 = FromConstexpr8ATuint3217ATconstexpr_int31_163(state_, 0xFF);
    TNode<Uint32T> tmp11;
    USE(tmp11);
    tmp11 = CodeStubAssembler(state_).Word32And(TNode<Uint32T>{tmp9}, TNode<Uint32T>{tmp10});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 537);
    TNode<Uint32T> tmp12;
    USE(tmp12);
    tmp12 = FromConstexpr8ATuint3217ATconstexpr_int31_163(state_, 16);
    TNode<Uint32T> tmp13;
    USE(tmp13);
    tmp13 = CodeStubAssembler(state_).Word32Shr(TNode<Uint32T>{tmp2}, TNode<Uint32T>{tmp12});
    TNode<Uint32T> tmp14;
    USE(tmp14);
    tmp14 = FromConstexpr8ATuint3217ATconstexpr_int31_163(state_, 0xFF);
    TNode<Uint32T> tmp15;
    USE(tmp15);
    tmp15 = CodeStubAssembler(state_).Word32And(TNode<Uint32T>{tmp13}, TNode<Uint32T>{tmp14});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 538);
    TNode<Uint32T> tmp16;
    USE(tmp16);
    tmp16 = FromConstexpr8ATuint3217ATconstexpr_int31_163(state_, 24);
    TNode<Uint32T> tmp17;
    USE(tmp17);
    tmp17 = CodeStubAssembler(state_).Word32Shr(TNode<Uint32T>{tmp2}, TNode<Uint32T>{tmp16});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 540);
    ca_.Branch(tmp3, &block2, &block3, tmp0, tmp1, tmp2, tmp3, tmp5, tmp7, tmp11, tmp15, tmp17);
  }

  if (block2.is_used()) {
    TNode<JSArrayBuffer> tmp18;
    TNode<UintPtrT> tmp19;
    TNode<Uint32T> tmp20;
    TNode<BoolT> tmp21;
    TNode<RawPtrT> tmp22;
    TNode<Uint32T> tmp23;
    TNode<Uint32T> tmp24;
    TNode<Uint32T> tmp25;
    TNode<Uint32T> tmp26;
    ca_.Bind(&block2, &tmp18, &tmp19, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 541);
    DataViewBuiltinsAssembler(state_).StoreWord8(TNode<RawPtrT>{tmp22}, TNode<UintPtrT>{tmp19}, TNode<Uint32T>{tmp23});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 542);
    TNode<UintPtrT> tmp27;
    USE(tmp27);
    tmp27 = FromConstexpr9ATuintptr17ATconstexpr_int31_164(state_, 1);
    TNode<UintPtrT> tmp28;
    USE(tmp28);
    tmp28 = CodeStubAssembler(state_).UintPtrAdd(TNode<UintPtrT>{tmp19}, TNode<UintPtrT>{tmp27});
    DataViewBuiltinsAssembler(state_).StoreWord8(TNode<RawPtrT>{tmp22}, TNode<UintPtrT>{tmp28}, TNode<Uint32T>{tmp24});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 543);
    TNode<UintPtrT> tmp29;
    USE(tmp29);
    tmp29 = FromConstexpr9ATuintptr17ATconstexpr_int31_164(state_, 2);
    TNode<UintPtrT> tmp30;
    USE(tmp30);
    tmp30 = CodeStubAssembler(state_).UintPtrAdd(TNode<UintPtrT>{tmp19}, TNode<UintPtrT>{tmp29});
    DataViewBuiltinsAssembler(state_).StoreWord8(TNode<RawPtrT>{tmp22}, TNode<UintPtrT>{tmp30}, TNode<Uint32T>{tmp25});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 544);
    TNode<UintPtrT> tmp31;
    USE(tmp31);
    tmp31 = FromConstexpr9ATuintptr17ATconstexpr_int31_164(state_, 3);
    TNode<UintPtrT> tmp32;
    USE(tmp32);
    tmp32 = CodeStubAssembler(state_).UintPtrAdd(TNode<UintPtrT>{tmp19}, TNode<UintPtrT>{tmp31});
    DataViewBuiltinsAssembler(state_).StoreWord8(TNode<RawPtrT>{tmp22}, TNode<UintPtrT>{tmp32}, TNode<Uint32T>{tmp26});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 540);
    ca_.Goto(&block4, tmp18, tmp19, tmp20, tmp21, tmp22, tmp23, tmp24, tmp25, tmp26);
  }

  if (block3.is_used()) {
    TNode<JSArrayBuffer> tmp33;
    TNode<UintPtrT> tmp34;
    TNode<Uint32T> tmp35;
    TNode<BoolT> tmp36;
    TNode<RawPtrT> tmp37;
    TNode<Uint32T> tmp38;
    TNode<Uint32T> tmp39;
    TNode<Uint32T> tmp40;
    TNode<Uint32T> tmp41;
    ca_.Bind(&block3, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40, &tmp41);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 546);
    DataViewBuiltinsAssembler(state_).StoreWord8(TNode<RawPtrT>{tmp37}, TNode<UintPtrT>{tmp34}, TNode<Uint32T>{tmp41});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 547);
    TNode<UintPtrT> tmp42;
    USE(tmp42);
    tmp42 = FromConstexpr9ATuintptr17ATconstexpr_int31_164(state_, 1);
    TNode<UintPtrT> tmp43;
    USE(tmp43);
    tmp43 = CodeStubAssembler(state_).UintPtrAdd(TNode<UintPtrT>{tmp34}, TNode<UintPtrT>{tmp42});
    DataViewBuiltinsAssembler(state_).StoreWord8(TNode<RawPtrT>{tmp37}, TNode<UintPtrT>{tmp43}, TNode<Uint32T>{tmp40});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 548);
    TNode<UintPtrT> tmp44;
    USE(tmp44);
    tmp44 = FromConstexpr9ATuintptr17ATconstexpr_int31_164(state_, 2);
    TNode<UintPtrT> tmp45;
    USE(tmp45);
    tmp45 = CodeStubAssembler(state_).UintPtrAdd(TNode<UintPtrT>{tmp34}, TNode<UintPtrT>{tmp44});
    DataViewBuiltinsAssembler(state_).StoreWord8(TNode<RawPtrT>{tmp37}, TNode<UintPtrT>{tmp45}, TNode<Uint32T>{tmp39});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 549);
    TNode<UintPtrT> tmp46;
    USE(tmp46);
    tmp46 = FromConstexpr9ATuintptr17ATconstexpr_int31_164(state_, 3);
    TNode<UintPtrT> tmp47;
    USE(tmp47);
    tmp47 = CodeStubAssembler(state_).UintPtrAdd(TNode<UintPtrT>{tmp34}, TNode<UintPtrT>{tmp46});
    DataViewBuiltinsAssembler(state_).StoreWord8(TNode<RawPtrT>{tmp37}, TNode<UintPtrT>{tmp47}, TNode<Uint32T>{tmp38});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 540);
    ca_.Goto(&block4, tmp33, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39, tmp40, tmp41);
  }

  if (block4.is_used()) {
    TNode<JSArrayBuffer> tmp48;
    TNode<UintPtrT> tmp49;
    TNode<Uint32T> tmp50;
    TNode<BoolT> tmp51;
    TNode<RawPtrT> tmp52;
    TNode<Uint32T> tmp53;
    TNode<Uint32T> tmp54;
    TNode<Uint32T> tmp55;
    TNode<Uint32T> tmp56;
    ca_.Bind(&block4, &tmp48, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 532);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 530);
    ca_.Goto(&block1, tmp48, tmp49, tmp50, tmp51);
  }

  if (block1.is_used()) {
    TNode<JSArrayBuffer> tmp57;
    TNode<UintPtrT> tmp58;
    TNode<Uint32T> tmp59;
    TNode<BoolT> tmp60;
    ca_.Bind(&block1, &tmp57, &tmp58, &tmp59, &tmp60);
    ca_.Goto(&block5, tmp57, tmp58, tmp59, tmp60);
  }

    TNode<JSArrayBuffer> tmp61;
    TNode<UintPtrT> tmp62;
    TNode<Uint32T> tmp63;
    TNode<BoolT> tmp64;
    ca_.Bind(&block5, &tmp61, &tmp62, &tmp63, &tmp64);
}

void StoreDataView64_290(compiler::CodeAssemblerState* state_, TNode<JSArrayBuffer> p_buffer, TNode<UintPtrT> p_offset, TNode<Uint32T> p_lowWord, TNode<Uint32T> p_highWord, TNode<BoolT> p_requestedLittleEndian) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, Uint32T, Uint32T, BoolT> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, Uint32T, Uint32T, BoolT, RawPtrT, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, Uint32T, Uint32T, BoolT, RawPtrT, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, Uint32T, Uint32T, BoolT, RawPtrT, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, Uint32T, Uint32T, BoolT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, Uint32T, Uint32T, BoolT> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_buffer, p_offset, p_lowWord, p_highWord, p_requestedLittleEndian);

  if (block0.is_used()) {
    TNode<JSArrayBuffer> tmp0;
    TNode<UintPtrT> tmp1;
    TNode<Uint32T> tmp2;
    TNode<Uint32T> tmp3;
    TNode<BoolT> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 556);
    TNode<IntPtrT> tmp5 = ca_.IntPtrConstant(JSArrayBuffer::kBackingStoreOffset);
    USE(tmp5);
    TNode<RawPtrT>tmp6 = CodeStubAssembler(state_).LoadReference<RawPtrT>(CodeStubAssembler::Reference{tmp0, tmp5});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 558);
    TNode<Uint32T> tmp7;
    USE(tmp7);
    tmp7 = FromConstexpr8ATuint3217ATconstexpr_int31_163(state_, 0xFF);
    TNode<Uint32T> tmp8;
    USE(tmp8);
    tmp8 = CodeStubAssembler(state_).Word32And(TNode<Uint32T>{tmp2}, TNode<Uint32T>{tmp7});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 559);
    TNode<Uint32T> tmp9;
    USE(tmp9);
    tmp9 = FromConstexpr8ATuint3217ATconstexpr_int31_163(state_, 8);
    TNode<Uint32T> tmp10;
    USE(tmp10);
    tmp10 = CodeStubAssembler(state_).Word32Shr(TNode<Uint32T>{tmp2}, TNode<Uint32T>{tmp9});
    TNode<Uint32T> tmp11;
    USE(tmp11);
    tmp11 = FromConstexpr8ATuint3217ATconstexpr_int31_163(state_, 0xFF);
    TNode<Uint32T> tmp12;
    USE(tmp12);
    tmp12 = CodeStubAssembler(state_).Word32And(TNode<Uint32T>{tmp10}, TNode<Uint32T>{tmp11});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 560);
    TNode<Uint32T> tmp13;
    USE(tmp13);
    tmp13 = FromConstexpr8ATuint3217ATconstexpr_int31_163(state_, 16);
    TNode<Uint32T> tmp14;
    USE(tmp14);
    tmp14 = CodeStubAssembler(state_).Word32Shr(TNode<Uint32T>{tmp2}, TNode<Uint32T>{tmp13});
    TNode<Uint32T> tmp15;
    USE(tmp15);
    tmp15 = FromConstexpr8ATuint3217ATconstexpr_int31_163(state_, 0xFF);
    TNode<Uint32T> tmp16;
    USE(tmp16);
    tmp16 = CodeStubAssembler(state_).Word32And(TNode<Uint32T>{tmp14}, TNode<Uint32T>{tmp15});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 561);
    TNode<Uint32T> tmp17;
    USE(tmp17);
    tmp17 = FromConstexpr8ATuint3217ATconstexpr_int31_163(state_, 24);
    TNode<Uint32T> tmp18;
    USE(tmp18);
    tmp18 = CodeStubAssembler(state_).Word32Shr(TNode<Uint32T>{tmp2}, TNode<Uint32T>{tmp17});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 563);
    TNode<Uint32T> tmp19;
    USE(tmp19);
    tmp19 = FromConstexpr8ATuint3217ATconstexpr_int31_163(state_, 0xFF);
    TNode<Uint32T> tmp20;
    USE(tmp20);
    tmp20 = CodeStubAssembler(state_).Word32And(TNode<Uint32T>{tmp3}, TNode<Uint32T>{tmp19});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 564);
    TNode<Uint32T> tmp21;
    USE(tmp21);
    tmp21 = FromConstexpr8ATuint3217ATconstexpr_int31_163(state_, 8);
    TNode<Uint32T> tmp22;
    USE(tmp22);
    tmp22 = CodeStubAssembler(state_).Word32Shr(TNode<Uint32T>{tmp3}, TNode<Uint32T>{tmp21});
    TNode<Uint32T> tmp23;
    USE(tmp23);
    tmp23 = FromConstexpr8ATuint3217ATconstexpr_int31_163(state_, 0xFF);
    TNode<Uint32T> tmp24;
    USE(tmp24);
    tmp24 = CodeStubAssembler(state_).Word32And(TNode<Uint32T>{tmp22}, TNode<Uint32T>{tmp23});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 565);
    TNode<Uint32T> tmp25;
    USE(tmp25);
    tmp25 = FromConstexpr8ATuint3217ATconstexpr_int31_163(state_, 16);
    TNode<Uint32T> tmp26;
    USE(tmp26);
    tmp26 = CodeStubAssembler(state_).Word32Shr(TNode<Uint32T>{tmp3}, TNode<Uint32T>{tmp25});
    TNode<Uint32T> tmp27;
    USE(tmp27);
    tmp27 = FromConstexpr8ATuint3217ATconstexpr_int31_163(state_, 0xFF);
    TNode<Uint32T> tmp28;
    USE(tmp28);
    tmp28 = CodeStubAssembler(state_).Word32And(TNode<Uint32T>{tmp26}, TNode<Uint32T>{tmp27});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 566);
    TNode<Uint32T> tmp29;
    USE(tmp29);
    tmp29 = FromConstexpr8ATuint3217ATconstexpr_int31_163(state_, 24);
    TNode<Uint32T> tmp30;
    USE(tmp30);
    tmp30 = CodeStubAssembler(state_).Word32Shr(TNode<Uint32T>{tmp3}, TNode<Uint32T>{tmp29});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 568);
    ca_.Branch(tmp4, &block2, &block3, tmp0, tmp1, tmp2, tmp3, tmp4, tmp6, tmp8, tmp12, tmp16, tmp18, tmp20, tmp24, tmp28, tmp30);
  }

  if (block2.is_used()) {
    TNode<JSArrayBuffer> tmp31;
    TNode<UintPtrT> tmp32;
    TNode<Uint32T> tmp33;
    TNode<Uint32T> tmp34;
    TNode<BoolT> tmp35;
    TNode<RawPtrT> tmp36;
    TNode<Uint32T> tmp37;
    TNode<Uint32T> tmp38;
    TNode<Uint32T> tmp39;
    TNode<Uint32T> tmp40;
    TNode<Uint32T> tmp41;
    TNode<Uint32T> tmp42;
    TNode<Uint32T> tmp43;
    TNode<Uint32T> tmp44;
    ca_.Bind(&block2, &tmp31, &tmp32, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40, &tmp41, &tmp42, &tmp43, &tmp44);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 569);
    DataViewBuiltinsAssembler(state_).StoreWord8(TNode<RawPtrT>{tmp36}, TNode<UintPtrT>{tmp32}, TNode<Uint32T>{tmp37});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 570);
    TNode<UintPtrT> tmp45;
    USE(tmp45);
    tmp45 = FromConstexpr9ATuintptr17ATconstexpr_int31_164(state_, 1);
    TNode<UintPtrT> tmp46;
    USE(tmp46);
    tmp46 = CodeStubAssembler(state_).UintPtrAdd(TNode<UintPtrT>{tmp32}, TNode<UintPtrT>{tmp45});
    DataViewBuiltinsAssembler(state_).StoreWord8(TNode<RawPtrT>{tmp36}, TNode<UintPtrT>{tmp46}, TNode<Uint32T>{tmp38});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 571);
    TNode<UintPtrT> tmp47;
    USE(tmp47);
    tmp47 = FromConstexpr9ATuintptr17ATconstexpr_int31_164(state_, 2);
    TNode<UintPtrT> tmp48;
    USE(tmp48);
    tmp48 = CodeStubAssembler(state_).UintPtrAdd(TNode<UintPtrT>{tmp32}, TNode<UintPtrT>{tmp47});
    DataViewBuiltinsAssembler(state_).StoreWord8(TNode<RawPtrT>{tmp36}, TNode<UintPtrT>{tmp48}, TNode<Uint32T>{tmp39});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 572);
    TNode<UintPtrT> tmp49;
    USE(tmp49);
    tmp49 = FromConstexpr9ATuintptr17ATconstexpr_int31_164(state_, 3);
    TNode<UintPtrT> tmp50;
    USE(tmp50);
    tmp50 = CodeStubAssembler(state_).UintPtrAdd(TNode<UintPtrT>{tmp32}, TNode<UintPtrT>{tmp49});
    DataViewBuiltinsAssembler(state_).StoreWord8(TNode<RawPtrT>{tmp36}, TNode<UintPtrT>{tmp50}, TNode<Uint32T>{tmp40});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 573);
    TNode<UintPtrT> tmp51;
    USE(tmp51);
    tmp51 = FromConstexpr9ATuintptr17ATconstexpr_int31_164(state_, 4);
    TNode<UintPtrT> tmp52;
    USE(tmp52);
    tmp52 = CodeStubAssembler(state_).UintPtrAdd(TNode<UintPtrT>{tmp32}, TNode<UintPtrT>{tmp51});
    DataViewBuiltinsAssembler(state_).StoreWord8(TNode<RawPtrT>{tmp36}, TNode<UintPtrT>{tmp52}, TNode<Uint32T>{tmp41});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 574);
    TNode<UintPtrT> tmp53;
    USE(tmp53);
    tmp53 = FromConstexpr9ATuintptr17ATconstexpr_int31_164(state_, 5);
    TNode<UintPtrT> tmp54;
    USE(tmp54);
    tmp54 = CodeStubAssembler(state_).UintPtrAdd(TNode<UintPtrT>{tmp32}, TNode<UintPtrT>{tmp53});
    DataViewBuiltinsAssembler(state_).StoreWord8(TNode<RawPtrT>{tmp36}, TNode<UintPtrT>{tmp54}, TNode<Uint32T>{tmp42});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 575);
    TNode<UintPtrT> tmp55;
    USE(tmp55);
    tmp55 = FromConstexpr9ATuintptr17ATconstexpr_int31_164(state_, 6);
    TNode<UintPtrT> tmp56;
    USE(tmp56);
    tmp56 = CodeStubAssembler(state_).UintPtrAdd(TNode<UintPtrT>{tmp32}, TNode<UintPtrT>{tmp55});
    DataViewBuiltinsAssembler(state_).StoreWord8(TNode<RawPtrT>{tmp36}, TNode<UintPtrT>{tmp56}, TNode<Uint32T>{tmp43});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 576);
    TNode<UintPtrT> tmp57;
    USE(tmp57);
    tmp57 = FromConstexpr9ATuintptr17ATconstexpr_int31_164(state_, 7);
    TNode<UintPtrT> tmp58;
    USE(tmp58);
    tmp58 = CodeStubAssembler(state_).UintPtrAdd(TNode<UintPtrT>{tmp32}, TNode<UintPtrT>{tmp57});
    DataViewBuiltinsAssembler(state_).StoreWord8(TNode<RawPtrT>{tmp36}, TNode<UintPtrT>{tmp58}, TNode<Uint32T>{tmp44});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 568);
    ca_.Goto(&block4, tmp31, tmp32, tmp33, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39, tmp40, tmp41, tmp42, tmp43, tmp44);
  }

  if (block3.is_used()) {
    TNode<JSArrayBuffer> tmp59;
    TNode<UintPtrT> tmp60;
    TNode<Uint32T> tmp61;
    TNode<Uint32T> tmp62;
    TNode<BoolT> tmp63;
    TNode<RawPtrT> tmp64;
    TNode<Uint32T> tmp65;
    TNode<Uint32T> tmp66;
    TNode<Uint32T> tmp67;
    TNode<Uint32T> tmp68;
    TNode<Uint32T> tmp69;
    TNode<Uint32T> tmp70;
    TNode<Uint32T> tmp71;
    TNode<Uint32T> tmp72;
    ca_.Bind(&block3, &tmp59, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67, &tmp68, &tmp69, &tmp70, &tmp71, &tmp72);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 578);
    DataViewBuiltinsAssembler(state_).StoreWord8(TNode<RawPtrT>{tmp64}, TNode<UintPtrT>{tmp60}, TNode<Uint32T>{tmp72});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 579);
    TNode<UintPtrT> tmp73;
    USE(tmp73);
    tmp73 = FromConstexpr9ATuintptr17ATconstexpr_int31_164(state_, 1);
    TNode<UintPtrT> tmp74;
    USE(tmp74);
    tmp74 = CodeStubAssembler(state_).UintPtrAdd(TNode<UintPtrT>{tmp60}, TNode<UintPtrT>{tmp73});
    DataViewBuiltinsAssembler(state_).StoreWord8(TNode<RawPtrT>{tmp64}, TNode<UintPtrT>{tmp74}, TNode<Uint32T>{tmp71});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 580);
    TNode<UintPtrT> tmp75;
    USE(tmp75);
    tmp75 = FromConstexpr9ATuintptr17ATconstexpr_int31_164(state_, 2);
    TNode<UintPtrT> tmp76;
    USE(tmp76);
    tmp76 = CodeStubAssembler(state_).UintPtrAdd(TNode<UintPtrT>{tmp60}, TNode<UintPtrT>{tmp75});
    DataViewBuiltinsAssembler(state_).StoreWord8(TNode<RawPtrT>{tmp64}, TNode<UintPtrT>{tmp76}, TNode<Uint32T>{tmp70});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 581);
    TNode<UintPtrT> tmp77;
    USE(tmp77);
    tmp77 = FromConstexpr9ATuintptr17ATconstexpr_int31_164(state_, 3);
    TNode<UintPtrT> tmp78;
    USE(tmp78);
    tmp78 = CodeStubAssembler(state_).UintPtrAdd(TNode<UintPtrT>{tmp60}, TNode<UintPtrT>{tmp77});
    DataViewBuiltinsAssembler(state_).StoreWord8(TNode<RawPtrT>{tmp64}, TNode<UintPtrT>{tmp78}, TNode<Uint32T>{tmp69});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 582);
    TNode<UintPtrT> tmp79;
    USE(tmp79);
    tmp79 = FromConstexpr9ATuintptr17ATconstexpr_int31_164(state_, 4);
    TNode<UintPtrT> tmp80;
    USE(tmp80);
    tmp80 = CodeStubAssembler(state_).UintPtrAdd(TNode<UintPtrT>{tmp60}, TNode<UintPtrT>{tmp79});
    DataViewBuiltinsAssembler(state_).StoreWord8(TNode<RawPtrT>{tmp64}, TNode<UintPtrT>{tmp80}, TNode<Uint32T>{tmp68});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 583);
    TNode<UintPtrT> tmp81;
    USE(tmp81);
    tmp81 = FromConstexpr9ATuintptr17ATconstexpr_int31_164(state_, 5);
    TNode<UintPtrT> tmp82;
    USE(tmp82);
    tmp82 = CodeStubAssembler(state_).UintPtrAdd(TNode<UintPtrT>{tmp60}, TNode<UintPtrT>{tmp81});
    DataViewBuiltinsAssembler(state_).StoreWord8(TNode<RawPtrT>{tmp64}, TNode<UintPtrT>{tmp82}, TNode<Uint32T>{tmp67});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 584);
    TNode<UintPtrT> tmp83;
    USE(tmp83);
    tmp83 = FromConstexpr9ATuintptr17ATconstexpr_int31_164(state_, 6);
    TNode<UintPtrT> tmp84;
    USE(tmp84);
    tmp84 = CodeStubAssembler(state_).UintPtrAdd(TNode<UintPtrT>{tmp60}, TNode<UintPtrT>{tmp83});
    DataViewBuiltinsAssembler(state_).StoreWord8(TNode<RawPtrT>{tmp64}, TNode<UintPtrT>{tmp84}, TNode<Uint32T>{tmp66});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 585);
    TNode<UintPtrT> tmp85;
    USE(tmp85);
    tmp85 = FromConstexpr9ATuintptr17ATconstexpr_int31_164(state_, 7);
    TNode<UintPtrT> tmp86;
    USE(tmp86);
    tmp86 = CodeStubAssembler(state_).UintPtrAdd(TNode<UintPtrT>{tmp60}, TNode<UintPtrT>{tmp85});
    DataViewBuiltinsAssembler(state_).StoreWord8(TNode<RawPtrT>{tmp64}, TNode<UintPtrT>{tmp86}, TNode<Uint32T>{tmp65});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 568);
    ca_.Goto(&block4, tmp59, tmp60, tmp61, tmp62, tmp63, tmp64, tmp65, tmp66, tmp67, tmp68, tmp69, tmp70, tmp71, tmp72);
  }

  if (block4.is_used()) {
    TNode<JSArrayBuffer> tmp87;
    TNode<UintPtrT> tmp88;
    TNode<Uint32T> tmp89;
    TNode<Uint32T> tmp90;
    TNode<BoolT> tmp91;
    TNode<RawPtrT> tmp92;
    TNode<Uint32T> tmp93;
    TNode<Uint32T> tmp94;
    TNode<Uint32T> tmp95;
    TNode<Uint32T> tmp96;
    TNode<Uint32T> tmp97;
    TNode<Uint32T> tmp98;
    TNode<Uint32T> tmp99;
    TNode<Uint32T> tmp100;
    ca_.Bind(&block4, &tmp87, &tmp88, &tmp89, &tmp90, &tmp91, &tmp92, &tmp93, &tmp94, &tmp95, &tmp96, &tmp97, &tmp98, &tmp99, &tmp100);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 555);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 553);
    ca_.Goto(&block1, tmp87, tmp88, tmp89, tmp90, tmp91);
  }

  if (block1.is_used()) {
    TNode<JSArrayBuffer> tmp101;
    TNode<UintPtrT> tmp102;
    TNode<Uint32T> tmp103;
    TNode<Uint32T> tmp104;
    TNode<BoolT> tmp105;
    ca_.Bind(&block1, &tmp101, &tmp102, &tmp103, &tmp104, &tmp105);
    ca_.Goto(&block5, tmp101, tmp102, tmp103, tmp104, tmp105);
  }

    TNode<JSArrayBuffer> tmp106;
    TNode<UintPtrT> tmp107;
    TNode<Uint32T> tmp108;
    TNode<Uint32T> tmp109;
    TNode<BoolT> tmp110;
    ca_.Bind(&block5, &tmp106, &tmp107, &tmp108, &tmp109, &tmp110);
}

void StoreDataViewBigInt_291(compiler::CodeAssemblerState* state_, TNode<JSArrayBuffer> p_buffer, TNode<UintPtrT> p_offset, TNode<BigInt> p_bigIntValue, TNode<BoolT> p_requestedLittleEndian) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, BigInt, BoolT> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, BigInt, BoolT, Uint32T, Uint32T, Uint32T, Uint32T> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, BigInt, BoolT, Uint32T, Uint32T, Uint32T, Uint32T> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, BigInt, BoolT, Uint32T, Uint32T, Uint32T, Uint32T> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, BigInt, BoolT, Uint32T, Uint32T, Uint32T, Uint32T> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, BigInt, BoolT, Uint32T, Uint32T, Uint32T, Uint32T> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, BigInt, BoolT, Uint32T, Uint32T, Uint32T, Uint32T> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, BigInt, BoolT, Uint32T, Uint32T, Uint32T, Uint32T> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, BigInt, BoolT, Uint32T, Uint32T, Uint32T, Uint32T> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, BigInt, BoolT, Uint32T, Uint32T, Uint32T, Uint32T> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, BigInt, BoolT, Uint32T, Uint32T, Uint32T, Uint32T> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, BigInt, BoolT, Uint32T, Uint32T, Uint32T, Uint32T> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, BigInt, BoolT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, BigInt, BoolT> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_buffer, p_offset, p_bigIntValue, p_requestedLittleEndian);

  if (block0.is_used()) {
    TNode<JSArrayBuffer> tmp0;
    TNode<UintPtrT> tmp1;
    TNode<BigInt> tmp2;
    TNode<BoolT> tmp3;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 600);
    TNode<Uint32T> tmp4;
    USE(tmp4);
    tmp4 = DataViewBuiltinsAssembler(state_).DataViewDecodeBigIntLength(TNode<BigInt>{tmp2});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 601);
    TNode<Uint32T> tmp5;
    USE(tmp5);
    tmp5 = DataViewBuiltinsAssembler(state_).DataViewDecodeBigIntSign(TNode<BigInt>{tmp2});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 605);
    TNode<Uint32T> tmp6;
    USE(tmp6);
    tmp6 = FromConstexpr8ATuint3217ATconstexpr_int31_163(state_, 0);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 606);
    TNode<Uint32T> tmp7;
    USE(tmp7);
    tmp7 = FromConstexpr8ATuint3217ATconstexpr_int31_163(state_, 0);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 609);
    TNode<Uint32T> tmp8;
    USE(tmp8);
    tmp8 = FromConstexpr8ATuint3217ATconstexpr_int31_163(state_, 0);
    TNode<BoolT> tmp9;
    USE(tmp9);
    tmp9 = CodeStubAssembler(state_).Word32NotEqual(TNode<Uint32T>{tmp4}, TNode<Uint32T>{tmp8});
    ca_.Branch(tmp9, &block2, &block3, tmp0, tmp1, tmp2, tmp3, tmp4, tmp5, tmp6, tmp7);
  }

  if (block2.is_used()) {
    TNode<JSArrayBuffer> tmp10;
    TNode<UintPtrT> tmp11;
    TNode<BigInt> tmp12;
    TNode<BoolT> tmp13;
    TNode<Uint32T> tmp14;
    TNode<Uint32T> tmp15;
    TNode<Uint32T> tmp16;
    TNode<Uint32T> tmp17;
    ca_.Bind(&block2, &tmp10, &tmp11, &tmp12, &tmp13, &tmp14, &tmp15, &tmp16, &tmp17);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 610);
    if (((CodeStubAssembler(state_).Is64()))) {
      ca_.Goto(&block4, tmp10, tmp11, tmp12, tmp13, tmp14, tmp15, tmp16, tmp17);
    } else {
      ca_.Goto(&block5, tmp10, tmp11, tmp12, tmp13, tmp14, tmp15, tmp16, tmp17);
    }
  }

  if (block4.is_used()) {
    TNode<JSArrayBuffer> tmp18;
    TNode<UintPtrT> tmp19;
    TNode<BigInt> tmp20;
    TNode<BoolT> tmp21;
    TNode<Uint32T> tmp22;
    TNode<Uint32T> tmp23;
    TNode<Uint32T> tmp24;
    TNode<Uint32T> tmp25;
    ca_.Bind(&block4, &tmp18, &tmp19, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 612);
    TNode<IntPtrT> tmp26;
    USE(tmp26);
    tmp26 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 0);
    TNode<UintPtrT> tmp27;
    USE(tmp27);
    tmp27 = CodeStubAssembler(state_).LoadBigIntDigit(TNode<BigInt>{tmp20}, TNode<IntPtrT>{tmp26});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 613);
    TNode<Uint32T> tmp28;
    USE(tmp28);
    tmp28 = Convert8ATuint329ATuintptr_187(state_, TNode<UintPtrT>{tmp27});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 614);
    TNode<UintPtrT> tmp29;
    USE(tmp29);
    tmp29 = FromConstexpr9ATuintptr17ATconstexpr_int31_164(state_, 32);
    TNode<UintPtrT> tmp30;
    USE(tmp30);
    tmp30 = CodeStubAssembler(state_).WordShr(TNode<UintPtrT>{tmp27}, TNode<UintPtrT>{tmp29});
    TNode<Uint32T> tmp31;
    USE(tmp31);
    tmp31 = Convert8ATuint329ATuintptr_187(state_, TNode<UintPtrT>{tmp30});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 610);
    ca_.Goto(&block6, tmp18, tmp19, tmp20, tmp21, tmp22, tmp23, tmp28, tmp31);
  }

  if (block5.is_used()) {
    TNode<JSArrayBuffer> tmp32;
    TNode<UintPtrT> tmp33;
    TNode<BigInt> tmp34;
    TNode<BoolT> tmp35;
    TNode<Uint32T> tmp36;
    TNode<Uint32T> tmp37;
    TNode<Uint32T> tmp38;
    TNode<Uint32T> tmp39;
    ca_.Bind(&block5, &tmp32, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 616);
    TNode<IntPtrT> tmp40;
    USE(tmp40);
    tmp40 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 0);
    TNode<UintPtrT> tmp41;
    USE(tmp41);
    tmp41 = CodeStubAssembler(state_).LoadBigIntDigit(TNode<BigInt>{tmp34}, TNode<IntPtrT>{tmp40});
    TNode<Uint32T> tmp42;
    USE(tmp42);
    tmp42 = Convert8ATuint329ATuintptr_187(state_, TNode<UintPtrT>{tmp41});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 617);
    TNode<Uint32T> tmp43;
    USE(tmp43);
    tmp43 = FromConstexpr8ATuint3217ATconstexpr_int31_163(state_, 2);
    TNode<BoolT> tmp44;
    USE(tmp44);
    tmp44 = CodeStubAssembler(state_).Uint32GreaterThanOrEqual(TNode<Uint32T>{tmp36}, TNode<Uint32T>{tmp43});
    ca_.Branch(tmp44, &block7, &block8, tmp32, tmp33, tmp34, tmp35, tmp36, tmp37, tmp42, tmp39);
  }

  if (block7.is_used()) {
    TNode<JSArrayBuffer> tmp45;
    TNode<UintPtrT> tmp46;
    TNode<BigInt> tmp47;
    TNode<BoolT> tmp48;
    TNode<Uint32T> tmp49;
    TNode<Uint32T> tmp50;
    TNode<Uint32T> tmp51;
    TNode<Uint32T> tmp52;
    ca_.Bind(&block7, &tmp45, &tmp46, &tmp47, &tmp48, &tmp49, &tmp50, &tmp51, &tmp52);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 618);
    TNode<IntPtrT> tmp53;
    USE(tmp53);
    tmp53 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 1);
    TNode<UintPtrT> tmp54;
    USE(tmp54);
    tmp54 = CodeStubAssembler(state_).LoadBigIntDigit(TNode<BigInt>{tmp47}, TNode<IntPtrT>{tmp53});
    TNode<Uint32T> tmp55;
    USE(tmp55);
    tmp55 = Convert8ATuint329ATuintptr_187(state_, TNode<UintPtrT>{tmp54});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 617);
    ca_.Goto(&block8, tmp45, tmp46, tmp47, tmp48, tmp49, tmp50, tmp51, tmp55);
  }

  if (block8.is_used()) {
    TNode<JSArrayBuffer> tmp56;
    TNode<UintPtrT> tmp57;
    TNode<BigInt> tmp58;
    TNode<BoolT> tmp59;
    TNode<Uint32T> tmp60;
    TNode<Uint32T> tmp61;
    TNode<Uint32T> tmp62;
    TNode<Uint32T> tmp63;
    ca_.Bind(&block8, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62, &tmp63);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 610);
    ca_.Goto(&block6, tmp56, tmp57, tmp58, tmp59, tmp60, tmp61, tmp62, tmp63);
  }

  if (block6.is_used()) {
    TNode<JSArrayBuffer> tmp64;
    TNode<UintPtrT> tmp65;
    TNode<BigInt> tmp66;
    TNode<BoolT> tmp67;
    TNode<Uint32T> tmp68;
    TNode<Uint32T> tmp69;
    TNode<Uint32T> tmp70;
    TNode<Uint32T> tmp71;
    ca_.Bind(&block6, &tmp64, &tmp65, &tmp66, &tmp67, &tmp68, &tmp69, &tmp70, &tmp71);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 609);
    ca_.Goto(&block3, tmp64, tmp65, tmp66, tmp67, tmp68, tmp69, tmp70, tmp71);
  }

  if (block3.is_used()) {
    TNode<JSArrayBuffer> tmp72;
    TNode<UintPtrT> tmp73;
    TNode<BigInt> tmp74;
    TNode<BoolT> tmp75;
    TNode<Uint32T> tmp76;
    TNode<Uint32T> tmp77;
    TNode<Uint32T> tmp78;
    TNode<Uint32T> tmp79;
    ca_.Bind(&block3, &tmp72, &tmp73, &tmp74, &tmp75, &tmp76, &tmp77, &tmp78, &tmp79);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 623);
    TNode<Uint32T> tmp80;
    USE(tmp80);
    tmp80 = FromConstexpr8ATuint3217ATconstexpr_int31_163(state_, 0);
    TNode<BoolT> tmp81;
    USE(tmp81);
    tmp81 = CodeStubAssembler(state_).Word32NotEqual(TNode<Uint32T>{tmp77}, TNode<Uint32T>{tmp80});
    ca_.Branch(tmp81, &block9, &block10, tmp72, tmp73, tmp74, tmp75, tmp76, tmp77, tmp78, tmp79);
  }

  if (block9.is_used()) {
    TNode<JSArrayBuffer> tmp82;
    TNode<UintPtrT> tmp83;
    TNode<BigInt> tmp84;
    TNode<BoolT> tmp85;
    TNode<Uint32T> tmp86;
    TNode<Uint32T> tmp87;
    TNode<Uint32T> tmp88;
    TNode<Uint32T> tmp89;
    ca_.Bind(&block9, &tmp82, &tmp83, &tmp84, &tmp85, &tmp86, &tmp87, &tmp88, &tmp89);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 624);
    TNode<Int32T> tmp90;
    USE(tmp90);
    tmp90 = CodeStubAssembler(state_).Signed(TNode<Uint32T>{tmp89});
    TNode<Int32T> tmp91;
    USE(tmp91);
    tmp91 = FromConstexpr7ATint3217ATconstexpr_int31_148(state_, 0);
    TNode<Int32T> tmp92;
    USE(tmp92);
    tmp92 = CodeStubAssembler(state_).Int32Sub(TNode<Int32T>{tmp91}, TNode<Int32T>{tmp90});
    TNode<Uint32T> tmp93;
    USE(tmp93);
    tmp93 = CodeStubAssembler(state_).Unsigned(TNode<Int32T>{tmp92});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 625);
    TNode<Uint32T> tmp94;
    USE(tmp94);
    tmp94 = FromConstexpr8ATuint3217ATconstexpr_int31_163(state_, 0);
    TNode<BoolT> tmp95;
    USE(tmp95);
    tmp95 = CodeStubAssembler(state_).Word32NotEqual(TNode<Uint32T>{tmp88}, TNode<Uint32T>{tmp94});
    ca_.Branch(tmp95, &block11, &block12, tmp82, tmp83, tmp84, tmp85, tmp86, tmp87, tmp88, tmp93);
  }

  if (block11.is_used()) {
    TNode<JSArrayBuffer> tmp96;
    TNode<UintPtrT> tmp97;
    TNode<BigInt> tmp98;
    TNode<BoolT> tmp99;
    TNode<Uint32T> tmp100;
    TNode<Uint32T> tmp101;
    TNode<Uint32T> tmp102;
    TNode<Uint32T> tmp103;
    ca_.Bind(&block11, &tmp96, &tmp97, &tmp98, &tmp99, &tmp100, &tmp101, &tmp102, &tmp103);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 626);
    TNode<Int32T> tmp104;
    USE(tmp104);
    tmp104 = CodeStubAssembler(state_).Signed(TNode<Uint32T>{tmp103});
    TNode<Int32T> tmp105;
    USE(tmp105);
    tmp105 = FromConstexpr7ATint3217ATconstexpr_int31_148(state_, 1);
    TNode<Int32T> tmp106;
    USE(tmp106);
    tmp106 = CodeStubAssembler(state_).Int32Sub(TNode<Int32T>{tmp104}, TNode<Int32T>{tmp105});
    TNode<Uint32T> tmp107;
    USE(tmp107);
    tmp107 = CodeStubAssembler(state_).Unsigned(TNode<Int32T>{tmp106});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 625);
    ca_.Goto(&block12, tmp96, tmp97, tmp98, tmp99, tmp100, tmp101, tmp102, tmp107);
  }

  if (block12.is_used()) {
    TNode<JSArrayBuffer> tmp108;
    TNode<UintPtrT> tmp109;
    TNode<BigInt> tmp110;
    TNode<BoolT> tmp111;
    TNode<Uint32T> tmp112;
    TNode<Uint32T> tmp113;
    TNode<Uint32T> tmp114;
    TNode<Uint32T> tmp115;
    ca_.Bind(&block12, &tmp108, &tmp109, &tmp110, &tmp111, &tmp112, &tmp113, &tmp114, &tmp115);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 628);
    TNode<Int32T> tmp116;
    USE(tmp116);
    tmp116 = CodeStubAssembler(state_).Signed(TNode<Uint32T>{tmp114});
    TNode<Int32T> tmp117;
    USE(tmp117);
    tmp117 = FromConstexpr7ATint3217ATconstexpr_int31_148(state_, 0);
    TNode<Int32T> tmp118;
    USE(tmp118);
    tmp118 = CodeStubAssembler(state_).Int32Sub(TNode<Int32T>{tmp117}, TNode<Int32T>{tmp116});
    TNode<Uint32T> tmp119;
    USE(tmp119);
    tmp119 = CodeStubAssembler(state_).Unsigned(TNode<Int32T>{tmp118});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 623);
    ca_.Goto(&block10, tmp108, tmp109, tmp110, tmp111, tmp112, tmp113, tmp119, tmp115);
  }

  if (block10.is_used()) {
    TNode<JSArrayBuffer> tmp120;
    TNode<UintPtrT> tmp121;
    TNode<BigInt> tmp122;
    TNode<BoolT> tmp123;
    TNode<Uint32T> tmp124;
    TNode<Uint32T> tmp125;
    TNode<Uint32T> tmp126;
    TNode<Uint32T> tmp127;
    ca_.Bind(&block10, &tmp120, &tmp121, &tmp122, &tmp123, &tmp124, &tmp125, &tmp126, &tmp127);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 631);
    StoreDataView64_290(state_, TNode<JSArrayBuffer>{tmp120}, TNode<UintPtrT>{tmp121}, TNode<Uint32T>{tmp126}, TNode<Uint32T>{tmp127}, TNode<BoolT>{tmp123});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 599);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 597);
    ca_.Goto(&block1, tmp120, tmp121, tmp122, tmp123);
  }

  if (block1.is_used()) {
    TNode<JSArrayBuffer> tmp128;
    TNode<UintPtrT> tmp129;
    TNode<BigInt> tmp130;
    TNode<BoolT> tmp131;
    ca_.Bind(&block1, &tmp128, &tmp129, &tmp130, &tmp131);
    ca_.Goto(&block13, tmp128, tmp129, tmp130, tmp131);
  }

    TNode<JSArrayBuffer> tmp132;
    TNode<UintPtrT> tmp133;
    TNode<BigInt> tmp134;
    TNode<BoolT> tmp135;
    ca_.Bind(&block13, &tmp132, &tmp133, &tmp134, &tmp135);
}

TNode<Object> DataViewSet_292(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_receiver, TNode<Object> p_offset, TNode<Object> p_value, TNode<Object> p_requestedLittleEndian, ElementsKind p_kind) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, JSDataView, Number, Object, Context> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, JSDataView, Number, Object, Context, Number> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, JSDataView, Number> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, JSDataView, Number> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, BigInt> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, BigInt> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, BigInt, Float64T, UintPtrT, UintPtrT, Float64T, Float64T> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, BigInt, Float64T, UintPtrT, UintPtrT, Float64T, Float64T> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Number> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Number> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Number, Float64T, UintPtrT, UintPtrT, Float64T, Float64T> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Number, Float64T, UintPtrT, UintPtrT, Float64T, Float64T> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Number, Float64T, UintPtrT, UintPtrT, Float64T, Float64T, UintPtrT, Float64T> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Number, Float64T, UintPtrT, UintPtrT, Float64T, Float64T, UintPtrT, Float64T> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Number, Float64T, UintPtrT, UintPtrT, Float64T, Float64T, UintPtrT, Float64T> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Number, Float64T, UintPtrT, UintPtrT, Float64T, Float64T, UintPtrT, Float64T> block21(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Number, Float64T, UintPtrT, UintPtrT, Float64T, Float64T, UintPtrT, Float64T> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Number, Float64T, UintPtrT, UintPtrT, Float64T, Float64T, UintPtrT, Float64T> block24(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Number, Float64T, UintPtrT, UintPtrT, Float64T, Float64T, UintPtrT, Float64T> block26(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Number, Float64T, UintPtrT, UintPtrT, Float64T, Float64T, UintPtrT, Float64T> block27(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Number, Float64T, UintPtrT, UintPtrT, Float64T, Float64T, UintPtrT, Float64T> block29(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Number, Float64T, UintPtrT, UintPtrT, Float64T, Float64T, UintPtrT, Float64T> block30(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Number, Float64T, UintPtrT, UintPtrT, Float64T, Float64T, UintPtrT, Float64T> block31(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Number, Float64T, UintPtrT, UintPtrT, Float64T, Float64T, UintPtrT, Float64T> block28(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Number, Float64T, UintPtrT, UintPtrT, Float64T, Float64T, UintPtrT, Float64T> block25(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Number, Float64T, UintPtrT, UintPtrT, Float64T, Float64T, UintPtrT, Float64T> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Number, Float64T, UintPtrT, UintPtrT, Float64T, Float64T, UintPtrT, Float64T> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, Object> block32(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_receiver, p_offset, p_value, p_requestedLittleEndian);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Object> tmp1;
    TNode<Object> tmp2;
    TNode<Object> tmp3;
    TNode<Object> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 638);
    TNode<String> tmp5;
    USE(tmp5);
    tmp5 = MakeDataViewSetterNameString_272(state_, p_kind);
    TNode<JSDataView> tmp6;
    USE(tmp6);
    tmp6 = ValidateDataView_274(state_, TNode<Context>{tmp0}, TNode<Object>{tmp1}, TNode<String>{tmp5});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 637);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 640);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 642);
    TNode<Number> tmp7;
    USE(tmp7);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp7 = ToIndex_245(state_, TNode<Object>{tmp2}, TNode<Context>{tmp0}, &label0);
    ca_.Goto(&block4, tmp0, tmp1, tmp2, tmp3, tmp4, tmp6, ca_.Uninitialized<Number>(), tmp2, tmp0, tmp7);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block5, tmp0, tmp1, tmp2, tmp3, tmp4, tmp6, ca_.Uninitialized<Number>(), tmp2, tmp0);
    }
  }

  if (block5.is_used()) {
    TNode<Context> tmp8;
    TNode<Object> tmp9;
    TNode<Object> tmp10;
    TNode<Object> tmp11;
    TNode<Object> tmp12;
    TNode<JSDataView> tmp13;
    TNode<Number> tmp14;
    TNode<Object> tmp15;
    TNode<Context> tmp16;
    ca_.Bind(&block5, &tmp8, &tmp9, &tmp10, &tmp11, &tmp12, &tmp13, &tmp14, &tmp15, &tmp16);
    ca_.Goto(&block3, tmp8, tmp9, tmp10, tmp11, tmp12, tmp13, tmp14);
  }

  if (block4.is_used()) {
    TNode<Context> tmp17;
    TNode<Object> tmp18;
    TNode<Object> tmp19;
    TNode<Object> tmp20;
    TNode<Object> tmp21;
    TNode<JSDataView> tmp22;
    TNode<Number> tmp23;
    TNode<Object> tmp24;
    TNode<Context> tmp25;
    TNode<Number> tmp26;
    ca_.Bind(&block4, &tmp17, &tmp18, &tmp19, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 644);
    ca_.Goto(&block2, tmp17, tmp18, tmp19, tmp20, tmp21, tmp22, tmp26);
  }

  if (block3.is_used()) {
    TNode<Context> tmp27;
    TNode<Object> tmp28;
    TNode<Object> tmp29;
    TNode<Object> tmp30;
    TNode<Object> tmp31;
    TNode<JSDataView> tmp32;
    TNode<Number> tmp33;
    ca_.Bind(&block3, &tmp27, &tmp28, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 645);
    CodeStubAssembler(state_).ThrowRangeError(TNode<Context>{tmp27}, MessageTemplate::kInvalidDataViewAccessorOffset);
  }

  if (block2.is_used()) {
    TNode<Context> tmp34;
    TNode<Object> tmp35;
    TNode<Object> tmp36;
    TNode<Object> tmp37;
    TNode<Object> tmp38;
    TNode<JSDataView> tmp39;
    TNode<Number> tmp40;
    ca_.Bind(&block2, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 648);
    TNode<BoolT> tmp41;
    USE(tmp41);
    tmp41 = ToBoolean_242(state_, TNode<Object>{tmp38});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 649);
    TNode<IntPtrT> tmp42 = ca_.IntPtrConstant(JSArrayBufferView::kBufferOffset);
    USE(tmp42);
    TNode<JSArrayBuffer>tmp43 = CodeStubAssembler(state_).LoadReference<JSArrayBuffer>(CodeStubAssembler::Reference{tmp39, tmp42});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 653);
    if ((((CodeStubAssembler(state_).ElementsKindEqual(p_kind, BIGUINT64_ELEMENTS)) || (CodeStubAssembler(state_).ElementsKindEqual(p_kind, BIGINT64_ELEMENTS))))) {
      ca_.Goto(&block6, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39, tmp40, tmp41, tmp43);
    } else {
      ca_.Goto(&block7, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39, tmp40, tmp41, tmp43);
    }
  }

  if (block6.is_used()) {
    TNode<Context> tmp44;
    TNode<Object> tmp45;
    TNode<Object> tmp46;
    TNode<Object> tmp47;
    TNode<Object> tmp48;
    TNode<JSDataView> tmp49;
    TNode<Number> tmp50;
    TNode<BoolT> tmp51;
    TNode<JSArrayBuffer> tmp52;
    ca_.Bind(&block6, &tmp44, &tmp45, &tmp46, &tmp47, &tmp48, &tmp49, &tmp50, &tmp51, &tmp52);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 654);
    TNode<BigInt> tmp53;
    USE(tmp53);
    tmp53 = CodeStubAssembler(state_).ToBigInt(TNode<Context>{tmp44}, TNode<Object>{tmp47});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 656);
    TNode<BoolT> tmp54;
    USE(tmp54);
    tmp54 = CodeStubAssembler(state_).IsDetachedBuffer(TNode<JSArrayBuffer>{tmp52});
    ca_.Branch(tmp54, &block9, &block10, tmp44, tmp45, tmp46, tmp47, tmp48, tmp49, tmp50, tmp51, tmp52, tmp53);
  }

  if (block9.is_used()) {
    TNode<Context> tmp55;
    TNode<Object> tmp56;
    TNode<Object> tmp57;
    TNode<Object> tmp58;
    TNode<Object> tmp59;
    TNode<JSDataView> tmp60;
    TNode<Number> tmp61;
    TNode<BoolT> tmp62;
    TNode<JSArrayBuffer> tmp63;
    TNode<BigInt> tmp64;
    ca_.Bind(&block9, &tmp55, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 657);
    TNode<String> tmp65;
    USE(tmp65);
    tmp65 = MakeDataViewSetterNameString_272(state_, p_kind);
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{tmp55}, MessageTemplate::kDetachedOperation, TNode<Object>{tmp65});
  }

  if (block10.is_used()) {
    TNode<Context> tmp66;
    TNode<Object> tmp67;
    TNode<Object> tmp68;
    TNode<Object> tmp69;
    TNode<Object> tmp70;
    TNode<JSDataView> tmp71;
    TNode<Number> tmp72;
    TNode<BoolT> tmp73;
    TNode<JSArrayBuffer> tmp74;
    TNode<BigInt> tmp75;
    ca_.Bind(&block10, &tmp66, &tmp67, &tmp68, &tmp69, &tmp70, &tmp71, &tmp72, &tmp73, &tmp74, &tmp75);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 660);
    TNode<Float64T> tmp76;
    USE(tmp76);
    tmp76 = Convert9ATfloat6420UT5ATSmi10HeapNumber_196(state_, TNode<Number>{tmp72});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 661);
    TNode<UintPtrT> tmp77;
    USE(tmp77);
    tmp77 = Convert9ATuintptr9ATfloat64_204(state_, TNode<Float64T>{tmp76});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 663);
    TNode<IntPtrT> tmp78 = ca_.IntPtrConstant(JSArrayBufferView::kByteOffsetOffset);
    USE(tmp78);
    TNode<UintPtrT>tmp79 = CodeStubAssembler(state_).LoadReference<UintPtrT>(CodeStubAssembler::Reference{tmp71, tmp78});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 664);
    TNode<IntPtrT> tmp80 = ca_.IntPtrConstant(JSArrayBufferView::kByteLengthOffset);
    USE(tmp80);
    TNode<UintPtrT>tmp81 = CodeStubAssembler(state_).LoadReference<UintPtrT>(CodeStubAssembler::Reference{tmp71, tmp80});
    TNode<Float64T> tmp82;
    USE(tmp82);
    tmp82 = Convert9ATfloat649ATuintptr_202(state_, TNode<UintPtrT>{tmp81});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 665);
    TNode<Float64T> tmp83;
    USE(tmp83);
    tmp83 = FromConstexpr9ATfloat6417ATconstexpr_int31_165(state_, (DataViewBuiltinsAssembler(state_).DataViewElementSize(p_kind)));
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 667);
    TNode<Float64T> tmp84;
    USE(tmp84);
    tmp84 = CodeStubAssembler(state_).Float64Add(TNode<Float64T>{tmp76}, TNode<Float64T>{tmp83});
    TNode<BoolT> tmp85;
    USE(tmp85);
    tmp85 = CodeStubAssembler(state_).Float64GreaterThan(TNode<Float64T>{tmp84}, TNode<Float64T>{tmp82});
    ca_.Branch(tmp85, &block11, &block12, tmp66, tmp67, tmp68, tmp69, tmp70, tmp71, tmp72, tmp73, tmp74, tmp75, tmp76, tmp77, tmp79, tmp82, tmp83);
  }

  if (block11.is_used()) {
    TNode<Context> tmp86;
    TNode<Object> tmp87;
    TNode<Object> tmp88;
    TNode<Object> tmp89;
    TNode<Object> tmp90;
    TNode<JSDataView> tmp91;
    TNode<Number> tmp92;
    TNode<BoolT> tmp93;
    TNode<JSArrayBuffer> tmp94;
    TNode<BigInt> tmp95;
    TNode<Float64T> tmp96;
    TNode<UintPtrT> tmp97;
    TNode<UintPtrT> tmp98;
    TNode<Float64T> tmp99;
    TNode<Float64T> tmp100;
    ca_.Bind(&block11, &tmp86, &tmp87, &tmp88, &tmp89, &tmp90, &tmp91, &tmp92, &tmp93, &tmp94, &tmp95, &tmp96, &tmp97, &tmp98, &tmp99, &tmp100);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 668);
    CodeStubAssembler(state_).ThrowRangeError(TNode<Context>{tmp86}, MessageTemplate::kInvalidDataViewAccessorOffset);
  }

  if (block12.is_used()) {
    TNode<Context> tmp101;
    TNode<Object> tmp102;
    TNode<Object> tmp103;
    TNode<Object> tmp104;
    TNode<Object> tmp105;
    TNode<JSDataView> tmp106;
    TNode<Number> tmp107;
    TNode<BoolT> tmp108;
    TNode<JSArrayBuffer> tmp109;
    TNode<BigInt> tmp110;
    TNode<Float64T> tmp111;
    TNode<UintPtrT> tmp112;
    TNode<UintPtrT> tmp113;
    TNode<Float64T> tmp114;
    TNode<Float64T> tmp115;
    ca_.Bind(&block12, &tmp101, &tmp102, &tmp103, &tmp104, &tmp105, &tmp106, &tmp107, &tmp108, &tmp109, &tmp110, &tmp111, &tmp112, &tmp113, &tmp114, &tmp115);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 671);
    TNode<UintPtrT> tmp116;
    USE(tmp116);
    tmp116 = CodeStubAssembler(state_).UintPtrAdd(TNode<UintPtrT>{tmp112}, TNode<UintPtrT>{tmp113});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 672);
    StoreDataViewBigInt_291(state_, TNode<JSArrayBuffer>{tmp109}, TNode<UintPtrT>{tmp116}, TNode<BigInt>{tmp110}, TNode<BoolT>{tmp108});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 653);
    ca_.Goto(&block8, tmp101, tmp102, tmp103, tmp104, tmp105, tmp106, tmp107, tmp108, tmp109);
  }

  if (block7.is_used()) {
    TNode<Context> tmp117;
    TNode<Object> tmp118;
    TNode<Object> tmp119;
    TNode<Object> tmp120;
    TNode<Object> tmp121;
    TNode<JSDataView> tmp122;
    TNode<Number> tmp123;
    TNode<BoolT> tmp124;
    TNode<JSArrayBuffer> tmp125;
    ca_.Bind(&block7, &tmp117, &tmp118, &tmp119, &tmp120, &tmp121, &tmp122, &tmp123, &tmp124, &tmp125);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 674);
    TNode<Number> tmp126;
    USE(tmp126);
    tmp126 = CodeStubAssembler(state_).ToNumber(TNode<Context>{tmp117}, TNode<Object>{tmp120});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 676);
    TNode<BoolT> tmp127;
    USE(tmp127);
    tmp127 = CodeStubAssembler(state_).IsDetachedBuffer(TNode<JSArrayBuffer>{tmp125});
    ca_.Branch(tmp127, &block13, &block14, tmp117, tmp118, tmp119, tmp120, tmp121, tmp122, tmp123, tmp124, tmp125, tmp126);
  }

  if (block13.is_used()) {
    TNode<Context> tmp128;
    TNode<Object> tmp129;
    TNode<Object> tmp130;
    TNode<Object> tmp131;
    TNode<Object> tmp132;
    TNode<JSDataView> tmp133;
    TNode<Number> tmp134;
    TNode<BoolT> tmp135;
    TNode<JSArrayBuffer> tmp136;
    TNode<Number> tmp137;
    ca_.Bind(&block13, &tmp128, &tmp129, &tmp130, &tmp131, &tmp132, &tmp133, &tmp134, &tmp135, &tmp136, &tmp137);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 677);
    TNode<String> tmp138;
    USE(tmp138);
    tmp138 = MakeDataViewSetterNameString_272(state_, p_kind);
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{tmp128}, MessageTemplate::kDetachedOperation, TNode<Object>{tmp138});
  }

  if (block14.is_used()) {
    TNode<Context> tmp139;
    TNode<Object> tmp140;
    TNode<Object> tmp141;
    TNode<Object> tmp142;
    TNode<Object> tmp143;
    TNode<JSDataView> tmp144;
    TNode<Number> tmp145;
    TNode<BoolT> tmp146;
    TNode<JSArrayBuffer> tmp147;
    TNode<Number> tmp148;
    ca_.Bind(&block14, &tmp139, &tmp140, &tmp141, &tmp142, &tmp143, &tmp144, &tmp145, &tmp146, &tmp147, &tmp148);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 680);
    TNode<Float64T> tmp149;
    USE(tmp149);
    tmp149 = Convert9ATfloat6420UT5ATSmi10HeapNumber_196(state_, TNode<Number>{tmp145});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 681);
    TNode<UintPtrT> tmp150;
    USE(tmp150);
    tmp150 = Convert9ATuintptr9ATfloat64_204(state_, TNode<Float64T>{tmp149});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 683);
    TNode<IntPtrT> tmp151 = ca_.IntPtrConstant(JSArrayBufferView::kByteOffsetOffset);
    USE(tmp151);
    TNode<UintPtrT>tmp152 = CodeStubAssembler(state_).LoadReference<UintPtrT>(CodeStubAssembler::Reference{tmp144, tmp151});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 684);
    TNode<IntPtrT> tmp153 = ca_.IntPtrConstant(JSArrayBufferView::kByteLengthOffset);
    USE(tmp153);
    TNode<UintPtrT>tmp154 = CodeStubAssembler(state_).LoadReference<UintPtrT>(CodeStubAssembler::Reference{tmp144, tmp153});
    TNode<Float64T> tmp155;
    USE(tmp155);
    tmp155 = Convert9ATfloat649ATuintptr_202(state_, TNode<UintPtrT>{tmp154});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 685);
    TNode<Float64T> tmp156;
    USE(tmp156);
    tmp156 = FromConstexpr9ATfloat6417ATconstexpr_int31_165(state_, (DataViewBuiltinsAssembler(state_).DataViewElementSize(p_kind)));
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 687);
    TNode<Float64T> tmp157;
    USE(tmp157);
    tmp157 = CodeStubAssembler(state_).Float64Add(TNode<Float64T>{tmp149}, TNode<Float64T>{tmp156});
    TNode<BoolT> tmp158;
    USE(tmp158);
    tmp158 = CodeStubAssembler(state_).Float64GreaterThan(TNode<Float64T>{tmp157}, TNode<Float64T>{tmp155});
    ca_.Branch(tmp158, &block15, &block16, tmp139, tmp140, tmp141, tmp142, tmp143, tmp144, tmp145, tmp146, tmp147, tmp148, tmp149, tmp150, tmp152, tmp155, tmp156);
  }

  if (block15.is_used()) {
    TNode<Context> tmp159;
    TNode<Object> tmp160;
    TNode<Object> tmp161;
    TNode<Object> tmp162;
    TNode<Object> tmp163;
    TNode<JSDataView> tmp164;
    TNode<Number> tmp165;
    TNode<BoolT> tmp166;
    TNode<JSArrayBuffer> tmp167;
    TNode<Number> tmp168;
    TNode<Float64T> tmp169;
    TNode<UintPtrT> tmp170;
    TNode<UintPtrT> tmp171;
    TNode<Float64T> tmp172;
    TNode<Float64T> tmp173;
    ca_.Bind(&block15, &tmp159, &tmp160, &tmp161, &tmp162, &tmp163, &tmp164, &tmp165, &tmp166, &tmp167, &tmp168, &tmp169, &tmp170, &tmp171, &tmp172, &tmp173);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 688);
    CodeStubAssembler(state_).ThrowRangeError(TNode<Context>{tmp159}, MessageTemplate::kInvalidDataViewAccessorOffset);
  }

  if (block16.is_used()) {
    TNode<Context> tmp174;
    TNode<Object> tmp175;
    TNode<Object> tmp176;
    TNode<Object> tmp177;
    TNode<Object> tmp178;
    TNode<JSDataView> tmp179;
    TNode<Number> tmp180;
    TNode<BoolT> tmp181;
    TNode<JSArrayBuffer> tmp182;
    TNode<Number> tmp183;
    TNode<Float64T> tmp184;
    TNode<UintPtrT> tmp185;
    TNode<UintPtrT> tmp186;
    TNode<Float64T> tmp187;
    TNode<Float64T> tmp188;
    ca_.Bind(&block16, &tmp174, &tmp175, &tmp176, &tmp177, &tmp178, &tmp179, &tmp180, &tmp181, &tmp182, &tmp183, &tmp184, &tmp185, &tmp186, &tmp187, &tmp188);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 691);
    TNode<UintPtrT> tmp189;
    USE(tmp189);
    tmp189 = CodeStubAssembler(state_).UintPtrAdd(TNode<UintPtrT>{tmp185}, TNode<UintPtrT>{tmp186});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 693);
    TNode<Float64T> tmp190;
    USE(tmp190);
    tmp190 = CodeStubAssembler(state_).ChangeNumberToFloat64(TNode<Number>{tmp183});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 695);
    if ((((CodeStubAssembler(state_).ElementsKindEqual(p_kind, UINT8_ELEMENTS)) || (CodeStubAssembler(state_).ElementsKindEqual(p_kind, INT8_ELEMENTS))))) {
      ca_.Goto(&block17, tmp174, tmp175, tmp176, tmp177, tmp178, tmp179, tmp180, tmp181, tmp182, tmp183, tmp184, tmp185, tmp186, tmp187, tmp188, tmp189, tmp190);
    } else {
      ca_.Goto(&block18, tmp174, tmp175, tmp176, tmp177, tmp178, tmp179, tmp180, tmp181, tmp182, tmp183, tmp184, tmp185, tmp186, tmp187, tmp188, tmp189, tmp190);
    }
  }

  if (block17.is_used()) {
    TNode<Context> tmp191;
    TNode<Object> tmp192;
    TNode<Object> tmp193;
    TNode<Object> tmp194;
    TNode<Object> tmp195;
    TNode<JSDataView> tmp196;
    TNode<Number> tmp197;
    TNode<BoolT> tmp198;
    TNode<JSArrayBuffer> tmp199;
    TNode<Number> tmp200;
    TNode<Float64T> tmp201;
    TNode<UintPtrT> tmp202;
    TNode<UintPtrT> tmp203;
    TNode<Float64T> tmp204;
    TNode<Float64T> tmp205;
    TNode<UintPtrT> tmp206;
    TNode<Float64T> tmp207;
    ca_.Bind(&block17, &tmp191, &tmp192, &tmp193, &tmp194, &tmp195, &tmp196, &tmp197, &tmp198, &tmp199, &tmp200, &tmp201, &tmp202, &tmp203, &tmp204, &tmp205, &tmp206, &tmp207);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 697);
    TNode<Uint32T> tmp208;
    USE(tmp208);
    tmp208 = CodeStubAssembler(state_).TruncateFloat64ToWord32(TNode<Float64T>{tmp207});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 696);
    StoreDataView8_287(state_, TNode<JSArrayBuffer>{tmp199}, TNode<UintPtrT>{tmp206}, TNode<Uint32T>{tmp208});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 695);
    ca_.Goto(&block19, tmp191, tmp192, tmp193, tmp194, tmp195, tmp196, tmp197, tmp198, tmp199, tmp200, tmp201, tmp202, tmp203, tmp204, tmp205, tmp206, tmp207);
  }

  if (block18.is_used()) {
    TNode<Context> tmp209;
    TNode<Object> tmp210;
    TNode<Object> tmp211;
    TNode<Object> tmp212;
    TNode<Object> tmp213;
    TNode<JSDataView> tmp214;
    TNode<Number> tmp215;
    TNode<BoolT> tmp216;
    TNode<JSArrayBuffer> tmp217;
    TNode<Number> tmp218;
    TNode<Float64T> tmp219;
    TNode<UintPtrT> tmp220;
    TNode<UintPtrT> tmp221;
    TNode<Float64T> tmp222;
    TNode<Float64T> tmp223;
    TNode<UintPtrT> tmp224;
    TNode<Float64T> tmp225;
    ca_.Bind(&block18, &tmp209, &tmp210, &tmp211, &tmp212, &tmp213, &tmp214, &tmp215, &tmp216, &tmp217, &tmp218, &tmp219, &tmp220, &tmp221, &tmp222, &tmp223, &tmp224, &tmp225);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 698);
    if ((((CodeStubAssembler(state_).ElementsKindEqual(p_kind, UINT16_ELEMENTS)) || (CodeStubAssembler(state_).ElementsKindEqual(p_kind, INT16_ELEMENTS))))) {
      ca_.Goto(&block20, tmp209, tmp210, tmp211, tmp212, tmp213, tmp214, tmp215, tmp216, tmp217, tmp218, tmp219, tmp220, tmp221, tmp222, tmp223, tmp224, tmp225);
    } else {
      ca_.Goto(&block21, tmp209, tmp210, tmp211, tmp212, tmp213, tmp214, tmp215, tmp216, tmp217, tmp218, tmp219, tmp220, tmp221, tmp222, tmp223, tmp224, tmp225);
    }
  }

  if (block20.is_used()) {
    TNode<Context> tmp226;
    TNode<Object> tmp227;
    TNode<Object> tmp228;
    TNode<Object> tmp229;
    TNode<Object> tmp230;
    TNode<JSDataView> tmp231;
    TNode<Number> tmp232;
    TNode<BoolT> tmp233;
    TNode<JSArrayBuffer> tmp234;
    TNode<Number> tmp235;
    TNode<Float64T> tmp236;
    TNode<UintPtrT> tmp237;
    TNode<UintPtrT> tmp238;
    TNode<Float64T> tmp239;
    TNode<Float64T> tmp240;
    TNode<UintPtrT> tmp241;
    TNode<Float64T> tmp242;
    ca_.Bind(&block20, &tmp226, &tmp227, &tmp228, &tmp229, &tmp230, &tmp231, &tmp232, &tmp233, &tmp234, &tmp235, &tmp236, &tmp237, &tmp238, &tmp239, &tmp240, &tmp241, &tmp242);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 700);
    TNode<Uint32T> tmp243;
    USE(tmp243);
    tmp243 = CodeStubAssembler(state_).TruncateFloat64ToWord32(TNode<Float64T>{tmp242});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 701);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 699);
    StoreDataView16_288(state_, TNode<JSArrayBuffer>{tmp234}, TNode<UintPtrT>{tmp241}, TNode<Uint32T>{tmp243}, TNode<BoolT>{tmp233});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 698);
    ca_.Goto(&block22, tmp226, tmp227, tmp228, tmp229, tmp230, tmp231, tmp232, tmp233, tmp234, tmp235, tmp236, tmp237, tmp238, tmp239, tmp240, tmp241, tmp242);
  }

  if (block21.is_used()) {
    TNode<Context> tmp244;
    TNode<Object> tmp245;
    TNode<Object> tmp246;
    TNode<Object> tmp247;
    TNode<Object> tmp248;
    TNode<JSDataView> tmp249;
    TNode<Number> tmp250;
    TNode<BoolT> tmp251;
    TNode<JSArrayBuffer> tmp252;
    TNode<Number> tmp253;
    TNode<Float64T> tmp254;
    TNode<UintPtrT> tmp255;
    TNode<UintPtrT> tmp256;
    TNode<Float64T> tmp257;
    TNode<Float64T> tmp258;
    TNode<UintPtrT> tmp259;
    TNode<Float64T> tmp260;
    ca_.Bind(&block21, &tmp244, &tmp245, &tmp246, &tmp247, &tmp248, &tmp249, &tmp250, &tmp251, &tmp252, &tmp253, &tmp254, &tmp255, &tmp256, &tmp257, &tmp258, &tmp259, &tmp260);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 702);
    if ((((CodeStubAssembler(state_).ElementsKindEqual(p_kind, UINT32_ELEMENTS)) || (CodeStubAssembler(state_).ElementsKindEqual(p_kind, INT32_ELEMENTS))))) {
      ca_.Goto(&block23, tmp244, tmp245, tmp246, tmp247, tmp248, tmp249, tmp250, tmp251, tmp252, tmp253, tmp254, tmp255, tmp256, tmp257, tmp258, tmp259, tmp260);
    } else {
      ca_.Goto(&block24, tmp244, tmp245, tmp246, tmp247, tmp248, tmp249, tmp250, tmp251, tmp252, tmp253, tmp254, tmp255, tmp256, tmp257, tmp258, tmp259, tmp260);
    }
  }

  if (block23.is_used()) {
    TNode<Context> tmp261;
    TNode<Object> tmp262;
    TNode<Object> tmp263;
    TNode<Object> tmp264;
    TNode<Object> tmp265;
    TNode<JSDataView> tmp266;
    TNode<Number> tmp267;
    TNode<BoolT> tmp268;
    TNode<JSArrayBuffer> tmp269;
    TNode<Number> tmp270;
    TNode<Float64T> tmp271;
    TNode<UintPtrT> tmp272;
    TNode<UintPtrT> tmp273;
    TNode<Float64T> tmp274;
    TNode<Float64T> tmp275;
    TNode<UintPtrT> tmp276;
    TNode<Float64T> tmp277;
    ca_.Bind(&block23, &tmp261, &tmp262, &tmp263, &tmp264, &tmp265, &tmp266, &tmp267, &tmp268, &tmp269, &tmp270, &tmp271, &tmp272, &tmp273, &tmp274, &tmp275, &tmp276, &tmp277);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 704);
    TNode<Uint32T> tmp278;
    USE(tmp278);
    tmp278 = CodeStubAssembler(state_).TruncateFloat64ToWord32(TNode<Float64T>{tmp277});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 705);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 703);
    StoreDataView32_289(state_, TNode<JSArrayBuffer>{tmp269}, TNode<UintPtrT>{tmp276}, TNode<Uint32T>{tmp278}, TNode<BoolT>{tmp268});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 702);
    ca_.Goto(&block25, tmp261, tmp262, tmp263, tmp264, tmp265, tmp266, tmp267, tmp268, tmp269, tmp270, tmp271, tmp272, tmp273, tmp274, tmp275, tmp276, tmp277);
  }

  if (block24.is_used()) {
    TNode<Context> tmp279;
    TNode<Object> tmp280;
    TNode<Object> tmp281;
    TNode<Object> tmp282;
    TNode<Object> tmp283;
    TNode<JSDataView> tmp284;
    TNode<Number> tmp285;
    TNode<BoolT> tmp286;
    TNode<JSArrayBuffer> tmp287;
    TNode<Number> tmp288;
    TNode<Float64T> tmp289;
    TNode<UintPtrT> tmp290;
    TNode<UintPtrT> tmp291;
    TNode<Float64T> tmp292;
    TNode<Float64T> tmp293;
    TNode<UintPtrT> tmp294;
    TNode<Float64T> tmp295;
    ca_.Bind(&block24, &tmp279, &tmp280, &tmp281, &tmp282, &tmp283, &tmp284, &tmp285, &tmp286, &tmp287, &tmp288, &tmp289, &tmp290, &tmp291, &tmp292, &tmp293, &tmp294, &tmp295);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 706);
    if (((CodeStubAssembler(state_).ElementsKindEqual(p_kind, FLOAT32_ELEMENTS)))) {
      ca_.Goto(&block26, tmp279, tmp280, tmp281, tmp282, tmp283, tmp284, tmp285, tmp286, tmp287, tmp288, tmp289, tmp290, tmp291, tmp292, tmp293, tmp294, tmp295);
    } else {
      ca_.Goto(&block27, tmp279, tmp280, tmp281, tmp282, tmp283, tmp284, tmp285, tmp286, tmp287, tmp288, tmp289, tmp290, tmp291, tmp292, tmp293, tmp294, tmp295);
    }
  }

  if (block26.is_used()) {
    TNode<Context> tmp296;
    TNode<Object> tmp297;
    TNode<Object> tmp298;
    TNode<Object> tmp299;
    TNode<Object> tmp300;
    TNode<JSDataView> tmp301;
    TNode<Number> tmp302;
    TNode<BoolT> tmp303;
    TNode<JSArrayBuffer> tmp304;
    TNode<Number> tmp305;
    TNode<Float64T> tmp306;
    TNode<UintPtrT> tmp307;
    TNode<UintPtrT> tmp308;
    TNode<Float64T> tmp309;
    TNode<Float64T> tmp310;
    TNode<UintPtrT> tmp311;
    TNode<Float64T> tmp312;
    ca_.Bind(&block26, &tmp296, &tmp297, &tmp298, &tmp299, &tmp300, &tmp301, &tmp302, &tmp303, &tmp304, &tmp305, &tmp306, &tmp307, &tmp308, &tmp309, &tmp310, &tmp311, &tmp312);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 707);
    TNode<Float32T> tmp313;
    USE(tmp313);
    tmp313 = CodeStubAssembler(state_).TruncateFloat64ToFloat32(TNode<Float64T>{tmp312});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 709);
    TNode<Uint32T> tmp314;
    USE(tmp314);
    tmp314 = CodeStubAssembler(state_).BitcastFloat32ToInt32(TNode<Float32T>{tmp313});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 710);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 708);
    StoreDataView32_289(state_, TNode<JSArrayBuffer>{tmp304}, TNode<UintPtrT>{tmp311}, TNode<Uint32T>{tmp314}, TNode<BoolT>{tmp303});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 706);
    ca_.Goto(&block28, tmp296, tmp297, tmp298, tmp299, tmp300, tmp301, tmp302, tmp303, tmp304, tmp305, tmp306, tmp307, tmp308, tmp309, tmp310, tmp311, tmp312);
  }

  if (block27.is_used()) {
    TNode<Context> tmp315;
    TNode<Object> tmp316;
    TNode<Object> tmp317;
    TNode<Object> tmp318;
    TNode<Object> tmp319;
    TNode<JSDataView> tmp320;
    TNode<Number> tmp321;
    TNode<BoolT> tmp322;
    TNode<JSArrayBuffer> tmp323;
    TNode<Number> tmp324;
    TNode<Float64T> tmp325;
    TNode<UintPtrT> tmp326;
    TNode<UintPtrT> tmp327;
    TNode<Float64T> tmp328;
    TNode<Float64T> tmp329;
    TNode<UintPtrT> tmp330;
    TNode<Float64T> tmp331;
    ca_.Bind(&block27, &tmp315, &tmp316, &tmp317, &tmp318, &tmp319, &tmp320, &tmp321, &tmp322, &tmp323, &tmp324, &tmp325, &tmp326, &tmp327, &tmp328, &tmp329, &tmp330, &tmp331);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 711);
    if (((CodeStubAssembler(state_).ElementsKindEqual(p_kind, FLOAT64_ELEMENTS)))) {
      ca_.Goto(&block29, tmp315, tmp316, tmp317, tmp318, tmp319, tmp320, tmp321, tmp322, tmp323, tmp324, tmp325, tmp326, tmp327, tmp328, tmp329, tmp330, tmp331);
    } else {
      ca_.Goto(&block30, tmp315, tmp316, tmp317, tmp318, tmp319, tmp320, tmp321, tmp322, tmp323, tmp324, tmp325, tmp326, tmp327, tmp328, tmp329, tmp330, tmp331);
    }
  }

  if (block29.is_used()) {
    TNode<Context> tmp332;
    TNode<Object> tmp333;
    TNode<Object> tmp334;
    TNode<Object> tmp335;
    TNode<Object> tmp336;
    TNode<JSDataView> tmp337;
    TNode<Number> tmp338;
    TNode<BoolT> tmp339;
    TNode<JSArrayBuffer> tmp340;
    TNode<Number> tmp341;
    TNode<Float64T> tmp342;
    TNode<UintPtrT> tmp343;
    TNode<UintPtrT> tmp344;
    TNode<Float64T> tmp345;
    TNode<Float64T> tmp346;
    TNode<UintPtrT> tmp347;
    TNode<Float64T> tmp348;
    ca_.Bind(&block29, &tmp332, &tmp333, &tmp334, &tmp335, &tmp336, &tmp337, &tmp338, &tmp339, &tmp340, &tmp341, &tmp342, &tmp343, &tmp344, &tmp345, &tmp346, &tmp347, &tmp348);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 712);
    TNode<Uint32T> tmp349;
    USE(tmp349);
    tmp349 = CodeStubAssembler(state_).Float64ExtractLowWord32(TNode<Float64T>{tmp348});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 713);
    TNode<Uint32T> tmp350;
    USE(tmp350);
    tmp350 = CodeStubAssembler(state_).Float64ExtractHighWord32(TNode<Float64T>{tmp348});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 714);
    StoreDataView64_290(state_, TNode<JSArrayBuffer>{tmp340}, TNode<UintPtrT>{tmp347}, TNode<Uint32T>{tmp349}, TNode<Uint32T>{tmp350}, TNode<BoolT>{tmp339});
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 711);
    ca_.Goto(&block31, tmp332, tmp333, tmp334, tmp335, tmp336, tmp337, tmp338, tmp339, tmp340, tmp341, tmp342, tmp343, tmp344, tmp345, tmp346, tmp347, tmp348);
  }

  if (block30.is_used()) {
    TNode<Context> tmp351;
    TNode<Object> tmp352;
    TNode<Object> tmp353;
    TNode<Object> tmp354;
    TNode<Object> tmp355;
    TNode<JSDataView> tmp356;
    TNode<Number> tmp357;
    TNode<BoolT> tmp358;
    TNode<JSArrayBuffer> tmp359;
    TNode<Number> tmp360;
    TNode<Float64T> tmp361;
    TNode<UintPtrT> tmp362;
    TNode<UintPtrT> tmp363;
    TNode<Float64T> tmp364;
    TNode<Float64T> tmp365;
    TNode<UintPtrT> tmp366;
    TNode<Float64T> tmp367;
    ca_.Bind(&block30, &tmp351, &tmp352, &tmp353, &tmp354, &tmp355, &tmp356, &tmp357, &tmp358, &tmp359, &tmp360, &tmp361, &tmp362, &tmp363, &tmp364, &tmp365, &tmp366, &tmp367);
    ca_.Goto(&block31, tmp351, tmp352, tmp353, tmp354, tmp355, tmp356, tmp357, tmp358, tmp359, tmp360, tmp361, tmp362, tmp363, tmp364, tmp365, tmp366, tmp367);
  }

  if (block31.is_used()) {
    TNode<Context> tmp368;
    TNode<Object> tmp369;
    TNode<Object> tmp370;
    TNode<Object> tmp371;
    TNode<Object> tmp372;
    TNode<JSDataView> tmp373;
    TNode<Number> tmp374;
    TNode<BoolT> tmp375;
    TNode<JSArrayBuffer> tmp376;
    TNode<Number> tmp377;
    TNode<Float64T> tmp378;
    TNode<UintPtrT> tmp379;
    TNode<UintPtrT> tmp380;
    TNode<Float64T> tmp381;
    TNode<Float64T> tmp382;
    TNode<UintPtrT> tmp383;
    TNode<Float64T> tmp384;
    ca_.Bind(&block31, &tmp368, &tmp369, &tmp370, &tmp371, &tmp372, &tmp373, &tmp374, &tmp375, &tmp376, &tmp377, &tmp378, &tmp379, &tmp380, &tmp381, &tmp382, &tmp383, &tmp384);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 706);
    ca_.Goto(&block28, tmp368, tmp369, tmp370, tmp371, tmp372, tmp373, tmp374, tmp375, tmp376, tmp377, tmp378, tmp379, tmp380, tmp381, tmp382, tmp383, tmp384);
  }

  if (block28.is_used()) {
    TNode<Context> tmp385;
    TNode<Object> tmp386;
    TNode<Object> tmp387;
    TNode<Object> tmp388;
    TNode<Object> tmp389;
    TNode<JSDataView> tmp390;
    TNode<Number> tmp391;
    TNode<BoolT> tmp392;
    TNode<JSArrayBuffer> tmp393;
    TNode<Number> tmp394;
    TNode<Float64T> tmp395;
    TNode<UintPtrT> tmp396;
    TNode<UintPtrT> tmp397;
    TNode<Float64T> tmp398;
    TNode<Float64T> tmp399;
    TNode<UintPtrT> tmp400;
    TNode<Float64T> tmp401;
    ca_.Bind(&block28, &tmp385, &tmp386, &tmp387, &tmp388, &tmp389, &tmp390, &tmp391, &tmp392, &tmp393, &tmp394, &tmp395, &tmp396, &tmp397, &tmp398, &tmp399, &tmp400, &tmp401);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 702);
    ca_.Goto(&block25, tmp385, tmp386, tmp387, tmp388, tmp389, tmp390, tmp391, tmp392, tmp393, tmp394, tmp395, tmp396, tmp397, tmp398, tmp399, tmp400, tmp401);
  }

  if (block25.is_used()) {
    TNode<Context> tmp402;
    TNode<Object> tmp403;
    TNode<Object> tmp404;
    TNode<Object> tmp405;
    TNode<Object> tmp406;
    TNode<JSDataView> tmp407;
    TNode<Number> tmp408;
    TNode<BoolT> tmp409;
    TNode<JSArrayBuffer> tmp410;
    TNode<Number> tmp411;
    TNode<Float64T> tmp412;
    TNode<UintPtrT> tmp413;
    TNode<UintPtrT> tmp414;
    TNode<Float64T> tmp415;
    TNode<Float64T> tmp416;
    TNode<UintPtrT> tmp417;
    TNode<Float64T> tmp418;
    ca_.Bind(&block25, &tmp402, &tmp403, &tmp404, &tmp405, &tmp406, &tmp407, &tmp408, &tmp409, &tmp410, &tmp411, &tmp412, &tmp413, &tmp414, &tmp415, &tmp416, &tmp417, &tmp418);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 698);
    ca_.Goto(&block22, tmp402, tmp403, tmp404, tmp405, tmp406, tmp407, tmp408, tmp409, tmp410, tmp411, tmp412, tmp413, tmp414, tmp415, tmp416, tmp417, tmp418);
  }

  if (block22.is_used()) {
    TNode<Context> tmp419;
    TNode<Object> tmp420;
    TNode<Object> tmp421;
    TNode<Object> tmp422;
    TNode<Object> tmp423;
    TNode<JSDataView> tmp424;
    TNode<Number> tmp425;
    TNode<BoolT> tmp426;
    TNode<JSArrayBuffer> tmp427;
    TNode<Number> tmp428;
    TNode<Float64T> tmp429;
    TNode<UintPtrT> tmp430;
    TNode<UintPtrT> tmp431;
    TNode<Float64T> tmp432;
    TNode<Float64T> tmp433;
    TNode<UintPtrT> tmp434;
    TNode<Float64T> tmp435;
    ca_.Bind(&block22, &tmp419, &tmp420, &tmp421, &tmp422, &tmp423, &tmp424, &tmp425, &tmp426, &tmp427, &tmp428, &tmp429, &tmp430, &tmp431, &tmp432, &tmp433, &tmp434, &tmp435);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 695);
    ca_.Goto(&block19, tmp419, tmp420, tmp421, tmp422, tmp423, tmp424, tmp425, tmp426, tmp427, tmp428, tmp429, tmp430, tmp431, tmp432, tmp433, tmp434, tmp435);
  }

  if (block19.is_used()) {
    TNode<Context> tmp436;
    TNode<Object> tmp437;
    TNode<Object> tmp438;
    TNode<Object> tmp439;
    TNode<Object> tmp440;
    TNode<JSDataView> tmp441;
    TNode<Number> tmp442;
    TNode<BoolT> tmp443;
    TNode<JSArrayBuffer> tmp444;
    TNode<Number> tmp445;
    TNode<Float64T> tmp446;
    TNode<UintPtrT> tmp447;
    TNode<UintPtrT> tmp448;
    TNode<Float64T> tmp449;
    TNode<Float64T> tmp450;
    TNode<UintPtrT> tmp451;
    TNode<Float64T> tmp452;
    ca_.Bind(&block19, &tmp436, &tmp437, &tmp438, &tmp439, &tmp440, &tmp441, &tmp442, &tmp443, &tmp444, &tmp445, &tmp446, &tmp447, &tmp448, &tmp449, &tmp450, &tmp451, &tmp452);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 673);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 653);
    ca_.Goto(&block8, tmp436, tmp437, tmp438, tmp439, tmp440, tmp441, tmp442, tmp443, tmp444);
  }

  if (block8.is_used()) {
    TNode<Context> tmp453;
    TNode<Object> tmp454;
    TNode<Object> tmp455;
    TNode<Object> tmp456;
    TNode<Object> tmp457;
    TNode<JSDataView> tmp458;
    TNode<Number> tmp459;
    TNode<BoolT> tmp460;
    TNode<JSArrayBuffer> tmp461;
    ca_.Bind(&block8, &tmp453, &tmp454, &tmp455, &tmp456, &tmp457, &tmp458, &tmp459, &tmp460, &tmp461);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 717);
    TNode<Oddball> tmp462;
    USE(tmp462);
    tmp462 = Undefined_64(state_);
    ca_.Goto(&block1, tmp453, tmp454, tmp455, tmp456, tmp457, tmp462);
  }

  if (block1.is_used()) {
    TNode<Context> tmp463;
    TNode<Object> tmp464;
    TNode<Object> tmp465;
    TNode<Object> tmp466;
    TNode<Object> tmp467;
    TNode<Object> tmp468;
    ca_.Bind(&block1, &tmp463, &tmp464, &tmp465, &tmp466, &tmp467, &tmp468);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 634);
    ca_.Goto(&block32, tmp463, tmp464, tmp465, tmp466, tmp467, tmp468);
  }

    TNode<Context> tmp469;
    TNode<Object> tmp470;
    TNode<Object> tmp471;
    TNode<Object> tmp472;
    TNode<Object> tmp473;
    TNode<Object> tmp474;
    ca_.Bind(&block32, &tmp469, &tmp470, &tmp471, &tmp472, &tmp473, &tmp474);
  return TNode<Object>{tmp474};
}

TF_BUILTIN(DataViewPrototypeSetUint8, CodeStubAssembler) {
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
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, torque_arguments.frame, torque_arguments.base, torque_arguments.length, parameter0, parameter1);

  if (block0.is_used()) {
    TNode<RawPtrT> tmp0;
    TNode<RawPtrT> tmp1;
    TNode<IntPtrT> tmp2;
    TNode<Context> tmp3;
    TNode<Object> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 722);
    TNode<IntPtrT> tmp5;
    USE(tmp5);
    tmp5 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 0);
    TNode<BoolT> tmp6;
    USE(tmp6);
    tmp6 = CodeStubAssembler(state_).IntPtrGreaterThan(TNode<IntPtrT>{tmp2}, TNode<IntPtrT>{tmp5});
    ca_.Branch(tmp6, &block1, &block2, tmp0, tmp1, tmp2, tmp3, tmp4);
  }

  if (block1.is_used()) {
    TNode<RawPtrT> tmp7;
    TNode<RawPtrT> tmp8;
    TNode<IntPtrT> tmp9;
    TNode<Context> tmp10;
    TNode<Object> tmp11;
    ca_.Bind(&block1, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11);
    TNode<IntPtrT> tmp12;
    USE(tmp12);
    tmp12 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 0);
    TNode<Object> tmp13;
    USE(tmp13);
    tmp13 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{tmp7}, TNode<RawPtrT>{tmp8}, TNode<IntPtrT>{tmp9}}, TNode<IntPtrT>{tmp12});
    ca_.Goto(&block4, tmp7, tmp8, tmp9, tmp10, tmp11, tmp13);
  }

  if (block2.is_used()) {
    TNode<RawPtrT> tmp14;
    TNode<RawPtrT> tmp15;
    TNode<IntPtrT> tmp16;
    TNode<Context> tmp17;
    TNode<Object> tmp18;
    ca_.Bind(&block2, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18);
    TNode<Oddball> tmp19;
    USE(tmp19);
    tmp19 = Undefined_64(state_);
    ca_.Goto(&block3, tmp14, tmp15, tmp16, tmp17, tmp18, tmp19);
  }

  if (block4.is_used()) {
    TNode<RawPtrT> tmp20;
    TNode<RawPtrT> tmp21;
    TNode<IntPtrT> tmp22;
    TNode<Context> tmp23;
    TNode<Object> tmp24;
    TNode<Object> tmp25;
    ca_.Bind(&block4, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25);
    ca_.Goto(&block3, tmp20, tmp21, tmp22, tmp23, tmp24, tmp25);
  }

  if (block3.is_used()) {
    TNode<RawPtrT> tmp26;
    TNode<RawPtrT> tmp27;
    TNode<IntPtrT> tmp28;
    TNode<Context> tmp29;
    TNode<Object> tmp30;
    TNode<Object> tmp31;
    ca_.Bind(&block3, &tmp26, &tmp27, &tmp28, &tmp29, &tmp30, &tmp31);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 723);
    TNode<IntPtrT> tmp32;
    USE(tmp32);
    tmp32 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 1);
    TNode<BoolT> tmp33;
    USE(tmp33);
    tmp33 = CodeStubAssembler(state_).IntPtrGreaterThan(TNode<IntPtrT>{tmp28}, TNode<IntPtrT>{tmp32});
    ca_.Branch(tmp33, &block5, &block6, tmp26, tmp27, tmp28, tmp29, tmp30, tmp31);
  }

  if (block5.is_used()) {
    TNode<RawPtrT> tmp34;
    TNode<RawPtrT> tmp35;
    TNode<IntPtrT> tmp36;
    TNode<Context> tmp37;
    TNode<Object> tmp38;
    TNode<Object> tmp39;
    ca_.Bind(&block5, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39);
    TNode<IntPtrT> tmp40;
    USE(tmp40);
    tmp40 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 1);
    TNode<Object> tmp41;
    USE(tmp41);
    tmp41 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{tmp34}, TNode<RawPtrT>{tmp35}, TNode<IntPtrT>{tmp36}}, TNode<IntPtrT>{tmp40});
    ca_.Goto(&block8, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39, tmp41);
  }

  if (block6.is_used()) {
    TNode<RawPtrT> tmp42;
    TNode<RawPtrT> tmp43;
    TNode<IntPtrT> tmp44;
    TNode<Context> tmp45;
    TNode<Object> tmp46;
    TNode<Object> tmp47;
    ca_.Bind(&block6, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47);
    TNode<Oddball> tmp48;
    USE(tmp48);
    tmp48 = Undefined_64(state_);
    ca_.Goto(&block7, tmp42, tmp43, tmp44, tmp45, tmp46, tmp47, tmp48);
  }

  if (block8.is_used()) {
    TNode<RawPtrT> tmp49;
    TNode<RawPtrT> tmp50;
    TNode<IntPtrT> tmp51;
    TNode<Context> tmp52;
    TNode<Object> tmp53;
    TNode<Object> tmp54;
    TNode<Object> tmp55;
    ca_.Bind(&block8, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55);
    ca_.Goto(&block7, tmp49, tmp50, tmp51, tmp52, tmp53, tmp54, tmp55);
  }

  if (block7.is_used()) {
    TNode<RawPtrT> tmp56;
    TNode<RawPtrT> tmp57;
    TNode<IntPtrT> tmp58;
    TNode<Context> tmp59;
    TNode<Object> tmp60;
    TNode<Object> tmp61;
    TNode<Object> tmp62;
    ca_.Bind(&block7, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 725);
    TNode<Oddball> tmp63;
    USE(tmp63);
    tmp63 = Undefined_64(state_);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 724);
    TNode<Object> tmp64;
    USE(tmp64);
    tmp64 = DataViewSet_292(state_, TNode<Context>{tmp59}, TNode<Object>{tmp60}, TNode<Object>{tmp61}, TNode<Object>{tmp62}, TNode<Object>{tmp63}, UINT8_ELEMENTS);
    arguments.PopAndReturn(tmp64);
  }
}

TF_BUILTIN(DataViewPrototypeSetInt8, CodeStubAssembler) {
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
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, torque_arguments.frame, torque_arguments.base, torque_arguments.length, parameter0, parameter1);

  if (block0.is_used()) {
    TNode<RawPtrT> tmp0;
    TNode<RawPtrT> tmp1;
    TNode<IntPtrT> tmp2;
    TNode<Context> tmp3;
    TNode<Object> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 730);
    TNode<IntPtrT> tmp5;
    USE(tmp5);
    tmp5 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 0);
    TNode<BoolT> tmp6;
    USE(tmp6);
    tmp6 = CodeStubAssembler(state_).IntPtrGreaterThan(TNode<IntPtrT>{tmp2}, TNode<IntPtrT>{tmp5});
    ca_.Branch(tmp6, &block1, &block2, tmp0, tmp1, tmp2, tmp3, tmp4);
  }

  if (block1.is_used()) {
    TNode<RawPtrT> tmp7;
    TNode<RawPtrT> tmp8;
    TNode<IntPtrT> tmp9;
    TNode<Context> tmp10;
    TNode<Object> tmp11;
    ca_.Bind(&block1, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11);
    TNode<IntPtrT> tmp12;
    USE(tmp12);
    tmp12 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 0);
    TNode<Object> tmp13;
    USE(tmp13);
    tmp13 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{tmp7}, TNode<RawPtrT>{tmp8}, TNode<IntPtrT>{tmp9}}, TNode<IntPtrT>{tmp12});
    ca_.Goto(&block4, tmp7, tmp8, tmp9, tmp10, tmp11, tmp13);
  }

  if (block2.is_used()) {
    TNode<RawPtrT> tmp14;
    TNode<RawPtrT> tmp15;
    TNode<IntPtrT> tmp16;
    TNode<Context> tmp17;
    TNode<Object> tmp18;
    ca_.Bind(&block2, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18);
    TNode<Oddball> tmp19;
    USE(tmp19);
    tmp19 = Undefined_64(state_);
    ca_.Goto(&block3, tmp14, tmp15, tmp16, tmp17, tmp18, tmp19);
  }

  if (block4.is_used()) {
    TNode<RawPtrT> tmp20;
    TNode<RawPtrT> tmp21;
    TNode<IntPtrT> tmp22;
    TNode<Context> tmp23;
    TNode<Object> tmp24;
    TNode<Object> tmp25;
    ca_.Bind(&block4, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25);
    ca_.Goto(&block3, tmp20, tmp21, tmp22, tmp23, tmp24, tmp25);
  }

  if (block3.is_used()) {
    TNode<RawPtrT> tmp26;
    TNode<RawPtrT> tmp27;
    TNode<IntPtrT> tmp28;
    TNode<Context> tmp29;
    TNode<Object> tmp30;
    TNode<Object> tmp31;
    ca_.Bind(&block3, &tmp26, &tmp27, &tmp28, &tmp29, &tmp30, &tmp31);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 731);
    TNode<IntPtrT> tmp32;
    USE(tmp32);
    tmp32 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 1);
    TNode<BoolT> tmp33;
    USE(tmp33);
    tmp33 = CodeStubAssembler(state_).IntPtrGreaterThan(TNode<IntPtrT>{tmp28}, TNode<IntPtrT>{tmp32});
    ca_.Branch(tmp33, &block5, &block6, tmp26, tmp27, tmp28, tmp29, tmp30, tmp31);
  }

  if (block5.is_used()) {
    TNode<RawPtrT> tmp34;
    TNode<RawPtrT> tmp35;
    TNode<IntPtrT> tmp36;
    TNode<Context> tmp37;
    TNode<Object> tmp38;
    TNode<Object> tmp39;
    ca_.Bind(&block5, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39);
    TNode<IntPtrT> tmp40;
    USE(tmp40);
    tmp40 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 1);
    TNode<Object> tmp41;
    USE(tmp41);
    tmp41 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{tmp34}, TNode<RawPtrT>{tmp35}, TNode<IntPtrT>{tmp36}}, TNode<IntPtrT>{tmp40});
    ca_.Goto(&block8, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39, tmp41);
  }

  if (block6.is_used()) {
    TNode<RawPtrT> tmp42;
    TNode<RawPtrT> tmp43;
    TNode<IntPtrT> tmp44;
    TNode<Context> tmp45;
    TNode<Object> tmp46;
    TNode<Object> tmp47;
    ca_.Bind(&block6, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47);
    TNode<Oddball> tmp48;
    USE(tmp48);
    tmp48 = Undefined_64(state_);
    ca_.Goto(&block7, tmp42, tmp43, tmp44, tmp45, tmp46, tmp47, tmp48);
  }

  if (block8.is_used()) {
    TNode<RawPtrT> tmp49;
    TNode<RawPtrT> tmp50;
    TNode<IntPtrT> tmp51;
    TNode<Context> tmp52;
    TNode<Object> tmp53;
    TNode<Object> tmp54;
    TNode<Object> tmp55;
    ca_.Bind(&block8, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55);
    ca_.Goto(&block7, tmp49, tmp50, tmp51, tmp52, tmp53, tmp54, tmp55);
  }

  if (block7.is_used()) {
    TNode<RawPtrT> tmp56;
    TNode<RawPtrT> tmp57;
    TNode<IntPtrT> tmp58;
    TNode<Context> tmp59;
    TNode<Object> tmp60;
    TNode<Object> tmp61;
    TNode<Object> tmp62;
    ca_.Bind(&block7, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 733);
    TNode<Oddball> tmp63;
    USE(tmp63);
    tmp63 = Undefined_64(state_);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 732);
    TNode<Object> tmp64;
    USE(tmp64);
    tmp64 = DataViewSet_292(state_, TNode<Context>{tmp59}, TNode<Object>{tmp60}, TNode<Object>{tmp61}, TNode<Object>{tmp62}, TNode<Object>{tmp63}, INT8_ELEMENTS);
    arguments.PopAndReturn(tmp64);
  }
}

TF_BUILTIN(DataViewPrototypeSetUint16, CodeStubAssembler) {
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
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, Object> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, Object> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, torque_arguments.frame, torque_arguments.base, torque_arguments.length, parameter0, parameter1);

  if (block0.is_used()) {
    TNode<RawPtrT> tmp0;
    TNode<RawPtrT> tmp1;
    TNode<IntPtrT> tmp2;
    TNode<Context> tmp3;
    TNode<Object> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 738);
    TNode<IntPtrT> tmp5;
    USE(tmp5);
    tmp5 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 0);
    TNode<BoolT> tmp6;
    USE(tmp6);
    tmp6 = CodeStubAssembler(state_).IntPtrGreaterThan(TNode<IntPtrT>{tmp2}, TNode<IntPtrT>{tmp5});
    ca_.Branch(tmp6, &block1, &block2, tmp0, tmp1, tmp2, tmp3, tmp4);
  }

  if (block1.is_used()) {
    TNode<RawPtrT> tmp7;
    TNode<RawPtrT> tmp8;
    TNode<IntPtrT> tmp9;
    TNode<Context> tmp10;
    TNode<Object> tmp11;
    ca_.Bind(&block1, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11);
    TNode<IntPtrT> tmp12;
    USE(tmp12);
    tmp12 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 0);
    TNode<Object> tmp13;
    USE(tmp13);
    tmp13 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{tmp7}, TNode<RawPtrT>{tmp8}, TNode<IntPtrT>{tmp9}}, TNode<IntPtrT>{tmp12});
    ca_.Goto(&block4, tmp7, tmp8, tmp9, tmp10, tmp11, tmp13);
  }

  if (block2.is_used()) {
    TNode<RawPtrT> tmp14;
    TNode<RawPtrT> tmp15;
    TNode<IntPtrT> tmp16;
    TNode<Context> tmp17;
    TNode<Object> tmp18;
    ca_.Bind(&block2, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18);
    TNode<Oddball> tmp19;
    USE(tmp19);
    tmp19 = Undefined_64(state_);
    ca_.Goto(&block3, tmp14, tmp15, tmp16, tmp17, tmp18, tmp19);
  }

  if (block4.is_used()) {
    TNode<RawPtrT> tmp20;
    TNode<RawPtrT> tmp21;
    TNode<IntPtrT> tmp22;
    TNode<Context> tmp23;
    TNode<Object> tmp24;
    TNode<Object> tmp25;
    ca_.Bind(&block4, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25);
    ca_.Goto(&block3, tmp20, tmp21, tmp22, tmp23, tmp24, tmp25);
  }

  if (block3.is_used()) {
    TNode<RawPtrT> tmp26;
    TNode<RawPtrT> tmp27;
    TNode<IntPtrT> tmp28;
    TNode<Context> tmp29;
    TNode<Object> tmp30;
    TNode<Object> tmp31;
    ca_.Bind(&block3, &tmp26, &tmp27, &tmp28, &tmp29, &tmp30, &tmp31);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 739);
    TNode<IntPtrT> tmp32;
    USE(tmp32);
    tmp32 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 1);
    TNode<BoolT> tmp33;
    USE(tmp33);
    tmp33 = CodeStubAssembler(state_).IntPtrGreaterThan(TNode<IntPtrT>{tmp28}, TNode<IntPtrT>{tmp32});
    ca_.Branch(tmp33, &block5, &block6, tmp26, tmp27, tmp28, tmp29, tmp30, tmp31);
  }

  if (block5.is_used()) {
    TNode<RawPtrT> tmp34;
    TNode<RawPtrT> tmp35;
    TNode<IntPtrT> tmp36;
    TNode<Context> tmp37;
    TNode<Object> tmp38;
    TNode<Object> tmp39;
    ca_.Bind(&block5, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39);
    TNode<IntPtrT> tmp40;
    USE(tmp40);
    tmp40 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 1);
    TNode<Object> tmp41;
    USE(tmp41);
    tmp41 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{tmp34}, TNode<RawPtrT>{tmp35}, TNode<IntPtrT>{tmp36}}, TNode<IntPtrT>{tmp40});
    ca_.Goto(&block8, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39, tmp41);
  }

  if (block6.is_used()) {
    TNode<RawPtrT> tmp42;
    TNode<RawPtrT> tmp43;
    TNode<IntPtrT> tmp44;
    TNode<Context> tmp45;
    TNode<Object> tmp46;
    TNode<Object> tmp47;
    ca_.Bind(&block6, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47);
    TNode<Oddball> tmp48;
    USE(tmp48);
    tmp48 = Undefined_64(state_);
    ca_.Goto(&block7, tmp42, tmp43, tmp44, tmp45, tmp46, tmp47, tmp48);
  }

  if (block8.is_used()) {
    TNode<RawPtrT> tmp49;
    TNode<RawPtrT> tmp50;
    TNode<IntPtrT> tmp51;
    TNode<Context> tmp52;
    TNode<Object> tmp53;
    TNode<Object> tmp54;
    TNode<Object> tmp55;
    ca_.Bind(&block8, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55);
    ca_.Goto(&block7, tmp49, tmp50, tmp51, tmp52, tmp53, tmp54, tmp55);
  }

  if (block7.is_used()) {
    TNode<RawPtrT> tmp56;
    TNode<RawPtrT> tmp57;
    TNode<IntPtrT> tmp58;
    TNode<Context> tmp59;
    TNode<Object> tmp60;
    TNode<Object> tmp61;
    TNode<Object> tmp62;
    ca_.Bind(&block7, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 741);
    TNode<IntPtrT> tmp63;
    USE(tmp63);
    tmp63 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 2);
    TNode<BoolT> tmp64;
    USE(tmp64);
    tmp64 = CodeStubAssembler(state_).IntPtrGreaterThan(TNode<IntPtrT>{tmp58}, TNode<IntPtrT>{tmp63});
    ca_.Branch(tmp64, &block9, &block10, tmp56, tmp57, tmp58, tmp59, tmp60, tmp61, tmp62);
  }

  if (block9.is_used()) {
    TNode<RawPtrT> tmp65;
    TNode<RawPtrT> tmp66;
    TNode<IntPtrT> tmp67;
    TNode<Context> tmp68;
    TNode<Object> tmp69;
    TNode<Object> tmp70;
    TNode<Object> tmp71;
    ca_.Bind(&block9, &tmp65, &tmp66, &tmp67, &tmp68, &tmp69, &tmp70, &tmp71);
    TNode<IntPtrT> tmp72;
    USE(tmp72);
    tmp72 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 2);
    TNode<Object> tmp73;
    USE(tmp73);
    tmp73 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{tmp65}, TNode<RawPtrT>{tmp66}, TNode<IntPtrT>{tmp67}}, TNode<IntPtrT>{tmp72});
    ca_.Goto(&block12, tmp65, tmp66, tmp67, tmp68, tmp69, tmp70, tmp71, tmp73);
  }

  if (block10.is_used()) {
    TNode<RawPtrT> tmp74;
    TNode<RawPtrT> tmp75;
    TNode<IntPtrT> tmp76;
    TNode<Context> tmp77;
    TNode<Object> tmp78;
    TNode<Object> tmp79;
    TNode<Object> tmp80;
    ca_.Bind(&block10, &tmp74, &tmp75, &tmp76, &tmp77, &tmp78, &tmp79, &tmp80);
    TNode<Oddball> tmp81;
    USE(tmp81);
    tmp81 = Undefined_64(state_);
    ca_.Goto(&block11, tmp74, tmp75, tmp76, tmp77, tmp78, tmp79, tmp80, tmp81);
  }

  if (block12.is_used()) {
    TNode<RawPtrT> tmp82;
    TNode<RawPtrT> tmp83;
    TNode<IntPtrT> tmp84;
    TNode<Context> tmp85;
    TNode<Object> tmp86;
    TNode<Object> tmp87;
    TNode<Object> tmp88;
    TNode<Object> tmp89;
    ca_.Bind(&block12, &tmp82, &tmp83, &tmp84, &tmp85, &tmp86, &tmp87, &tmp88, &tmp89);
    ca_.Goto(&block11, tmp82, tmp83, tmp84, tmp85, tmp86, tmp87, tmp88, tmp89);
  }

  if (block11.is_used()) {
    TNode<RawPtrT> tmp90;
    TNode<RawPtrT> tmp91;
    TNode<IntPtrT> tmp92;
    TNode<Context> tmp93;
    TNode<Object> tmp94;
    TNode<Object> tmp95;
    TNode<Object> tmp96;
    TNode<Object> tmp97;
    ca_.Bind(&block11, &tmp90, &tmp91, &tmp92, &tmp93, &tmp94, &tmp95, &tmp96, &tmp97);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 740);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 743);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 742);
    TNode<Object> tmp98;
    USE(tmp98);
    tmp98 = DataViewSet_292(state_, TNode<Context>{tmp93}, TNode<Object>{tmp94}, TNode<Object>{tmp95}, TNode<Object>{tmp96}, TNode<Object>{tmp97}, UINT16_ELEMENTS);
    arguments.PopAndReturn(tmp98);
  }
}

TF_BUILTIN(DataViewPrototypeSetInt16, CodeStubAssembler) {
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
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, Object> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, Object> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, torque_arguments.frame, torque_arguments.base, torque_arguments.length, parameter0, parameter1);

  if (block0.is_used()) {
    TNode<RawPtrT> tmp0;
    TNode<RawPtrT> tmp1;
    TNode<IntPtrT> tmp2;
    TNode<Context> tmp3;
    TNode<Object> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 748);
    TNode<IntPtrT> tmp5;
    USE(tmp5);
    tmp5 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 0);
    TNode<BoolT> tmp6;
    USE(tmp6);
    tmp6 = CodeStubAssembler(state_).IntPtrGreaterThan(TNode<IntPtrT>{tmp2}, TNode<IntPtrT>{tmp5});
    ca_.Branch(tmp6, &block1, &block2, tmp0, tmp1, tmp2, tmp3, tmp4);
  }

  if (block1.is_used()) {
    TNode<RawPtrT> tmp7;
    TNode<RawPtrT> tmp8;
    TNode<IntPtrT> tmp9;
    TNode<Context> tmp10;
    TNode<Object> tmp11;
    ca_.Bind(&block1, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11);
    TNode<IntPtrT> tmp12;
    USE(tmp12);
    tmp12 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 0);
    TNode<Object> tmp13;
    USE(tmp13);
    tmp13 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{tmp7}, TNode<RawPtrT>{tmp8}, TNode<IntPtrT>{tmp9}}, TNode<IntPtrT>{tmp12});
    ca_.Goto(&block4, tmp7, tmp8, tmp9, tmp10, tmp11, tmp13);
  }

  if (block2.is_used()) {
    TNode<RawPtrT> tmp14;
    TNode<RawPtrT> tmp15;
    TNode<IntPtrT> tmp16;
    TNode<Context> tmp17;
    TNode<Object> tmp18;
    ca_.Bind(&block2, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18);
    TNode<Oddball> tmp19;
    USE(tmp19);
    tmp19 = Undefined_64(state_);
    ca_.Goto(&block3, tmp14, tmp15, tmp16, tmp17, tmp18, tmp19);
  }

  if (block4.is_used()) {
    TNode<RawPtrT> tmp20;
    TNode<RawPtrT> tmp21;
    TNode<IntPtrT> tmp22;
    TNode<Context> tmp23;
    TNode<Object> tmp24;
    TNode<Object> tmp25;
    ca_.Bind(&block4, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25);
    ca_.Goto(&block3, tmp20, tmp21, tmp22, tmp23, tmp24, tmp25);
  }

  if (block3.is_used()) {
    TNode<RawPtrT> tmp26;
    TNode<RawPtrT> tmp27;
    TNode<IntPtrT> tmp28;
    TNode<Context> tmp29;
    TNode<Object> tmp30;
    TNode<Object> tmp31;
    ca_.Bind(&block3, &tmp26, &tmp27, &tmp28, &tmp29, &tmp30, &tmp31);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 749);
    TNode<IntPtrT> tmp32;
    USE(tmp32);
    tmp32 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 1);
    TNode<BoolT> tmp33;
    USE(tmp33);
    tmp33 = CodeStubAssembler(state_).IntPtrGreaterThan(TNode<IntPtrT>{tmp28}, TNode<IntPtrT>{tmp32});
    ca_.Branch(tmp33, &block5, &block6, tmp26, tmp27, tmp28, tmp29, tmp30, tmp31);
  }

  if (block5.is_used()) {
    TNode<RawPtrT> tmp34;
    TNode<RawPtrT> tmp35;
    TNode<IntPtrT> tmp36;
    TNode<Context> tmp37;
    TNode<Object> tmp38;
    TNode<Object> tmp39;
    ca_.Bind(&block5, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39);
    TNode<IntPtrT> tmp40;
    USE(tmp40);
    tmp40 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 1);
    TNode<Object> tmp41;
    USE(tmp41);
    tmp41 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{tmp34}, TNode<RawPtrT>{tmp35}, TNode<IntPtrT>{tmp36}}, TNode<IntPtrT>{tmp40});
    ca_.Goto(&block8, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39, tmp41);
  }

  if (block6.is_used()) {
    TNode<RawPtrT> tmp42;
    TNode<RawPtrT> tmp43;
    TNode<IntPtrT> tmp44;
    TNode<Context> tmp45;
    TNode<Object> tmp46;
    TNode<Object> tmp47;
    ca_.Bind(&block6, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47);
    TNode<Oddball> tmp48;
    USE(tmp48);
    tmp48 = Undefined_64(state_);
    ca_.Goto(&block7, tmp42, tmp43, tmp44, tmp45, tmp46, tmp47, tmp48);
  }

  if (block8.is_used()) {
    TNode<RawPtrT> tmp49;
    TNode<RawPtrT> tmp50;
    TNode<IntPtrT> tmp51;
    TNode<Context> tmp52;
    TNode<Object> tmp53;
    TNode<Object> tmp54;
    TNode<Object> tmp55;
    ca_.Bind(&block8, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55);
    ca_.Goto(&block7, tmp49, tmp50, tmp51, tmp52, tmp53, tmp54, tmp55);
  }

  if (block7.is_used()) {
    TNode<RawPtrT> tmp56;
    TNode<RawPtrT> tmp57;
    TNode<IntPtrT> tmp58;
    TNode<Context> tmp59;
    TNode<Object> tmp60;
    TNode<Object> tmp61;
    TNode<Object> tmp62;
    ca_.Bind(&block7, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 751);
    TNode<IntPtrT> tmp63;
    USE(tmp63);
    tmp63 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 2);
    TNode<BoolT> tmp64;
    USE(tmp64);
    tmp64 = CodeStubAssembler(state_).IntPtrGreaterThan(TNode<IntPtrT>{tmp58}, TNode<IntPtrT>{tmp63});
    ca_.Branch(tmp64, &block9, &block10, tmp56, tmp57, tmp58, tmp59, tmp60, tmp61, tmp62);
  }

  if (block9.is_used()) {
    TNode<RawPtrT> tmp65;
    TNode<RawPtrT> tmp66;
    TNode<IntPtrT> tmp67;
    TNode<Context> tmp68;
    TNode<Object> tmp69;
    TNode<Object> tmp70;
    TNode<Object> tmp71;
    ca_.Bind(&block9, &tmp65, &tmp66, &tmp67, &tmp68, &tmp69, &tmp70, &tmp71);
    TNode<IntPtrT> tmp72;
    USE(tmp72);
    tmp72 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 2);
    TNode<Object> tmp73;
    USE(tmp73);
    tmp73 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{tmp65}, TNode<RawPtrT>{tmp66}, TNode<IntPtrT>{tmp67}}, TNode<IntPtrT>{tmp72});
    ca_.Goto(&block12, tmp65, tmp66, tmp67, tmp68, tmp69, tmp70, tmp71, tmp73);
  }

  if (block10.is_used()) {
    TNode<RawPtrT> tmp74;
    TNode<RawPtrT> tmp75;
    TNode<IntPtrT> tmp76;
    TNode<Context> tmp77;
    TNode<Object> tmp78;
    TNode<Object> tmp79;
    TNode<Object> tmp80;
    ca_.Bind(&block10, &tmp74, &tmp75, &tmp76, &tmp77, &tmp78, &tmp79, &tmp80);
    TNode<Oddball> tmp81;
    USE(tmp81);
    tmp81 = Undefined_64(state_);
    ca_.Goto(&block11, tmp74, tmp75, tmp76, tmp77, tmp78, tmp79, tmp80, tmp81);
  }

  if (block12.is_used()) {
    TNode<RawPtrT> tmp82;
    TNode<RawPtrT> tmp83;
    TNode<IntPtrT> tmp84;
    TNode<Context> tmp85;
    TNode<Object> tmp86;
    TNode<Object> tmp87;
    TNode<Object> tmp88;
    TNode<Object> tmp89;
    ca_.Bind(&block12, &tmp82, &tmp83, &tmp84, &tmp85, &tmp86, &tmp87, &tmp88, &tmp89);
    ca_.Goto(&block11, tmp82, tmp83, tmp84, tmp85, tmp86, tmp87, tmp88, tmp89);
  }

  if (block11.is_used()) {
    TNode<RawPtrT> tmp90;
    TNode<RawPtrT> tmp91;
    TNode<IntPtrT> tmp92;
    TNode<Context> tmp93;
    TNode<Object> tmp94;
    TNode<Object> tmp95;
    TNode<Object> tmp96;
    TNode<Object> tmp97;
    ca_.Bind(&block11, &tmp90, &tmp91, &tmp92, &tmp93, &tmp94, &tmp95, &tmp96, &tmp97);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 750);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 753);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 752);
    TNode<Object> tmp98;
    USE(tmp98);
    tmp98 = DataViewSet_292(state_, TNode<Context>{tmp93}, TNode<Object>{tmp94}, TNode<Object>{tmp95}, TNode<Object>{tmp96}, TNode<Object>{tmp97}, INT16_ELEMENTS);
    arguments.PopAndReturn(tmp98);
  }
}

TF_BUILTIN(DataViewPrototypeSetUint32, CodeStubAssembler) {
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
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, Object> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, Object> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, torque_arguments.frame, torque_arguments.base, torque_arguments.length, parameter0, parameter1);

  if (block0.is_used()) {
    TNode<RawPtrT> tmp0;
    TNode<RawPtrT> tmp1;
    TNode<IntPtrT> tmp2;
    TNode<Context> tmp3;
    TNode<Object> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 758);
    TNode<IntPtrT> tmp5;
    USE(tmp5);
    tmp5 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 0);
    TNode<BoolT> tmp6;
    USE(tmp6);
    tmp6 = CodeStubAssembler(state_).IntPtrGreaterThan(TNode<IntPtrT>{tmp2}, TNode<IntPtrT>{tmp5});
    ca_.Branch(tmp6, &block1, &block2, tmp0, tmp1, tmp2, tmp3, tmp4);
  }

  if (block1.is_used()) {
    TNode<RawPtrT> tmp7;
    TNode<RawPtrT> tmp8;
    TNode<IntPtrT> tmp9;
    TNode<Context> tmp10;
    TNode<Object> tmp11;
    ca_.Bind(&block1, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11);
    TNode<IntPtrT> tmp12;
    USE(tmp12);
    tmp12 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 0);
    TNode<Object> tmp13;
    USE(tmp13);
    tmp13 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{tmp7}, TNode<RawPtrT>{tmp8}, TNode<IntPtrT>{tmp9}}, TNode<IntPtrT>{tmp12});
    ca_.Goto(&block4, tmp7, tmp8, tmp9, tmp10, tmp11, tmp13);
  }

  if (block2.is_used()) {
    TNode<RawPtrT> tmp14;
    TNode<RawPtrT> tmp15;
    TNode<IntPtrT> tmp16;
    TNode<Context> tmp17;
    TNode<Object> tmp18;
    ca_.Bind(&block2, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18);
    TNode<Oddball> tmp19;
    USE(tmp19);
    tmp19 = Undefined_64(state_);
    ca_.Goto(&block3, tmp14, tmp15, tmp16, tmp17, tmp18, tmp19);
  }

  if (block4.is_used()) {
    TNode<RawPtrT> tmp20;
    TNode<RawPtrT> tmp21;
    TNode<IntPtrT> tmp22;
    TNode<Context> tmp23;
    TNode<Object> tmp24;
    TNode<Object> tmp25;
    ca_.Bind(&block4, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25);
    ca_.Goto(&block3, tmp20, tmp21, tmp22, tmp23, tmp24, tmp25);
  }

  if (block3.is_used()) {
    TNode<RawPtrT> tmp26;
    TNode<RawPtrT> tmp27;
    TNode<IntPtrT> tmp28;
    TNode<Context> tmp29;
    TNode<Object> tmp30;
    TNode<Object> tmp31;
    ca_.Bind(&block3, &tmp26, &tmp27, &tmp28, &tmp29, &tmp30, &tmp31);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 759);
    TNode<IntPtrT> tmp32;
    USE(tmp32);
    tmp32 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 1);
    TNode<BoolT> tmp33;
    USE(tmp33);
    tmp33 = CodeStubAssembler(state_).IntPtrGreaterThan(TNode<IntPtrT>{tmp28}, TNode<IntPtrT>{tmp32});
    ca_.Branch(tmp33, &block5, &block6, tmp26, tmp27, tmp28, tmp29, tmp30, tmp31);
  }

  if (block5.is_used()) {
    TNode<RawPtrT> tmp34;
    TNode<RawPtrT> tmp35;
    TNode<IntPtrT> tmp36;
    TNode<Context> tmp37;
    TNode<Object> tmp38;
    TNode<Object> tmp39;
    ca_.Bind(&block5, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39);
    TNode<IntPtrT> tmp40;
    USE(tmp40);
    tmp40 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 1);
    TNode<Object> tmp41;
    USE(tmp41);
    tmp41 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{tmp34}, TNode<RawPtrT>{tmp35}, TNode<IntPtrT>{tmp36}}, TNode<IntPtrT>{tmp40});
    ca_.Goto(&block8, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39, tmp41);
  }

  if (block6.is_used()) {
    TNode<RawPtrT> tmp42;
    TNode<RawPtrT> tmp43;
    TNode<IntPtrT> tmp44;
    TNode<Context> tmp45;
    TNode<Object> tmp46;
    TNode<Object> tmp47;
    ca_.Bind(&block6, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47);
    TNode<Oddball> tmp48;
    USE(tmp48);
    tmp48 = Undefined_64(state_);
    ca_.Goto(&block7, tmp42, tmp43, tmp44, tmp45, tmp46, tmp47, tmp48);
  }

  if (block8.is_used()) {
    TNode<RawPtrT> tmp49;
    TNode<RawPtrT> tmp50;
    TNode<IntPtrT> tmp51;
    TNode<Context> tmp52;
    TNode<Object> tmp53;
    TNode<Object> tmp54;
    TNode<Object> tmp55;
    ca_.Bind(&block8, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55);
    ca_.Goto(&block7, tmp49, tmp50, tmp51, tmp52, tmp53, tmp54, tmp55);
  }

  if (block7.is_used()) {
    TNode<RawPtrT> tmp56;
    TNode<RawPtrT> tmp57;
    TNode<IntPtrT> tmp58;
    TNode<Context> tmp59;
    TNode<Object> tmp60;
    TNode<Object> tmp61;
    TNode<Object> tmp62;
    ca_.Bind(&block7, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 761);
    TNode<IntPtrT> tmp63;
    USE(tmp63);
    tmp63 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 2);
    TNode<BoolT> tmp64;
    USE(tmp64);
    tmp64 = CodeStubAssembler(state_).IntPtrGreaterThan(TNode<IntPtrT>{tmp58}, TNode<IntPtrT>{tmp63});
    ca_.Branch(tmp64, &block9, &block10, tmp56, tmp57, tmp58, tmp59, tmp60, tmp61, tmp62);
  }

  if (block9.is_used()) {
    TNode<RawPtrT> tmp65;
    TNode<RawPtrT> tmp66;
    TNode<IntPtrT> tmp67;
    TNode<Context> tmp68;
    TNode<Object> tmp69;
    TNode<Object> tmp70;
    TNode<Object> tmp71;
    ca_.Bind(&block9, &tmp65, &tmp66, &tmp67, &tmp68, &tmp69, &tmp70, &tmp71);
    TNode<IntPtrT> tmp72;
    USE(tmp72);
    tmp72 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 2);
    TNode<Object> tmp73;
    USE(tmp73);
    tmp73 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{tmp65}, TNode<RawPtrT>{tmp66}, TNode<IntPtrT>{tmp67}}, TNode<IntPtrT>{tmp72});
    ca_.Goto(&block12, tmp65, tmp66, tmp67, tmp68, tmp69, tmp70, tmp71, tmp73);
  }

  if (block10.is_used()) {
    TNode<RawPtrT> tmp74;
    TNode<RawPtrT> tmp75;
    TNode<IntPtrT> tmp76;
    TNode<Context> tmp77;
    TNode<Object> tmp78;
    TNode<Object> tmp79;
    TNode<Object> tmp80;
    ca_.Bind(&block10, &tmp74, &tmp75, &tmp76, &tmp77, &tmp78, &tmp79, &tmp80);
    TNode<Oddball> tmp81;
    USE(tmp81);
    tmp81 = Undefined_64(state_);
    ca_.Goto(&block11, tmp74, tmp75, tmp76, tmp77, tmp78, tmp79, tmp80, tmp81);
  }

  if (block12.is_used()) {
    TNode<RawPtrT> tmp82;
    TNode<RawPtrT> tmp83;
    TNode<IntPtrT> tmp84;
    TNode<Context> tmp85;
    TNode<Object> tmp86;
    TNode<Object> tmp87;
    TNode<Object> tmp88;
    TNode<Object> tmp89;
    ca_.Bind(&block12, &tmp82, &tmp83, &tmp84, &tmp85, &tmp86, &tmp87, &tmp88, &tmp89);
    ca_.Goto(&block11, tmp82, tmp83, tmp84, tmp85, tmp86, tmp87, tmp88, tmp89);
  }

  if (block11.is_used()) {
    TNode<RawPtrT> tmp90;
    TNode<RawPtrT> tmp91;
    TNode<IntPtrT> tmp92;
    TNode<Context> tmp93;
    TNode<Object> tmp94;
    TNode<Object> tmp95;
    TNode<Object> tmp96;
    TNode<Object> tmp97;
    ca_.Bind(&block11, &tmp90, &tmp91, &tmp92, &tmp93, &tmp94, &tmp95, &tmp96, &tmp97);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 760);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 763);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 762);
    TNode<Object> tmp98;
    USE(tmp98);
    tmp98 = DataViewSet_292(state_, TNode<Context>{tmp93}, TNode<Object>{tmp94}, TNode<Object>{tmp95}, TNode<Object>{tmp96}, TNode<Object>{tmp97}, UINT32_ELEMENTS);
    arguments.PopAndReturn(tmp98);
  }
}

TF_BUILTIN(DataViewPrototypeSetInt32, CodeStubAssembler) {
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
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, Object> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, Object> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, torque_arguments.frame, torque_arguments.base, torque_arguments.length, parameter0, parameter1);

  if (block0.is_used()) {
    TNode<RawPtrT> tmp0;
    TNode<RawPtrT> tmp1;
    TNode<IntPtrT> tmp2;
    TNode<Context> tmp3;
    TNode<Object> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 768);
    TNode<IntPtrT> tmp5;
    USE(tmp5);
    tmp5 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 0);
    TNode<BoolT> tmp6;
    USE(tmp6);
    tmp6 = CodeStubAssembler(state_).IntPtrGreaterThan(TNode<IntPtrT>{tmp2}, TNode<IntPtrT>{tmp5});
    ca_.Branch(tmp6, &block1, &block2, tmp0, tmp1, tmp2, tmp3, tmp4);
  }

  if (block1.is_used()) {
    TNode<RawPtrT> tmp7;
    TNode<RawPtrT> tmp8;
    TNode<IntPtrT> tmp9;
    TNode<Context> tmp10;
    TNode<Object> tmp11;
    ca_.Bind(&block1, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11);
    TNode<IntPtrT> tmp12;
    USE(tmp12);
    tmp12 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 0);
    TNode<Object> tmp13;
    USE(tmp13);
    tmp13 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{tmp7}, TNode<RawPtrT>{tmp8}, TNode<IntPtrT>{tmp9}}, TNode<IntPtrT>{tmp12});
    ca_.Goto(&block4, tmp7, tmp8, tmp9, tmp10, tmp11, tmp13);
  }

  if (block2.is_used()) {
    TNode<RawPtrT> tmp14;
    TNode<RawPtrT> tmp15;
    TNode<IntPtrT> tmp16;
    TNode<Context> tmp17;
    TNode<Object> tmp18;
    ca_.Bind(&block2, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18);
    TNode<Oddball> tmp19;
    USE(tmp19);
    tmp19 = Undefined_64(state_);
    ca_.Goto(&block3, tmp14, tmp15, tmp16, tmp17, tmp18, tmp19);
  }

  if (block4.is_used()) {
    TNode<RawPtrT> tmp20;
    TNode<RawPtrT> tmp21;
    TNode<IntPtrT> tmp22;
    TNode<Context> tmp23;
    TNode<Object> tmp24;
    TNode<Object> tmp25;
    ca_.Bind(&block4, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25);
    ca_.Goto(&block3, tmp20, tmp21, tmp22, tmp23, tmp24, tmp25);
  }

  if (block3.is_used()) {
    TNode<RawPtrT> tmp26;
    TNode<RawPtrT> tmp27;
    TNode<IntPtrT> tmp28;
    TNode<Context> tmp29;
    TNode<Object> tmp30;
    TNode<Object> tmp31;
    ca_.Bind(&block3, &tmp26, &tmp27, &tmp28, &tmp29, &tmp30, &tmp31);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 769);
    TNode<IntPtrT> tmp32;
    USE(tmp32);
    tmp32 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 1);
    TNode<BoolT> tmp33;
    USE(tmp33);
    tmp33 = CodeStubAssembler(state_).IntPtrGreaterThan(TNode<IntPtrT>{tmp28}, TNode<IntPtrT>{tmp32});
    ca_.Branch(tmp33, &block5, &block6, tmp26, tmp27, tmp28, tmp29, tmp30, tmp31);
  }

  if (block5.is_used()) {
    TNode<RawPtrT> tmp34;
    TNode<RawPtrT> tmp35;
    TNode<IntPtrT> tmp36;
    TNode<Context> tmp37;
    TNode<Object> tmp38;
    TNode<Object> tmp39;
    ca_.Bind(&block5, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39);
    TNode<IntPtrT> tmp40;
    USE(tmp40);
    tmp40 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 1);
    TNode<Object> tmp41;
    USE(tmp41);
    tmp41 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{tmp34}, TNode<RawPtrT>{tmp35}, TNode<IntPtrT>{tmp36}}, TNode<IntPtrT>{tmp40});
    ca_.Goto(&block8, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39, tmp41);
  }

  if (block6.is_used()) {
    TNode<RawPtrT> tmp42;
    TNode<RawPtrT> tmp43;
    TNode<IntPtrT> tmp44;
    TNode<Context> tmp45;
    TNode<Object> tmp46;
    TNode<Object> tmp47;
    ca_.Bind(&block6, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47);
    TNode<Oddball> tmp48;
    USE(tmp48);
    tmp48 = Undefined_64(state_);
    ca_.Goto(&block7, tmp42, tmp43, tmp44, tmp45, tmp46, tmp47, tmp48);
  }

  if (block8.is_used()) {
    TNode<RawPtrT> tmp49;
    TNode<RawPtrT> tmp50;
    TNode<IntPtrT> tmp51;
    TNode<Context> tmp52;
    TNode<Object> tmp53;
    TNode<Object> tmp54;
    TNode<Object> tmp55;
    ca_.Bind(&block8, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55);
    ca_.Goto(&block7, tmp49, tmp50, tmp51, tmp52, tmp53, tmp54, tmp55);
  }

  if (block7.is_used()) {
    TNode<RawPtrT> tmp56;
    TNode<RawPtrT> tmp57;
    TNode<IntPtrT> tmp58;
    TNode<Context> tmp59;
    TNode<Object> tmp60;
    TNode<Object> tmp61;
    TNode<Object> tmp62;
    ca_.Bind(&block7, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 771);
    TNode<IntPtrT> tmp63;
    USE(tmp63);
    tmp63 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 2);
    TNode<BoolT> tmp64;
    USE(tmp64);
    tmp64 = CodeStubAssembler(state_).IntPtrGreaterThan(TNode<IntPtrT>{tmp58}, TNode<IntPtrT>{tmp63});
    ca_.Branch(tmp64, &block9, &block10, tmp56, tmp57, tmp58, tmp59, tmp60, tmp61, tmp62);
  }

  if (block9.is_used()) {
    TNode<RawPtrT> tmp65;
    TNode<RawPtrT> tmp66;
    TNode<IntPtrT> tmp67;
    TNode<Context> tmp68;
    TNode<Object> tmp69;
    TNode<Object> tmp70;
    TNode<Object> tmp71;
    ca_.Bind(&block9, &tmp65, &tmp66, &tmp67, &tmp68, &tmp69, &tmp70, &tmp71);
    TNode<IntPtrT> tmp72;
    USE(tmp72);
    tmp72 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 2);
    TNode<Object> tmp73;
    USE(tmp73);
    tmp73 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{tmp65}, TNode<RawPtrT>{tmp66}, TNode<IntPtrT>{tmp67}}, TNode<IntPtrT>{tmp72});
    ca_.Goto(&block12, tmp65, tmp66, tmp67, tmp68, tmp69, tmp70, tmp71, tmp73);
  }

  if (block10.is_used()) {
    TNode<RawPtrT> tmp74;
    TNode<RawPtrT> tmp75;
    TNode<IntPtrT> tmp76;
    TNode<Context> tmp77;
    TNode<Object> tmp78;
    TNode<Object> tmp79;
    TNode<Object> tmp80;
    ca_.Bind(&block10, &tmp74, &tmp75, &tmp76, &tmp77, &tmp78, &tmp79, &tmp80);
    TNode<Oddball> tmp81;
    USE(tmp81);
    tmp81 = Undefined_64(state_);
    ca_.Goto(&block11, tmp74, tmp75, tmp76, tmp77, tmp78, tmp79, tmp80, tmp81);
  }

  if (block12.is_used()) {
    TNode<RawPtrT> tmp82;
    TNode<RawPtrT> tmp83;
    TNode<IntPtrT> tmp84;
    TNode<Context> tmp85;
    TNode<Object> tmp86;
    TNode<Object> tmp87;
    TNode<Object> tmp88;
    TNode<Object> tmp89;
    ca_.Bind(&block12, &tmp82, &tmp83, &tmp84, &tmp85, &tmp86, &tmp87, &tmp88, &tmp89);
    ca_.Goto(&block11, tmp82, tmp83, tmp84, tmp85, tmp86, tmp87, tmp88, tmp89);
  }

  if (block11.is_used()) {
    TNode<RawPtrT> tmp90;
    TNode<RawPtrT> tmp91;
    TNode<IntPtrT> tmp92;
    TNode<Context> tmp93;
    TNode<Object> tmp94;
    TNode<Object> tmp95;
    TNode<Object> tmp96;
    TNode<Object> tmp97;
    ca_.Bind(&block11, &tmp90, &tmp91, &tmp92, &tmp93, &tmp94, &tmp95, &tmp96, &tmp97);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 770);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 773);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 772);
    TNode<Object> tmp98;
    USE(tmp98);
    tmp98 = DataViewSet_292(state_, TNode<Context>{tmp93}, TNode<Object>{tmp94}, TNode<Object>{tmp95}, TNode<Object>{tmp96}, TNode<Object>{tmp97}, INT32_ELEMENTS);
    arguments.PopAndReturn(tmp98);
  }
}

TF_BUILTIN(DataViewPrototypeSetFloat32, CodeStubAssembler) {
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
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, Object> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, Object> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, torque_arguments.frame, torque_arguments.base, torque_arguments.length, parameter0, parameter1);

  if (block0.is_used()) {
    TNode<RawPtrT> tmp0;
    TNode<RawPtrT> tmp1;
    TNode<IntPtrT> tmp2;
    TNode<Context> tmp3;
    TNode<Object> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 778);
    TNode<IntPtrT> tmp5;
    USE(tmp5);
    tmp5 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 0);
    TNode<BoolT> tmp6;
    USE(tmp6);
    tmp6 = CodeStubAssembler(state_).IntPtrGreaterThan(TNode<IntPtrT>{tmp2}, TNode<IntPtrT>{tmp5});
    ca_.Branch(tmp6, &block1, &block2, tmp0, tmp1, tmp2, tmp3, tmp4);
  }

  if (block1.is_used()) {
    TNode<RawPtrT> tmp7;
    TNode<RawPtrT> tmp8;
    TNode<IntPtrT> tmp9;
    TNode<Context> tmp10;
    TNode<Object> tmp11;
    ca_.Bind(&block1, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11);
    TNode<IntPtrT> tmp12;
    USE(tmp12);
    tmp12 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 0);
    TNode<Object> tmp13;
    USE(tmp13);
    tmp13 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{tmp7}, TNode<RawPtrT>{tmp8}, TNode<IntPtrT>{tmp9}}, TNode<IntPtrT>{tmp12});
    ca_.Goto(&block4, tmp7, tmp8, tmp9, tmp10, tmp11, tmp13);
  }

  if (block2.is_used()) {
    TNode<RawPtrT> tmp14;
    TNode<RawPtrT> tmp15;
    TNode<IntPtrT> tmp16;
    TNode<Context> tmp17;
    TNode<Object> tmp18;
    ca_.Bind(&block2, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18);
    TNode<Oddball> tmp19;
    USE(tmp19);
    tmp19 = Undefined_64(state_);
    ca_.Goto(&block3, tmp14, tmp15, tmp16, tmp17, tmp18, tmp19);
  }

  if (block4.is_used()) {
    TNode<RawPtrT> tmp20;
    TNode<RawPtrT> tmp21;
    TNode<IntPtrT> tmp22;
    TNode<Context> tmp23;
    TNode<Object> tmp24;
    TNode<Object> tmp25;
    ca_.Bind(&block4, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25);
    ca_.Goto(&block3, tmp20, tmp21, tmp22, tmp23, tmp24, tmp25);
  }

  if (block3.is_used()) {
    TNode<RawPtrT> tmp26;
    TNode<RawPtrT> tmp27;
    TNode<IntPtrT> tmp28;
    TNode<Context> tmp29;
    TNode<Object> tmp30;
    TNode<Object> tmp31;
    ca_.Bind(&block3, &tmp26, &tmp27, &tmp28, &tmp29, &tmp30, &tmp31);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 779);
    TNode<IntPtrT> tmp32;
    USE(tmp32);
    tmp32 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 1);
    TNode<BoolT> tmp33;
    USE(tmp33);
    tmp33 = CodeStubAssembler(state_).IntPtrGreaterThan(TNode<IntPtrT>{tmp28}, TNode<IntPtrT>{tmp32});
    ca_.Branch(tmp33, &block5, &block6, tmp26, tmp27, tmp28, tmp29, tmp30, tmp31);
  }

  if (block5.is_used()) {
    TNode<RawPtrT> tmp34;
    TNode<RawPtrT> tmp35;
    TNode<IntPtrT> tmp36;
    TNode<Context> tmp37;
    TNode<Object> tmp38;
    TNode<Object> tmp39;
    ca_.Bind(&block5, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39);
    TNode<IntPtrT> tmp40;
    USE(tmp40);
    tmp40 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 1);
    TNode<Object> tmp41;
    USE(tmp41);
    tmp41 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{tmp34}, TNode<RawPtrT>{tmp35}, TNode<IntPtrT>{tmp36}}, TNode<IntPtrT>{tmp40});
    ca_.Goto(&block8, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39, tmp41);
  }

  if (block6.is_used()) {
    TNode<RawPtrT> tmp42;
    TNode<RawPtrT> tmp43;
    TNode<IntPtrT> tmp44;
    TNode<Context> tmp45;
    TNode<Object> tmp46;
    TNode<Object> tmp47;
    ca_.Bind(&block6, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47);
    TNode<Oddball> tmp48;
    USE(tmp48);
    tmp48 = Undefined_64(state_);
    ca_.Goto(&block7, tmp42, tmp43, tmp44, tmp45, tmp46, tmp47, tmp48);
  }

  if (block8.is_used()) {
    TNode<RawPtrT> tmp49;
    TNode<RawPtrT> tmp50;
    TNode<IntPtrT> tmp51;
    TNode<Context> tmp52;
    TNode<Object> tmp53;
    TNode<Object> tmp54;
    TNode<Object> tmp55;
    ca_.Bind(&block8, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55);
    ca_.Goto(&block7, tmp49, tmp50, tmp51, tmp52, tmp53, tmp54, tmp55);
  }

  if (block7.is_used()) {
    TNode<RawPtrT> tmp56;
    TNode<RawPtrT> tmp57;
    TNode<IntPtrT> tmp58;
    TNode<Context> tmp59;
    TNode<Object> tmp60;
    TNode<Object> tmp61;
    TNode<Object> tmp62;
    ca_.Bind(&block7, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 781);
    TNode<IntPtrT> tmp63;
    USE(tmp63);
    tmp63 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 2);
    TNode<BoolT> tmp64;
    USE(tmp64);
    tmp64 = CodeStubAssembler(state_).IntPtrGreaterThan(TNode<IntPtrT>{tmp58}, TNode<IntPtrT>{tmp63});
    ca_.Branch(tmp64, &block9, &block10, tmp56, tmp57, tmp58, tmp59, tmp60, tmp61, tmp62);
  }

  if (block9.is_used()) {
    TNode<RawPtrT> tmp65;
    TNode<RawPtrT> tmp66;
    TNode<IntPtrT> tmp67;
    TNode<Context> tmp68;
    TNode<Object> tmp69;
    TNode<Object> tmp70;
    TNode<Object> tmp71;
    ca_.Bind(&block9, &tmp65, &tmp66, &tmp67, &tmp68, &tmp69, &tmp70, &tmp71);
    TNode<IntPtrT> tmp72;
    USE(tmp72);
    tmp72 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 2);
    TNode<Object> tmp73;
    USE(tmp73);
    tmp73 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{tmp65}, TNode<RawPtrT>{tmp66}, TNode<IntPtrT>{tmp67}}, TNode<IntPtrT>{tmp72});
    ca_.Goto(&block12, tmp65, tmp66, tmp67, tmp68, tmp69, tmp70, tmp71, tmp73);
  }

  if (block10.is_used()) {
    TNode<RawPtrT> tmp74;
    TNode<RawPtrT> tmp75;
    TNode<IntPtrT> tmp76;
    TNode<Context> tmp77;
    TNode<Object> tmp78;
    TNode<Object> tmp79;
    TNode<Object> tmp80;
    ca_.Bind(&block10, &tmp74, &tmp75, &tmp76, &tmp77, &tmp78, &tmp79, &tmp80);
    TNode<Oddball> tmp81;
    USE(tmp81);
    tmp81 = Undefined_64(state_);
    ca_.Goto(&block11, tmp74, tmp75, tmp76, tmp77, tmp78, tmp79, tmp80, tmp81);
  }

  if (block12.is_used()) {
    TNode<RawPtrT> tmp82;
    TNode<RawPtrT> tmp83;
    TNode<IntPtrT> tmp84;
    TNode<Context> tmp85;
    TNode<Object> tmp86;
    TNode<Object> tmp87;
    TNode<Object> tmp88;
    TNode<Object> tmp89;
    ca_.Bind(&block12, &tmp82, &tmp83, &tmp84, &tmp85, &tmp86, &tmp87, &tmp88, &tmp89);
    ca_.Goto(&block11, tmp82, tmp83, tmp84, tmp85, tmp86, tmp87, tmp88, tmp89);
  }

  if (block11.is_used()) {
    TNode<RawPtrT> tmp90;
    TNode<RawPtrT> tmp91;
    TNode<IntPtrT> tmp92;
    TNode<Context> tmp93;
    TNode<Object> tmp94;
    TNode<Object> tmp95;
    TNode<Object> tmp96;
    TNode<Object> tmp97;
    ca_.Bind(&block11, &tmp90, &tmp91, &tmp92, &tmp93, &tmp94, &tmp95, &tmp96, &tmp97);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 780);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 783);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 782);
    TNode<Object> tmp98;
    USE(tmp98);
    tmp98 = DataViewSet_292(state_, TNode<Context>{tmp93}, TNode<Object>{tmp94}, TNode<Object>{tmp95}, TNode<Object>{tmp96}, TNode<Object>{tmp97}, FLOAT32_ELEMENTS);
    arguments.PopAndReturn(tmp98);
  }
}

TF_BUILTIN(DataViewPrototypeSetFloat64, CodeStubAssembler) {
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
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, Object> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, Object> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, torque_arguments.frame, torque_arguments.base, torque_arguments.length, parameter0, parameter1);

  if (block0.is_used()) {
    TNode<RawPtrT> tmp0;
    TNode<RawPtrT> tmp1;
    TNode<IntPtrT> tmp2;
    TNode<Context> tmp3;
    TNode<Object> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 788);
    TNode<IntPtrT> tmp5;
    USE(tmp5);
    tmp5 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 0);
    TNode<BoolT> tmp6;
    USE(tmp6);
    tmp6 = CodeStubAssembler(state_).IntPtrGreaterThan(TNode<IntPtrT>{tmp2}, TNode<IntPtrT>{tmp5});
    ca_.Branch(tmp6, &block1, &block2, tmp0, tmp1, tmp2, tmp3, tmp4);
  }

  if (block1.is_used()) {
    TNode<RawPtrT> tmp7;
    TNode<RawPtrT> tmp8;
    TNode<IntPtrT> tmp9;
    TNode<Context> tmp10;
    TNode<Object> tmp11;
    ca_.Bind(&block1, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11);
    TNode<IntPtrT> tmp12;
    USE(tmp12);
    tmp12 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 0);
    TNode<Object> tmp13;
    USE(tmp13);
    tmp13 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{tmp7}, TNode<RawPtrT>{tmp8}, TNode<IntPtrT>{tmp9}}, TNode<IntPtrT>{tmp12});
    ca_.Goto(&block4, tmp7, tmp8, tmp9, tmp10, tmp11, tmp13);
  }

  if (block2.is_used()) {
    TNode<RawPtrT> tmp14;
    TNode<RawPtrT> tmp15;
    TNode<IntPtrT> tmp16;
    TNode<Context> tmp17;
    TNode<Object> tmp18;
    ca_.Bind(&block2, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18);
    TNode<Oddball> tmp19;
    USE(tmp19);
    tmp19 = Undefined_64(state_);
    ca_.Goto(&block3, tmp14, tmp15, tmp16, tmp17, tmp18, tmp19);
  }

  if (block4.is_used()) {
    TNode<RawPtrT> tmp20;
    TNode<RawPtrT> tmp21;
    TNode<IntPtrT> tmp22;
    TNode<Context> tmp23;
    TNode<Object> tmp24;
    TNode<Object> tmp25;
    ca_.Bind(&block4, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25);
    ca_.Goto(&block3, tmp20, tmp21, tmp22, tmp23, tmp24, tmp25);
  }

  if (block3.is_used()) {
    TNode<RawPtrT> tmp26;
    TNode<RawPtrT> tmp27;
    TNode<IntPtrT> tmp28;
    TNode<Context> tmp29;
    TNode<Object> tmp30;
    TNode<Object> tmp31;
    ca_.Bind(&block3, &tmp26, &tmp27, &tmp28, &tmp29, &tmp30, &tmp31);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 789);
    TNode<IntPtrT> tmp32;
    USE(tmp32);
    tmp32 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 1);
    TNode<BoolT> tmp33;
    USE(tmp33);
    tmp33 = CodeStubAssembler(state_).IntPtrGreaterThan(TNode<IntPtrT>{tmp28}, TNode<IntPtrT>{tmp32});
    ca_.Branch(tmp33, &block5, &block6, tmp26, tmp27, tmp28, tmp29, tmp30, tmp31);
  }

  if (block5.is_used()) {
    TNode<RawPtrT> tmp34;
    TNode<RawPtrT> tmp35;
    TNode<IntPtrT> tmp36;
    TNode<Context> tmp37;
    TNode<Object> tmp38;
    TNode<Object> tmp39;
    ca_.Bind(&block5, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39);
    TNode<IntPtrT> tmp40;
    USE(tmp40);
    tmp40 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 1);
    TNode<Object> tmp41;
    USE(tmp41);
    tmp41 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{tmp34}, TNode<RawPtrT>{tmp35}, TNode<IntPtrT>{tmp36}}, TNode<IntPtrT>{tmp40});
    ca_.Goto(&block8, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39, tmp41);
  }

  if (block6.is_used()) {
    TNode<RawPtrT> tmp42;
    TNode<RawPtrT> tmp43;
    TNode<IntPtrT> tmp44;
    TNode<Context> tmp45;
    TNode<Object> tmp46;
    TNode<Object> tmp47;
    ca_.Bind(&block6, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47);
    TNode<Oddball> tmp48;
    USE(tmp48);
    tmp48 = Undefined_64(state_);
    ca_.Goto(&block7, tmp42, tmp43, tmp44, tmp45, tmp46, tmp47, tmp48);
  }

  if (block8.is_used()) {
    TNode<RawPtrT> tmp49;
    TNode<RawPtrT> tmp50;
    TNode<IntPtrT> tmp51;
    TNode<Context> tmp52;
    TNode<Object> tmp53;
    TNode<Object> tmp54;
    TNode<Object> tmp55;
    ca_.Bind(&block8, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55);
    ca_.Goto(&block7, tmp49, tmp50, tmp51, tmp52, tmp53, tmp54, tmp55);
  }

  if (block7.is_used()) {
    TNode<RawPtrT> tmp56;
    TNode<RawPtrT> tmp57;
    TNode<IntPtrT> tmp58;
    TNode<Context> tmp59;
    TNode<Object> tmp60;
    TNode<Object> tmp61;
    TNode<Object> tmp62;
    ca_.Bind(&block7, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 791);
    TNode<IntPtrT> tmp63;
    USE(tmp63);
    tmp63 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 2);
    TNode<BoolT> tmp64;
    USE(tmp64);
    tmp64 = CodeStubAssembler(state_).IntPtrGreaterThan(TNode<IntPtrT>{tmp58}, TNode<IntPtrT>{tmp63});
    ca_.Branch(tmp64, &block9, &block10, tmp56, tmp57, tmp58, tmp59, tmp60, tmp61, tmp62);
  }

  if (block9.is_used()) {
    TNode<RawPtrT> tmp65;
    TNode<RawPtrT> tmp66;
    TNode<IntPtrT> tmp67;
    TNode<Context> tmp68;
    TNode<Object> tmp69;
    TNode<Object> tmp70;
    TNode<Object> tmp71;
    ca_.Bind(&block9, &tmp65, &tmp66, &tmp67, &tmp68, &tmp69, &tmp70, &tmp71);
    TNode<IntPtrT> tmp72;
    USE(tmp72);
    tmp72 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 2);
    TNode<Object> tmp73;
    USE(tmp73);
    tmp73 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{tmp65}, TNode<RawPtrT>{tmp66}, TNode<IntPtrT>{tmp67}}, TNode<IntPtrT>{tmp72});
    ca_.Goto(&block12, tmp65, tmp66, tmp67, tmp68, tmp69, tmp70, tmp71, tmp73);
  }

  if (block10.is_used()) {
    TNode<RawPtrT> tmp74;
    TNode<RawPtrT> tmp75;
    TNode<IntPtrT> tmp76;
    TNode<Context> tmp77;
    TNode<Object> tmp78;
    TNode<Object> tmp79;
    TNode<Object> tmp80;
    ca_.Bind(&block10, &tmp74, &tmp75, &tmp76, &tmp77, &tmp78, &tmp79, &tmp80);
    TNode<Oddball> tmp81;
    USE(tmp81);
    tmp81 = Undefined_64(state_);
    ca_.Goto(&block11, tmp74, tmp75, tmp76, tmp77, tmp78, tmp79, tmp80, tmp81);
  }

  if (block12.is_used()) {
    TNode<RawPtrT> tmp82;
    TNode<RawPtrT> tmp83;
    TNode<IntPtrT> tmp84;
    TNode<Context> tmp85;
    TNode<Object> tmp86;
    TNode<Object> tmp87;
    TNode<Object> tmp88;
    TNode<Object> tmp89;
    ca_.Bind(&block12, &tmp82, &tmp83, &tmp84, &tmp85, &tmp86, &tmp87, &tmp88, &tmp89);
    ca_.Goto(&block11, tmp82, tmp83, tmp84, tmp85, tmp86, tmp87, tmp88, tmp89);
  }

  if (block11.is_used()) {
    TNode<RawPtrT> tmp90;
    TNode<RawPtrT> tmp91;
    TNode<IntPtrT> tmp92;
    TNode<Context> tmp93;
    TNode<Object> tmp94;
    TNode<Object> tmp95;
    TNode<Object> tmp96;
    TNode<Object> tmp97;
    ca_.Bind(&block11, &tmp90, &tmp91, &tmp92, &tmp93, &tmp94, &tmp95, &tmp96, &tmp97);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 790);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 793);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 792);
    TNode<Object> tmp98;
    USE(tmp98);
    tmp98 = DataViewSet_292(state_, TNode<Context>{tmp93}, TNode<Object>{tmp94}, TNode<Object>{tmp95}, TNode<Object>{tmp96}, TNode<Object>{tmp97}, FLOAT64_ELEMENTS);
    arguments.PopAndReturn(tmp98);
  }
}

TF_BUILTIN(DataViewPrototypeSetBigUint64, CodeStubAssembler) {
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
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, Object> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, Object> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, torque_arguments.frame, torque_arguments.base, torque_arguments.length, parameter0, parameter1);

  if (block0.is_used()) {
    TNode<RawPtrT> tmp0;
    TNode<RawPtrT> tmp1;
    TNode<IntPtrT> tmp2;
    TNode<Context> tmp3;
    TNode<Object> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 798);
    TNode<IntPtrT> tmp5;
    USE(tmp5);
    tmp5 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 0);
    TNode<BoolT> tmp6;
    USE(tmp6);
    tmp6 = CodeStubAssembler(state_).IntPtrGreaterThan(TNode<IntPtrT>{tmp2}, TNode<IntPtrT>{tmp5});
    ca_.Branch(tmp6, &block1, &block2, tmp0, tmp1, tmp2, tmp3, tmp4);
  }

  if (block1.is_used()) {
    TNode<RawPtrT> tmp7;
    TNode<RawPtrT> tmp8;
    TNode<IntPtrT> tmp9;
    TNode<Context> tmp10;
    TNode<Object> tmp11;
    ca_.Bind(&block1, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11);
    TNode<IntPtrT> tmp12;
    USE(tmp12);
    tmp12 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 0);
    TNode<Object> tmp13;
    USE(tmp13);
    tmp13 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{tmp7}, TNode<RawPtrT>{tmp8}, TNode<IntPtrT>{tmp9}}, TNode<IntPtrT>{tmp12});
    ca_.Goto(&block4, tmp7, tmp8, tmp9, tmp10, tmp11, tmp13);
  }

  if (block2.is_used()) {
    TNode<RawPtrT> tmp14;
    TNode<RawPtrT> tmp15;
    TNode<IntPtrT> tmp16;
    TNode<Context> tmp17;
    TNode<Object> tmp18;
    ca_.Bind(&block2, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18);
    TNode<Oddball> tmp19;
    USE(tmp19);
    tmp19 = Undefined_64(state_);
    ca_.Goto(&block3, tmp14, tmp15, tmp16, tmp17, tmp18, tmp19);
  }

  if (block4.is_used()) {
    TNode<RawPtrT> tmp20;
    TNode<RawPtrT> tmp21;
    TNode<IntPtrT> tmp22;
    TNode<Context> tmp23;
    TNode<Object> tmp24;
    TNode<Object> tmp25;
    ca_.Bind(&block4, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25);
    ca_.Goto(&block3, tmp20, tmp21, tmp22, tmp23, tmp24, tmp25);
  }

  if (block3.is_used()) {
    TNode<RawPtrT> tmp26;
    TNode<RawPtrT> tmp27;
    TNode<IntPtrT> tmp28;
    TNode<Context> tmp29;
    TNode<Object> tmp30;
    TNode<Object> tmp31;
    ca_.Bind(&block3, &tmp26, &tmp27, &tmp28, &tmp29, &tmp30, &tmp31);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 799);
    TNode<IntPtrT> tmp32;
    USE(tmp32);
    tmp32 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 1);
    TNode<BoolT> tmp33;
    USE(tmp33);
    tmp33 = CodeStubAssembler(state_).IntPtrGreaterThan(TNode<IntPtrT>{tmp28}, TNode<IntPtrT>{tmp32});
    ca_.Branch(tmp33, &block5, &block6, tmp26, tmp27, tmp28, tmp29, tmp30, tmp31);
  }

  if (block5.is_used()) {
    TNode<RawPtrT> tmp34;
    TNode<RawPtrT> tmp35;
    TNode<IntPtrT> tmp36;
    TNode<Context> tmp37;
    TNode<Object> tmp38;
    TNode<Object> tmp39;
    ca_.Bind(&block5, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39);
    TNode<IntPtrT> tmp40;
    USE(tmp40);
    tmp40 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 1);
    TNode<Object> tmp41;
    USE(tmp41);
    tmp41 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{tmp34}, TNode<RawPtrT>{tmp35}, TNode<IntPtrT>{tmp36}}, TNode<IntPtrT>{tmp40});
    ca_.Goto(&block8, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39, tmp41);
  }

  if (block6.is_used()) {
    TNode<RawPtrT> tmp42;
    TNode<RawPtrT> tmp43;
    TNode<IntPtrT> tmp44;
    TNode<Context> tmp45;
    TNode<Object> tmp46;
    TNode<Object> tmp47;
    ca_.Bind(&block6, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47);
    TNode<Oddball> tmp48;
    USE(tmp48);
    tmp48 = Undefined_64(state_);
    ca_.Goto(&block7, tmp42, tmp43, tmp44, tmp45, tmp46, tmp47, tmp48);
  }

  if (block8.is_used()) {
    TNode<RawPtrT> tmp49;
    TNode<RawPtrT> tmp50;
    TNode<IntPtrT> tmp51;
    TNode<Context> tmp52;
    TNode<Object> tmp53;
    TNode<Object> tmp54;
    TNode<Object> tmp55;
    ca_.Bind(&block8, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55);
    ca_.Goto(&block7, tmp49, tmp50, tmp51, tmp52, tmp53, tmp54, tmp55);
  }

  if (block7.is_used()) {
    TNode<RawPtrT> tmp56;
    TNode<RawPtrT> tmp57;
    TNode<IntPtrT> tmp58;
    TNode<Context> tmp59;
    TNode<Object> tmp60;
    TNode<Object> tmp61;
    TNode<Object> tmp62;
    ca_.Bind(&block7, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 801);
    TNode<IntPtrT> tmp63;
    USE(tmp63);
    tmp63 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 2);
    TNode<BoolT> tmp64;
    USE(tmp64);
    tmp64 = CodeStubAssembler(state_).IntPtrGreaterThan(TNode<IntPtrT>{tmp58}, TNode<IntPtrT>{tmp63});
    ca_.Branch(tmp64, &block9, &block10, tmp56, tmp57, tmp58, tmp59, tmp60, tmp61, tmp62);
  }

  if (block9.is_used()) {
    TNode<RawPtrT> tmp65;
    TNode<RawPtrT> tmp66;
    TNode<IntPtrT> tmp67;
    TNode<Context> tmp68;
    TNode<Object> tmp69;
    TNode<Object> tmp70;
    TNode<Object> tmp71;
    ca_.Bind(&block9, &tmp65, &tmp66, &tmp67, &tmp68, &tmp69, &tmp70, &tmp71);
    TNode<IntPtrT> tmp72;
    USE(tmp72);
    tmp72 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 2);
    TNode<Object> tmp73;
    USE(tmp73);
    tmp73 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{tmp65}, TNode<RawPtrT>{tmp66}, TNode<IntPtrT>{tmp67}}, TNode<IntPtrT>{tmp72});
    ca_.Goto(&block12, tmp65, tmp66, tmp67, tmp68, tmp69, tmp70, tmp71, tmp73);
  }

  if (block10.is_used()) {
    TNode<RawPtrT> tmp74;
    TNode<RawPtrT> tmp75;
    TNode<IntPtrT> tmp76;
    TNode<Context> tmp77;
    TNode<Object> tmp78;
    TNode<Object> tmp79;
    TNode<Object> tmp80;
    ca_.Bind(&block10, &tmp74, &tmp75, &tmp76, &tmp77, &tmp78, &tmp79, &tmp80);
    TNode<Oddball> tmp81;
    USE(tmp81);
    tmp81 = Undefined_64(state_);
    ca_.Goto(&block11, tmp74, tmp75, tmp76, tmp77, tmp78, tmp79, tmp80, tmp81);
  }

  if (block12.is_used()) {
    TNode<RawPtrT> tmp82;
    TNode<RawPtrT> tmp83;
    TNode<IntPtrT> tmp84;
    TNode<Context> tmp85;
    TNode<Object> tmp86;
    TNode<Object> tmp87;
    TNode<Object> tmp88;
    TNode<Object> tmp89;
    ca_.Bind(&block12, &tmp82, &tmp83, &tmp84, &tmp85, &tmp86, &tmp87, &tmp88, &tmp89);
    ca_.Goto(&block11, tmp82, tmp83, tmp84, tmp85, tmp86, tmp87, tmp88, tmp89);
  }

  if (block11.is_used()) {
    TNode<RawPtrT> tmp90;
    TNode<RawPtrT> tmp91;
    TNode<IntPtrT> tmp92;
    TNode<Context> tmp93;
    TNode<Object> tmp94;
    TNode<Object> tmp95;
    TNode<Object> tmp96;
    TNode<Object> tmp97;
    ca_.Bind(&block11, &tmp90, &tmp91, &tmp92, &tmp93, &tmp94, &tmp95, &tmp96, &tmp97);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 800);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 803);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 802);
    TNode<Object> tmp98;
    USE(tmp98);
    tmp98 = DataViewSet_292(state_, TNode<Context>{tmp93}, TNode<Object>{tmp94}, TNode<Object>{tmp95}, TNode<Object>{tmp96}, TNode<Object>{tmp97}, BIGUINT64_ELEMENTS);
    arguments.PopAndReturn(tmp98);
  }
}

TF_BUILTIN(DataViewPrototypeSetBigInt64, CodeStubAssembler) {
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
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, Object> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, Object> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, torque_arguments.frame, torque_arguments.base, torque_arguments.length, parameter0, parameter1);

  if (block0.is_used()) {
    TNode<RawPtrT> tmp0;
    TNode<RawPtrT> tmp1;
    TNode<IntPtrT> tmp2;
    TNode<Context> tmp3;
    TNode<Object> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 808);
    TNode<IntPtrT> tmp5;
    USE(tmp5);
    tmp5 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 0);
    TNode<BoolT> tmp6;
    USE(tmp6);
    tmp6 = CodeStubAssembler(state_).IntPtrGreaterThan(TNode<IntPtrT>{tmp2}, TNode<IntPtrT>{tmp5});
    ca_.Branch(tmp6, &block1, &block2, tmp0, tmp1, tmp2, tmp3, tmp4);
  }

  if (block1.is_used()) {
    TNode<RawPtrT> tmp7;
    TNode<RawPtrT> tmp8;
    TNode<IntPtrT> tmp9;
    TNode<Context> tmp10;
    TNode<Object> tmp11;
    ca_.Bind(&block1, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11);
    TNode<IntPtrT> tmp12;
    USE(tmp12);
    tmp12 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 0);
    TNode<Object> tmp13;
    USE(tmp13);
    tmp13 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{tmp7}, TNode<RawPtrT>{tmp8}, TNode<IntPtrT>{tmp9}}, TNode<IntPtrT>{tmp12});
    ca_.Goto(&block4, tmp7, tmp8, tmp9, tmp10, tmp11, tmp13);
  }

  if (block2.is_used()) {
    TNode<RawPtrT> tmp14;
    TNode<RawPtrT> tmp15;
    TNode<IntPtrT> tmp16;
    TNode<Context> tmp17;
    TNode<Object> tmp18;
    ca_.Bind(&block2, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18);
    TNode<Oddball> tmp19;
    USE(tmp19);
    tmp19 = Undefined_64(state_);
    ca_.Goto(&block3, tmp14, tmp15, tmp16, tmp17, tmp18, tmp19);
  }

  if (block4.is_used()) {
    TNode<RawPtrT> tmp20;
    TNode<RawPtrT> tmp21;
    TNode<IntPtrT> tmp22;
    TNode<Context> tmp23;
    TNode<Object> tmp24;
    TNode<Object> tmp25;
    ca_.Bind(&block4, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25);
    ca_.Goto(&block3, tmp20, tmp21, tmp22, tmp23, tmp24, tmp25);
  }

  if (block3.is_used()) {
    TNode<RawPtrT> tmp26;
    TNode<RawPtrT> tmp27;
    TNode<IntPtrT> tmp28;
    TNode<Context> tmp29;
    TNode<Object> tmp30;
    TNode<Object> tmp31;
    ca_.Bind(&block3, &tmp26, &tmp27, &tmp28, &tmp29, &tmp30, &tmp31);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 809);
    TNode<IntPtrT> tmp32;
    USE(tmp32);
    tmp32 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 1);
    TNode<BoolT> tmp33;
    USE(tmp33);
    tmp33 = CodeStubAssembler(state_).IntPtrGreaterThan(TNode<IntPtrT>{tmp28}, TNode<IntPtrT>{tmp32});
    ca_.Branch(tmp33, &block5, &block6, tmp26, tmp27, tmp28, tmp29, tmp30, tmp31);
  }

  if (block5.is_used()) {
    TNode<RawPtrT> tmp34;
    TNode<RawPtrT> tmp35;
    TNode<IntPtrT> tmp36;
    TNode<Context> tmp37;
    TNode<Object> tmp38;
    TNode<Object> tmp39;
    ca_.Bind(&block5, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39);
    TNode<IntPtrT> tmp40;
    USE(tmp40);
    tmp40 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 1);
    TNode<Object> tmp41;
    USE(tmp41);
    tmp41 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{tmp34}, TNode<RawPtrT>{tmp35}, TNode<IntPtrT>{tmp36}}, TNode<IntPtrT>{tmp40});
    ca_.Goto(&block8, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39, tmp41);
  }

  if (block6.is_used()) {
    TNode<RawPtrT> tmp42;
    TNode<RawPtrT> tmp43;
    TNode<IntPtrT> tmp44;
    TNode<Context> tmp45;
    TNode<Object> tmp46;
    TNode<Object> tmp47;
    ca_.Bind(&block6, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47);
    TNode<Oddball> tmp48;
    USE(tmp48);
    tmp48 = Undefined_64(state_);
    ca_.Goto(&block7, tmp42, tmp43, tmp44, tmp45, tmp46, tmp47, tmp48);
  }

  if (block8.is_used()) {
    TNode<RawPtrT> tmp49;
    TNode<RawPtrT> tmp50;
    TNode<IntPtrT> tmp51;
    TNode<Context> tmp52;
    TNode<Object> tmp53;
    TNode<Object> tmp54;
    TNode<Object> tmp55;
    ca_.Bind(&block8, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55);
    ca_.Goto(&block7, tmp49, tmp50, tmp51, tmp52, tmp53, tmp54, tmp55);
  }

  if (block7.is_used()) {
    TNode<RawPtrT> tmp56;
    TNode<RawPtrT> tmp57;
    TNode<IntPtrT> tmp58;
    TNode<Context> tmp59;
    TNode<Object> tmp60;
    TNode<Object> tmp61;
    TNode<Object> tmp62;
    ca_.Bind(&block7, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 811);
    TNode<IntPtrT> tmp63;
    USE(tmp63);
    tmp63 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 2);
    TNode<BoolT> tmp64;
    USE(tmp64);
    tmp64 = CodeStubAssembler(state_).IntPtrGreaterThan(TNode<IntPtrT>{tmp58}, TNode<IntPtrT>{tmp63});
    ca_.Branch(tmp64, &block9, &block10, tmp56, tmp57, tmp58, tmp59, tmp60, tmp61, tmp62);
  }

  if (block9.is_used()) {
    TNode<RawPtrT> tmp65;
    TNode<RawPtrT> tmp66;
    TNode<IntPtrT> tmp67;
    TNode<Context> tmp68;
    TNode<Object> tmp69;
    TNode<Object> tmp70;
    TNode<Object> tmp71;
    ca_.Bind(&block9, &tmp65, &tmp66, &tmp67, &tmp68, &tmp69, &tmp70, &tmp71);
    TNode<IntPtrT> tmp72;
    USE(tmp72);
    tmp72 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 2);
    TNode<Object> tmp73;
    USE(tmp73);
    tmp73 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{tmp65}, TNode<RawPtrT>{tmp66}, TNode<IntPtrT>{tmp67}}, TNode<IntPtrT>{tmp72});
    ca_.Goto(&block12, tmp65, tmp66, tmp67, tmp68, tmp69, tmp70, tmp71, tmp73);
  }

  if (block10.is_used()) {
    TNode<RawPtrT> tmp74;
    TNode<RawPtrT> tmp75;
    TNode<IntPtrT> tmp76;
    TNode<Context> tmp77;
    TNode<Object> tmp78;
    TNode<Object> tmp79;
    TNode<Object> tmp80;
    ca_.Bind(&block10, &tmp74, &tmp75, &tmp76, &tmp77, &tmp78, &tmp79, &tmp80);
    TNode<Oddball> tmp81;
    USE(tmp81);
    tmp81 = Undefined_64(state_);
    ca_.Goto(&block11, tmp74, tmp75, tmp76, tmp77, tmp78, tmp79, tmp80, tmp81);
  }

  if (block12.is_used()) {
    TNode<RawPtrT> tmp82;
    TNode<RawPtrT> tmp83;
    TNode<IntPtrT> tmp84;
    TNode<Context> tmp85;
    TNode<Object> tmp86;
    TNode<Object> tmp87;
    TNode<Object> tmp88;
    TNode<Object> tmp89;
    ca_.Bind(&block12, &tmp82, &tmp83, &tmp84, &tmp85, &tmp86, &tmp87, &tmp88, &tmp89);
    ca_.Goto(&block11, tmp82, tmp83, tmp84, tmp85, tmp86, tmp87, tmp88, tmp89);
  }

  if (block11.is_used()) {
    TNode<RawPtrT> tmp90;
    TNode<RawPtrT> tmp91;
    TNode<IntPtrT> tmp92;
    TNode<Context> tmp93;
    TNode<Object> tmp94;
    TNode<Object> tmp95;
    TNode<Object> tmp96;
    TNode<Object> tmp97;
    ca_.Bind(&block11, &tmp90, &tmp91, &tmp92, &tmp93, &tmp94, &tmp95, &tmp96, &tmp97);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 810);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 813);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 812);
    TNode<Object> tmp98;
    USE(tmp98);
    tmp98 = DataViewSet_292(state_, TNode<Context>{tmp93}, TNode<Object>{tmp94}, TNode<Object>{tmp95}, TNode<Object>{tmp96}, TNode<Object>{tmp97}, BIGINT64_ELEMENTS);
    arguments.PopAndReturn(tmp98);
  }
}

TNode<JSDataView> Cast10JSDataView_1482(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, HeapObject> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject, JSDataView> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSDataView> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSDataView> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
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
    TNode<JSDataView> tmp10;
    USE(tmp10);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp10 = Cast10JSDataView_106(state_, TNode<HeapObject>{tmp9}, &label0);
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
    TNode<JSDataView> tmp17;
    ca_.Bind(&block5, &tmp14, &tmp15, &tmp16, &tmp17);
    ca_.Goto(&block2, tmp14, tmp15, tmp17);
  }

  if (block2.is_used()) {
    TNode<Context> tmp18;
    TNode<Object> tmp19;
    TNode<JSDataView> tmp20;
    ca_.Bind(&block2, &tmp18, &tmp19, &tmp20);
    ca_.SetSourcePosition("../../src/builtins/data-view.tq", 68);
    ca_.Goto(&block7, tmp18, tmp19, tmp20);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    TNode<Context> tmp21;
    TNode<Object> tmp22;
    TNode<JSDataView> tmp23;
    ca_.Bind(&block7, &tmp21, &tmp22, &tmp23);
  return TNode<JSDataView>{tmp23};
}

}  // namespace internal
}  // namespace v8

