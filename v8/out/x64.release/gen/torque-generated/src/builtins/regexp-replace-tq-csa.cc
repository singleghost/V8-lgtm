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

void RegExpReplaceCallableNoExplicitCaptures_326(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<FixedArray> p_matchesElements, TNode<IntPtrT> p_matchesLength, TNode<String> p_string, TNode<JSReceiver> p_replaceFn) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, String, JSReceiver> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, String, JSReceiver, Smi, IntPtrT> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, String, JSReceiver, Smi, IntPtrT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, String, JSReceiver, Smi, IntPtrT, FixedArray, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, String, JSReceiver, Smi, IntPtrT, FixedArray, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, String, JSReceiver, Smi, IntPtrT, FixedArray, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, String, JSReceiver, Smi, IntPtrT, FixedArray, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, String, JSReceiver, Smi, IntPtrT, FixedArray, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, String, JSReceiver, Smi, IntPtrT, FixedArray, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, String, JSReceiver, Smi, IntPtrT, Object, Object> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, String, JSReceiver, Smi, IntPtrT, Object, Object, Smi> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, String, JSReceiver, Smi, IntPtrT, Object, Smi> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, String, JSReceiver, Smi, IntPtrT, Object, Smi> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, String, JSReceiver, Smi, IntPtrT, Object, Smi, FixedArray, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block24(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, String, JSReceiver, Smi, IntPtrT, Object, Smi, FixedArray, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block25(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, String, JSReceiver, Smi, IntPtrT, Object, Smi, FixedArray, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, String, JSReceiver, Smi, IntPtrT, Object, Smi, FixedArray, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, String, JSReceiver, Smi, IntPtrT, Object, Smi, FixedArray, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT> block21(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, String, JSReceiver, Smi, IntPtrT, Object, Smi, FixedArray, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, String, JSReceiver, Smi, IntPtrT, Object, Smi> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, String, JSReceiver, Smi, IntPtrT, Object> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, String, JSReceiver, Smi, IntPtrT, Object, HeapObject> block30(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, String, JSReceiver, Smi, IntPtrT, Object, HeapObject, String> block29(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, String, JSReceiver, Smi, IntPtrT, Object, String, Object, String, FixedArray, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block35(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, String, JSReceiver, Smi, IntPtrT, Object, String, Object, String, FixedArray, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block36(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, String, JSReceiver, Smi, IntPtrT, Object, String, Object, String, FixedArray, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT> block34(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, String, JSReceiver, Smi, IntPtrT, Object, String, Object, String, FixedArray, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block33(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, String, JSReceiver, Smi, IntPtrT, Object, String, Object, String, FixedArray, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT> block32(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, String, JSReceiver, Smi, IntPtrT, Object, String, Object, String, FixedArray, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT> block31(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, String, JSReceiver, Smi, IntPtrT, Object> block28(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, String, JSReceiver, Smi, IntPtrT, Object> block27(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, String, JSReceiver, Smi, IntPtrT, Object> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, String, JSReceiver, Smi, IntPtrT> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, String, JSReceiver, Smi, IntPtrT> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, String, JSReceiver> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, String, JSReceiver> block38(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_matchesElements, p_matchesLength, p_string, p_replaceFn);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<FixedArray> tmp1;
    TNode<IntPtrT> tmp2;
    TNode<String> tmp3;
    TNode<JSReceiver> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 31);
    TNode<Smi> tmp5;
    USE(tmp5);
    tmp5 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 0);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 32);
    TNode<IntPtrT> tmp6;
    USE(tmp6);
    tmp6 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 0);
    ca_.Goto(&block4, tmp0, tmp1, tmp2, tmp3, tmp4, tmp5, tmp6);
  }

  if (block4.is_used()) {
    TNode<Context> tmp7;
    TNode<FixedArray> tmp8;
    TNode<IntPtrT> tmp9;
    TNode<String> tmp10;
    TNode<JSReceiver> tmp11;
    TNode<Smi> tmp12;
    TNode<IntPtrT> tmp13;
    ca_.Bind(&block4, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11, &tmp12, &tmp13);
    TNode<BoolT> tmp14;
    USE(tmp14);
    tmp14 = CodeStubAssembler(state_).IntPtrLessThan(TNode<IntPtrT>{tmp13}, TNode<IntPtrT>{tmp9});
    ca_.Branch(tmp14, &block2, &block3, tmp7, tmp8, tmp9, tmp10, tmp11, tmp12, tmp13);
  }

  if (block2.is_used()) {
    TNode<Context> tmp15;
    TNode<FixedArray> tmp16;
    TNode<IntPtrT> tmp17;
    TNode<String> tmp18;
    TNode<JSReceiver> tmp19;
    TNode<Smi> tmp20;
    TNode<IntPtrT> tmp21;
    ca_.Bind(&block2, &tmp15, &tmp16, &tmp17, &tmp18, &tmp19, &tmp20, &tmp21);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 33);
    TNode<IntPtrT> tmp22 = ca_.IntPtrConstant(FixedArray::kObjectsOffset);
    USE(tmp22);
    TNode<IntPtrT> tmp23 = ca_.IntPtrConstant(FixedArrayBase::kLengthOffset);
    USE(tmp23);
    TNode<Smi>tmp24 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp16, tmp23});
    TNode<IntPtrT> tmp25;
    USE(tmp25);
    tmp25 = Convert8ATintptr5ATSmi_188(state_, TNode<Smi>{tmp24});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 46);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 37);
    TNode<UintPtrT> tmp26;
    USE(tmp26);
    tmp26 = Convert9ATuintptr8ATintptr_205(state_, TNode<IntPtrT>{tmp21});
    TNode<UintPtrT> tmp27;
    USE(tmp27);
    tmp27 = Convert9ATuintptr8ATintptr_205(state_, TNode<IntPtrT>{tmp25});
    TNode<BoolT> tmp28;
    USE(tmp28);
    tmp28 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp26}, TNode<UintPtrT>{tmp27});
    ca_.Branch(tmp28, &block10, &block11, tmp15, tmp16, tmp17, tmp18, tmp19, tmp20, tmp21, tmp16, tmp22, tmp25, tmp21, tmp21, tmp16, tmp22, tmp25, tmp21, tmp21);
  }

  if (block10.is_used()) {
    TNode<Context> tmp29;
    TNode<FixedArray> tmp30;
    TNode<IntPtrT> tmp31;
    TNode<String> tmp32;
    TNode<JSReceiver> tmp33;
    TNode<Smi> tmp34;
    TNode<IntPtrT> tmp35;
    TNode<FixedArray> tmp36;
    TNode<IntPtrT> tmp37;
    TNode<IntPtrT> tmp38;
    TNode<IntPtrT> tmp39;
    TNode<IntPtrT> tmp40;
    TNode<HeapObject> tmp41;
    TNode<IntPtrT> tmp42;
    TNode<IntPtrT> tmp43;
    TNode<IntPtrT> tmp44;
    TNode<IntPtrT> tmp45;
    ca_.Bind(&block10, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40, &tmp41, &tmp42, &tmp43, &tmp44, &tmp45);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 39);
    TNode<IntPtrT> tmp46;
    USE(tmp46);
    tmp46 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, (SizeOf20UT5ATSmi10HeapObject_346(state_)));
    TNode<IntPtrT> tmp47;
    USE(tmp47);
    tmp47 = CodeStubAssembler(state_).IntPtrMul(TNode<IntPtrT>{tmp45}, TNode<IntPtrT>{tmp46});
    TNode<IntPtrT> tmp48;
    USE(tmp48);
    tmp48 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp42}, TNode<IntPtrT>{tmp47});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 38);
    TNode<HeapObject> tmp49;
    USE(tmp49);
    TNode<IntPtrT> tmp50;
    USE(tmp50);
    std::tie(tmp49, tmp50) = UnsafeNewReference20UT5ATSmi10HeapObject_1440(state_, TNode<HeapObject>{tmp41}, TNode<IntPtrT>{tmp48}).Flatten();
    ca_.Goto(&block9, tmp29, tmp30, tmp31, tmp32, tmp33, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39, tmp40, tmp41, tmp42, tmp43, tmp44, tmp45, tmp49, tmp50);
  }

  if (block11.is_used()) {
    TNode<Context> tmp51;
    TNode<FixedArray> tmp52;
    TNode<IntPtrT> tmp53;
    TNode<String> tmp54;
    TNode<JSReceiver> tmp55;
    TNode<Smi> tmp56;
    TNode<IntPtrT> tmp57;
    TNode<FixedArray> tmp58;
    TNode<IntPtrT> tmp59;
    TNode<IntPtrT> tmp60;
    TNode<IntPtrT> tmp61;
    TNode<IntPtrT> tmp62;
    TNode<HeapObject> tmp63;
    TNode<IntPtrT> tmp64;
    TNode<IntPtrT> tmp65;
    TNode<IntPtrT> tmp66;
    TNode<IntPtrT> tmp67;
    ca_.Bind(&block11, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 41);
    ca_.Goto(&block8, tmp51, tmp52, tmp53, tmp54, tmp55, tmp56, tmp57, tmp58, tmp59, tmp60, tmp61, tmp62);
  }

  if (block9.is_used()) {
    TNode<Context> tmp68;
    TNode<FixedArray> tmp69;
    TNode<IntPtrT> tmp70;
    TNode<String> tmp71;
    TNode<JSReceiver> tmp72;
    TNode<Smi> tmp73;
    TNode<IntPtrT> tmp74;
    TNode<FixedArray> tmp75;
    TNode<IntPtrT> tmp76;
    TNode<IntPtrT> tmp77;
    TNode<IntPtrT> tmp78;
    TNode<IntPtrT> tmp79;
    TNode<HeapObject> tmp80;
    TNode<IntPtrT> tmp81;
    TNode<IntPtrT> tmp82;
    TNode<IntPtrT> tmp83;
    TNode<IntPtrT> tmp84;
    TNode<HeapObject> tmp85;
    TNode<IntPtrT> tmp86;
    ca_.Bind(&block9, &tmp68, &tmp69, &tmp70, &tmp71, &tmp72, &tmp73, &tmp74, &tmp75, &tmp76, &tmp77, &tmp78, &tmp79, &tmp80, &tmp81, &tmp82, &tmp83, &tmp84, &tmp85, &tmp86);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 46);
    ca_.Goto(&block7, tmp68, tmp69, tmp70, tmp71, tmp72, tmp73, tmp74, tmp75, tmp76, tmp77, tmp78, tmp79, tmp85, tmp86);
  }

  if (block8.is_used()) {
    TNode<Context> tmp87;
    TNode<FixedArray> tmp88;
    TNode<IntPtrT> tmp89;
    TNode<String> tmp90;
    TNode<JSReceiver> tmp91;
    TNode<Smi> tmp92;
    TNode<IntPtrT> tmp93;
    TNode<FixedArray> tmp94;
    TNode<IntPtrT> tmp95;
    TNode<IntPtrT> tmp96;
    TNode<IntPtrT> tmp97;
    TNode<IntPtrT> tmp98;
    ca_.Bind(&block8, &tmp87, &tmp88, &tmp89, &tmp90, &tmp91, &tmp92, &tmp93, &tmp94, &tmp95, &tmp96, &tmp97, &tmp98);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block7.is_used()) {
    TNode<Context> tmp99;
    TNode<FixedArray> tmp100;
    TNode<IntPtrT> tmp101;
    TNode<String> tmp102;
    TNode<JSReceiver> tmp103;
    TNode<Smi> tmp104;
    TNode<IntPtrT> tmp105;
    TNode<FixedArray> tmp106;
    TNode<IntPtrT> tmp107;
    TNode<IntPtrT> tmp108;
    TNode<IntPtrT> tmp109;
    TNode<IntPtrT> tmp110;
    TNode<HeapObject> tmp111;
    TNode<IntPtrT> tmp112;
    ca_.Bind(&block7, &tmp99, &tmp100, &tmp101, &tmp102, &tmp103, &tmp104, &tmp105, &tmp106, &tmp107, &tmp108, &tmp109, &tmp110, &tmp111, &tmp112);
    ca_.Goto(&block6, tmp99, tmp100, tmp101, tmp102, tmp103, tmp104, tmp105, tmp106, tmp107, tmp108, tmp109, tmp110, tmp111, tmp112);
  }

  if (block6.is_used()) {
    TNode<Context> tmp113;
    TNode<FixedArray> tmp114;
    TNode<IntPtrT> tmp115;
    TNode<String> tmp116;
    TNode<JSReceiver> tmp117;
    TNode<Smi> tmp118;
    TNode<IntPtrT> tmp119;
    TNode<FixedArray> tmp120;
    TNode<IntPtrT> tmp121;
    TNode<IntPtrT> tmp122;
    TNode<IntPtrT> tmp123;
    TNode<IntPtrT> tmp124;
    TNode<HeapObject> tmp125;
    TNode<IntPtrT> tmp126;
    ca_.Bind(&block6, &tmp113, &tmp114, &tmp115, &tmp116, &tmp117, &tmp118, &tmp119, &tmp120, &tmp121, &tmp122, &tmp123, &tmp124, &tmp125, &tmp126);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 33);
    TNode<Object>tmp127 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp125, tmp126});
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 35);
    TNode<Smi> tmp128;
    USE(tmp128);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp128 = Cast5ATSmi_83(state_, TNode<Object>{tmp127}, &label0);
    ca_.Goto(&block15, tmp113, tmp114, tmp115, tmp116, tmp117, tmp118, tmp119, tmp127, tmp127, tmp128);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block16, tmp113, tmp114, tmp115, tmp116, tmp117, tmp118, tmp119, tmp127, tmp127);
    }
  }

  if (block16.is_used()) {
    TNode<Context> tmp129;
    TNode<FixedArray> tmp130;
    TNode<IntPtrT> tmp131;
    TNode<String> tmp132;
    TNode<JSReceiver> tmp133;
    TNode<Smi> tmp134;
    TNode<IntPtrT> tmp135;
    TNode<Object> tmp136;
    TNode<Object> tmp137;
    ca_.Bind(&block16, &tmp129, &tmp130, &tmp131, &tmp132, &tmp133, &tmp134, &tmp135, &tmp136, &tmp137);
    ca_.Goto(&block14, tmp129, tmp130, tmp131, tmp132, tmp133, tmp134, tmp135, tmp136);
  }

  if (block15.is_used()) {
    TNode<Context> tmp138;
    TNode<FixedArray> tmp139;
    TNode<IntPtrT> tmp140;
    TNode<String> tmp141;
    TNode<JSReceiver> tmp142;
    TNode<Smi> tmp143;
    TNode<IntPtrT> tmp144;
    TNode<Object> tmp145;
    TNode<Object> tmp146;
    TNode<Smi> tmp147;
    ca_.Bind(&block15, &tmp138, &tmp139, &tmp140, &tmp141, &tmp142, &tmp143, &tmp144, &tmp145, &tmp146, &tmp147);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 39);
    TNode<Smi> tmp148;
    USE(tmp148);
    tmp148 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 0);
    TNode<BoolT> tmp149;
    USE(tmp149);
    tmp149 = CodeStubAssembler(state_).SmiGreaterThan(TNode<Smi>{tmp147}, TNode<Smi>{tmp148});
    ca_.Branch(tmp149, &block17, &block18, tmp138, tmp139, tmp140, tmp141, tmp142, tmp143, tmp144, tmp145, tmp147);
  }

  if (block17.is_used()) {
    TNode<Context> tmp150;
    TNode<FixedArray> tmp151;
    TNode<IntPtrT> tmp152;
    TNode<String> tmp153;
    TNode<JSReceiver> tmp154;
    TNode<Smi> tmp155;
    TNode<IntPtrT> tmp156;
    TNode<Object> tmp157;
    TNode<Smi> tmp158;
    ca_.Bind(&block17, &tmp150, &tmp151, &tmp152, &tmp153, &tmp154, &tmp155, &tmp156, &tmp157, &tmp158);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 43);
    TNode<IntPtrT> tmp159;
    USE(tmp159);
    tmp159 = Convert8ATintptr5ATSmi_188(state_, TNode<Smi>{tmp158});
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 44);
    TNode<IntPtrT> tmp160;
    USE(tmp160);
    tmp160 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 11);
    TNode<IntPtrT> tmp161;
    USE(tmp161);
    tmp161 = CodeStubAssembler(state_).WordSar(TNode<IntPtrT>{tmp159}, TNode<IntPtrT>{tmp160});
    TNode<IntPtrT> tmp162;
    USE(tmp162);
    tmp162 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 0x7FF);
    TNode<IntPtrT> tmp163;
    USE(tmp163);
    tmp163 = CodeStubAssembler(state_).WordAnd(TNode<IntPtrT>{tmp159}, TNode<IntPtrT>{tmp162});
    TNode<IntPtrT> tmp164;
    USE(tmp164);
    tmp164 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp161}, TNode<IntPtrT>{tmp163});
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 45);
    TNode<Smi> tmp165;
    USE(tmp165);
    tmp165 = Convert5ATSmi8ATintptr_186(state_, TNode<IntPtrT>{tmp164});
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 39);
    ca_.Goto(&block19, tmp150, tmp151, tmp152, tmp153, tmp154, tmp165, tmp156, tmp157, tmp158);
  }

  if (block18.is_used()) {
    TNode<Context> tmp166;
    TNode<FixedArray> tmp167;
    TNode<IntPtrT> tmp168;
    TNode<String> tmp169;
    TNode<JSReceiver> tmp170;
    TNode<Smi> tmp171;
    TNode<IntPtrT> tmp172;
    TNode<Object> tmp173;
    TNode<Smi> tmp174;
    ca_.Bind(&block18, &tmp166, &tmp167, &tmp168, &tmp169, &tmp170, &tmp171, &tmp172, &tmp173, &tmp174);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 49);
    TNode<IntPtrT> tmp175 = ca_.IntPtrConstant(FixedArray::kObjectsOffset);
    USE(tmp175);
    TNode<IntPtrT> tmp176 = ca_.IntPtrConstant(FixedArrayBase::kLengthOffset);
    USE(tmp176);
    TNode<Smi>tmp177 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp167, tmp176});
    TNode<IntPtrT> tmp178;
    USE(tmp178);
    tmp178 = Convert8ATintptr5ATSmi_188(state_, TNode<Smi>{tmp177});
    TNode<IntPtrT> tmp179;
    USE(tmp179);
    tmp179 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 1);
    TNode<IntPtrT> tmp180;
    USE(tmp180);
    tmp180 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp172}, TNode<IntPtrT>{tmp179});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 46);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 37);
    TNode<UintPtrT> tmp181;
    USE(tmp181);
    tmp181 = Convert9ATuintptr8ATintptr_205(state_, TNode<IntPtrT>{tmp180});
    TNode<UintPtrT> tmp182;
    USE(tmp182);
    tmp182 = Convert9ATuintptr8ATintptr_205(state_, TNode<IntPtrT>{tmp178});
    TNode<BoolT> tmp183;
    USE(tmp183);
    tmp183 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp181}, TNode<UintPtrT>{tmp182});
    ca_.Branch(tmp183, &block24, &block25, tmp166, tmp167, tmp168, tmp169, tmp170, tmp171, tmp180, tmp173, tmp174, tmp167, tmp175, tmp178, tmp180, tmp180, tmp167, tmp175, tmp178, tmp180, tmp180);
  }

  if (block24.is_used()) {
    TNode<Context> tmp184;
    TNode<FixedArray> tmp185;
    TNode<IntPtrT> tmp186;
    TNode<String> tmp187;
    TNode<JSReceiver> tmp188;
    TNode<Smi> tmp189;
    TNode<IntPtrT> tmp190;
    TNode<Object> tmp191;
    TNode<Smi> tmp192;
    TNode<FixedArray> tmp193;
    TNode<IntPtrT> tmp194;
    TNode<IntPtrT> tmp195;
    TNode<IntPtrT> tmp196;
    TNode<IntPtrT> tmp197;
    TNode<HeapObject> tmp198;
    TNode<IntPtrT> tmp199;
    TNode<IntPtrT> tmp200;
    TNode<IntPtrT> tmp201;
    TNode<IntPtrT> tmp202;
    ca_.Bind(&block24, &tmp184, &tmp185, &tmp186, &tmp187, &tmp188, &tmp189, &tmp190, &tmp191, &tmp192, &tmp193, &tmp194, &tmp195, &tmp196, &tmp197, &tmp198, &tmp199, &tmp200, &tmp201, &tmp202);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 39);
    TNode<IntPtrT> tmp203;
    USE(tmp203);
    tmp203 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, (SizeOf20UT5ATSmi10HeapObject_346(state_)));
    TNode<IntPtrT> tmp204;
    USE(tmp204);
    tmp204 = CodeStubAssembler(state_).IntPtrMul(TNode<IntPtrT>{tmp202}, TNode<IntPtrT>{tmp203});
    TNode<IntPtrT> tmp205;
    USE(tmp205);
    tmp205 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp199}, TNode<IntPtrT>{tmp204});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 38);
    TNode<HeapObject> tmp206;
    USE(tmp206);
    TNode<IntPtrT> tmp207;
    USE(tmp207);
    std::tie(tmp206, tmp207) = UnsafeNewReference20UT5ATSmi10HeapObject_1440(state_, TNode<HeapObject>{tmp198}, TNode<IntPtrT>{tmp205}).Flatten();
    ca_.Goto(&block23, tmp184, tmp185, tmp186, tmp187, tmp188, tmp189, tmp190, tmp191, tmp192, tmp193, tmp194, tmp195, tmp196, tmp197, tmp198, tmp199, tmp200, tmp201, tmp202, tmp206, tmp207);
  }

  if (block25.is_used()) {
    TNode<Context> tmp208;
    TNode<FixedArray> tmp209;
    TNode<IntPtrT> tmp210;
    TNode<String> tmp211;
    TNode<JSReceiver> tmp212;
    TNode<Smi> tmp213;
    TNode<IntPtrT> tmp214;
    TNode<Object> tmp215;
    TNode<Smi> tmp216;
    TNode<FixedArray> tmp217;
    TNode<IntPtrT> tmp218;
    TNode<IntPtrT> tmp219;
    TNode<IntPtrT> tmp220;
    TNode<IntPtrT> tmp221;
    TNode<HeapObject> tmp222;
    TNode<IntPtrT> tmp223;
    TNode<IntPtrT> tmp224;
    TNode<IntPtrT> tmp225;
    TNode<IntPtrT> tmp226;
    ca_.Bind(&block25, &tmp208, &tmp209, &tmp210, &tmp211, &tmp212, &tmp213, &tmp214, &tmp215, &tmp216, &tmp217, &tmp218, &tmp219, &tmp220, &tmp221, &tmp222, &tmp223, &tmp224, &tmp225, &tmp226);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 41);
    ca_.Goto(&block22, tmp208, tmp209, tmp210, tmp211, tmp212, tmp213, tmp214, tmp215, tmp216, tmp217, tmp218, tmp219, tmp220, tmp221);
  }

  if (block23.is_used()) {
    TNode<Context> tmp227;
    TNode<FixedArray> tmp228;
    TNode<IntPtrT> tmp229;
    TNode<String> tmp230;
    TNode<JSReceiver> tmp231;
    TNode<Smi> tmp232;
    TNode<IntPtrT> tmp233;
    TNode<Object> tmp234;
    TNode<Smi> tmp235;
    TNode<FixedArray> tmp236;
    TNode<IntPtrT> tmp237;
    TNode<IntPtrT> tmp238;
    TNode<IntPtrT> tmp239;
    TNode<IntPtrT> tmp240;
    TNode<HeapObject> tmp241;
    TNode<IntPtrT> tmp242;
    TNode<IntPtrT> tmp243;
    TNode<IntPtrT> tmp244;
    TNode<IntPtrT> tmp245;
    TNode<HeapObject> tmp246;
    TNode<IntPtrT> tmp247;
    ca_.Bind(&block23, &tmp227, &tmp228, &tmp229, &tmp230, &tmp231, &tmp232, &tmp233, &tmp234, &tmp235, &tmp236, &tmp237, &tmp238, &tmp239, &tmp240, &tmp241, &tmp242, &tmp243, &tmp244, &tmp245, &tmp246, &tmp247);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 46);
    ca_.Goto(&block21, tmp227, tmp228, tmp229, tmp230, tmp231, tmp232, tmp233, tmp234, tmp235, tmp236, tmp237, tmp238, tmp239, tmp240, tmp246, tmp247);
  }

  if (block22.is_used()) {
    TNode<Context> tmp248;
    TNode<FixedArray> tmp249;
    TNode<IntPtrT> tmp250;
    TNode<String> tmp251;
    TNode<JSReceiver> tmp252;
    TNode<Smi> tmp253;
    TNode<IntPtrT> tmp254;
    TNode<Object> tmp255;
    TNode<Smi> tmp256;
    TNode<FixedArray> tmp257;
    TNode<IntPtrT> tmp258;
    TNode<IntPtrT> tmp259;
    TNode<IntPtrT> tmp260;
    TNode<IntPtrT> tmp261;
    ca_.Bind(&block22, &tmp248, &tmp249, &tmp250, &tmp251, &tmp252, &tmp253, &tmp254, &tmp255, &tmp256, &tmp257, &tmp258, &tmp259, &tmp260, &tmp261);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block21.is_used()) {
    TNode<Context> tmp262;
    TNode<FixedArray> tmp263;
    TNode<IntPtrT> tmp264;
    TNode<String> tmp265;
    TNode<JSReceiver> tmp266;
    TNode<Smi> tmp267;
    TNode<IntPtrT> tmp268;
    TNode<Object> tmp269;
    TNode<Smi> tmp270;
    TNode<FixedArray> tmp271;
    TNode<IntPtrT> tmp272;
    TNode<IntPtrT> tmp273;
    TNode<IntPtrT> tmp274;
    TNode<IntPtrT> tmp275;
    TNode<HeapObject> tmp276;
    TNode<IntPtrT> tmp277;
    ca_.Bind(&block21, &tmp262, &tmp263, &tmp264, &tmp265, &tmp266, &tmp267, &tmp268, &tmp269, &tmp270, &tmp271, &tmp272, &tmp273, &tmp274, &tmp275, &tmp276, &tmp277);
    ca_.Goto(&block20, tmp262, tmp263, tmp264, tmp265, tmp266, tmp267, tmp268, tmp269, tmp270, tmp271, tmp272, tmp273, tmp274, tmp275, tmp276, tmp277);
  }

  if (block20.is_used()) {
    TNode<Context> tmp278;
    TNode<FixedArray> tmp279;
    TNode<IntPtrT> tmp280;
    TNode<String> tmp281;
    TNode<JSReceiver> tmp282;
    TNode<Smi> tmp283;
    TNode<IntPtrT> tmp284;
    TNode<Object> tmp285;
    TNode<Smi> tmp286;
    TNode<FixedArray> tmp287;
    TNode<IntPtrT> tmp288;
    TNode<IntPtrT> tmp289;
    TNode<IntPtrT> tmp290;
    TNode<IntPtrT> tmp291;
    TNode<HeapObject> tmp292;
    TNode<IntPtrT> tmp293;
    ca_.Bind(&block20, &tmp278, &tmp279, &tmp280, &tmp281, &tmp282, &tmp283, &tmp284, &tmp285, &tmp286, &tmp287, &tmp288, &tmp289, &tmp290, &tmp291, &tmp292, &tmp293);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 49);
    TNode<Object>tmp294 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp292, tmp293});
    TNode<Smi> tmp295;
    USE(tmp295);
    tmp295 = UnsafeCast5ATSmi_1439(state_, TNode<Context>{tmp278}, TNode<Object>{tmp294});
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 50);
    TNode<Smi> tmp296;
    USE(tmp296);
    tmp296 = CodeStubAssembler(state_).SmiSub(TNode<Smi>{tmp295}, TNode<Smi>{tmp286});
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 46);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 39);
    ca_.Goto(&block19, tmp278, tmp279, tmp280, tmp281, tmp282, tmp296, tmp284, tmp285, tmp286);
  }

  if (block19.is_used()) {
    TNode<Context> tmp297;
    TNode<FixedArray> tmp298;
    TNode<IntPtrT> tmp299;
    TNode<String> tmp300;
    TNode<JSReceiver> tmp301;
    TNode<Smi> tmp302;
    TNode<IntPtrT> tmp303;
    TNode<Object> tmp304;
    TNode<Smi> tmp305;
    ca_.Bind(&block19, &tmp297, &tmp298, &tmp299, &tmp300, &tmp301, &tmp302, &tmp303, &tmp304, &tmp305);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 35);
    ca_.Goto(&block13, tmp297, tmp298, tmp299, tmp300, tmp301, tmp302, tmp303, tmp304);
  }

  if (block14.is_used()) {
    TNode<Context> tmp306;
    TNode<FixedArray> tmp307;
    TNode<IntPtrT> tmp308;
    TNode<String> tmp309;
    TNode<JSReceiver> tmp310;
    TNode<Smi> tmp311;
    TNode<IntPtrT> tmp312;
    TNode<Object> tmp313;
    ca_.Bind(&block14, &tmp306, &tmp307, &tmp308, &tmp309, &tmp310, &tmp311, &tmp312, &tmp313);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 55);
    TNode<String> tmp314;
    USE(tmp314);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp314 = Cast6String_119(state_, TNode<HeapObject>{ca_.UncheckedCast<HeapObject>(tmp313)}, &label0);
    ca_.Goto(&block29, tmp306, tmp307, tmp308, tmp309, tmp310, tmp311, tmp312, tmp313, ca_.UncheckedCast<HeapObject>(tmp313), tmp314);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block30, tmp306, tmp307, tmp308, tmp309, tmp310, tmp311, tmp312, tmp313, ca_.UncheckedCast<HeapObject>(tmp313));
    }
  }

  if (block30.is_used()) {
    TNode<Context> tmp315;
    TNode<FixedArray> tmp316;
    TNode<IntPtrT> tmp317;
    TNode<String> tmp318;
    TNode<JSReceiver> tmp319;
    TNode<Smi> tmp320;
    TNode<IntPtrT> tmp321;
    TNode<Object> tmp322;
    TNode<HeapObject> tmp323;
    ca_.Bind(&block30, &tmp315, &tmp316, &tmp317, &tmp318, &tmp319, &tmp320, &tmp321, &tmp322, &tmp323);
    ca_.Goto(&block28, tmp315, tmp316, tmp317, tmp318, tmp319, tmp320, tmp321, tmp322);
  }

  if (block29.is_used()) {
    TNode<Context> tmp324;
    TNode<FixedArray> tmp325;
    TNode<IntPtrT> tmp326;
    TNode<String> tmp327;
    TNode<JSReceiver> tmp328;
    TNode<Smi> tmp329;
    TNode<IntPtrT> tmp330;
    TNode<Object> tmp331;
    TNode<HeapObject> tmp332;
    TNode<String> tmp333;
    ca_.Bind(&block29, &tmp324, &tmp325, &tmp326, &tmp327, &tmp328, &tmp329, &tmp330, &tmp331, &tmp332, &tmp333);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 57);
    TNode<Oddball> tmp334;
    USE(tmp334);
    tmp334 = Undefined_64(state_);
    TNode<Object> tmp335;
    USE(tmp335);
    tmp335 = CodeStubAssembler(state_).Call(TNode<Context>{tmp324}, TNode<JSReceiver>{tmp328}, TNode<Object>{tmp334}, TNode<Object>{tmp333}, TNode<Object>{tmp329}, TNode<Object>{tmp327});
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 56);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 58);
    TNode<String> tmp336;
    USE(tmp336);
    tmp336 = CodeStubAssembler(state_).ToString_Inline(TNode<Context>{tmp324}, TNode<Object>{tmp335});
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 59);
    TNode<IntPtrT> tmp337 = ca_.IntPtrConstant(FixedArray::kObjectsOffset);
    USE(tmp337);
    TNode<IntPtrT> tmp338 = ca_.IntPtrConstant(FixedArrayBase::kLengthOffset);
    USE(tmp338);
    TNode<Smi>tmp339 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp325, tmp338});
    TNode<IntPtrT> tmp340;
    USE(tmp340);
    tmp340 = Convert8ATintptr5ATSmi_188(state_, TNode<Smi>{tmp339});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 46);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 37);
    TNode<UintPtrT> tmp341;
    USE(tmp341);
    tmp341 = Convert9ATuintptr8ATintptr_205(state_, TNode<IntPtrT>{tmp330});
    TNode<UintPtrT> tmp342;
    USE(tmp342);
    tmp342 = Convert9ATuintptr8ATintptr_205(state_, TNode<IntPtrT>{tmp340});
    TNode<BoolT> tmp343;
    USE(tmp343);
    tmp343 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp341}, TNode<UintPtrT>{tmp342});
    ca_.Branch(tmp343, &block35, &block36, tmp324, tmp325, tmp326, tmp327, tmp328, tmp329, tmp330, tmp331, tmp333, tmp335, tmp336, tmp325, tmp337, tmp340, tmp330, tmp330, tmp325, tmp337, tmp340, tmp330, tmp330);
  }

  if (block35.is_used()) {
    TNode<Context> tmp344;
    TNode<FixedArray> tmp345;
    TNode<IntPtrT> tmp346;
    TNode<String> tmp347;
    TNode<JSReceiver> tmp348;
    TNode<Smi> tmp349;
    TNode<IntPtrT> tmp350;
    TNode<Object> tmp351;
    TNode<String> tmp352;
    TNode<Object> tmp353;
    TNode<String> tmp354;
    TNode<FixedArray> tmp355;
    TNode<IntPtrT> tmp356;
    TNode<IntPtrT> tmp357;
    TNode<IntPtrT> tmp358;
    TNode<IntPtrT> tmp359;
    TNode<HeapObject> tmp360;
    TNode<IntPtrT> tmp361;
    TNode<IntPtrT> tmp362;
    TNode<IntPtrT> tmp363;
    TNode<IntPtrT> tmp364;
    ca_.Bind(&block35, &tmp344, &tmp345, &tmp346, &tmp347, &tmp348, &tmp349, &tmp350, &tmp351, &tmp352, &tmp353, &tmp354, &tmp355, &tmp356, &tmp357, &tmp358, &tmp359, &tmp360, &tmp361, &tmp362, &tmp363, &tmp364);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 39);
    TNode<IntPtrT> tmp365;
    USE(tmp365);
    tmp365 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, (SizeOf20UT5ATSmi10HeapObject_346(state_)));
    TNode<IntPtrT> tmp366;
    USE(tmp366);
    tmp366 = CodeStubAssembler(state_).IntPtrMul(TNode<IntPtrT>{tmp364}, TNode<IntPtrT>{tmp365});
    TNode<IntPtrT> tmp367;
    USE(tmp367);
    tmp367 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp361}, TNode<IntPtrT>{tmp366});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 38);
    TNode<HeapObject> tmp368;
    USE(tmp368);
    TNode<IntPtrT> tmp369;
    USE(tmp369);
    std::tie(tmp368, tmp369) = UnsafeNewReference20UT5ATSmi10HeapObject_1440(state_, TNode<HeapObject>{tmp360}, TNode<IntPtrT>{tmp367}).Flatten();
    ca_.Goto(&block34, tmp344, tmp345, tmp346, tmp347, tmp348, tmp349, tmp350, tmp351, tmp352, tmp353, tmp354, tmp355, tmp356, tmp357, tmp358, tmp359, tmp360, tmp361, tmp362, tmp363, tmp364, tmp368, tmp369);
  }

  if (block36.is_used()) {
    TNode<Context> tmp370;
    TNode<FixedArray> tmp371;
    TNode<IntPtrT> tmp372;
    TNode<String> tmp373;
    TNode<JSReceiver> tmp374;
    TNode<Smi> tmp375;
    TNode<IntPtrT> tmp376;
    TNode<Object> tmp377;
    TNode<String> tmp378;
    TNode<Object> tmp379;
    TNode<String> tmp380;
    TNode<FixedArray> tmp381;
    TNode<IntPtrT> tmp382;
    TNode<IntPtrT> tmp383;
    TNode<IntPtrT> tmp384;
    TNode<IntPtrT> tmp385;
    TNode<HeapObject> tmp386;
    TNode<IntPtrT> tmp387;
    TNode<IntPtrT> tmp388;
    TNode<IntPtrT> tmp389;
    TNode<IntPtrT> tmp390;
    ca_.Bind(&block36, &tmp370, &tmp371, &tmp372, &tmp373, &tmp374, &tmp375, &tmp376, &tmp377, &tmp378, &tmp379, &tmp380, &tmp381, &tmp382, &tmp383, &tmp384, &tmp385, &tmp386, &tmp387, &tmp388, &tmp389, &tmp390);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 41);
    ca_.Goto(&block33, tmp370, tmp371, tmp372, tmp373, tmp374, tmp375, tmp376, tmp377, tmp378, tmp379, tmp380, tmp381, tmp382, tmp383, tmp384, tmp385);
  }

  if (block34.is_used()) {
    TNode<Context> tmp391;
    TNode<FixedArray> tmp392;
    TNode<IntPtrT> tmp393;
    TNode<String> tmp394;
    TNode<JSReceiver> tmp395;
    TNode<Smi> tmp396;
    TNode<IntPtrT> tmp397;
    TNode<Object> tmp398;
    TNode<String> tmp399;
    TNode<Object> tmp400;
    TNode<String> tmp401;
    TNode<FixedArray> tmp402;
    TNode<IntPtrT> tmp403;
    TNode<IntPtrT> tmp404;
    TNode<IntPtrT> tmp405;
    TNode<IntPtrT> tmp406;
    TNode<HeapObject> tmp407;
    TNode<IntPtrT> tmp408;
    TNode<IntPtrT> tmp409;
    TNode<IntPtrT> tmp410;
    TNode<IntPtrT> tmp411;
    TNode<HeapObject> tmp412;
    TNode<IntPtrT> tmp413;
    ca_.Bind(&block34, &tmp391, &tmp392, &tmp393, &tmp394, &tmp395, &tmp396, &tmp397, &tmp398, &tmp399, &tmp400, &tmp401, &tmp402, &tmp403, &tmp404, &tmp405, &tmp406, &tmp407, &tmp408, &tmp409, &tmp410, &tmp411, &tmp412, &tmp413);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 46);
    ca_.Goto(&block32, tmp391, tmp392, tmp393, tmp394, tmp395, tmp396, tmp397, tmp398, tmp399, tmp400, tmp401, tmp402, tmp403, tmp404, tmp405, tmp406, tmp412, tmp413);
  }

  if (block33.is_used()) {
    TNode<Context> tmp414;
    TNode<FixedArray> tmp415;
    TNode<IntPtrT> tmp416;
    TNode<String> tmp417;
    TNode<JSReceiver> tmp418;
    TNode<Smi> tmp419;
    TNode<IntPtrT> tmp420;
    TNode<Object> tmp421;
    TNode<String> tmp422;
    TNode<Object> tmp423;
    TNode<String> tmp424;
    TNode<FixedArray> tmp425;
    TNode<IntPtrT> tmp426;
    TNode<IntPtrT> tmp427;
    TNode<IntPtrT> tmp428;
    TNode<IntPtrT> tmp429;
    ca_.Bind(&block33, &tmp414, &tmp415, &tmp416, &tmp417, &tmp418, &tmp419, &tmp420, &tmp421, &tmp422, &tmp423, &tmp424, &tmp425, &tmp426, &tmp427, &tmp428, &tmp429);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block32.is_used()) {
    TNode<Context> tmp430;
    TNode<FixedArray> tmp431;
    TNode<IntPtrT> tmp432;
    TNode<String> tmp433;
    TNode<JSReceiver> tmp434;
    TNode<Smi> tmp435;
    TNode<IntPtrT> tmp436;
    TNode<Object> tmp437;
    TNode<String> tmp438;
    TNode<Object> tmp439;
    TNode<String> tmp440;
    TNode<FixedArray> tmp441;
    TNode<IntPtrT> tmp442;
    TNode<IntPtrT> tmp443;
    TNode<IntPtrT> tmp444;
    TNode<IntPtrT> tmp445;
    TNode<HeapObject> tmp446;
    TNode<IntPtrT> tmp447;
    ca_.Bind(&block32, &tmp430, &tmp431, &tmp432, &tmp433, &tmp434, &tmp435, &tmp436, &tmp437, &tmp438, &tmp439, &tmp440, &tmp441, &tmp442, &tmp443, &tmp444, &tmp445, &tmp446, &tmp447);
    ca_.Goto(&block31, tmp430, tmp431, tmp432, tmp433, tmp434, tmp435, tmp436, tmp437, tmp438, tmp439, tmp440, tmp441, tmp442, tmp443, tmp444, tmp445, tmp446, tmp447);
  }

  if (block31.is_used()) {
    TNode<Context> tmp448;
    TNode<FixedArray> tmp449;
    TNode<IntPtrT> tmp450;
    TNode<String> tmp451;
    TNode<JSReceiver> tmp452;
    TNode<Smi> tmp453;
    TNode<IntPtrT> tmp454;
    TNode<Object> tmp455;
    TNode<String> tmp456;
    TNode<Object> tmp457;
    TNode<String> tmp458;
    TNode<FixedArray> tmp459;
    TNode<IntPtrT> tmp460;
    TNode<IntPtrT> tmp461;
    TNode<IntPtrT> tmp462;
    TNode<IntPtrT> tmp463;
    TNode<HeapObject> tmp464;
    TNode<IntPtrT> tmp465;
    ca_.Bind(&block31, &tmp448, &tmp449, &tmp450, &tmp451, &tmp452, &tmp453, &tmp454, &tmp455, &tmp456, &tmp457, &tmp458, &tmp459, &tmp460, &tmp461, &tmp462, &tmp463, &tmp464, &tmp465);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 59);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp464, tmp465}, tmp458);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 60);
    TNode<Smi> tmp466;
    USE(tmp466);
    tmp466 = CodeStubAssembler(state_).LoadStringLengthAsSmi(TNode<String>{tmp456});
    TNode<Smi> tmp467;
    USE(tmp467);
    tmp467 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{tmp453}, TNode<Smi>{tmp466});
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 55);
    ca_.Goto(&block27, tmp448, tmp449, tmp450, tmp451, tmp452, tmp467, tmp454, tmp455);
  }

  if (block28.is_used()) {
    TNode<Context> tmp468;
    TNode<FixedArray> tmp469;
    TNode<IntPtrT> tmp470;
    TNode<String> tmp471;
    TNode<JSReceiver> tmp472;
    TNode<Smi> tmp473;
    TNode<IntPtrT> tmp474;
    TNode<Object> tmp475;
    ca_.Bind(&block28, &tmp468, &tmp469, &tmp470, &tmp471, &tmp472, &tmp473, &tmp474, &tmp475);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 62);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 63);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block27.is_used()) {
    TNode<Context> tmp476;
    TNode<FixedArray> tmp477;
    TNode<IntPtrT> tmp478;
    TNode<String> tmp479;
    TNode<JSReceiver> tmp480;
    TNode<Smi> tmp481;
    TNode<IntPtrT> tmp482;
    TNode<Object> tmp483;
    ca_.Bind(&block27, &tmp476, &tmp477, &tmp478, &tmp479, &tmp480, &tmp481, &tmp482, &tmp483);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 35);
    ca_.Goto(&block13, tmp476, tmp477, tmp478, tmp479, tmp480, tmp481, tmp482, tmp483);
  }

  if (block13.is_used()) {
    TNode<Context> tmp484;
    TNode<FixedArray> tmp485;
    TNode<IntPtrT> tmp486;
    TNode<String> tmp487;
    TNode<JSReceiver> tmp488;
    TNode<Smi> tmp489;
    TNode<IntPtrT> tmp490;
    TNode<Object> tmp491;
    ca_.Bind(&block13, &tmp484, &tmp485, &tmp486, &tmp487, &tmp488, &tmp489, &tmp490, &tmp491);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 33);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 32);
    ca_.Goto(&block5, tmp484, tmp485, tmp486, tmp487, tmp488, tmp489, tmp490);
  }

  if (block5.is_used()) {
    TNode<Context> tmp492;
    TNode<FixedArray> tmp493;
    TNode<IntPtrT> tmp494;
    TNode<String> tmp495;
    TNode<JSReceiver> tmp496;
    TNode<Smi> tmp497;
    TNode<IntPtrT> tmp498;
    ca_.Bind(&block5, &tmp492, &tmp493, &tmp494, &tmp495, &tmp496, &tmp497, &tmp498);
    TNode<IntPtrT> tmp499;
    USE(tmp499);
    tmp499 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 1);
    TNode<IntPtrT> tmp500;
    USE(tmp500);
    tmp500 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp498}, TNode<IntPtrT>{tmp499});
    ca_.Goto(&block4, tmp492, tmp493, tmp494, tmp495, tmp496, tmp497, tmp500);
  }

  if (block3.is_used()) {
    TNode<Context> tmp501;
    TNode<FixedArray> tmp502;
    TNode<IntPtrT> tmp503;
    TNode<String> tmp504;
    TNode<JSReceiver> tmp505;
    TNode<Smi> tmp506;
    TNode<IntPtrT> tmp507;
    ca_.Bind(&block3, &tmp501, &tmp502, &tmp503, &tmp504, &tmp505, &tmp506, &tmp507);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 30);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 27);
    ca_.Goto(&block1, tmp501, tmp502, tmp503, tmp504, tmp505);
  }

  if (block1.is_used()) {
    TNode<Context> tmp508;
    TNode<FixedArray> tmp509;
    TNode<IntPtrT> tmp510;
    TNode<String> tmp511;
    TNode<JSReceiver> tmp512;
    ca_.Bind(&block1, &tmp508, &tmp509, &tmp510, &tmp511, &tmp512);
    ca_.Goto(&block38, tmp508, tmp509, tmp510, tmp511, tmp512);
  }

    TNode<Context> tmp513;
    TNode<FixedArray> tmp514;
    TNode<IntPtrT> tmp515;
    TNode<String> tmp516;
    TNode<JSReceiver> tmp517;
    ca_.Bind(&block38, &tmp513, &tmp514, &tmp515, &tmp516, &tmp517);
}

void RegExpReplaceCallableWithExplicitCaptures_327(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<FixedArray> p_matchesElements, TNode<IntPtrT> p_matchesLength, TNode<JSReceiver> p_replaceFn) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, JSReceiver> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, JSReceiver, IntPtrT> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, JSReceiver, IntPtrT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, JSReceiver, IntPtrT, FixedArray, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, JSReceiver, IntPtrT, FixedArray, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, JSReceiver, IntPtrT, FixedArray, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, JSReceiver, IntPtrT, FixedArray, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, JSReceiver, IntPtrT, FixedArray, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, JSReceiver, IntPtrT, FixedArray, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, JSReceiver, IntPtrT, Object> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, JSReceiver, IntPtrT, Object, JSArray> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, JSReceiver, IntPtrT> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, JSReceiver, IntPtrT, JSArray> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, JSReceiver, IntPtrT, JSArray, Object, FixedArray, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block21(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, JSReceiver, IntPtrT, JSArray, Object, FixedArray, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, JSReceiver, IntPtrT, JSArray, Object, FixedArray, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, JSReceiver, IntPtrT, JSArray, Object, FixedArray, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, JSReceiver, IntPtrT, JSArray, Object, FixedArray, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, JSReceiver, IntPtrT, JSArray, Object, FixedArray, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, JSReceiver, IntPtrT> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, JSReceiver, IntPtrT> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, JSReceiver> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, IntPtrT, JSReceiver> block24(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_matchesElements, p_matchesLength, p_replaceFn);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<FixedArray> tmp1;
    TNode<IntPtrT> tmp2;
    TNode<JSReceiver> tmp3;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 72);
    TNode<IntPtrT> tmp4;
    USE(tmp4);
    tmp4 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 0);
    ca_.Goto(&block4, tmp0, tmp1, tmp2, tmp3, tmp4);
  }

  if (block4.is_used()) {
    TNode<Context> tmp5;
    TNode<FixedArray> tmp6;
    TNode<IntPtrT> tmp7;
    TNode<JSReceiver> tmp8;
    TNode<IntPtrT> tmp9;
    ca_.Bind(&block4, &tmp5, &tmp6, &tmp7, &tmp8, &tmp9);
    TNode<BoolT> tmp10;
    USE(tmp10);
    tmp10 = CodeStubAssembler(state_).IntPtrLessThan(TNode<IntPtrT>{tmp9}, TNode<IntPtrT>{tmp7});
    ca_.Branch(tmp10, &block2, &block3, tmp5, tmp6, tmp7, tmp8, tmp9);
  }

  if (block2.is_used()) {
    TNode<Context> tmp11;
    TNode<FixedArray> tmp12;
    TNode<IntPtrT> tmp13;
    TNode<JSReceiver> tmp14;
    TNode<IntPtrT> tmp15;
    ca_.Bind(&block2, &tmp11, &tmp12, &tmp13, &tmp14, &tmp15);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 74);
    TNode<IntPtrT> tmp16 = ca_.IntPtrConstant(FixedArray::kObjectsOffset);
    USE(tmp16);
    TNode<IntPtrT> tmp17 = ca_.IntPtrConstant(FixedArrayBase::kLengthOffset);
    USE(tmp17);
    TNode<Smi>tmp18 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp12, tmp17});
    TNode<IntPtrT> tmp19;
    USE(tmp19);
    tmp19 = Convert8ATintptr5ATSmi_188(state_, TNode<Smi>{tmp18});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 46);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 37);
    TNode<UintPtrT> tmp20;
    USE(tmp20);
    tmp20 = Convert9ATuintptr8ATintptr_205(state_, TNode<IntPtrT>{tmp15});
    TNode<UintPtrT> tmp21;
    USE(tmp21);
    tmp21 = Convert9ATuintptr8ATintptr_205(state_, TNode<IntPtrT>{tmp19});
    TNode<BoolT> tmp22;
    USE(tmp22);
    tmp22 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp20}, TNode<UintPtrT>{tmp21});
    ca_.Branch(tmp22, &block12, &block13, tmp11, tmp12, tmp13, tmp14, tmp15, tmp12, tmp16, tmp19, tmp15, tmp15, tmp12, tmp16, tmp19, tmp15, tmp15);
  }

  if (block12.is_used()) {
    TNode<Context> tmp23;
    TNode<FixedArray> tmp24;
    TNode<IntPtrT> tmp25;
    TNode<JSReceiver> tmp26;
    TNode<IntPtrT> tmp27;
    TNode<FixedArray> tmp28;
    TNode<IntPtrT> tmp29;
    TNode<IntPtrT> tmp30;
    TNode<IntPtrT> tmp31;
    TNode<IntPtrT> tmp32;
    TNode<HeapObject> tmp33;
    TNode<IntPtrT> tmp34;
    TNode<IntPtrT> tmp35;
    TNode<IntPtrT> tmp36;
    TNode<IntPtrT> tmp37;
    ca_.Bind(&block12, &tmp23, &tmp24, &tmp25, &tmp26, &tmp27, &tmp28, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 39);
    TNode<IntPtrT> tmp38;
    USE(tmp38);
    tmp38 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, (SizeOf20UT5ATSmi10HeapObject_346(state_)));
    TNode<IntPtrT> tmp39;
    USE(tmp39);
    tmp39 = CodeStubAssembler(state_).IntPtrMul(TNode<IntPtrT>{tmp37}, TNode<IntPtrT>{tmp38});
    TNode<IntPtrT> tmp40;
    USE(tmp40);
    tmp40 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp34}, TNode<IntPtrT>{tmp39});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 38);
    TNode<HeapObject> tmp41;
    USE(tmp41);
    TNode<IntPtrT> tmp42;
    USE(tmp42);
    std::tie(tmp41, tmp42) = UnsafeNewReference20UT5ATSmi10HeapObject_1440(state_, TNode<HeapObject>{tmp33}, TNode<IntPtrT>{tmp40}).Flatten();
    ca_.Goto(&block11, tmp23, tmp24, tmp25, tmp26, tmp27, tmp28, tmp29, tmp30, tmp31, tmp32, tmp33, tmp34, tmp35, tmp36, tmp37, tmp41, tmp42);
  }

  if (block13.is_used()) {
    TNode<Context> tmp43;
    TNode<FixedArray> tmp44;
    TNode<IntPtrT> tmp45;
    TNode<JSReceiver> tmp46;
    TNode<IntPtrT> tmp47;
    TNode<FixedArray> tmp48;
    TNode<IntPtrT> tmp49;
    TNode<IntPtrT> tmp50;
    TNode<IntPtrT> tmp51;
    TNode<IntPtrT> tmp52;
    TNode<HeapObject> tmp53;
    TNode<IntPtrT> tmp54;
    TNode<IntPtrT> tmp55;
    TNode<IntPtrT> tmp56;
    TNode<IntPtrT> tmp57;
    ca_.Bind(&block13, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47, &tmp48, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56, &tmp57);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 41);
    ca_.Goto(&block10, tmp43, tmp44, tmp45, tmp46, tmp47, tmp48, tmp49, tmp50, tmp51, tmp52);
  }

  if (block11.is_used()) {
    TNode<Context> tmp58;
    TNode<FixedArray> tmp59;
    TNode<IntPtrT> tmp60;
    TNode<JSReceiver> tmp61;
    TNode<IntPtrT> tmp62;
    TNode<FixedArray> tmp63;
    TNode<IntPtrT> tmp64;
    TNode<IntPtrT> tmp65;
    TNode<IntPtrT> tmp66;
    TNode<IntPtrT> tmp67;
    TNode<HeapObject> tmp68;
    TNode<IntPtrT> tmp69;
    TNode<IntPtrT> tmp70;
    TNode<IntPtrT> tmp71;
    TNode<IntPtrT> tmp72;
    TNode<HeapObject> tmp73;
    TNode<IntPtrT> tmp74;
    ca_.Bind(&block11, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67, &tmp68, &tmp69, &tmp70, &tmp71, &tmp72, &tmp73, &tmp74);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 46);
    ca_.Goto(&block9, tmp58, tmp59, tmp60, tmp61, tmp62, tmp63, tmp64, tmp65, tmp66, tmp67, tmp73, tmp74);
  }

  if (block10.is_used()) {
    TNode<Context> tmp75;
    TNode<FixedArray> tmp76;
    TNode<IntPtrT> tmp77;
    TNode<JSReceiver> tmp78;
    TNode<IntPtrT> tmp79;
    TNode<FixedArray> tmp80;
    TNode<IntPtrT> tmp81;
    TNode<IntPtrT> tmp82;
    TNode<IntPtrT> tmp83;
    TNode<IntPtrT> tmp84;
    ca_.Bind(&block10, &tmp75, &tmp76, &tmp77, &tmp78, &tmp79, &tmp80, &tmp81, &tmp82, &tmp83, &tmp84);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block9.is_used()) {
    TNode<Context> tmp85;
    TNode<FixedArray> tmp86;
    TNode<IntPtrT> tmp87;
    TNode<JSReceiver> tmp88;
    TNode<IntPtrT> tmp89;
    TNode<FixedArray> tmp90;
    TNode<IntPtrT> tmp91;
    TNode<IntPtrT> tmp92;
    TNode<IntPtrT> tmp93;
    TNode<IntPtrT> tmp94;
    TNode<HeapObject> tmp95;
    TNode<IntPtrT> tmp96;
    ca_.Bind(&block9, &tmp85, &tmp86, &tmp87, &tmp88, &tmp89, &tmp90, &tmp91, &tmp92, &tmp93, &tmp94, &tmp95, &tmp96);
    ca_.Goto(&block8, tmp85, tmp86, tmp87, tmp88, tmp89, tmp90, tmp91, tmp92, tmp93, tmp94, tmp95, tmp96);
  }

  if (block8.is_used()) {
    TNode<Context> tmp97;
    TNode<FixedArray> tmp98;
    TNode<IntPtrT> tmp99;
    TNode<JSReceiver> tmp100;
    TNode<IntPtrT> tmp101;
    TNode<FixedArray> tmp102;
    TNode<IntPtrT> tmp103;
    TNode<IntPtrT> tmp104;
    TNode<IntPtrT> tmp105;
    TNode<IntPtrT> tmp106;
    TNode<HeapObject> tmp107;
    TNode<IntPtrT> tmp108;
    ca_.Bind(&block8, &tmp97, &tmp98, &tmp99, &tmp100, &tmp101, &tmp102, &tmp103, &tmp104, &tmp105, &tmp106, &tmp107, &tmp108);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 74);
    TNode<Object>tmp109 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp107, tmp108});
    TNode<JSArray> tmp110;
    USE(tmp110);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp110 = Cast7JSArray_1478(state_, TNode<Context>{tmp97}, TNode<Object>{tmp109}, &label0);
    ca_.Goto(&block15, tmp97, tmp98, tmp99, tmp100, tmp101, tmp109, tmp110);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block16, tmp97, tmp98, tmp99, tmp100, tmp101, tmp109);
    }
  }

  if (block16.is_used()) {
    TNode<Context> tmp111;
    TNode<FixedArray> tmp112;
    TNode<IntPtrT> tmp113;
    TNode<JSReceiver> tmp114;
    TNode<IntPtrT> tmp115;
    TNode<Object> tmp116;
    ca_.Bind(&block16, &tmp111, &tmp112, &tmp113, &tmp114, &tmp115, &tmp116);
    ca_.Goto(&block7, tmp111, tmp112, tmp113, tmp114, tmp115);
  }

  if (block15.is_used()) {
    TNode<Context> tmp117;
    TNode<FixedArray> tmp118;
    TNode<IntPtrT> tmp119;
    TNode<JSReceiver> tmp120;
    TNode<IntPtrT> tmp121;
    TNode<Object> tmp122;
    TNode<JSArray> tmp123;
    ca_.Bind(&block15, &tmp117, &tmp118, &tmp119, &tmp120, &tmp121, &tmp122, &tmp123);
    ca_.Goto(&block6, tmp117, tmp118, tmp119, tmp120, tmp121, tmp123);
  }

  if (block7.is_used()) {
    TNode<Context> tmp124;
    TNode<FixedArray> tmp125;
    TNode<IntPtrT> tmp126;
    TNode<JSReceiver> tmp127;
    TNode<IntPtrT> tmp128;
    ca_.Bind(&block7, &tmp124, &tmp125, &tmp126, &tmp127, &tmp128);
    ca_.Goto(&block5, tmp124, tmp125, tmp126, tmp127, tmp128);
  }

  if (block6.is_used()) {
    TNode<Context> tmp129;
    TNode<FixedArray> tmp130;
    TNode<IntPtrT> tmp131;
    TNode<JSReceiver> tmp132;
    TNode<IntPtrT> tmp133;
    TNode<JSArray> tmp134;
    ca_.Bind(&block6, &tmp129, &tmp130, &tmp131, &tmp132, &tmp133, &tmp134);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 79);
    TNode<JSReceiver> tmp135;
    USE(tmp135);
    tmp135 = GetReflectApply_229(state_, TNode<Context>{tmp129});
    TNode<Oddball> tmp136;
    USE(tmp136);
    tmp136 = Undefined_64(state_);
    TNode<Oddball> tmp137;
    USE(tmp137);
    tmp137 = Undefined_64(state_);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 78);
    TNode<Object> tmp138;
    USE(tmp138);
    tmp138 = CodeStubAssembler(state_).Call(TNode<Context>{tmp129}, TNode<JSReceiver>{tmp135}, TNode<Object>{tmp136}, TNode<Object>{tmp132}, TNode<Object>{tmp137}, TNode<Object>{tmp134});
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 83);
    TNode<IntPtrT> tmp139 = ca_.IntPtrConstant(FixedArray::kObjectsOffset);
    USE(tmp139);
    TNode<IntPtrT> tmp140 = ca_.IntPtrConstant(FixedArrayBase::kLengthOffset);
    USE(tmp140);
    TNode<Smi>tmp141 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp130, tmp140});
    TNode<IntPtrT> tmp142;
    USE(tmp142);
    tmp142 = Convert8ATintptr5ATSmi_188(state_, TNode<Smi>{tmp141});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 46);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 37);
    TNode<UintPtrT> tmp143;
    USE(tmp143);
    tmp143 = Convert9ATuintptr8ATintptr_205(state_, TNode<IntPtrT>{tmp133});
    TNode<UintPtrT> tmp144;
    USE(tmp144);
    tmp144 = Convert9ATuintptr8ATintptr_205(state_, TNode<IntPtrT>{tmp142});
    TNode<BoolT> tmp145;
    USE(tmp145);
    tmp145 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp143}, TNode<UintPtrT>{tmp144});
    ca_.Branch(tmp145, &block21, &block22, tmp129, tmp130, tmp131, tmp132, tmp133, tmp134, tmp138, tmp130, tmp139, tmp142, tmp133, tmp133, tmp130, tmp139, tmp142, tmp133, tmp133);
  }

  if (block21.is_used()) {
    TNode<Context> tmp146;
    TNode<FixedArray> tmp147;
    TNode<IntPtrT> tmp148;
    TNode<JSReceiver> tmp149;
    TNode<IntPtrT> tmp150;
    TNode<JSArray> tmp151;
    TNode<Object> tmp152;
    TNode<FixedArray> tmp153;
    TNode<IntPtrT> tmp154;
    TNode<IntPtrT> tmp155;
    TNode<IntPtrT> tmp156;
    TNode<IntPtrT> tmp157;
    TNode<HeapObject> tmp158;
    TNode<IntPtrT> tmp159;
    TNode<IntPtrT> tmp160;
    TNode<IntPtrT> tmp161;
    TNode<IntPtrT> tmp162;
    ca_.Bind(&block21, &tmp146, &tmp147, &tmp148, &tmp149, &tmp150, &tmp151, &tmp152, &tmp153, &tmp154, &tmp155, &tmp156, &tmp157, &tmp158, &tmp159, &tmp160, &tmp161, &tmp162);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 39);
    TNode<IntPtrT> tmp163;
    USE(tmp163);
    tmp163 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, (SizeOf20UT5ATSmi10HeapObject_346(state_)));
    TNode<IntPtrT> tmp164;
    USE(tmp164);
    tmp164 = CodeStubAssembler(state_).IntPtrMul(TNode<IntPtrT>{tmp162}, TNode<IntPtrT>{tmp163});
    TNode<IntPtrT> tmp165;
    USE(tmp165);
    tmp165 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp159}, TNode<IntPtrT>{tmp164});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 38);
    TNode<HeapObject> tmp166;
    USE(tmp166);
    TNode<IntPtrT> tmp167;
    USE(tmp167);
    std::tie(tmp166, tmp167) = UnsafeNewReference20UT5ATSmi10HeapObject_1440(state_, TNode<HeapObject>{tmp158}, TNode<IntPtrT>{tmp165}).Flatten();
    ca_.Goto(&block20, tmp146, tmp147, tmp148, tmp149, tmp150, tmp151, tmp152, tmp153, tmp154, tmp155, tmp156, tmp157, tmp158, tmp159, tmp160, tmp161, tmp162, tmp166, tmp167);
  }

  if (block22.is_used()) {
    TNode<Context> tmp168;
    TNode<FixedArray> tmp169;
    TNode<IntPtrT> tmp170;
    TNode<JSReceiver> tmp171;
    TNode<IntPtrT> tmp172;
    TNode<JSArray> tmp173;
    TNode<Object> tmp174;
    TNode<FixedArray> tmp175;
    TNode<IntPtrT> tmp176;
    TNode<IntPtrT> tmp177;
    TNode<IntPtrT> tmp178;
    TNode<IntPtrT> tmp179;
    TNode<HeapObject> tmp180;
    TNode<IntPtrT> tmp181;
    TNode<IntPtrT> tmp182;
    TNode<IntPtrT> tmp183;
    TNode<IntPtrT> tmp184;
    ca_.Bind(&block22, &tmp168, &tmp169, &tmp170, &tmp171, &tmp172, &tmp173, &tmp174, &tmp175, &tmp176, &tmp177, &tmp178, &tmp179, &tmp180, &tmp181, &tmp182, &tmp183, &tmp184);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 41);
    ca_.Goto(&block19, tmp168, tmp169, tmp170, tmp171, tmp172, tmp173, tmp174, tmp175, tmp176, tmp177, tmp178, tmp179);
  }

  if (block20.is_used()) {
    TNode<Context> tmp185;
    TNode<FixedArray> tmp186;
    TNode<IntPtrT> tmp187;
    TNode<JSReceiver> tmp188;
    TNode<IntPtrT> tmp189;
    TNode<JSArray> tmp190;
    TNode<Object> tmp191;
    TNode<FixedArray> tmp192;
    TNode<IntPtrT> tmp193;
    TNode<IntPtrT> tmp194;
    TNode<IntPtrT> tmp195;
    TNode<IntPtrT> tmp196;
    TNode<HeapObject> tmp197;
    TNode<IntPtrT> tmp198;
    TNode<IntPtrT> tmp199;
    TNode<IntPtrT> tmp200;
    TNode<IntPtrT> tmp201;
    TNode<HeapObject> tmp202;
    TNode<IntPtrT> tmp203;
    ca_.Bind(&block20, &tmp185, &tmp186, &tmp187, &tmp188, &tmp189, &tmp190, &tmp191, &tmp192, &tmp193, &tmp194, &tmp195, &tmp196, &tmp197, &tmp198, &tmp199, &tmp200, &tmp201, &tmp202, &tmp203);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 46);
    ca_.Goto(&block18, tmp185, tmp186, tmp187, tmp188, tmp189, tmp190, tmp191, tmp192, tmp193, tmp194, tmp195, tmp196, tmp202, tmp203);
  }

  if (block19.is_used()) {
    TNode<Context> tmp204;
    TNode<FixedArray> tmp205;
    TNode<IntPtrT> tmp206;
    TNode<JSReceiver> tmp207;
    TNode<IntPtrT> tmp208;
    TNode<JSArray> tmp209;
    TNode<Object> tmp210;
    TNode<FixedArray> tmp211;
    TNode<IntPtrT> tmp212;
    TNode<IntPtrT> tmp213;
    TNode<IntPtrT> tmp214;
    TNode<IntPtrT> tmp215;
    ca_.Bind(&block19, &tmp204, &tmp205, &tmp206, &tmp207, &tmp208, &tmp209, &tmp210, &tmp211, &tmp212, &tmp213, &tmp214, &tmp215);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block18.is_used()) {
    TNode<Context> tmp216;
    TNode<FixedArray> tmp217;
    TNode<IntPtrT> tmp218;
    TNode<JSReceiver> tmp219;
    TNode<IntPtrT> tmp220;
    TNode<JSArray> tmp221;
    TNode<Object> tmp222;
    TNode<FixedArray> tmp223;
    TNode<IntPtrT> tmp224;
    TNode<IntPtrT> tmp225;
    TNode<IntPtrT> tmp226;
    TNode<IntPtrT> tmp227;
    TNode<HeapObject> tmp228;
    TNode<IntPtrT> tmp229;
    ca_.Bind(&block18, &tmp216, &tmp217, &tmp218, &tmp219, &tmp220, &tmp221, &tmp222, &tmp223, &tmp224, &tmp225, &tmp226, &tmp227, &tmp228, &tmp229);
    ca_.Goto(&block17, tmp216, tmp217, tmp218, tmp219, tmp220, tmp221, tmp222, tmp223, tmp224, tmp225, tmp226, tmp227, tmp228, tmp229);
  }

  if (block17.is_used()) {
    TNode<Context> tmp230;
    TNode<FixedArray> tmp231;
    TNode<IntPtrT> tmp232;
    TNode<JSReceiver> tmp233;
    TNode<IntPtrT> tmp234;
    TNode<JSArray> tmp235;
    TNode<Object> tmp236;
    TNode<FixedArray> tmp237;
    TNode<IntPtrT> tmp238;
    TNode<IntPtrT> tmp239;
    TNode<IntPtrT> tmp240;
    TNode<IntPtrT> tmp241;
    TNode<HeapObject> tmp242;
    TNode<IntPtrT> tmp243;
    ca_.Bind(&block17, &tmp230, &tmp231, &tmp232, &tmp233, &tmp234, &tmp235, &tmp236, &tmp237, &tmp238, &tmp239, &tmp240, &tmp241, &tmp242, &tmp243);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 83);
    TNode<String> tmp244;
    USE(tmp244);
    tmp244 = CodeStubAssembler(state_).ToString_Inline(TNode<Context>{tmp230}, TNode<Object>{tmp236});
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp242, tmp243}, tmp244);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 72);
    ca_.Goto(&block5, tmp230, tmp231, tmp232, tmp233, tmp234);
  }

  if (block5.is_used()) {
    TNode<Context> tmp245;
    TNode<FixedArray> tmp246;
    TNode<IntPtrT> tmp247;
    TNode<JSReceiver> tmp248;
    TNode<IntPtrT> tmp249;
    ca_.Bind(&block5, &tmp245, &tmp246, &tmp247, &tmp248, &tmp249);
    TNode<IntPtrT> tmp250;
    USE(tmp250);
    tmp250 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 1);
    TNode<IntPtrT> tmp251;
    USE(tmp251);
    tmp251 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp249}, TNode<IntPtrT>{tmp250});
    ca_.Goto(&block4, tmp245, tmp246, tmp247, tmp248, tmp251);
  }

  if (block3.is_used()) {
    TNode<Context> tmp252;
    TNode<FixedArray> tmp253;
    TNode<IntPtrT> tmp254;
    TNode<JSReceiver> tmp255;
    TNode<IntPtrT> tmp256;
    ca_.Bind(&block3, &tmp252, &tmp253, &tmp254, &tmp255, &tmp256);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 69);
    ca_.Goto(&block1, tmp252, tmp253, tmp254, tmp255);
  }

  if (block1.is_used()) {
    TNode<Context> tmp257;
    TNode<FixedArray> tmp258;
    TNode<IntPtrT> tmp259;
    TNode<JSReceiver> tmp260;
    ca_.Bind(&block1, &tmp257, &tmp258, &tmp259, &tmp260);
    ca_.Goto(&block24, tmp257, tmp258, tmp259, tmp260);
  }

    TNode<Context> tmp261;
    TNode<FixedArray> tmp262;
    TNode<IntPtrT> tmp263;
    TNode<JSReceiver> tmp264;
    ca_.Bind(&block24, &tmp261, &tmp262, &tmp263, &tmp264);
}

TNode<String> RegExpReplaceFastGlobalCallable_328(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSRegExp> p_regexp, TNode<String> p_string, TNode<JSReceiver> p_replaceFn) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, JSReceiver> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, JSReceiver, Smi, Smi, HeapObject> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, JSReceiver, Smi, Smi, HeapObject> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, JSReceiver, Smi, Smi, HeapObject, JSArray, Number> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, JSReceiver, Smi, Smi, HeapObject, JSArray, Number, Smi> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, JSReceiver, Smi, Smi, HeapObject, JSArray> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, JSReceiver, Smi, Smi, HeapObject, JSArray, Smi> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, JSReceiver, Smi, Smi, HeapObject, JSArray, Smi, IntPtrT, FixedArray, Smi> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, JSReceiver, Smi, Smi, HeapObject, JSArray, Smi, IntPtrT, FixedArray, Smi> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, JSReceiver, Smi, Smi, HeapObject, JSArray, Smi, IntPtrT, FixedArray, Smi> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, JSReceiver, String> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, JSReceiver, String> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_regexp, p_string, p_replaceFn);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<JSRegExp> tmp1;
    TNode<String> tmp2;
    TNode<JSReceiver> tmp3;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 90);
    TNode<Smi> tmp4;
    USE(tmp4);
    tmp4 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 0);
    RegExpBuiltinsAssembler(state_).FastStoreLastIndex(TNode<JSRegExp>{tmp1}, TNode<Smi>{tmp4});
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 92);
    TNode<Smi> tmp5;
    USE(tmp5);
    tmp5 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 16);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 93);
    TNode<Smi> tmp6;
    USE(tmp6);
    tmp6 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 0);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 95);
    TNode<RegExpMatchInfo> tmp7;
    USE(tmp7);
    tmp7 = GetRegExpLastMatchInfo_230(state_, TNode<Context>{tmp0});
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 97);
    TNode<Map> tmp8;
    USE(tmp8);
    tmp8 = GetFastPackedElementsJSArrayMap_224(state_, TNode<Context>{tmp0});
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 98);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 96);
    TNode<JSArray> tmp9;
    USE(tmp9);
    tmp9 = CodeStubAssembler(state_).AllocateJSArray(PACKED_ELEMENTS, TNode<Map>{tmp8}, TNode<Smi>{tmp5}, TNode<Smi>{tmp6});
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 94);
    TNode<HeapObject> tmp10;
    tmp10 = TORQUE_CAST(CodeStubAssembler(state_).CallRuntime(Runtime::kRegExpExecMultiple, tmp0, tmp1, tmp2, tmp7, tmp9)); 
    USE(tmp10);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 100);
    TNode<Smi> tmp11;
    USE(tmp11);
    tmp11 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 0);
    RegExpBuiltinsAssembler(state_).FastStoreLastIndex(TNode<JSRegExp>{tmp1}, TNode<Smi>{tmp11});
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 103);
    TNode<Oddball> tmp12;
    USE(tmp12);
    tmp12 = Null_63(state_);
    TNode<BoolT> tmp13;
    USE(tmp13);
    tmp13 = CodeStubAssembler(state_).TaggedEqual(TNode<HeapObject>{tmp10}, TNode<HeapObject>{tmp12});
    ca_.Branch(tmp13, &block2, &block3, tmp0, tmp1, tmp2, tmp3, tmp5, tmp6, tmp10);
  }

  if (block2.is_used()) {
    TNode<Context> tmp14;
    TNode<JSRegExp> tmp15;
    TNode<String> tmp16;
    TNode<JSReceiver> tmp17;
    TNode<Smi> tmp18;
    TNode<Smi> tmp19;
    TNode<HeapObject> tmp20;
    ca_.Bind(&block2, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18, &tmp19, &tmp20);
    ca_.Goto(&block1, tmp14, tmp15, tmp16, tmp17, tmp16);
  }

  if (block3.is_used()) {
    TNode<Context> tmp21;
    TNode<JSRegExp> tmp22;
    TNode<String> tmp23;
    TNode<JSReceiver> tmp24;
    TNode<Smi> tmp25;
    TNode<Smi> tmp26;
    TNode<HeapObject> tmp27;
    ca_.Bind(&block3, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26, &tmp27);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 105);
    TNode<JSArray> tmp28;
    USE(tmp28);
    tmp28 = UnsafeCast7JSArray_1436(state_, TNode<Context>{tmp21}, TNode<Object>{tmp27});
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 106);
    TNode<IntPtrT> tmp29 = ca_.IntPtrConstant(JSArray::kLengthOffset);
    USE(tmp29);
    TNode<Number>tmp30 = CodeStubAssembler(state_).LoadReference<Number>(CodeStubAssembler::Reference{tmp28, tmp29});
    TNode<Smi> tmp31;
    USE(tmp31);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp31 = Cast5ATSmi_83(state_, TNode<Object>{tmp30}, &label0);
    ca_.Goto(&block6, tmp21, tmp22, tmp23, tmp24, tmp25, tmp26, tmp27, tmp28, tmp30, tmp31);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block7, tmp21, tmp22, tmp23, tmp24, tmp25, tmp26, tmp27, tmp28, tmp30);
    }
  }

  if (block7.is_used()) {
    TNode<Context> tmp32;
    TNode<JSRegExp> tmp33;
    TNode<String> tmp34;
    TNode<JSReceiver> tmp35;
    TNode<Smi> tmp36;
    TNode<Smi> tmp37;
    TNode<HeapObject> tmp38;
    TNode<JSArray> tmp39;
    TNode<Number> tmp40;
    ca_.Bind(&block7, &tmp32, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40);
    ca_.Goto(&block5, tmp32, tmp33, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39);
  }

  if (block6.is_used()) {
    TNode<Context> tmp41;
    TNode<JSRegExp> tmp42;
    TNode<String> tmp43;
    TNode<JSReceiver> tmp44;
    TNode<Smi> tmp45;
    TNode<Smi> tmp46;
    TNode<HeapObject> tmp47;
    TNode<JSArray> tmp48;
    TNode<Number> tmp49;
    TNode<Smi> tmp50;
    ca_.Bind(&block6, &tmp41, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47, &tmp48, &tmp49, &tmp50);
    ca_.Goto(&block4, tmp41, tmp42, tmp43, tmp44, tmp45, tmp46, tmp47, tmp48, tmp50);
  }

  if (block5.is_used()) {
    TNode<Context> tmp51;
    TNode<JSRegExp> tmp52;
    TNode<String> tmp53;
    TNode<JSReceiver> tmp54;
    TNode<Smi> tmp55;
    TNode<Smi> tmp56;
    TNode<HeapObject> tmp57;
    TNode<JSArray> tmp58;
    ca_.Bind(&block5, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56, &tmp57, &tmp58);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block4.is_used()) {
    TNode<Context> tmp59;
    TNode<JSRegExp> tmp60;
    TNode<String> tmp61;
    TNode<JSReceiver> tmp62;
    TNode<Smi> tmp63;
    TNode<Smi> tmp64;
    TNode<HeapObject> tmp65;
    TNode<JSArray> tmp66;
    TNode<Smi> tmp67;
    ca_.Bind(&block4, &tmp59, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 107);
    TNode<IntPtrT> tmp68;
    USE(tmp68);
    tmp68 = Convert8ATintptr5ATSmi_188(state_, TNode<Smi>{tmp67});
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 109);
    TNode<IntPtrT> tmp69 = ca_.IntPtrConstant(JSObject::kElementsOffset);
    USE(tmp69);
    TNode<FixedArrayBase>tmp70 = CodeStubAssembler(state_).LoadReference<FixedArrayBase>(CodeStubAssembler::Reference{tmp66, tmp69});
    TNode<FixedArray> tmp71;
    USE(tmp71);
    tmp71 = UnsafeCast10FixedArray_1438(state_, TNode<Context>{tmp59}, TNode<Object>{tmp70});
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 108);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 112);
    TNode<RegExpMatchInfo> tmp72;
    USE(tmp72);
    tmp72 = GetRegExpLastMatchInfo_230(state_, TNode<Context>{tmp59});
    TNode<Smi> tmp73;
    USE(tmp73);
    tmp73 = _method_RegExpMatchInfo_NumberOfCaptures(state_, TNode<Context>{tmp59}, TNode<RegExpMatchInfo>{tmp72});
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 117);
    TNode<Smi> tmp74;
    USE(tmp74);
    tmp74 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 2);
    TNode<BoolT> tmp75;
    USE(tmp75);
    tmp75 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{tmp73}, TNode<Smi>{tmp74});
    ca_.Branch(tmp75, &block8, &block9, tmp59, tmp60, tmp61, tmp62, tmp63, tmp64, tmp65, tmp66, tmp67, tmp68, tmp71, tmp73);
  }

  if (block8.is_used()) {
    TNode<Context> tmp76;
    TNode<JSRegExp> tmp77;
    TNode<String> tmp78;
    TNode<JSReceiver> tmp79;
    TNode<Smi> tmp80;
    TNode<Smi> tmp81;
    TNode<HeapObject> tmp82;
    TNode<JSArray> tmp83;
    TNode<Smi> tmp84;
    TNode<IntPtrT> tmp85;
    TNode<FixedArray> tmp86;
    TNode<Smi> tmp87;
    ca_.Bind(&block8, &tmp76, &tmp77, &tmp78, &tmp79, &tmp80, &tmp81, &tmp82, &tmp83, &tmp84, &tmp85, &tmp86, &tmp87);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 119);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 118);
    RegExpReplaceCallableNoExplicitCaptures_326(state_, TNode<Context>{tmp76}, TNode<FixedArray>{tmp86}, TNode<IntPtrT>{tmp85}, TNode<String>{tmp78}, TNode<JSReceiver>{tmp79});
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 117);
    ca_.Goto(&block10, tmp76, tmp77, tmp78, tmp79, tmp80, tmp81, tmp82, tmp83, tmp84, tmp85, tmp86, tmp87);
  }

  if (block9.is_used()) {
    TNode<Context> tmp88;
    TNode<JSRegExp> tmp89;
    TNode<String> tmp90;
    TNode<JSReceiver> tmp91;
    TNode<Smi> tmp92;
    TNode<Smi> tmp93;
    TNode<HeapObject> tmp94;
    TNode<JSArray> tmp95;
    TNode<Smi> tmp96;
    TNode<IntPtrT> tmp97;
    TNode<FixedArray> tmp98;
    TNode<Smi> tmp99;
    ca_.Bind(&block9, &tmp88, &tmp89, &tmp90, &tmp91, &tmp92, &tmp93, &tmp94, &tmp95, &tmp96, &tmp97, &tmp98, &tmp99);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 122);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 121);
    RegExpReplaceCallableWithExplicitCaptures_327(state_, TNode<Context>{tmp88}, TNode<FixedArray>{tmp98}, TNode<IntPtrT>{tmp97}, TNode<JSReceiver>{tmp91});
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 117);
    ca_.Goto(&block10, tmp88, tmp89, tmp90, tmp91, tmp92, tmp93, tmp94, tmp95, tmp96, tmp97, tmp98, tmp99);
  }

  if (block10.is_used()) {
    TNode<Context> tmp100;
    TNode<JSRegExp> tmp101;
    TNode<String> tmp102;
    TNode<JSReceiver> tmp103;
    TNode<Smi> tmp104;
    TNode<Smi> tmp105;
    TNode<HeapObject> tmp106;
    TNode<JSArray> tmp107;
    TNode<Smi> tmp108;
    TNode<IntPtrT> tmp109;
    TNode<FixedArray> tmp110;
    TNode<Smi> tmp111;
    ca_.Bind(&block10, &tmp100, &tmp101, &tmp102, &tmp103, &tmp104, &tmp105, &tmp106, &tmp107, &tmp108, &tmp109, &tmp110, &tmp111);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 125);
    TNode<String> tmp112;
    tmp112 = TORQUE_CAST(CodeStubAssembler(state_).CallRuntime(Runtime::kStringBuilderConcat, tmp100, tmp107, tmp108, tmp102)); 
    USE(tmp112);
    ca_.Goto(&block1, tmp100, tmp101, tmp102, tmp103, tmp112);
  }

  if (block1.is_used()) {
    TNode<Context> tmp113;
    TNode<JSRegExp> tmp114;
    TNode<String> tmp115;
    TNode<JSReceiver> tmp116;
    TNode<String> tmp117;
    ca_.Bind(&block1, &tmp113, &tmp114, &tmp115, &tmp116, &tmp117);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 87);
    ca_.Goto(&block11, tmp113, tmp114, tmp115, tmp116, tmp117);
  }

    TNode<Context> tmp118;
    TNode<JSRegExp> tmp119;
    TNode<String> tmp120;
    TNode<JSReceiver> tmp121;
    TNode<String> tmp122;
    ca_.Bind(&block11, &tmp118, &tmp119, &tmp120, &tmp121, &tmp122);
  return TNode<String>{tmp122};
}

TNode<String> RegExpReplaceFastString_329(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSRegExp> p_regexp, TNode<String> p_string, TNode<String> p_replaceString) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, String> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, String, String, Smi, BoolT, Smi, BoolT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, String, String, Smi, BoolT, Smi, BoolT> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, String, String, Smi, BoolT, Smi, BoolT> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, String, String, Smi, BoolT, Smi, BoolT> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, String, String, Smi, BoolT, Smi, BoolT, JSRegExp, String> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, String, String, Smi, BoolT, Smi, BoolT, JSRegExp, String, RegExpMatchInfo> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, String, String, Smi, BoolT, Smi, BoolT> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, String, String, Smi, BoolT, Smi, BoolT, RegExpMatchInfo> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, String, String, Smi, BoolT, Smi, BoolT, RegExpMatchInfo, Smi, Smi> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, String, String, Smi, BoolT, Smi, BoolT, RegExpMatchInfo, Smi, Smi> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, String, String, Smi, BoolT, Smi, BoolT, RegExpMatchInfo, Smi, Smi> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, String, String, Smi, BoolT, Smi, BoolT, RegExpMatchInfo, Smi, Smi> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, String, String, Smi, BoolT, Smi, BoolT, RegExpMatchInfo, Smi, Smi> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, String, String, Smi, BoolT, Smi, BoolT, RegExpMatchInfo, Smi, Smi> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, String, String, Smi, BoolT, Smi, BoolT> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, String, String> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, String, String> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_regexp, p_string, p_replaceString);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<JSRegExp> tmp1;
    TNode<String> tmp2;
    TNode<String> tmp3;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 133);
    TNode<String> tmp4;
    USE(tmp4);
    tmp4 = kEmptyString_67(state_);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 134);
    TNode<Smi> tmp5;
    USE(tmp5);
    tmp5 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 0);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 135);
    TNode<BoolT> tmp6;
    USE(tmp6);
    tmp6 = FromConstexpr6ATbool16ATconstexpr_bool_167(state_, false);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 136);
    TNode<Smi> tmp7;
    USE(tmp7);
    tmp7 = CodeStubAssembler(state_).LoadStringLengthAsSmi(TNode<String>{tmp3});
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 137);
    TNode<BoolT> tmp8;
    USE(tmp8);
    tmp8 = RegExpBuiltinsAssembler(state_).FastFlagGetterGlobal(TNode<JSRegExp>{tmp1});
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 139);
    ca_.Branch(tmp8, &block2, &block3, tmp0, tmp1, tmp2, tmp3, tmp4, tmp5, tmp6, tmp7, tmp8);
  }

  if (block2.is_used()) {
    TNode<Context> tmp9;
    TNode<JSRegExp> tmp10;
    TNode<String> tmp11;
    TNode<String> tmp12;
    TNode<String> tmp13;
    TNode<Smi> tmp14;
    TNode<BoolT> tmp15;
    TNode<Smi> tmp16;
    TNode<BoolT> tmp17;
    ca_.Bind(&block2, &tmp9, &tmp10, &tmp11, &tmp12, &tmp13, &tmp14, &tmp15, &tmp16, &tmp17);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 140);
    TNode<BoolT> tmp18;
    USE(tmp18);
    tmp18 = RegExpBuiltinsAssembler(state_).FastFlagGetterUnicode(TNode<JSRegExp>{tmp10});
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 141);
    TNode<Smi> tmp19;
    USE(tmp19);
    tmp19 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 0);
    RegExpBuiltinsAssembler(state_).FastStoreLastIndex(TNode<JSRegExp>{tmp10}, TNode<Smi>{tmp19});
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 139);
    ca_.Goto(&block3, tmp9, tmp10, tmp11, tmp12, tmp13, tmp14, tmp18, tmp16, tmp17);
  }

  if (block3.is_used()) {
    TNode<Context> tmp20;
    TNode<JSRegExp> tmp21;
    TNode<String> tmp22;
    TNode<String> tmp23;
    TNode<String> tmp24;
    TNode<Smi> tmp25;
    TNode<BoolT> tmp26;
    TNode<Smi> tmp27;
    TNode<BoolT> tmp28;
    ca_.Bind(&block3, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26, &tmp27, &tmp28);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 144);
    ca_.Goto(&block6, tmp20, tmp21, tmp22, tmp23, tmp24, tmp25, tmp26, tmp27, tmp28);
  }

  if (block6.is_used()) {
    TNode<Context> tmp29;
    TNode<JSRegExp> tmp30;
    TNode<String> tmp31;
    TNode<String> tmp32;
    TNode<String> tmp33;
    TNode<Smi> tmp34;
    TNode<BoolT> tmp35;
    TNode<Smi> tmp36;
    TNode<BoolT> tmp37;
    ca_.Bind(&block6, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37);
    TNode<BoolT> tmp38;
    USE(tmp38);
    tmp38 = FromConstexpr6ATbool16ATconstexpr_bool_167(state_, true);
    ca_.Branch(tmp38, &block4, &block5, tmp29, tmp30, tmp31, tmp32, tmp33, tmp34, tmp35, tmp36, tmp37);
  }

  if (block4.is_used()) {
    TNode<Context> tmp39;
    TNode<JSRegExp> tmp40;
    TNode<String> tmp41;
    TNode<String> tmp42;
    TNode<String> tmp43;
    TNode<Smi> tmp44;
    TNode<BoolT> tmp45;
    TNode<Smi> tmp46;
    TNode<BoolT> tmp47;
    ca_.Bind(&block4, &tmp39, &tmp40, &tmp41, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 146);
    TNode<RegExpMatchInfo> tmp48;
    USE(tmp48);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp48 = RegExpBuiltinsAssembler(state_).RegExpPrototypeExecBodyWithoutResultFast(TNode<Context>{tmp39}, TNode<JSRegExp>{tmp40}, TNode<String>{tmp41}, &label0);
    ca_.Goto(&block9, tmp39, tmp40, tmp41, tmp42, tmp43, tmp44, tmp45, tmp46, tmp47, tmp40, tmp41, tmp48);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block10, tmp39, tmp40, tmp41, tmp42, tmp43, tmp44, tmp45, tmp46, tmp47, tmp40, tmp41);
    }
  }

  if (block10.is_used()) {
    TNode<Context> tmp49;
    TNode<JSRegExp> tmp50;
    TNode<String> tmp51;
    TNode<String> tmp52;
    TNode<String> tmp53;
    TNode<Smi> tmp54;
    TNode<BoolT> tmp55;
    TNode<Smi> tmp56;
    TNode<BoolT> tmp57;
    TNode<JSRegExp> tmp58;
    TNode<String> tmp59;
    ca_.Bind(&block10, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56, &tmp57, &tmp58, &tmp59);
    ca_.Goto(&block8, tmp49, tmp50, tmp51, tmp52, tmp53, tmp54, tmp55, tmp56, tmp57);
  }

  if (block9.is_used()) {
    TNode<Context> tmp60;
    TNode<JSRegExp> tmp61;
    TNode<String> tmp62;
    TNode<String> tmp63;
    TNode<String> tmp64;
    TNode<Smi> tmp65;
    TNode<BoolT> tmp66;
    TNode<Smi> tmp67;
    TNode<BoolT> tmp68;
    TNode<JSRegExp> tmp69;
    TNode<String> tmp70;
    TNode<RegExpMatchInfo> tmp71;
    ca_.Bind(&block9, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67, &tmp68, &tmp69, &tmp70, &tmp71);
    ca_.Goto(&block7, tmp60, tmp61, tmp62, tmp63, tmp64, tmp65, tmp66, tmp67, tmp68, tmp71);
  }

  if (block8.is_used()) {
    TNode<Context> tmp72;
    TNode<JSRegExp> tmp73;
    TNode<String> tmp74;
    TNode<String> tmp75;
    TNode<String> tmp76;
    TNode<Smi> tmp77;
    TNode<BoolT> tmp78;
    TNode<Smi> tmp79;
    TNode<BoolT> tmp80;
    ca_.Bind(&block8, &tmp72, &tmp73, &tmp74, &tmp75, &tmp76, &tmp77, &tmp78, &tmp79, &tmp80);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 147);
    ca_.Goto(&block5, tmp72, tmp73, tmp74, tmp75, tmp76, tmp77, tmp78, tmp79, tmp80);
  }

  if (block7.is_used()) {
    TNode<Context> tmp81;
    TNode<JSRegExp> tmp82;
    TNode<String> tmp83;
    TNode<String> tmp84;
    TNode<String> tmp85;
    TNode<Smi> tmp86;
    TNode<BoolT> tmp87;
    TNode<Smi> tmp88;
    TNode<BoolT> tmp89;
    TNode<RegExpMatchInfo> tmp90;
    ca_.Bind(&block7, &tmp81, &tmp82, &tmp83, &tmp84, &tmp85, &tmp86, &tmp87, &tmp88, &tmp89, &tmp90);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 145);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 148);
    TNode<Smi> tmp91;
    USE(tmp91);
    tmp91 = _method_RegExpMatchInfo_GetStartOfCapture(state_, TNode<Context>{tmp81}, TNode<RegExpMatchInfo>{tmp90}, 0);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 149);
    TNode<Smi> tmp92;
    USE(tmp92);
    tmp92 = _method_RegExpMatchInfo_GetEndOfCapture(state_, TNode<Context>{tmp81}, TNode<RegExpMatchInfo>{tmp90}, 0);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 153);
    TNode<String> tmp93;
    tmp93 = TORQUE_CAST(CodeStubAssembler(state_).CallBuiltin(Builtins::kSubString, tmp81, tmp83, tmp86, tmp91));
    USE(tmp93);
    TNode<String> tmp94;
    USE(tmp94);
    tmp94 = StringAdd_82(state_, TNode<Context>{tmp81}, TNode<String>{tmp85}, TNode<String>{tmp93});
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 154);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 156);
    TNode<Smi> tmp95;
    USE(tmp95);
    tmp95 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 0);
    TNode<BoolT> tmp96;
    USE(tmp96);
    tmp96 = CodeStubAssembler(state_).SmiNotEqual(TNode<Smi>{tmp88}, TNode<Smi>{tmp95});
    ca_.Branch(tmp96, &block11, &block12, tmp81, tmp82, tmp83, tmp84, tmp94, tmp92, tmp87, tmp88, tmp89, tmp90, tmp91, tmp92);
  }

  if (block11.is_used()) {
    TNode<Context> tmp97;
    TNode<JSRegExp> tmp98;
    TNode<String> tmp99;
    TNode<String> tmp100;
    TNode<String> tmp101;
    TNode<Smi> tmp102;
    TNode<BoolT> tmp103;
    TNode<Smi> tmp104;
    TNode<BoolT> tmp105;
    TNode<RegExpMatchInfo> tmp106;
    TNode<Smi> tmp107;
    TNode<Smi> tmp108;
    ca_.Bind(&block11, &tmp97, &tmp98, &tmp99, &tmp100, &tmp101, &tmp102, &tmp103, &tmp104, &tmp105, &tmp106, &tmp107, &tmp108);
    TNode<String> tmp109;
    USE(tmp109);
    tmp109 = StringAdd_82(state_, TNode<Context>{tmp97}, TNode<String>{tmp101}, TNode<String>{tmp100});
    ca_.Goto(&block12, tmp97, tmp98, tmp99, tmp100, tmp109, tmp102, tmp103, tmp104, tmp105, tmp106, tmp107, tmp108);
  }

  if (block12.is_used()) {
    TNode<Context> tmp110;
    TNode<JSRegExp> tmp111;
    TNode<String> tmp112;
    TNode<String> tmp113;
    TNode<String> tmp114;
    TNode<Smi> tmp115;
    TNode<BoolT> tmp116;
    TNode<Smi> tmp117;
    TNode<BoolT> tmp118;
    TNode<RegExpMatchInfo> tmp119;
    TNode<Smi> tmp120;
    TNode<Smi> tmp121;
    ca_.Bind(&block12, &tmp110, &tmp111, &tmp112, &tmp113, &tmp114, &tmp115, &tmp116, &tmp117, &tmp118, &tmp119, &tmp120, &tmp121);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 159);
    TNode<BoolT> tmp122;
    USE(tmp122);
    tmp122 = CodeStubAssembler(state_).Word32BinaryNot(TNode<BoolT>{tmp118});
    ca_.Branch(tmp122, &block13, &block14, tmp110, tmp111, tmp112, tmp113, tmp114, tmp115, tmp116, tmp117, tmp118, tmp119, tmp120, tmp121);
  }

  if (block13.is_used()) {
    TNode<Context> tmp123;
    TNode<JSRegExp> tmp124;
    TNode<String> tmp125;
    TNode<String> tmp126;
    TNode<String> tmp127;
    TNode<Smi> tmp128;
    TNode<BoolT> tmp129;
    TNode<Smi> tmp130;
    TNode<BoolT> tmp131;
    TNode<RegExpMatchInfo> tmp132;
    TNode<Smi> tmp133;
    TNode<Smi> tmp134;
    ca_.Bind(&block13, &tmp123, &tmp124, &tmp125, &tmp126, &tmp127, &tmp128, &tmp129, &tmp130, &tmp131, &tmp132, &tmp133, &tmp134);
    ca_.Goto(&block5, tmp123, tmp124, tmp125, tmp126, tmp127, tmp128, tmp129, tmp130, tmp131);
  }

  if (block14.is_used()) {
    TNode<Context> tmp135;
    TNode<JSRegExp> tmp136;
    TNode<String> tmp137;
    TNode<String> tmp138;
    TNode<String> tmp139;
    TNode<Smi> tmp140;
    TNode<BoolT> tmp141;
    TNode<Smi> tmp142;
    TNode<BoolT> tmp143;
    TNode<RegExpMatchInfo> tmp144;
    TNode<Smi> tmp145;
    TNode<Smi> tmp146;
    ca_.Bind(&block14, &tmp135, &tmp136, &tmp137, &tmp138, &tmp139, &tmp140, &tmp141, &tmp142, &tmp143, &tmp144, &tmp145, &tmp146);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 162);
    TNode<BoolT> tmp147;
    USE(tmp147);
    tmp147 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{tmp146}, TNode<Smi>{tmp145});
    ca_.Branch(tmp147, &block15, &block16, tmp135, tmp136, tmp137, tmp138, tmp139, tmp140, tmp141, tmp142, tmp143, tmp144, tmp145, tmp146);
  }

  if (block15.is_used()) {
    TNode<Context> tmp148;
    TNode<JSRegExp> tmp149;
    TNode<String> tmp150;
    TNode<String> tmp151;
    TNode<String> tmp152;
    TNode<Smi> tmp153;
    TNode<BoolT> tmp154;
    TNode<Smi> tmp155;
    TNode<BoolT> tmp156;
    TNode<RegExpMatchInfo> tmp157;
    TNode<Smi> tmp158;
    TNode<Smi> tmp159;
    ca_.Bind(&block15, &tmp148, &tmp149, &tmp150, &tmp151, &tmp152, &tmp153, &tmp154, &tmp155, &tmp156, &tmp157, &tmp158, &tmp159);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 163);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 164);
    TNode<Smi> tmp160;
    USE(tmp160);
    tmp160 = RegExpBuiltinsAssembler(state_).FastLoadLastIndex(TNode<JSRegExp>{tmp149});
    TNode<Smi> tmp161;
    USE(tmp161);
    tmp161 = RegExpBuiltinsAssembler(state_).AdvanceStringIndexFast(TNode<String>{tmp150}, TNode<Smi>{tmp160}, TNode<BoolT>{tmp154});
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 163);
    RegExpBuiltinsAssembler(state_).FastStoreLastIndex(TNode<JSRegExp>{tmp149}, TNode<Smi>{tmp161});
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 162);
    ca_.Goto(&block16, tmp148, tmp149, tmp150, tmp151, tmp152, tmp153, tmp154, tmp155, tmp156, tmp157, tmp158, tmp159);
  }

  if (block16.is_used()) {
    TNode<Context> tmp162;
    TNode<JSRegExp> tmp163;
    TNode<String> tmp164;
    TNode<String> tmp165;
    TNode<String> tmp166;
    TNode<Smi> tmp167;
    TNode<BoolT> tmp168;
    TNode<Smi> tmp169;
    TNode<BoolT> tmp170;
    TNode<RegExpMatchInfo> tmp171;
    TNode<Smi> tmp172;
    TNode<Smi> tmp173;
    ca_.Bind(&block16, &tmp162, &tmp163, &tmp164, &tmp165, &tmp166, &tmp167, &tmp168, &tmp169, &tmp170, &tmp171, &tmp172, &tmp173);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 144);
    ca_.Goto(&block6, tmp162, tmp163, tmp164, tmp165, tmp166, tmp167, tmp168, tmp169, tmp170);
  }

  if (block5.is_used()) {
    TNode<Context> tmp174;
    TNode<JSRegExp> tmp175;
    TNode<String> tmp176;
    TNode<String> tmp177;
    TNode<String> tmp178;
    TNode<Smi> tmp179;
    TNode<BoolT> tmp180;
    TNode<Smi> tmp181;
    TNode<BoolT> tmp182;
    ca_.Bind(&block5, &tmp174, &tmp175, &tmp176, &tmp177, &tmp178, &tmp179, &tmp180, &tmp181, &tmp182);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 168);
    TNode<Smi> tmp183;
    USE(tmp183);
    tmp183 = CodeStubAssembler(state_).LoadStringLengthAsSmi(TNode<String>{tmp176});
    TNode<String> tmp184;
    tmp184 = TORQUE_CAST(CodeStubAssembler(state_).CallBuiltin(Builtins::kSubString, tmp174, tmp176, tmp179, tmp183));
    USE(tmp184);
    TNode<String> tmp185;
    USE(tmp185);
    tmp185 = StringAdd_82(state_, TNode<Context>{tmp174}, TNode<String>{tmp178}, TNode<String>{tmp184});
    ca_.Goto(&block1, tmp174, tmp175, tmp176, tmp177, tmp185);
  }

  if (block1.is_used()) {
    TNode<Context> tmp186;
    TNode<JSRegExp> tmp187;
    TNode<String> tmp188;
    TNode<String> tmp189;
    TNode<String> tmp190;
    ca_.Bind(&block1, &tmp186, &tmp187, &tmp188, &tmp189, &tmp190);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 128);
    ca_.Goto(&block17, tmp186, tmp187, tmp188, tmp189, tmp190);
  }

    TNode<Context> tmp191;
    TNode<JSRegExp> tmp192;
    TNode<String> tmp193;
    TNode<String> tmp194;
    TNode<String> tmp195;
    ca_.Bind(&block17, &tmp191, &tmp192, &tmp193, &tmp194, &tmp195);
  return TNode<String>{tmp195};
}

TF_BUILTIN(RegExpReplace, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  TNode<JSRegExp> parameter1 = UncheckedCast<JSRegExp>(Parameter(Descriptor::kRegexp));
  USE(parameter1);
  TNode<String> parameter2 = UncheckedCast<String>(Parameter(Descriptor::kString));
  USE(parameter2);
  TNode<Object> parameter3 = UncheckedCast<Object>(Parameter(Descriptor::kReplaceValue));
  USE(parameter3);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, Object, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, Object, Object, Object, JSReceiver> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, Object, Object, JSReceiver> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, Object, Object, JSReceiver> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, Object, Object, JSReceiver, String> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, Object, Object, JSReceiver, String> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, Object, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, Object, Object, Object, JSRegExp, String, JSRegExp> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, Object, Object, Object, JSRegExp, String, JSRegExp, JSRegExp> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, Object, Object, Object, JSRegExp, String, JSRegExp> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, Object, Object, Object, JSRegExp, String, JSRegExp> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String, Object, Object, Object, JSRegExp, String> block10(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2, parameter3);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<JSRegExp> tmp1;
    TNode<String> tmp2;
    TNode<Object> tmp3;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 178);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 179);
    TNode<JSReceiver> tmp4;
    USE(tmp4);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp4 = Cast71UT19ATCallableApiObject17ATCallableJSProxy15JSBoundFunction10JSFunction_1434(state_, TNode<Context>{tmp0}, TNode<Object>{tmp3}, &label0);
    ca_.Goto(&block3, tmp0, tmp1, tmp2, tmp3, tmp3, tmp3, tmp4);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1, tmp2, tmp3, tmp3, tmp3);
    }
  }

  if (block4.is_used()) {
    TNode<Context> tmp5;
    TNode<JSRegExp> tmp6;
    TNode<String> tmp7;
    TNode<Object> tmp8;
    TNode<Object> tmp9;
    TNode<Object> tmp10;
    ca_.Bind(&block4, &tmp5, &tmp6, &tmp7, &tmp8, &tmp9, &tmp10);
    ca_.Goto(&block2, tmp5, tmp6, tmp7, tmp8, tmp9);
  }

  if (block3.is_used()) {
    TNode<Context> tmp11;
    TNode<JSRegExp> tmp12;
    TNode<String> tmp13;
    TNode<Object> tmp14;
    TNode<Object> tmp15;
    TNode<Object> tmp16;
    TNode<JSReceiver> tmp17;
    ca_.Bind(&block3, &tmp11, &tmp12, &tmp13, &tmp14, &tmp15, &tmp16, &tmp17);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 180);
    TNode<BoolT> tmp18;
    USE(tmp18);
    tmp18 = RegExpBuiltinsAssembler(state_).FastFlagGetterGlobal(TNode<JSRegExp>{tmp12});
    ca_.Branch(tmp18, &block5, &block6, tmp11, tmp12, tmp13, tmp14, tmp15, tmp17);
  }

  if (block5.is_used()) {
    TNode<Context> tmp19;
    TNode<JSRegExp> tmp20;
    TNode<String> tmp21;
    TNode<Object> tmp22;
    TNode<Object> tmp23;
    TNode<JSReceiver> tmp24;
    ca_.Bind(&block5, &tmp19, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 181);
    TNode<String> tmp25;
    USE(tmp25);
    tmp25 = RegExpReplaceFastGlobalCallable_328(state_, TNode<Context>{tmp19}, TNode<JSRegExp>{tmp20}, TNode<String>{tmp21}, TNode<JSReceiver>{tmp24});
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 180);
    ca_.Goto(&block8, tmp19, tmp20, tmp21, tmp22, tmp23, tmp24, tmp25);
  }

  if (block6.is_used()) {
    TNode<Context> tmp26;
    TNode<JSRegExp> tmp27;
    TNode<String> tmp28;
    TNode<Object> tmp29;
    TNode<Object> tmp30;
    TNode<JSReceiver> tmp31;
    ca_.Bind(&block6, &tmp26, &tmp27, &tmp28, &tmp29, &tmp30, &tmp31);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 182);
    TNode<String> tmp32;
    tmp32 = TORQUE_CAST(CodeStubAssembler(state_).CallRuntime(Runtime::kStringReplaceNonGlobalRegExpWithFunction, tmp26, tmp28, tmp27, tmp31)); 
    USE(tmp32);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 180);
    ca_.Goto(&block7, tmp26, tmp27, tmp28, tmp29, tmp30, tmp31, tmp32);
  }

  if (block8.is_used()) {
    TNode<Context> tmp33;
    TNode<JSRegExp> tmp34;
    TNode<String> tmp35;
    TNode<Object> tmp36;
    TNode<Object> tmp37;
    TNode<JSReceiver> tmp38;
    TNode<String> tmp39;
    ca_.Bind(&block8, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39);
    ca_.Goto(&block7, tmp33, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39);
  }

  if (block7.is_used()) {
    TNode<Context> tmp40;
    TNode<JSRegExp> tmp41;
    TNode<String> tmp42;
    TNode<Object> tmp43;
    TNode<Object> tmp44;
    TNode<JSReceiver> tmp45;
    TNode<String> tmp46;
    ca_.Bind(&block7, &tmp40, &tmp41, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46);
    CodeStubAssembler(state_).Return(tmp46);
  }

  if (block2.is_used()) {
    TNode<Context> tmp47;
    TNode<JSRegExp> tmp48;
    TNode<String> tmp49;
    TNode<Object> tmp50;
    TNode<Object> tmp51;
    ca_.Bind(&block2, &tmp47, &tmp48, &tmp49, &tmp50, &tmp51);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 184);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 185);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 186);
    TNode<String> tmp52;
    USE(tmp52);
    tmp52 = CodeStubAssembler(state_).ToString_Inline(TNode<Context>{tmp47}, TNode<Object>{tmp50});
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 192);
    TNode<JSRegExp> tmp53;
    USE(tmp53);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp53 = Cast14ATFastJSRegExp_136(state_, TNode<Context>{tmp47}, TNode<HeapObject>{tmp48}, &label0);
    ca_.Goto(&block11, tmp47, tmp48, tmp49, tmp50, tmp51, ca_.UncheckedCast<Object>(tmp51), tmp48, tmp52, tmp48, tmp53);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block12, tmp47, tmp48, tmp49, tmp50, tmp51, ca_.UncheckedCast<Object>(tmp51), tmp48, tmp52, tmp48);
    }
  }

  if (block12.is_used()) {
    TNode<Context> tmp54;
    TNode<JSRegExp> tmp55;
    TNode<String> tmp56;
    TNode<Object> tmp57;
    TNode<Object> tmp58;
    TNode<Object> tmp59;
    TNode<JSRegExp> tmp60;
    TNode<String> tmp61;
    TNode<JSRegExp> tmp62;
    ca_.Bind(&block12, &tmp54, &tmp55, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62);
    ca_.Goto(&block10, tmp54, tmp55, tmp56, tmp57, tmp58, tmp59, tmp60, tmp61);
  }

  if (block11.is_used()) {
    TNode<Context> tmp63;
    TNode<JSRegExp> tmp64;
    TNode<String> tmp65;
    TNode<Object> tmp66;
    TNode<Object> tmp67;
    TNode<Object> tmp68;
    TNode<JSRegExp> tmp69;
    TNode<String> tmp70;
    TNode<JSRegExp> tmp71;
    TNode<JSRegExp> tmp72;
    ca_.Bind(&block11, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67, &tmp68, &tmp69, &tmp70, &tmp71, &tmp72);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 194);
    TNode<String> tmp73;
    USE(tmp73);
    tmp73 = CodeStubAssembler(state_).SingleCharacterStringConstant("$");
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 193);
    TNode<Smi> tmp74;
    USE(tmp74);
    tmp74 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 0);
    TNode<Smi> tmp75;
    tmp75 = TORQUE_CAST(CodeStubAssembler(state_).CallBuiltin(Builtins::kStringIndexOf, tmp63, tmp70, tmp73, tmp74));
    USE(tmp75);
    TNode<Smi> tmp76;
    USE(tmp76);
    tmp76 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, -1);
    TNode<BoolT> tmp77;
    USE(tmp77);
    tmp77 = CodeStubAssembler(state_).SmiNotEqual(TNode<Smi>{tmp75}, TNode<Smi>{tmp76});
    ca_.Branch(tmp77, &block13, &block14, tmp63, tmp64, tmp65, tmp66, tmp67, tmp68, tmp69, tmp70, tmp72);
  }

  if (block13.is_used()) {
    TNode<Context> tmp78;
    TNode<JSRegExp> tmp79;
    TNode<String> tmp80;
    TNode<Object> tmp81;
    TNode<Object> tmp82;
    TNode<Object> tmp83;
    TNode<JSRegExp> tmp84;
    TNode<String> tmp85;
    TNode<JSRegExp> tmp86;
    ca_.Bind(&block13, &tmp78, &tmp79, &tmp80, &tmp81, &tmp82, &tmp83, &tmp84, &tmp85, &tmp86);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 195);
    ca_.Goto(&block10, tmp78, tmp79, tmp80, tmp81, tmp82, tmp83, tmp84, tmp85);
  }

  if (block14.is_used()) {
    TNode<Context> tmp87;
    TNode<JSRegExp> tmp88;
    TNode<String> tmp89;
    TNode<Object> tmp90;
    TNode<Object> tmp91;
    TNode<Object> tmp92;
    TNode<JSRegExp> tmp93;
    TNode<String> tmp94;
    TNode<JSRegExp> tmp95;
    ca_.Bind(&block14, &tmp87, &tmp88, &tmp89, &tmp90, &tmp91, &tmp92, &tmp93, &tmp94, &tmp95);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 198);
    TNode<String> tmp96;
    USE(tmp96);
    tmp96 = RegExpReplaceFastString_329(state_, TNode<Context>{tmp87}, TNode<JSRegExp>{tmp95}, TNode<String>{tmp89}, TNode<String>{tmp94});
    CodeStubAssembler(state_).Return(tmp96);
  }

  if (block10.is_used()) {
    TNode<Context> tmp97;
    TNode<JSRegExp> tmp98;
    TNode<String> tmp99;
    TNode<Object> tmp100;
    TNode<Object> tmp101;
    TNode<Object> tmp102;
    TNode<JSRegExp> tmp103;
    TNode<String> tmp104;
    ca_.Bind(&block10, &tmp97, &tmp98, &tmp99, &tmp100, &tmp101, &tmp102, &tmp103, &tmp104);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 201);
    TNode<String> tmp105;
    tmp105 = TORQUE_CAST(CodeStubAssembler(state_).CallRuntime(Runtime::kRegExpReplaceRT, tmp97, tmp103, tmp99, tmp104)); 
    USE(tmp105);
    CodeStubAssembler(state_).Return(tmp105);
  }
}

TF_BUILTIN(RegExpPrototypeReplace, CodeStubAssembler) {
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
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, Object, JSReceiver> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSReceiver> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSReceiver, String, JSReceiver> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSReceiver, String, JSReceiver, JSRegExp> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSReceiver, String> block6(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    ca_.Goto(&block0, torque_arguments.frame, torque_arguments.base, torque_arguments.length, parameter0, parameter1);

  if (block0.is_used()) {
    TNode<RawPtrT> tmp0;
    TNode<RawPtrT> tmp1;
    TNode<IntPtrT> tmp2;
    TNode<Context> tmp3;
    TNode<Object> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 229);
    TNode<IntPtrT> tmp5;
    USE(tmp5);
    tmp5 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 0);
    TNode<Object> tmp6;
    USE(tmp6);
    tmp6 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{tmp0}, TNode<RawPtrT>{tmp1}, TNode<IntPtrT>{tmp2}}, TNode<IntPtrT>{tmp5});
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 230);
    TNode<IntPtrT> tmp7;
    USE(tmp7);
    tmp7 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 1);
    TNode<Object> tmp8;
    USE(tmp8);
    tmp8 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{tmp0}, TNode<RawPtrT>{tmp1}, TNode<IntPtrT>{tmp2}}, TNode<IntPtrT>{tmp7});
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 234);
    TNode<JSReceiver> tmp9;
    USE(tmp9);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp9 = Cast10JSReceiver_1433(state_, TNode<Context>{tmp3}, TNode<Object>{tmp4}, &label0);
    ca_.Goto(&block3, tmp0, tmp1, tmp2, tmp3, tmp4, tmp6, tmp8, tmp4, tmp9);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1, tmp2, tmp3, tmp4, tmp6, tmp8, tmp4);
    }
  }

  if (block4.is_used()) {
    TNode<RawPtrT> tmp10;
    TNode<RawPtrT> tmp11;
    TNode<IntPtrT> tmp12;
    TNode<Context> tmp13;
    TNode<Object> tmp14;
    TNode<Object> tmp15;
    TNode<Object> tmp16;
    TNode<Object> tmp17;
    ca_.Bind(&block4, &tmp10, &tmp11, &tmp12, &tmp13, &tmp14, &tmp15, &tmp16, &tmp17);
    ca_.Goto(&block2, tmp10, tmp11, tmp12, tmp13, tmp14, tmp15, tmp16);
  }

  if (block3.is_used()) {
    TNode<RawPtrT> tmp18;
    TNode<RawPtrT> tmp19;
    TNode<IntPtrT> tmp20;
    TNode<Context> tmp21;
    TNode<Object> tmp22;
    TNode<Object> tmp23;
    TNode<Object> tmp24;
    TNode<Object> tmp25;
    TNode<JSReceiver> tmp26;
    ca_.Bind(&block3, &tmp18, &tmp19, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26);
    ca_.Goto(&block1, tmp18, tmp19, tmp20, tmp21, tmp22, tmp23, tmp24, tmp26);
  }

  if (block2.is_used()) {
    TNode<RawPtrT> tmp27;
    TNode<RawPtrT> tmp28;
    TNode<IntPtrT> tmp29;
    TNode<Context> tmp30;
    TNode<Object> tmp31;
    TNode<Object> tmp32;
    TNode<Object> tmp33;
    ca_.Bind(&block2, &tmp27, &tmp28, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 235);
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{tmp30}, MessageTemplate::kIncompatibleMethodReceiver, "RegExp.prototype.@@replace");
  }

  if (block1.is_used()) {
    TNode<RawPtrT> tmp34;
    TNode<RawPtrT> tmp35;
    TNode<IntPtrT> tmp36;
    TNode<Context> tmp37;
    TNode<Object> tmp38;
    TNode<Object> tmp39;
    TNode<Object> tmp40;
    TNode<JSReceiver> tmp41;
    ca_.Bind(&block1, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40, &tmp41);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 238);
    TNode<String> tmp42;
    USE(tmp42);
    tmp42 = CodeStubAssembler(state_).ToString_Inline(TNode<Context>{tmp37}, TNode<Object>{tmp39});
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 242);
    TNode<JSRegExp> tmp43;
    USE(tmp43);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp43 = Cast14ATFastJSRegExp_136(state_, TNode<Context>{tmp37}, TNode<HeapObject>{tmp41}, &label0);
    ca_.Goto(&block7, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39, tmp40, tmp41, tmp42, tmp41, tmp43);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block8, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39, tmp40, tmp41, tmp42, tmp41);
    }
  }

  if (block8.is_used()) {
    TNode<RawPtrT> tmp44;
    TNode<RawPtrT> tmp45;
    TNode<IntPtrT> tmp46;
    TNode<Context> tmp47;
    TNode<Object> tmp48;
    TNode<Object> tmp49;
    TNode<Object> tmp50;
    TNode<JSReceiver> tmp51;
    TNode<String> tmp52;
    TNode<JSReceiver> tmp53;
    ca_.Bind(&block8, &tmp44, &tmp45, &tmp46, &tmp47, &tmp48, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53);
    ca_.Goto(&block6, tmp44, tmp45, tmp46, tmp47, tmp48, tmp49, tmp50, tmp51, tmp52);
  }

  if (block7.is_used()) {
    TNode<RawPtrT> tmp54;
    TNode<RawPtrT> tmp55;
    TNode<IntPtrT> tmp56;
    TNode<Context> tmp57;
    TNode<Object> tmp58;
    TNode<Object> tmp59;
    TNode<Object> tmp60;
    TNode<JSReceiver> tmp61;
    TNode<String> tmp62;
    TNode<JSReceiver> tmp63;
    TNode<JSRegExp> tmp64;
    ca_.Bind(&block7, &tmp54, &tmp55, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 243);
    TNode<String> tmp65;
    tmp65 = TORQUE_CAST(CodeStubAssembler(state_).CallBuiltin(Builtins::kRegExpReplace, tmp57, tmp64, tmp62, tmp60));
    USE(tmp65);
    arguments.PopAndReturn(tmp65);
  }

  if (block6.is_used()) {
    TNode<RawPtrT> tmp66;
    TNode<RawPtrT> tmp67;
    TNode<IntPtrT> tmp68;
    TNode<Context> tmp69;
    TNode<Object> tmp70;
    TNode<Object> tmp71;
    TNode<Object> tmp72;
    TNode<JSReceiver> tmp73;
    TNode<String> tmp74;
    ca_.Bind(&block6, &tmp66, &tmp67, &tmp68, &tmp69, &tmp70, &tmp71, &tmp72, &tmp73, &tmp74);
    ca_.SetSourcePosition("../../src/builtins/regexp-replace.tq", 246);
    TNode<String> tmp75;
    tmp75 = TORQUE_CAST(CodeStubAssembler(state_).CallRuntime(Runtime::kRegExpReplaceRT, tmp69, tmp73, tmp74, tmp72)); 
    USE(tmp75);
    arguments.PopAndReturn(tmp75);
  }
}

}  // namespace internal
}  // namespace v8

