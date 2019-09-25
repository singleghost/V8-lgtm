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

TNode<Object> TryFastArrayShift_36(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_receiver, compiler::CodeAssemblerLabel* label_Slow, compiler::CodeAssemblerLabel* label_Runtime) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSArray> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT, Context, Map> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT, Context, Map, Int32T> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT, Context> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT, Smi> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT, Smi> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT, Smi> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT, Smi> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT, Smi, Context, Smi, Smi, Context, Smi> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT, Smi, Context, Smi, Smi, Context, Smi, JSArray, Smi> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT, Smi, Context, Smi, Smi, Context, Smi, JSArray, Smi, Object> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT, Smi, Context, Smi, Smi, Context, Smi> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT, Smi, Context, Smi, Smi, Context, Smi, JSArray, Smi> block25(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT, Smi, Context, Smi, Smi, Context, Smi, JSArray, Smi, Object> block24(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT, Smi, Context, Smi, Smi, Context, Smi, Object> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT, Smi, Context, Smi> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT, Smi, Context, Smi, Object> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT, Smi, Object, Smi, Smi> block26(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT, Smi, Object, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block28(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT, Smi, Object, IntPtrT, IntPtrT, IntPtrT, IntPtrT, FixedArrayBase> block34(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT, Smi, Object, IntPtrT, IntPtrT, IntPtrT, IntPtrT, FixedArrayBase, FixedDoubleArray> block33(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT, Smi, Object, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block32(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT, Smi, Object, IntPtrT, IntPtrT, IntPtrT, IntPtrT, FixedDoubleArray> block31(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT, Smi, Object, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block29(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT, Smi, Object, IntPtrT, IntPtrT, IntPtrT, IntPtrT, FixedArrayBase> block38(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT, Smi, Object, IntPtrT, IntPtrT, IntPtrT, IntPtrT, FixedArrayBase, FixedArray> block37(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT, Smi, Object, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block36(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT, Smi, Object, IntPtrT, IntPtrT, IntPtrT, IntPtrT, FixedArray> block35(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT, Smi, Object, IntPtrT, IntPtrT, IntPtrT, IntPtrT, FixedArray> block39(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT, Smi, Object, IntPtrT, IntPtrT, IntPtrT, IntPtrT, FixedArray> block40(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT, Smi, Object, IntPtrT, IntPtrT, IntPtrT, IntPtrT, FixedArray> block41(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT, Smi, Object, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block30(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT, Smi, Object, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block27(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT, Smi, Object, Smi, Smi> block43(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT, Smi, Object, Smi, Smi, FixedArrayBase> block49(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT, Smi, Object, Smi, Smi, FixedArrayBase, FixedDoubleArray> block48(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT, Smi, Object, Smi, Smi> block47(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT, Smi, Object, Smi, Smi, FixedDoubleArray> block46(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT, Smi, Object, Smi, Smi> block44(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT, Smi, Object, Smi, Smi, FixedArrayBase> block53(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT, Smi, Object, Smi, Smi, FixedArrayBase, FixedArray> block52(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT, Smi, Object, Smi, Smi> block51(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT, Smi, Object, Smi, Smi, FixedArray> block50(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT, Smi, Object, Smi, Smi> block45(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSArray, JSArray, JSArray, Map, BoolT, BoolT, BoolT, Smi, Object, Smi, Smi> block42(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block54(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_receiver);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../src/builtins/array-shift.tq", 10);
    TNode<JSArray> tmp2;
    USE(tmp2);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp2 = Cast13ATFastJSArray_1458(state_, TNode<Context>{tmp0}, TNode<Object>{tmp1}, &label0);
    ca_.Goto(&block4, tmp0, tmp1, tmp1, tmp2);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block5, tmp0, tmp1, tmp1);
    }
  }

  if (block5.is_used()) {
    TNode<Context> tmp3;
    TNode<Object> tmp4;
    TNode<Object> tmp5;
    ca_.Bind(&block5, &tmp3, &tmp4, &tmp5);
    ca_.Goto(&block1);
  }

  if (block4.is_used()) {
    TNode<Context> tmp6;
    TNode<Object> tmp7;
    TNode<Object> tmp8;
    TNode<JSArray> tmp9;
    ca_.Bind(&block4, &tmp6, &tmp7, &tmp8, &tmp9);
    ca_.SetSourcePosition("../../src/builtins/array-shift.tq", 11);
    TNode<JSArray> tmp10;
    USE(tmp10);
    TNode<JSArray> tmp11;
    USE(tmp11);
    TNode<Map> tmp12;
    USE(tmp12);
    TNode<BoolT> tmp13;
    USE(tmp13);
    TNode<BoolT> tmp14;
    USE(tmp14);
    TNode<BoolT> tmp15;
    USE(tmp15);
    std::tie(tmp10, tmp11, tmp12, tmp13, tmp14, tmp15) = NewFastJSArrayWitness_238(state_, TNode<JSArray>{tmp9}).Flatten();
    ca_.SetSourcePosition("../../src/builtins/array-shift.tq", 13);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 3196);
    TNode<Int32T> tmp16;
    USE(tmp16);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp16 = CodeStubAssembler(state_).EnsureArrayPushable(TNode<Map>{tmp12}, &label0);
    ca_.Goto(&block7, tmp6, tmp7, tmp9, tmp10, tmp11, tmp12, tmp13, tmp14, tmp15, tmp6, tmp12, tmp16);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block8, tmp6, tmp7, tmp9, tmp10, tmp11, tmp12, tmp13, tmp14, tmp15, tmp6, tmp12);
    }
  }

  if (block8.is_used()) {
    TNode<Context> tmp17;
    TNode<Object> tmp18;
    TNode<JSArray> tmp19;
    TNode<JSArray> tmp20;
    TNode<JSArray> tmp21;
    TNode<Map> tmp22;
    TNode<BoolT> tmp23;
    TNode<BoolT> tmp24;
    TNode<BoolT> tmp25;
    TNode<Context> tmp26;
    TNode<Map> tmp27;
    ca_.Bind(&block8, &tmp17, &tmp18, &tmp19, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26, &tmp27);
    ca_.Goto(&block1);
  }

  if (block7.is_used()) {
    TNode<Context> tmp28;
    TNode<Object> tmp29;
    TNode<JSArray> tmp30;
    TNode<JSArray> tmp31;
    TNode<JSArray> tmp32;
    TNode<Map> tmp33;
    TNode<BoolT> tmp34;
    TNode<BoolT> tmp35;
    TNode<BoolT> tmp36;
    TNode<Context> tmp37;
    TNode<Map> tmp38;
    TNode<Int32T> tmp39;
    ca_.Bind(&block7, &tmp28, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 3197);
    EnsureWriteableFastElements_50(state_, TNode<Context>{tmp37}, TNode<JSArray>{tmp32});
    ca_.SetSourcePosition("../../src/builtins/base.tq", 3198);
    TNode<BoolT> tmp40;
    USE(tmp40);
    tmp40 = FromConstexpr6ATbool16ATconstexpr_bool_167(state_, true);
    ca_.SetSourcePosition("../../src/builtins/array-shift.tq", 13);
    ca_.Goto(&block6, tmp28, tmp29, tmp30, tmp31, tmp32, tmp33, tmp34, tmp35, tmp40, tmp37);
  }

  if (block6.is_used()) {
    TNode<Context> tmp41;
    TNode<Object> tmp42;
    TNode<JSArray> tmp43;
    TNode<JSArray> tmp44;
    TNode<JSArray> tmp45;
    TNode<Map> tmp46;
    TNode<BoolT> tmp47;
    TNode<BoolT> tmp48;
    TNode<BoolT> tmp49;
    TNode<Context> tmp50;
    ca_.Bind(&block6, &tmp41, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47, &tmp48, &tmp49, &tmp50);
    ca_.SetSourcePosition("../../src/builtins/array-shift.tq", 15);
    TNode<Smi> tmp51;
    USE(tmp51);
    tmp51 = CodeStubAssembler(state_).LoadFastJSArrayLength(TNode<JSArray>{tmp43});
    TNode<Smi> tmp52;
    USE(tmp52);
    tmp52 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 0);
    TNode<BoolT> tmp53;
    USE(tmp53);
    tmp53 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{tmp51}, TNode<Smi>{tmp52});
    ca_.Branch(tmp53, &block9, &block10, tmp41, tmp42, tmp43, tmp44, tmp45, tmp46, tmp47, tmp48, tmp49);
  }

  if (block9.is_used()) {
    TNode<Context> tmp54;
    TNode<Object> tmp55;
    TNode<JSArray> tmp56;
    TNode<JSArray> tmp57;
    TNode<JSArray> tmp58;
    TNode<Map> tmp59;
    TNode<BoolT> tmp60;
    TNode<BoolT> tmp61;
    TNode<BoolT> tmp62;
    ca_.Bind(&block9, &tmp54, &tmp55, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62);
    ca_.SetSourcePosition("../../src/builtins/array-shift.tq", 16);
    TNode<Oddball> tmp63;
    USE(tmp63);
    tmp63 = Undefined_64(state_);
    ca_.Goto(&block3, tmp54, tmp55, tmp63);
  }

  if (block10.is_used()) {
    TNode<Context> tmp64;
    TNode<Object> tmp65;
    TNode<JSArray> tmp66;
    TNode<JSArray> tmp67;
    TNode<JSArray> tmp68;
    TNode<Map> tmp69;
    TNode<BoolT> tmp70;
    TNode<BoolT> tmp71;
    TNode<BoolT> tmp72;
    ca_.Bind(&block10, &tmp64, &tmp65, &tmp66, &tmp67, &tmp68, &tmp69, &tmp70, &tmp71, &tmp72);
    ca_.SetSourcePosition("../../src/builtins/array-shift.tq", 19);
    TNode<Smi> tmp73;
    USE(tmp73);
    tmp73 = CodeStubAssembler(state_).LoadFastJSArrayLength(TNode<JSArray>{tmp66});
    TNode<Smi> tmp74;
    USE(tmp74);
    tmp74 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 1);
    TNode<Smi> tmp75;
    USE(tmp75);
    tmp75 = CodeStubAssembler(state_).SmiSub(TNode<Smi>{tmp73}, TNode<Smi>{tmp74});
    ca_.SetSourcePosition("../../src/builtins/array-shift.tq", 23);
    TNode<Smi> tmp76;
    USE(tmp76);
    tmp76 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{tmp75}, TNode<Smi>{tmp75});
    TNode<Smi> tmp77;
    USE(tmp77);
    tmp77 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, JSObject::kMinAddedElementsCapacity);
    TNode<Smi> tmp78;
    USE(tmp78);
    tmp78 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{tmp76}, TNode<Smi>{tmp77});
    ca_.SetSourcePosition("../../src/builtins/array-shift.tq", 24);
    TNode<IntPtrT> tmp79 = ca_.IntPtrConstant(JSObject::kElementsOffset);
    USE(tmp79);
    TNode<FixedArrayBase>tmp80 = CodeStubAssembler(state_).LoadReference<FixedArrayBase>(CodeStubAssembler::Reference{tmp66, tmp79});
    TNode<IntPtrT> tmp81 = ca_.IntPtrConstant(FixedArrayBase::kLengthOffset);
    USE(tmp81);
    TNode<Smi>tmp82 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp80, tmp81});
    ca_.SetSourcePosition("../../src/builtins/array-shift.tq", 23);
    TNode<BoolT> tmp83;
    USE(tmp83);
    tmp83 = CodeStubAssembler(state_).SmiLessThan(TNode<Smi>{tmp78}, TNode<Smi>{tmp82});
    ca_.Branch(tmp83, &block11, &block12, tmp64, tmp65, tmp66, tmp67, tmp68, tmp69, tmp70, tmp71, tmp72, tmp75);
  }

  if (block11.is_used()) {
    TNode<Context> tmp84;
    TNode<Object> tmp85;
    TNode<JSArray> tmp86;
    TNode<JSArray> tmp87;
    TNode<JSArray> tmp88;
    TNode<Map> tmp89;
    TNode<BoolT> tmp90;
    TNode<BoolT> tmp91;
    TNode<BoolT> tmp92;
    TNode<Smi> tmp93;
    ca_.Bind(&block11, &tmp84, &tmp85, &tmp86, &tmp87, &tmp88, &tmp89, &tmp90, &tmp91, &tmp92, &tmp93);
    ca_.SetSourcePosition("../../src/builtins/array-shift.tq", 25);
    ca_.Goto(&block2);
  }

  if (block12.is_used()) {
    TNode<Context> tmp94;
    TNode<Object> tmp95;
    TNode<JSArray> tmp96;
    TNode<JSArray> tmp97;
    TNode<JSArray> tmp98;
    TNode<Map> tmp99;
    TNode<BoolT> tmp100;
    TNode<BoolT> tmp101;
    TNode<BoolT> tmp102;
    TNode<Smi> tmp103;
    ca_.Bind(&block12, &tmp94, &tmp95, &tmp96, &tmp97, &tmp98, &tmp99, &tmp100, &tmp101, &tmp102, &tmp103);
    ca_.SetSourcePosition("../../src/builtins/array-shift.tq", 30);
    TNode<Smi> tmp104;
    USE(tmp104);
    tmp104 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, JSArray::kMaxCopyElements);
    TNode<BoolT> tmp105;
    USE(tmp105);
    tmp105 = CodeStubAssembler(state_).SmiGreaterThan(TNode<Smi>{tmp103}, TNode<Smi>{tmp104});
    ca_.Branch(tmp105, &block13, &block14, tmp94, tmp95, tmp96, tmp97, tmp98, tmp99, tmp100, tmp101, tmp102, tmp103);
  }

  if (block13.is_used()) {
    TNode<Context> tmp106;
    TNode<Object> tmp107;
    TNode<JSArray> tmp108;
    TNode<JSArray> tmp109;
    TNode<JSArray> tmp110;
    TNode<Map> tmp111;
    TNode<BoolT> tmp112;
    TNode<BoolT> tmp113;
    TNode<BoolT> tmp114;
    TNode<Smi> tmp115;
    ca_.Bind(&block13, &tmp106, &tmp107, &tmp108, &tmp109, &tmp110, &tmp111, &tmp112, &tmp113, &tmp114, &tmp115);
    ca_.Goto(&block2);
  }

  if (block14.is_used()) {
    TNode<Context> tmp116;
    TNode<Object> tmp117;
    TNode<JSArray> tmp118;
    TNode<JSArray> tmp119;
    TNode<JSArray> tmp120;
    TNode<Map> tmp121;
    TNode<BoolT> tmp122;
    TNode<BoolT> tmp123;
    TNode<BoolT> tmp124;
    TNode<Smi> tmp125;
    ca_.Bind(&block14, &tmp116, &tmp117, &tmp118, &tmp119, &tmp120, &tmp121, &tmp122, &tmp123, &tmp124, &tmp125);
    ca_.SetSourcePosition("../../src/builtins/array-shift.tq", 32);
    TNode<Smi> tmp126;
    USE(tmp126);
    tmp126 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 0);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 3188);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 3165);
    ca_.Branch(tmp122, &block19, &block20, tmp116, tmp117, tmp118, tmp119, tmp120, tmp121, tmp122, tmp123, tmp124, tmp125, tmp116, tmp126, tmp126, tmp116, tmp126);
  }

  if (block19.is_used()) {
    TNode<Context> tmp127;
    TNode<Object> tmp128;
    TNode<JSArray> tmp129;
    TNode<JSArray> tmp130;
    TNode<JSArray> tmp131;
    TNode<Map> tmp132;
    TNode<BoolT> tmp133;
    TNode<BoolT> tmp134;
    TNode<BoolT> tmp135;
    TNode<Smi> tmp136;
    TNode<Context> tmp137;
    TNode<Smi> tmp138;
    TNode<Smi> tmp139;
    TNode<Context> tmp140;
    TNode<Smi> tmp141;
    ca_.Bind(&block19, &tmp127, &tmp128, &tmp129, &tmp130, &tmp131, &tmp132, &tmp133, &tmp134, &tmp135, &tmp136, &tmp137, &tmp138, &tmp139, &tmp140, &tmp141);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 3166);
    TNode<Object> tmp142;
    USE(tmp142);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp142 = LoadElementNoHole16FixedDoubleArray_237(state_, TNode<Context>{tmp140}, TNode<JSArray>{tmp131}, TNode<Smi>{tmp141}, &label0);
    ca_.Goto(&block22, tmp127, tmp128, tmp129, tmp130, tmp131, tmp132, tmp133, tmp134, tmp135, tmp136, tmp137, tmp138, tmp139, tmp140, tmp141, tmp131, tmp141, tmp142);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block23, tmp127, tmp128, tmp129, tmp130, tmp131, tmp132, tmp133, tmp134, tmp135, tmp136, tmp137, tmp138, tmp139, tmp140, tmp141, tmp131, tmp141);
    }
  }

  if (block23.is_used()) {
    TNode<Context> tmp143;
    TNode<Object> tmp144;
    TNode<JSArray> tmp145;
    TNode<JSArray> tmp146;
    TNode<JSArray> tmp147;
    TNode<Map> tmp148;
    TNode<BoolT> tmp149;
    TNode<BoolT> tmp150;
    TNode<BoolT> tmp151;
    TNode<Smi> tmp152;
    TNode<Context> tmp153;
    TNode<Smi> tmp154;
    TNode<Smi> tmp155;
    TNode<Context> tmp156;
    TNode<Smi> tmp157;
    TNode<JSArray> tmp158;
    TNode<Smi> tmp159;
    ca_.Bind(&block23, &tmp143, &tmp144, &tmp145, &tmp146, &tmp147, &tmp148, &tmp149, &tmp150, &tmp151, &tmp152, &tmp153, &tmp154, &tmp155, &tmp156, &tmp157, &tmp158, &tmp159);
    ca_.Goto(&block17, tmp143, tmp144, tmp145, tmp146, tmp147, tmp148, tmp149, tmp150, tmp151, tmp152, tmp153, tmp154);
  }

  if (block22.is_used()) {
    TNode<Context> tmp160;
    TNode<Object> tmp161;
    TNode<JSArray> tmp162;
    TNode<JSArray> tmp163;
    TNode<JSArray> tmp164;
    TNode<Map> tmp165;
    TNode<BoolT> tmp166;
    TNode<BoolT> tmp167;
    TNode<BoolT> tmp168;
    TNode<Smi> tmp169;
    TNode<Context> tmp170;
    TNode<Smi> tmp171;
    TNode<Smi> tmp172;
    TNode<Context> tmp173;
    TNode<Smi> tmp174;
    TNode<JSArray> tmp175;
    TNode<Smi> tmp176;
    TNode<Object> tmp177;
    ca_.Bind(&block22, &tmp160, &tmp161, &tmp162, &tmp163, &tmp164, &tmp165, &tmp166, &tmp167, &tmp168, &tmp169, &tmp170, &tmp171, &tmp172, &tmp173, &tmp174, &tmp175, &tmp176, &tmp177);
    ca_.Goto(&block18, tmp160, tmp161, tmp162, tmp163, tmp164, tmp165, tmp166, tmp167, tmp168, tmp169, tmp170, tmp171, tmp172, tmp173, tmp174, tmp177);
  }

  if (block20.is_used()) {
    TNode<Context> tmp178;
    TNode<Object> tmp179;
    TNode<JSArray> tmp180;
    TNode<JSArray> tmp181;
    TNode<JSArray> tmp182;
    TNode<Map> tmp183;
    TNode<BoolT> tmp184;
    TNode<BoolT> tmp185;
    TNode<BoolT> tmp186;
    TNode<Smi> tmp187;
    TNode<Context> tmp188;
    TNode<Smi> tmp189;
    TNode<Smi> tmp190;
    TNode<Context> tmp191;
    TNode<Smi> tmp192;
    ca_.Bind(&block20, &tmp178, &tmp179, &tmp180, &tmp181, &tmp182, &tmp183, &tmp184, &tmp185, &tmp186, &tmp187, &tmp188, &tmp189, &tmp190, &tmp191, &tmp192);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 3169);
    TNode<Object> tmp193;
    USE(tmp193);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp193 = LoadElementNoHole10FixedArray_236(state_, TNode<Context>{tmp191}, TNode<JSArray>{tmp182}, TNode<Smi>{tmp192}, &label0);
    ca_.Goto(&block24, tmp178, tmp179, tmp180, tmp181, tmp182, tmp183, tmp184, tmp185, tmp186, tmp187, tmp188, tmp189, tmp190, tmp191, tmp192, tmp182, tmp192, tmp193);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block25, tmp178, tmp179, tmp180, tmp181, tmp182, tmp183, tmp184, tmp185, tmp186, tmp187, tmp188, tmp189, tmp190, tmp191, tmp192, tmp182, tmp192);
    }
  }

  if (block25.is_used()) {
    TNode<Context> tmp194;
    TNode<Object> tmp195;
    TNode<JSArray> tmp196;
    TNode<JSArray> tmp197;
    TNode<JSArray> tmp198;
    TNode<Map> tmp199;
    TNode<BoolT> tmp200;
    TNode<BoolT> tmp201;
    TNode<BoolT> tmp202;
    TNode<Smi> tmp203;
    TNode<Context> tmp204;
    TNode<Smi> tmp205;
    TNode<Smi> tmp206;
    TNode<Context> tmp207;
    TNode<Smi> tmp208;
    TNode<JSArray> tmp209;
    TNode<Smi> tmp210;
    ca_.Bind(&block25, &tmp194, &tmp195, &tmp196, &tmp197, &tmp198, &tmp199, &tmp200, &tmp201, &tmp202, &tmp203, &tmp204, &tmp205, &tmp206, &tmp207, &tmp208, &tmp209, &tmp210);
    ca_.Goto(&block17, tmp194, tmp195, tmp196, tmp197, tmp198, tmp199, tmp200, tmp201, tmp202, tmp203, tmp204, tmp205);
  }

  if (block24.is_used()) {
    TNode<Context> tmp211;
    TNode<Object> tmp212;
    TNode<JSArray> tmp213;
    TNode<JSArray> tmp214;
    TNode<JSArray> tmp215;
    TNode<Map> tmp216;
    TNode<BoolT> tmp217;
    TNode<BoolT> tmp218;
    TNode<BoolT> tmp219;
    TNode<Smi> tmp220;
    TNode<Context> tmp221;
    TNode<Smi> tmp222;
    TNode<Smi> tmp223;
    TNode<Context> tmp224;
    TNode<Smi> tmp225;
    TNode<JSArray> tmp226;
    TNode<Smi> tmp227;
    TNode<Object> tmp228;
    ca_.Bind(&block24, &tmp211, &tmp212, &tmp213, &tmp214, &tmp215, &tmp216, &tmp217, &tmp218, &tmp219, &tmp220, &tmp221, &tmp222, &tmp223, &tmp224, &tmp225, &tmp226, &tmp227, &tmp228);
    ca_.Goto(&block18, tmp211, tmp212, tmp213, tmp214, tmp215, tmp216, tmp217, tmp218, tmp219, tmp220, tmp221, tmp222, tmp223, tmp224, tmp225, tmp228);
  }

  if (block18.is_used()) {
    TNode<Context> tmp229;
    TNode<Object> tmp230;
    TNode<JSArray> tmp231;
    TNode<JSArray> tmp232;
    TNode<JSArray> tmp233;
    TNode<Map> tmp234;
    TNode<BoolT> tmp235;
    TNode<BoolT> tmp236;
    TNode<BoolT> tmp237;
    TNode<Smi> tmp238;
    TNode<Context> tmp239;
    TNode<Smi> tmp240;
    TNode<Smi> tmp241;
    TNode<Context> tmp242;
    TNode<Smi> tmp243;
    TNode<Object> tmp244;
    ca_.Bind(&block18, &tmp229, &tmp230, &tmp231, &tmp232, &tmp233, &tmp234, &tmp235, &tmp236, &tmp237, &tmp238, &tmp239, &tmp240, &tmp241, &tmp242, &tmp243, &tmp244);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 3188);
    ca_.Goto(&block15, tmp229, tmp230, tmp231, tmp232, tmp233, tmp234, tmp235, tmp236, tmp237, tmp238, tmp239, tmp240, tmp244);
  }

  if (block17.is_used()) {
    TNode<Context> tmp245;
    TNode<Object> tmp246;
    TNode<JSArray> tmp247;
    TNode<JSArray> tmp248;
    TNode<JSArray> tmp249;
    TNode<Map> tmp250;
    TNode<BoolT> tmp251;
    TNode<BoolT> tmp252;
    TNode<BoolT> tmp253;
    TNode<Smi> tmp254;
    TNode<Context> tmp255;
    TNode<Smi> tmp256;
    ca_.Bind(&block17, &tmp245, &tmp246, &tmp247, &tmp248, &tmp249, &tmp250, &tmp251, &tmp252, &tmp253, &tmp254, &tmp255, &tmp256);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 3191);
    TNode<Oddball> tmp257;
    USE(tmp257);
    tmp257 = Undefined_64(state_);
    ca_.Goto(&block15, tmp245, tmp246, tmp247, tmp248, tmp249, tmp250, tmp251, tmp252, tmp253, tmp254, tmp255, tmp256, tmp257);
  }

  if (block15.is_used()) {
    TNode<Context> tmp258;
    TNode<Object> tmp259;
    TNode<JSArray> tmp260;
    TNode<JSArray> tmp261;
    TNode<JSArray> tmp262;
    TNode<Map> tmp263;
    TNode<BoolT> tmp264;
    TNode<BoolT> tmp265;
    TNode<BoolT> tmp266;
    TNode<Smi> tmp267;
    TNode<Context> tmp268;
    TNode<Smi> tmp269;
    TNode<Object> tmp270;
    ca_.Bind(&block15, &tmp258, &tmp259, &tmp260, &tmp261, &tmp262, &tmp263, &tmp264, &tmp265, &tmp266, &tmp267, &tmp268, &tmp269, &tmp270);
    ca_.SetSourcePosition("../../src/builtins/array-shift.tq", 32);
    ca_.SetSourcePosition("../../src/builtins/array-shift.tq", 33);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 3203);
    StoreFastJSArrayLength_215(state_, TNode<JSArray>{tmp262}, TNode<Smi>{tmp267});
    ca_.SetSourcePosition("../../src/builtins/array-shift.tq", 33);
    ca_.Goto(&block26, tmp258, tmp259, tmp260, tmp261, tmp262, tmp263, tmp264, tmp265, tmp266, tmp267, tmp270, tmp267, tmp267);
  }

  if (block26.is_used()) {
    TNode<Context> tmp271;
    TNode<Object> tmp272;
    TNode<JSArray> tmp273;
    TNode<JSArray> tmp274;
    TNode<JSArray> tmp275;
    TNode<Map> tmp276;
    TNode<BoolT> tmp277;
    TNode<BoolT> tmp278;
    TNode<BoolT> tmp279;
    TNode<Smi> tmp280;
    TNode<Object> tmp281;
    TNode<Smi> tmp282;
    TNode<Smi> tmp283;
    ca_.Bind(&block26, &tmp271, &tmp272, &tmp273, &tmp274, &tmp275, &tmp276, &tmp277, &tmp278, &tmp279, &tmp280, &tmp281, &tmp282, &tmp283);
    ca_.SetSourcePosition("../../src/builtins/array-shift.tq", 34);
    TNode<IntPtrT> tmp284;
    USE(tmp284);
    tmp284 = Convert8ATintptr5ATSmi_188(state_, TNode<Smi>{tmp280});
    TNode<IntPtrT> tmp285;
    USE(tmp285);
    tmp285 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 0);
    TNode<IntPtrT> tmp286;
    USE(tmp286);
    tmp286 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 1);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 3225);
    ca_.Branch(tmp277, &block28, &block29, tmp271, tmp272, tmp273, tmp274, tmp275, tmp276, tmp277, tmp278, tmp279, tmp280, tmp281, tmp284, tmp285, tmp286, tmp284);
  }

  if (block28.is_used()) {
    TNode<Context> tmp287;
    TNode<Object> tmp288;
    TNode<JSArray> tmp289;
    TNode<JSArray> tmp290;
    TNode<JSArray> tmp291;
    TNode<Map> tmp292;
    TNode<BoolT> tmp293;
    TNode<BoolT> tmp294;
    TNode<BoolT> tmp295;
    TNode<Smi> tmp296;
    TNode<Object> tmp297;
    TNode<IntPtrT> tmp298;
    TNode<IntPtrT> tmp299;
    TNode<IntPtrT> tmp300;
    TNode<IntPtrT> tmp301;
    ca_.Bind(&block28, &tmp287, &tmp288, &tmp289, &tmp290, &tmp291, &tmp292, &tmp293, &tmp294, &tmp295, &tmp296, &tmp297, &tmp298, &tmp299, &tmp300, &tmp301);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 3227);
    TNode<IntPtrT> tmp302 = ca_.IntPtrConstant(JSObject::kElementsOffset);
    USE(tmp302);
    TNode<FixedArrayBase>tmp303 = CodeStubAssembler(state_).LoadReference<FixedArrayBase>(CodeStubAssembler::Reference{tmp291, tmp302});
    TNode<FixedDoubleArray> tmp304;
    USE(tmp304);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp304 = Cast16FixedDoubleArray_104(state_, TNode<HeapObject>{tmp303}, &label0);
    ca_.Goto(&block33, tmp287, tmp288, tmp289, tmp290, tmp291, tmp292, tmp293, tmp294, tmp295, tmp296, tmp297, tmp298, tmp299, tmp300, tmp301, tmp303, tmp304);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block34, tmp287, tmp288, tmp289, tmp290, tmp291, tmp292, tmp293, tmp294, tmp295, tmp296, tmp297, tmp298, tmp299, tmp300, tmp301, tmp303);
    }
  }

  if (block34.is_used()) {
    TNode<Context> tmp305;
    TNode<Object> tmp306;
    TNode<JSArray> tmp307;
    TNode<JSArray> tmp308;
    TNode<JSArray> tmp309;
    TNode<Map> tmp310;
    TNode<BoolT> tmp311;
    TNode<BoolT> tmp312;
    TNode<BoolT> tmp313;
    TNode<Smi> tmp314;
    TNode<Object> tmp315;
    TNode<IntPtrT> tmp316;
    TNode<IntPtrT> tmp317;
    TNode<IntPtrT> tmp318;
    TNode<IntPtrT> tmp319;
    TNode<FixedArrayBase> tmp320;
    ca_.Bind(&block34, &tmp305, &tmp306, &tmp307, &tmp308, &tmp309, &tmp310, &tmp311, &tmp312, &tmp313, &tmp314, &tmp315, &tmp316, &tmp317, &tmp318, &tmp319, &tmp320);
    ca_.Goto(&block32, tmp305, tmp306, tmp307, tmp308, tmp309, tmp310, tmp311, tmp312, tmp313, tmp314, tmp315, tmp316, tmp317, tmp318, tmp319);
  }

  if (block33.is_used()) {
    TNode<Context> tmp321;
    TNode<Object> tmp322;
    TNode<JSArray> tmp323;
    TNode<JSArray> tmp324;
    TNode<JSArray> tmp325;
    TNode<Map> tmp326;
    TNode<BoolT> tmp327;
    TNode<BoolT> tmp328;
    TNode<BoolT> tmp329;
    TNode<Smi> tmp330;
    TNode<Object> tmp331;
    TNode<IntPtrT> tmp332;
    TNode<IntPtrT> tmp333;
    TNode<IntPtrT> tmp334;
    TNode<IntPtrT> tmp335;
    TNode<FixedArrayBase> tmp336;
    TNode<FixedDoubleArray> tmp337;
    ca_.Bind(&block33, &tmp321, &tmp322, &tmp323, &tmp324, &tmp325, &tmp326, &tmp327, &tmp328, &tmp329, &tmp330, &tmp331, &tmp332, &tmp333, &tmp334, &tmp335, &tmp336, &tmp337);
    ca_.Goto(&block31, tmp321, tmp322, tmp323, tmp324, tmp325, tmp326, tmp327, tmp328, tmp329, tmp330, tmp331, tmp332, tmp333, tmp334, tmp335, tmp337);
  }

  if (block32.is_used()) {
    TNode<Context> tmp338;
    TNode<Object> tmp339;
    TNode<JSArray> tmp340;
    TNode<JSArray> tmp341;
    TNode<JSArray> tmp342;
    TNode<Map> tmp343;
    TNode<BoolT> tmp344;
    TNode<BoolT> tmp345;
    TNode<BoolT> tmp346;
    TNode<Smi> tmp347;
    TNode<Object> tmp348;
    TNode<IntPtrT> tmp349;
    TNode<IntPtrT> tmp350;
    TNode<IntPtrT> tmp351;
    TNode<IntPtrT> tmp352;
    ca_.Bind(&block32, &tmp338, &tmp339, &tmp340, &tmp341, &tmp342, &tmp343, &tmp344, &tmp345, &tmp346, &tmp347, &tmp348, &tmp349, &tmp350, &tmp351, &tmp352);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 3228);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block31.is_used()) {
    TNode<Context> tmp353;
    TNode<Object> tmp354;
    TNode<JSArray> tmp355;
    TNode<JSArray> tmp356;
    TNode<JSArray> tmp357;
    TNode<Map> tmp358;
    TNode<BoolT> tmp359;
    TNode<BoolT> tmp360;
    TNode<BoolT> tmp361;
    TNode<Smi> tmp362;
    TNode<Object> tmp363;
    TNode<IntPtrT> tmp364;
    TNode<IntPtrT> tmp365;
    TNode<IntPtrT> tmp366;
    TNode<IntPtrT> tmp367;
    TNode<FixedDoubleArray> tmp368;
    ca_.Bind(&block31, &tmp353, &tmp354, &tmp355, &tmp356, &tmp357, &tmp358, &tmp359, &tmp360, &tmp361, &tmp362, &tmp363, &tmp364, &tmp365, &tmp366, &tmp367, &tmp368);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 3226);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 3229);
    TorqueMoveElements_233(state_, TNode<FixedDoubleArray>{tmp368}, TNode<IntPtrT>{tmp365}, TNode<IntPtrT>{tmp366}, TNode<IntPtrT>{tmp367});
    ca_.SetSourcePosition("../../src/builtins/base.tq", 3225);
    ca_.Goto(&block30, tmp353, tmp354, tmp355, tmp356, tmp357, tmp358, tmp359, tmp360, tmp361, tmp362, tmp363, tmp364, tmp365, tmp366, tmp367);
  }

  if (block29.is_used()) {
    TNode<Context> tmp369;
    TNode<Object> tmp370;
    TNode<JSArray> tmp371;
    TNode<JSArray> tmp372;
    TNode<JSArray> tmp373;
    TNode<Map> tmp374;
    TNode<BoolT> tmp375;
    TNode<BoolT> tmp376;
    TNode<BoolT> tmp377;
    TNode<Smi> tmp378;
    TNode<Object> tmp379;
    TNode<IntPtrT> tmp380;
    TNode<IntPtrT> tmp381;
    TNode<IntPtrT> tmp382;
    TNode<IntPtrT> tmp383;
    ca_.Bind(&block29, &tmp369, &tmp370, &tmp371, &tmp372, &tmp373, &tmp374, &tmp375, &tmp376, &tmp377, &tmp378, &tmp379, &tmp380, &tmp381, &tmp382, &tmp383);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 3231);
    TNode<IntPtrT> tmp384 = ca_.IntPtrConstant(JSObject::kElementsOffset);
    USE(tmp384);
    TNode<FixedArrayBase>tmp385 = CodeStubAssembler(state_).LoadReference<FixedArrayBase>(CodeStubAssembler::Reference{tmp373, tmp384});
    TNode<FixedArray> tmp386;
    USE(tmp386);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp386 = Cast10FixedArray_103(state_, TNode<HeapObject>{tmp385}, &label0);
    ca_.Goto(&block37, tmp369, tmp370, tmp371, tmp372, tmp373, tmp374, tmp375, tmp376, tmp377, tmp378, tmp379, tmp380, tmp381, tmp382, tmp383, tmp385, tmp386);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block38, tmp369, tmp370, tmp371, tmp372, tmp373, tmp374, tmp375, tmp376, tmp377, tmp378, tmp379, tmp380, tmp381, tmp382, tmp383, tmp385);
    }
  }

  if (block38.is_used()) {
    TNode<Context> tmp387;
    TNode<Object> tmp388;
    TNode<JSArray> tmp389;
    TNode<JSArray> tmp390;
    TNode<JSArray> tmp391;
    TNode<Map> tmp392;
    TNode<BoolT> tmp393;
    TNode<BoolT> tmp394;
    TNode<BoolT> tmp395;
    TNode<Smi> tmp396;
    TNode<Object> tmp397;
    TNode<IntPtrT> tmp398;
    TNode<IntPtrT> tmp399;
    TNode<IntPtrT> tmp400;
    TNode<IntPtrT> tmp401;
    TNode<FixedArrayBase> tmp402;
    ca_.Bind(&block38, &tmp387, &tmp388, &tmp389, &tmp390, &tmp391, &tmp392, &tmp393, &tmp394, &tmp395, &tmp396, &tmp397, &tmp398, &tmp399, &tmp400, &tmp401, &tmp402);
    ca_.Goto(&block36, tmp387, tmp388, tmp389, tmp390, tmp391, tmp392, tmp393, tmp394, tmp395, tmp396, tmp397, tmp398, tmp399, tmp400, tmp401);
  }

  if (block37.is_used()) {
    TNode<Context> tmp403;
    TNode<Object> tmp404;
    TNode<JSArray> tmp405;
    TNode<JSArray> tmp406;
    TNode<JSArray> tmp407;
    TNode<Map> tmp408;
    TNode<BoolT> tmp409;
    TNode<BoolT> tmp410;
    TNode<BoolT> tmp411;
    TNode<Smi> tmp412;
    TNode<Object> tmp413;
    TNode<IntPtrT> tmp414;
    TNode<IntPtrT> tmp415;
    TNode<IntPtrT> tmp416;
    TNode<IntPtrT> tmp417;
    TNode<FixedArrayBase> tmp418;
    TNode<FixedArray> tmp419;
    ca_.Bind(&block37, &tmp403, &tmp404, &tmp405, &tmp406, &tmp407, &tmp408, &tmp409, &tmp410, &tmp411, &tmp412, &tmp413, &tmp414, &tmp415, &tmp416, &tmp417, &tmp418, &tmp419);
    ca_.Goto(&block35, tmp403, tmp404, tmp405, tmp406, tmp407, tmp408, tmp409, tmp410, tmp411, tmp412, tmp413, tmp414, tmp415, tmp416, tmp417, tmp419);
  }

  if (block36.is_used()) {
    TNode<Context> tmp420;
    TNode<Object> tmp421;
    TNode<JSArray> tmp422;
    TNode<JSArray> tmp423;
    TNode<JSArray> tmp424;
    TNode<Map> tmp425;
    TNode<BoolT> tmp426;
    TNode<BoolT> tmp427;
    TNode<BoolT> tmp428;
    TNode<Smi> tmp429;
    TNode<Object> tmp430;
    TNode<IntPtrT> tmp431;
    TNode<IntPtrT> tmp432;
    TNode<IntPtrT> tmp433;
    TNode<IntPtrT> tmp434;
    ca_.Bind(&block36, &tmp420, &tmp421, &tmp422, &tmp423, &tmp424, &tmp425, &tmp426, &tmp427, &tmp428, &tmp429, &tmp430, &tmp431, &tmp432, &tmp433, &tmp434);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 3232);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block35.is_used()) {
    TNode<Context> tmp435;
    TNode<Object> tmp436;
    TNode<JSArray> tmp437;
    TNode<JSArray> tmp438;
    TNode<JSArray> tmp439;
    TNode<Map> tmp440;
    TNode<BoolT> tmp441;
    TNode<BoolT> tmp442;
    TNode<BoolT> tmp443;
    TNode<Smi> tmp444;
    TNode<Object> tmp445;
    TNode<IntPtrT> tmp446;
    TNode<IntPtrT> tmp447;
    TNode<IntPtrT> tmp448;
    TNode<IntPtrT> tmp449;
    TNode<FixedArray> tmp450;
    ca_.Bind(&block35, &tmp435, &tmp436, &tmp437, &tmp438, &tmp439, &tmp440, &tmp441, &tmp442, &tmp443, &tmp444, &tmp445, &tmp446, &tmp447, &tmp448, &tmp449, &tmp450);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 3231);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 3233);
    ca_.Branch(tmp442, &block39, &block40, tmp435, tmp436, tmp437, tmp438, tmp439, tmp440, tmp441, tmp442, tmp443, tmp444, tmp445, tmp446, tmp447, tmp448, tmp449, tmp450);
  }

  if (block39.is_used()) {
    TNode<Context> tmp451;
    TNode<Object> tmp452;
    TNode<JSArray> tmp453;
    TNode<JSArray> tmp454;
    TNode<JSArray> tmp455;
    TNode<Map> tmp456;
    TNode<BoolT> tmp457;
    TNode<BoolT> tmp458;
    TNode<BoolT> tmp459;
    TNode<Smi> tmp460;
    TNode<Object> tmp461;
    TNode<IntPtrT> tmp462;
    TNode<IntPtrT> tmp463;
    TNode<IntPtrT> tmp464;
    TNode<IntPtrT> tmp465;
    TNode<FixedArray> tmp466;
    ca_.Bind(&block39, &tmp451, &tmp452, &tmp453, &tmp454, &tmp455, &tmp456, &tmp457, &tmp458, &tmp459, &tmp460, &tmp461, &tmp462, &tmp463, &tmp464, &tmp465, &tmp466);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 3234);
    TorqueMoveElementsSmi_231(state_, TNode<FixedArray>{tmp466}, TNode<IntPtrT>{tmp463}, TNode<IntPtrT>{tmp464}, TNode<IntPtrT>{tmp465});
    ca_.SetSourcePosition("../../src/builtins/base.tq", 3233);
    ca_.Goto(&block41, tmp451, tmp452, tmp453, tmp454, tmp455, tmp456, tmp457, tmp458, tmp459, tmp460, tmp461, tmp462, tmp463, tmp464, tmp465, tmp466);
  }

  if (block40.is_used()) {
    TNode<Context> tmp467;
    TNode<Object> tmp468;
    TNode<JSArray> tmp469;
    TNode<JSArray> tmp470;
    TNode<JSArray> tmp471;
    TNode<Map> tmp472;
    TNode<BoolT> tmp473;
    TNode<BoolT> tmp474;
    TNode<BoolT> tmp475;
    TNode<Smi> tmp476;
    TNode<Object> tmp477;
    TNode<IntPtrT> tmp478;
    TNode<IntPtrT> tmp479;
    TNode<IntPtrT> tmp480;
    TNode<IntPtrT> tmp481;
    TNode<FixedArray> tmp482;
    ca_.Bind(&block40, &tmp467, &tmp468, &tmp469, &tmp470, &tmp471, &tmp472, &tmp473, &tmp474, &tmp475, &tmp476, &tmp477, &tmp478, &tmp479, &tmp480, &tmp481, &tmp482);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 3236);
    TorqueMoveElements_232(state_, TNode<FixedArray>{tmp482}, TNode<IntPtrT>{tmp479}, TNode<IntPtrT>{tmp480}, TNode<IntPtrT>{tmp481});
    ca_.SetSourcePosition("../../src/builtins/base.tq", 3233);
    ca_.Goto(&block41, tmp467, tmp468, tmp469, tmp470, tmp471, tmp472, tmp473, tmp474, tmp475, tmp476, tmp477, tmp478, tmp479, tmp480, tmp481, tmp482);
  }

  if (block41.is_used()) {
    TNode<Context> tmp483;
    TNode<Object> tmp484;
    TNode<JSArray> tmp485;
    TNode<JSArray> tmp486;
    TNode<JSArray> tmp487;
    TNode<Map> tmp488;
    TNode<BoolT> tmp489;
    TNode<BoolT> tmp490;
    TNode<BoolT> tmp491;
    TNode<Smi> tmp492;
    TNode<Object> tmp493;
    TNode<IntPtrT> tmp494;
    TNode<IntPtrT> tmp495;
    TNode<IntPtrT> tmp496;
    TNode<IntPtrT> tmp497;
    TNode<FixedArray> tmp498;
    ca_.Bind(&block41, &tmp483, &tmp484, &tmp485, &tmp486, &tmp487, &tmp488, &tmp489, &tmp490, &tmp491, &tmp492, &tmp493, &tmp494, &tmp495, &tmp496, &tmp497, &tmp498);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 3230);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 3225);
    ca_.Goto(&block30, tmp483, tmp484, tmp485, tmp486, tmp487, tmp488, tmp489, tmp490, tmp491, tmp492, tmp493, tmp494, tmp495, tmp496, tmp497);
  }

  if (block30.is_used()) {
    TNode<Context> tmp499;
    TNode<Object> tmp500;
    TNode<JSArray> tmp501;
    TNode<JSArray> tmp502;
    TNode<JSArray> tmp503;
    TNode<Map> tmp504;
    TNode<BoolT> tmp505;
    TNode<BoolT> tmp506;
    TNode<BoolT> tmp507;
    TNode<Smi> tmp508;
    TNode<Object> tmp509;
    TNode<IntPtrT> tmp510;
    TNode<IntPtrT> tmp511;
    TNode<IntPtrT> tmp512;
    TNode<IntPtrT> tmp513;
    ca_.Bind(&block30, &tmp499, &tmp500, &tmp501, &tmp502, &tmp503, &tmp504, &tmp505, &tmp506, &tmp507, &tmp508, &tmp509, &tmp510, &tmp511, &tmp512, &tmp513);
    ca_.SetSourcePosition("../../src/builtins/array-shift.tq", 34);
    ca_.Goto(&block27, tmp499, tmp500, tmp501, tmp502, tmp503, tmp504, tmp505, tmp506, tmp507, tmp508, tmp509, tmp510, tmp511, tmp512, tmp513);
  }

  if (block27.is_used()) {
    TNode<Context> tmp514;
    TNode<Object> tmp515;
    TNode<JSArray> tmp516;
    TNode<JSArray> tmp517;
    TNode<JSArray> tmp518;
    TNode<Map> tmp519;
    TNode<BoolT> tmp520;
    TNode<BoolT> tmp521;
    TNode<BoolT> tmp522;
    TNode<Smi> tmp523;
    TNode<Object> tmp524;
    TNode<IntPtrT> tmp525;
    TNode<IntPtrT> tmp526;
    TNode<IntPtrT> tmp527;
    TNode<IntPtrT> tmp528;
    ca_.Bind(&block27, &tmp514, &tmp515, &tmp516, &tmp517, &tmp518, &tmp519, &tmp520, &tmp521, &tmp522, &tmp523, &tmp524, &tmp525, &tmp526, &tmp527, &tmp528);
    ca_.SetSourcePosition("../../src/builtins/array-shift.tq", 35);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 3175);
    ca_.Branch(tmp520, &block43, &block44, tmp514, tmp515, tmp516, tmp517, tmp518, tmp519, tmp520, tmp521, tmp522, tmp523, tmp524, tmp523, tmp523);
  }

  if (block43.is_used()) {
    TNode<Context> tmp529;
    TNode<Object> tmp530;
    TNode<JSArray> tmp531;
    TNode<JSArray> tmp532;
    TNode<JSArray> tmp533;
    TNode<Map> tmp534;
    TNode<BoolT> tmp535;
    TNode<BoolT> tmp536;
    TNode<BoolT> tmp537;
    TNode<Smi> tmp538;
    TNode<Object> tmp539;
    TNode<Smi> tmp540;
    TNode<Smi> tmp541;
    ca_.Bind(&block43, &tmp529, &tmp530, &tmp531, &tmp532, &tmp533, &tmp534, &tmp535, &tmp536, &tmp537, &tmp538, &tmp539, &tmp540, &tmp541);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 3176);
    TNode<IntPtrT> tmp542 = ca_.IntPtrConstant(JSObject::kElementsOffset);
    USE(tmp542);
    TNode<FixedArrayBase>tmp543 = CodeStubAssembler(state_).LoadReference<FixedArrayBase>(CodeStubAssembler::Reference{tmp533, tmp542});
    TNode<FixedDoubleArray> tmp544;
    USE(tmp544);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp544 = Cast16FixedDoubleArray_104(state_, TNode<HeapObject>{tmp543}, &label0);
    ca_.Goto(&block48, tmp529, tmp530, tmp531, tmp532, tmp533, tmp534, tmp535, tmp536, tmp537, tmp538, tmp539, tmp540, tmp541, tmp543, tmp544);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block49, tmp529, tmp530, tmp531, tmp532, tmp533, tmp534, tmp535, tmp536, tmp537, tmp538, tmp539, tmp540, tmp541, tmp543);
    }
  }

  if (block49.is_used()) {
    TNode<Context> tmp545;
    TNode<Object> tmp546;
    TNode<JSArray> tmp547;
    TNode<JSArray> tmp548;
    TNode<JSArray> tmp549;
    TNode<Map> tmp550;
    TNode<BoolT> tmp551;
    TNode<BoolT> tmp552;
    TNode<BoolT> tmp553;
    TNode<Smi> tmp554;
    TNode<Object> tmp555;
    TNode<Smi> tmp556;
    TNode<Smi> tmp557;
    TNode<FixedArrayBase> tmp558;
    ca_.Bind(&block49, &tmp545, &tmp546, &tmp547, &tmp548, &tmp549, &tmp550, &tmp551, &tmp552, &tmp553, &tmp554, &tmp555, &tmp556, &tmp557, &tmp558);
    ca_.Goto(&block47, tmp545, tmp546, tmp547, tmp548, tmp549, tmp550, tmp551, tmp552, tmp553, tmp554, tmp555, tmp556, tmp557);
  }

  if (block48.is_used()) {
    TNode<Context> tmp559;
    TNode<Object> tmp560;
    TNode<JSArray> tmp561;
    TNode<JSArray> tmp562;
    TNode<JSArray> tmp563;
    TNode<Map> tmp564;
    TNode<BoolT> tmp565;
    TNode<BoolT> tmp566;
    TNode<BoolT> tmp567;
    TNode<Smi> tmp568;
    TNode<Object> tmp569;
    TNode<Smi> tmp570;
    TNode<Smi> tmp571;
    TNode<FixedArrayBase> tmp572;
    TNode<FixedDoubleArray> tmp573;
    ca_.Bind(&block48, &tmp559, &tmp560, &tmp561, &tmp562, &tmp563, &tmp564, &tmp565, &tmp566, &tmp567, &tmp568, &tmp569, &tmp570, &tmp571, &tmp572, &tmp573);
    ca_.Goto(&block46, tmp559, tmp560, tmp561, tmp562, tmp563, tmp564, tmp565, tmp566, tmp567, tmp568, tmp569, tmp570, tmp571, tmp573);
  }

  if (block47.is_used()) {
    TNode<Context> tmp574;
    TNode<Object> tmp575;
    TNode<JSArray> tmp576;
    TNode<JSArray> tmp577;
    TNode<JSArray> tmp578;
    TNode<Map> tmp579;
    TNode<BoolT> tmp580;
    TNode<BoolT> tmp581;
    TNode<BoolT> tmp582;
    TNode<Smi> tmp583;
    TNode<Object> tmp584;
    TNode<Smi> tmp585;
    TNode<Smi> tmp586;
    ca_.Bind(&block47, &tmp574, &tmp575, &tmp576, &tmp577, &tmp578, &tmp579, &tmp580, &tmp581, &tmp582, &tmp583, &tmp584, &tmp585, &tmp586);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 3177);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block46.is_used()) {
    TNode<Context> tmp587;
    TNode<Object> tmp588;
    TNode<JSArray> tmp589;
    TNode<JSArray> tmp590;
    TNode<JSArray> tmp591;
    TNode<Map> tmp592;
    TNode<BoolT> tmp593;
    TNode<BoolT> tmp594;
    TNode<BoolT> tmp595;
    TNode<Smi> tmp596;
    TNode<Object> tmp597;
    TNode<Smi> tmp598;
    TNode<Smi> tmp599;
    TNode<FixedDoubleArray> tmp600;
    ca_.Bind(&block46, &tmp587, &tmp588, &tmp589, &tmp590, &tmp591, &tmp592, &tmp593, &tmp594, &tmp595, &tmp596, &tmp597, &tmp598, &tmp599, &tmp600);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 3178);
    CodeStubAssembler(state_).StoreFixedDoubleArrayHoleSmi(TNode<FixedDoubleArray>{tmp600}, TNode<Smi>{tmp599});
    ca_.SetSourcePosition("../../src/builtins/base.tq", 3175);
    ca_.Goto(&block45, tmp587, tmp588, tmp589, tmp590, tmp591, tmp592, tmp593, tmp594, tmp595, tmp596, tmp597, tmp598, tmp599);
  }

  if (block44.is_used()) {
    TNode<Context> tmp601;
    TNode<Object> tmp602;
    TNode<JSArray> tmp603;
    TNode<JSArray> tmp604;
    TNode<JSArray> tmp605;
    TNode<Map> tmp606;
    TNode<BoolT> tmp607;
    TNode<BoolT> tmp608;
    TNode<BoolT> tmp609;
    TNode<Smi> tmp610;
    TNode<Object> tmp611;
    TNode<Smi> tmp612;
    TNode<Smi> tmp613;
    ca_.Bind(&block44, &tmp601, &tmp602, &tmp603, &tmp604, &tmp605, &tmp606, &tmp607, &tmp608, &tmp609, &tmp610, &tmp611, &tmp612, &tmp613);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 3180);
    TNode<IntPtrT> tmp614 = ca_.IntPtrConstant(JSObject::kElementsOffset);
    USE(tmp614);
    TNode<FixedArrayBase>tmp615 = CodeStubAssembler(state_).LoadReference<FixedArrayBase>(CodeStubAssembler::Reference{tmp605, tmp614});
    TNode<FixedArray> tmp616;
    USE(tmp616);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp616 = Cast10FixedArray_103(state_, TNode<HeapObject>{tmp615}, &label0);
    ca_.Goto(&block52, tmp601, tmp602, tmp603, tmp604, tmp605, tmp606, tmp607, tmp608, tmp609, tmp610, tmp611, tmp612, tmp613, tmp615, tmp616);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block53, tmp601, tmp602, tmp603, tmp604, tmp605, tmp606, tmp607, tmp608, tmp609, tmp610, tmp611, tmp612, tmp613, tmp615);
    }
  }

  if (block53.is_used()) {
    TNode<Context> tmp617;
    TNode<Object> tmp618;
    TNode<JSArray> tmp619;
    TNode<JSArray> tmp620;
    TNode<JSArray> tmp621;
    TNode<Map> tmp622;
    TNode<BoolT> tmp623;
    TNode<BoolT> tmp624;
    TNode<BoolT> tmp625;
    TNode<Smi> tmp626;
    TNode<Object> tmp627;
    TNode<Smi> tmp628;
    TNode<Smi> tmp629;
    TNode<FixedArrayBase> tmp630;
    ca_.Bind(&block53, &tmp617, &tmp618, &tmp619, &tmp620, &tmp621, &tmp622, &tmp623, &tmp624, &tmp625, &tmp626, &tmp627, &tmp628, &tmp629, &tmp630);
    ca_.Goto(&block51, tmp617, tmp618, tmp619, tmp620, tmp621, tmp622, tmp623, tmp624, tmp625, tmp626, tmp627, tmp628, tmp629);
  }

  if (block52.is_used()) {
    TNode<Context> tmp631;
    TNode<Object> tmp632;
    TNode<JSArray> tmp633;
    TNode<JSArray> tmp634;
    TNode<JSArray> tmp635;
    TNode<Map> tmp636;
    TNode<BoolT> tmp637;
    TNode<BoolT> tmp638;
    TNode<BoolT> tmp639;
    TNode<Smi> tmp640;
    TNode<Object> tmp641;
    TNode<Smi> tmp642;
    TNode<Smi> tmp643;
    TNode<FixedArrayBase> tmp644;
    TNode<FixedArray> tmp645;
    ca_.Bind(&block52, &tmp631, &tmp632, &tmp633, &tmp634, &tmp635, &tmp636, &tmp637, &tmp638, &tmp639, &tmp640, &tmp641, &tmp642, &tmp643, &tmp644, &tmp645);
    ca_.Goto(&block50, tmp631, tmp632, tmp633, tmp634, tmp635, tmp636, tmp637, tmp638, tmp639, tmp640, tmp641, tmp642, tmp643, tmp645);
  }

  if (block51.is_used()) {
    TNode<Context> tmp646;
    TNode<Object> tmp647;
    TNode<JSArray> tmp648;
    TNode<JSArray> tmp649;
    TNode<JSArray> tmp650;
    TNode<Map> tmp651;
    TNode<BoolT> tmp652;
    TNode<BoolT> tmp653;
    TNode<BoolT> tmp654;
    TNode<Smi> tmp655;
    TNode<Object> tmp656;
    TNode<Smi> tmp657;
    TNode<Smi> tmp658;
    ca_.Bind(&block51, &tmp646, &tmp647, &tmp648, &tmp649, &tmp650, &tmp651, &tmp652, &tmp653, &tmp654, &tmp655, &tmp656, &tmp657, &tmp658);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 3181);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block50.is_used()) {
    TNode<Context> tmp659;
    TNode<Object> tmp660;
    TNode<JSArray> tmp661;
    TNode<JSArray> tmp662;
    TNode<JSArray> tmp663;
    TNode<Map> tmp664;
    TNode<BoolT> tmp665;
    TNode<BoolT> tmp666;
    TNode<BoolT> tmp667;
    TNode<Smi> tmp668;
    TNode<Object> tmp669;
    TNode<Smi> tmp670;
    TNode<Smi> tmp671;
    TNode<FixedArray> tmp672;
    ca_.Bind(&block50, &tmp659, &tmp660, &tmp661, &tmp662, &tmp663, &tmp664, &tmp665, &tmp666, &tmp667, &tmp668, &tmp669, &tmp670, &tmp671, &tmp672);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 3182);
    TNode<Oddball> tmp673;
    USE(tmp673);
    tmp673 = TheHole_62(state_);
    CodeStubAssembler(state_).StoreFixedArrayElement(TNode<FixedArray>{tmp672}, TNode<Smi>{tmp671}, TNode<Object>{tmp673});
    ca_.SetSourcePosition("../../src/builtins/base.tq", 3179);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 3175);
    ca_.Goto(&block45, tmp659, tmp660, tmp661, tmp662, tmp663, tmp664, tmp665, tmp666, tmp667, tmp668, tmp669, tmp670, tmp671);
  }

  if (block45.is_used()) {
    TNode<Context> tmp674;
    TNode<Object> tmp675;
    TNode<JSArray> tmp676;
    TNode<JSArray> tmp677;
    TNode<JSArray> tmp678;
    TNode<Map> tmp679;
    TNode<BoolT> tmp680;
    TNode<BoolT> tmp681;
    TNode<BoolT> tmp682;
    TNode<Smi> tmp683;
    TNode<Object> tmp684;
    TNode<Smi> tmp685;
    TNode<Smi> tmp686;
    ca_.Bind(&block45, &tmp674, &tmp675, &tmp676, &tmp677, &tmp678, &tmp679, &tmp680, &tmp681, &tmp682, &tmp683, &tmp684, &tmp685, &tmp686);
    ca_.SetSourcePosition("../../src/builtins/array-shift.tq", 35);
    ca_.Goto(&block42, tmp674, tmp675, tmp676, tmp677, tmp678, tmp679, tmp680, tmp681, tmp682, tmp683, tmp684, tmp685, tmp686);
  }

  if (block42.is_used()) {
    TNode<Context> tmp687;
    TNode<Object> tmp688;
    TNode<JSArray> tmp689;
    TNode<JSArray> tmp690;
    TNode<JSArray> tmp691;
    TNode<Map> tmp692;
    TNode<BoolT> tmp693;
    TNode<BoolT> tmp694;
    TNode<BoolT> tmp695;
    TNode<Smi> tmp696;
    TNode<Object> tmp697;
    TNode<Smi> tmp698;
    TNode<Smi> tmp699;
    ca_.Bind(&block42, &tmp687, &tmp688, &tmp689, &tmp690, &tmp691, &tmp692, &tmp693, &tmp694, &tmp695, &tmp696, &tmp697, &tmp698, &tmp699);
    ca_.SetSourcePosition("../../src/builtins/array-shift.tq", 36);
    ca_.Goto(&block3, tmp687, tmp688, tmp697);
  }

  if (block3.is_used()) {
    TNode<Context> tmp700;
    TNode<Object> tmp701;
    TNode<Object> tmp702;
    ca_.Bind(&block3, &tmp700, &tmp701, &tmp702);
    ca_.SetSourcePosition("../../src/builtins/array-shift.tq", 8);
    ca_.Goto(&block54, tmp700, tmp701, tmp702);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_Slow);
  }

  if (block2.is_used()) {
    ca_.Bind(&block2);
    ca_.Goto(label_Runtime);
  }

    TNode<Context> tmp703;
    TNode<Object> tmp704;
    TNode<Object> tmp705;
    ca_.Bind(&block54, &tmp703, &tmp704, &tmp705);
  return TNode<Object>{tmp705};
}

TNode<Object> GenericArrayShift_37(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_receiver) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSReceiver, Number> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSReceiver, Number> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSReceiver, Number, Object, Number> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSReceiver, Number, Object, Number> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSReceiver, Number, Object, Number, Number, Number, Oddball> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSReceiver, Number, Object, Number, Number, Number, Oddball> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSReceiver, Number, Object, Number, Number, Number, Oddball> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSReceiver, Number, Object, Number> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_receiver);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../src/builtins/array-shift.tq", 42);
    TNode<JSReceiver> tmp2;
    USE(tmp2);
    tmp2 = CodeStubAssembler(state_).ToObject_Inline(TNode<Context>{tmp0}, TNode<Object>{tmp1});
    ca_.SetSourcePosition("../../src/builtins/array-shift.tq", 45);
    TNode<Number> tmp3;
    USE(tmp3);
    tmp3 = GetLengthProperty_246(state_, TNode<Context>{tmp0}, TNode<Object>{tmp2});
    ca_.SetSourcePosition("../../src/builtins/array-shift.tq", 48);
    TNode<Number> tmp4;
    USE(tmp4);
    tmp4 = FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_160(state_, 0);
    TNode<BoolT> tmp5;
    USE(tmp5);
    tmp5 = IsNumberEqual_73(state_, TNode<Number>{tmp3}, TNode<Number>{tmp4});
    ca_.Branch(tmp5, &block2, &block3, tmp0, tmp1, tmp2, tmp3);
  }

  if (block2.is_used()) {
    TNode<Context> tmp6;
    TNode<Object> tmp7;
    TNode<JSReceiver> tmp8;
    TNode<Number> tmp9;
    ca_.Bind(&block2, &tmp6, &tmp7, &tmp8, &tmp9);
    ca_.SetSourcePosition("../../src/builtins/array-shift.tq", 50);
    TNode<String> tmp10;
    USE(tmp10);
    tmp10 = kLengthString_68(state_);
    TNode<Smi> tmp11;
    USE(tmp11);
    tmp11 = Convert5ATSmi17ATconstexpr_int31_1435(state_, 0);
    CodeStubAssembler(state_).CallBuiltin(Builtins::kSetProperty, tmp6, tmp8, tmp10, tmp11);
    ca_.SetSourcePosition("../../src/builtins/array-shift.tq", 52);
    TNode<Oddball> tmp13;
    USE(tmp13);
    tmp13 = Undefined_64(state_);
    ca_.Goto(&block1, tmp6, tmp7, tmp13);
  }

  if (block3.is_used()) {
    TNode<Context> tmp14;
    TNode<Object> tmp15;
    TNode<JSReceiver> tmp16;
    TNode<Number> tmp17;
    ca_.Bind(&block3, &tmp14, &tmp15, &tmp16, &tmp17);
    ca_.SetSourcePosition("../../src/builtins/array-shift.tq", 56);
    TNode<Smi> tmp18;
    USE(tmp18);
    tmp18 = Convert5ATSmi17ATconstexpr_int31_1435(state_, 0);
    TNode<Object> tmp19;
    USE(tmp19);
    tmp19 = CodeStubAssembler(state_).GetProperty(TNode<Context>{tmp14}, TNode<Object>{tmp16}, TNode<Object>{tmp18});
    ca_.SetSourcePosition("../../src/builtins/array-shift.tq", 58);
    TNode<Number> tmp20;
    USE(tmp20);
    tmp20 = FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_160(state_, 1);
    ca_.SetSourcePosition("../../src/builtins/array-shift.tq", 60);
    ca_.Goto(&block6, tmp14, tmp15, tmp16, tmp17, tmp19, tmp20);
  }

  if (block6.is_used()) {
    TNode<Context> tmp21;
    TNode<Object> tmp22;
    TNode<JSReceiver> tmp23;
    TNode<Number> tmp24;
    TNode<Object> tmp25;
    TNode<Number> tmp26;
    ca_.Bind(&block6, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26);
    TNode<BoolT> tmp27;
    USE(tmp27);
    tmp27 = NumberIsLessThan_75(state_, TNode<Number>{tmp26}, TNode<Number>{tmp24});
    ca_.Branch(tmp27, &block4, &block5, tmp21, tmp22, tmp23, tmp24, tmp25, tmp26);
  }

  if (block4.is_used()) {
    TNode<Context> tmp28;
    TNode<Object> tmp29;
    TNode<JSReceiver> tmp30;
    TNode<Number> tmp31;
    TNode<Object> tmp32;
    TNode<Number> tmp33;
    ca_.Bind(&block4, &tmp28, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33);
    ca_.SetSourcePosition("../../src/builtins/array-shift.tq", 62);
    ca_.SetSourcePosition("../../src/builtins/array-shift.tq", 65);
    TNode<Number> tmp34;
    USE(tmp34);
    tmp34 = FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_160(state_, 1);
    TNode<Number> tmp35;
    USE(tmp35);
    tmp35 = CodeStubAssembler(state_).NumberSub(TNode<Number>{tmp33}, TNode<Number>{tmp34});
    ca_.SetSourcePosition("../../src/builtins/array-shift.tq", 68);
    TNode<Oddball> tmp36;
    tmp36 = TORQUE_CAST(CodeStubAssembler(state_).CallBuiltin(Builtins::kHasProperty, tmp28, tmp30, tmp33));
    USE(tmp36);
    ca_.SetSourcePosition("../../src/builtins/array-shift.tq", 71);
    TNode<Oddball> tmp37;
    USE(tmp37);
    tmp37 = True_65(state_);
    TNode<BoolT> tmp38;
    USE(tmp38);
    tmp38 = CodeStubAssembler(state_).TaggedEqual(TNode<HeapObject>{tmp36}, TNode<HeapObject>{tmp37});
    ca_.Branch(tmp38, &block7, &block8, tmp28, tmp29, tmp30, tmp31, tmp32, tmp33, tmp33, tmp35, tmp36);
  }

  if (block7.is_used()) {
    TNode<Context> tmp39;
    TNode<Object> tmp40;
    TNode<JSReceiver> tmp41;
    TNode<Number> tmp42;
    TNode<Object> tmp43;
    TNode<Number> tmp44;
    TNode<Number> tmp45;
    TNode<Number> tmp46;
    TNode<Oddball> tmp47;
    ca_.Bind(&block7, &tmp39, &tmp40, &tmp41, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47);
    ca_.SetSourcePosition("../../src/builtins/array-shift.tq", 73);
    TNode<Object> tmp48;
    USE(tmp48);
    tmp48 = CodeStubAssembler(state_).GetProperty(TNode<Context>{tmp39}, TNode<Object>{tmp41}, TNode<Object>{tmp45});
    ca_.SetSourcePosition("../../src/builtins/array-shift.tq", 76);
    CodeStubAssembler(state_).CallBuiltin(Builtins::kSetProperty, tmp39, tmp41, tmp46, tmp48);
    ca_.SetSourcePosition("../../src/builtins/array-shift.tq", 71);
    ca_.Goto(&block9, tmp39, tmp40, tmp41, tmp42, tmp43, tmp44, tmp45, tmp46, tmp47);
  }

  if (block8.is_used()) {
    TNode<Context> tmp50;
    TNode<Object> tmp51;
    TNode<JSReceiver> tmp52;
    TNode<Number> tmp53;
    TNode<Object> tmp54;
    TNode<Number> tmp55;
    TNode<Number> tmp56;
    TNode<Number> tmp57;
    TNode<Oddball> tmp58;
    ca_.Bind(&block8, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56, &tmp57, &tmp58);
    ca_.SetSourcePosition("../../src/builtins/array-shift.tq", 79);
    TNode<Smi> tmp59;
    USE(tmp59);
    tmp59 = FromConstexpr14ATLanguageMode24ATconstexpr_LanguageMode_168(state_, LanguageMode::kStrict);
    TNode<Oddball> tmp60;
    tmp60 = TORQUE_CAST(CodeStubAssembler(state_).CallBuiltin(Builtins::kDeleteProperty, tmp50, tmp52, tmp57, tmp59));
    USE(tmp60);
    ca_.SetSourcePosition("../../src/builtins/array-shift.tq", 71);
    ca_.Goto(&block9, tmp50, tmp51, tmp52, tmp53, tmp54, tmp55, tmp56, tmp57, tmp58);
  }

  if (block9.is_used()) {
    TNode<Context> tmp61;
    TNode<Object> tmp62;
    TNode<JSReceiver> tmp63;
    TNode<Number> tmp64;
    TNode<Object> tmp65;
    TNode<Number> tmp66;
    TNode<Number> tmp67;
    TNode<Number> tmp68;
    TNode<Oddball> tmp69;
    ca_.Bind(&block9, &tmp61, &tmp62, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67, &tmp68, &tmp69);
    ca_.SetSourcePosition("../../src/builtins/array-shift.tq", 83);
    TNode<Number> tmp70;
    USE(tmp70);
    tmp70 = FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_160(state_, 1);
    TNode<Number> tmp71;
    USE(tmp71);
    tmp71 = CodeStubAssembler(state_).NumberAdd(TNode<Number>{tmp66}, TNode<Number>{tmp70});
    ca_.SetSourcePosition("../../src/builtins/array-shift.tq", 60);
    ca_.Goto(&block6, tmp61, tmp62, tmp63, tmp64, tmp65, tmp71);
  }

  if (block5.is_used()) {
    TNode<Context> tmp72;
    TNode<Object> tmp73;
    TNode<JSReceiver> tmp74;
    TNode<Number> tmp75;
    TNode<Object> tmp76;
    TNode<Number> tmp77;
    ca_.Bind(&block5, &tmp72, &tmp73, &tmp74, &tmp75, &tmp76, &tmp77);
    ca_.SetSourcePosition("../../src/builtins/array-shift.tq", 87);
    TNode<Number> tmp78;
    USE(tmp78);
    tmp78 = FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_160(state_, 1);
    TNode<Number> tmp79;
    USE(tmp79);
    tmp79 = CodeStubAssembler(state_).NumberSub(TNode<Number>{tmp75}, TNode<Number>{tmp78});
    TNode<Smi> tmp80;
    USE(tmp80);
    tmp80 = FromConstexpr14ATLanguageMode24ATconstexpr_LanguageMode_168(state_, LanguageMode::kStrict);
    TNode<Oddball> tmp81;
    tmp81 = TORQUE_CAST(CodeStubAssembler(state_).CallBuiltin(Builtins::kDeleteProperty, tmp72, tmp74, tmp79, tmp80));
    USE(tmp81);
    ca_.SetSourcePosition("../../src/builtins/array-shift.tq", 90);
    TNode<String> tmp82;
    USE(tmp82);
    tmp82 = kLengthString_68(state_);
    TNode<Number> tmp83;
    USE(tmp83);
    tmp83 = FromConstexpr20UT5ATSmi10HeapNumber17ATconstexpr_int31_160(state_, 1);
    TNode<Number> tmp84;
    USE(tmp84);
    tmp84 = CodeStubAssembler(state_).NumberSub(TNode<Number>{tmp75}, TNode<Number>{tmp83});
    CodeStubAssembler(state_).CallBuiltin(Builtins::kSetProperty, tmp72, tmp74, tmp82, tmp84);
    ca_.SetSourcePosition("../../src/builtins/array-shift.tq", 93);
    ca_.Goto(&block1, tmp72, tmp73, tmp76);
  }

  if (block1.is_used()) {
    TNode<Context> tmp86;
    TNode<Object> tmp87;
    TNode<Object> tmp88;
    ca_.Bind(&block1, &tmp86, &tmp87, &tmp88);
    ca_.SetSourcePosition("../../src/builtins/array-shift.tq", 39);
    ca_.Goto(&block10, tmp86, tmp87, tmp88);
  }

    TNode<Context> tmp89;
    TNode<Object> tmp90;
    TNode<Object> tmp91;
    ca_.Bind(&block10, &tmp89, &tmp90, &tmp91);
  return TNode<Object>{tmp91};
}

TF_BUILTIN(ArrayPrototypeShift, CodeStubAssembler) {
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
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, torque_arguments.frame, torque_arguments.base, torque_arguments.length, parameter0, parameter1);

  if (block0.is_used()) {
    TNode<RawPtrT> tmp0;
    TNode<RawPtrT> tmp1;
    TNode<IntPtrT> tmp2;
    TNode<Context> tmp3;
    TNode<Object> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../src/builtins/array-shift.tq", 100);
    TNode<Object> tmp5;
    USE(tmp5);
    compiler::CodeAssemblerLabel label0(&ca_);
    compiler::CodeAssemblerLabel label1(&ca_);
    tmp5 = TryFastArrayShift_36(state_, TNode<Context>{tmp3}, TNode<Object>{tmp4}, &label0, &label1);
    ca_.Goto(&block5, tmp0, tmp1, tmp2, tmp3, tmp4, tmp4, tmp5);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp0, tmp1, tmp2, tmp3, tmp4, tmp4);
    }
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block7, tmp0, tmp1, tmp2, tmp3, tmp4, tmp4);
    }
  }

  if (block6.is_used()) {
    TNode<RawPtrT> tmp6;
    TNode<RawPtrT> tmp7;
    TNode<IntPtrT> tmp8;
    TNode<Context> tmp9;
    TNode<Object> tmp10;
    TNode<Object> tmp11;
    ca_.Bind(&block6, &tmp6, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11);
    ca_.Goto(&block4, tmp6, tmp7, tmp8, tmp9, tmp10);
  }

  if (block7.is_used()) {
    TNode<RawPtrT> tmp12;
    TNode<RawPtrT> tmp13;
    TNode<IntPtrT> tmp14;
    TNode<Context> tmp15;
    TNode<Object> tmp16;
    TNode<Object> tmp17;
    ca_.Bind(&block7, &tmp12, &tmp13, &tmp14, &tmp15, &tmp16, &tmp17);
    ca_.Goto(&block2, tmp12, tmp13, tmp14, tmp15, tmp16);
  }

  if (block5.is_used()) {
    TNode<RawPtrT> tmp18;
    TNode<RawPtrT> tmp19;
    TNode<IntPtrT> tmp20;
    TNode<Context> tmp21;
    TNode<Object> tmp22;
    TNode<Object> tmp23;
    TNode<Object> tmp24;
    ca_.Bind(&block5, &tmp18, &tmp19, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24);
    arguments.PopAndReturn(tmp24);
  }

  if (block4.is_used()) {
    TNode<RawPtrT> tmp25;
    TNode<RawPtrT> tmp26;
    TNode<IntPtrT> tmp27;
    TNode<Context> tmp28;
    TNode<Object> tmp29;
    ca_.Bind(&block4, &tmp25, &tmp26, &tmp27, &tmp28, &tmp29);
    ca_.SetSourcePosition("../../src/builtins/array-shift.tq", 103);
    TNode<Object> tmp30;
    USE(tmp30);
    tmp30 = GenericArrayShift_37(state_, TNode<Context>{tmp28}, TNode<Object>{tmp29});
    arguments.PopAndReturn(tmp30);
  }

  if (block2.is_used()) {
    TNode<RawPtrT> tmp31;
    TNode<RawPtrT> tmp32;
    TNode<IntPtrT> tmp33;
    TNode<Context> tmp34;
    TNode<Object> tmp35;
    ca_.Bind(&block2, &tmp31, &tmp32, &tmp33, &tmp34, &tmp35);
    ca_.SetSourcePosition("../../src/builtins/array-shift.tq", 107);
    TNode<JSFunction> tmp36;
    USE(tmp36);
    tmp36 = LoadTargetFromFrame_306(state_);
    TNode<Oddball> tmp37;
    USE(tmp37);
    tmp37 = Undefined_64(state_);
    ca_.SetSourcePosition("../../src/builtins/array-shift.tq", 108);
    TNode<Int32T> tmp38;
    USE(tmp38);
    tmp38 = Convert7ATint328ATintptr_185(state_, TNode<IntPtrT>{tmp33});
    ca_.SetSourcePosition("../../src/builtins/array-shift.tq", 106);
   CodeStubAssembler(state_).TailCallBuiltin(Builtins::kArrayShift, tmp34, tmp36, tmp37, tmp38);
  }
}

}  // namespace internal
}  // namespace v8

