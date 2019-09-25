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

TF_BUILTIN(GetIteratorWithFeedback, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  TNode<Object> parameter1 = UncheckedCast<Object>(Parameter(Descriptor::kReceiver));
  USE(parameter1);
  TNode<Smi> parameter2 = UncheckedCast<Smi>(Parameter(Descriptor::kLoadSlot));
  USE(parameter2);
  TNode<Smi> parameter3 = UncheckedCast<Smi>(Parameter(Descriptor::kCallSlot));
  USE(parameter3);
  TNode<HeapObject> parameter4 = UncheckedCast<HeapObject>(Parameter(Descriptor::kFeedback));
  USE(parameter4);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Smi, Smi, HeapObject> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Smi, Smi, HeapObject, Object, HeapObject, HeapObject> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Smi, Smi, HeapObject, Object, HeapObject, HeapObject, Oddball> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Smi, Smi, HeapObject, Object, HeapObject> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Smi, Smi, HeapObject, Object, HeapObject> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2, parameter3, parameter4);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Object> tmp1;
    TNode<Smi> tmp2;
    TNode<Smi> tmp3;
    TNode<HeapObject> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../src/builtins/iterator.tq", 51);
    ca_.SetSourcePosition("../../src/builtins/iterator.tq", 52);
    ca_.SetSourcePosition("../../src/builtins/iterator.tq", 53);
    TNode<Oddball> tmp5;
    USE(tmp5);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp5 = Cast11ATUndefined_102(state_, TNode<HeapObject>{tmp4}, &label0);
    ca_.Goto(&block3, tmp0, tmp1, tmp2, tmp3, tmp4, ca_.Uninitialized<Object>(), tmp4, tmp4, tmp5);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1, tmp2, tmp3, tmp4, ca_.Uninitialized<Object>(), tmp4, tmp4);
    }
  }

  if (block4.is_used()) {
    TNode<Context> tmp6;
    TNode<Object> tmp7;
    TNode<Smi> tmp8;
    TNode<Smi> tmp9;
    TNode<HeapObject> tmp10;
    TNode<Object> tmp11;
    TNode<HeapObject> tmp12;
    TNode<HeapObject> tmp13;
    ca_.Bind(&block4, &tmp6, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11, &tmp12, &tmp13);
    ca_.Goto(&block2, tmp6, tmp7, tmp8, tmp9, tmp10, tmp11, tmp12);
  }

  if (block3.is_used()) {
    TNode<Context> tmp14;
    TNode<Object> tmp15;
    TNode<Smi> tmp16;
    TNode<Smi> tmp17;
    TNode<HeapObject> tmp18;
    TNode<Object> tmp19;
    TNode<HeapObject> tmp20;
    TNode<HeapObject> tmp21;
    TNode<Oddball> tmp22;
    ca_.Bind(&block3, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18, &tmp19, &tmp20, &tmp21, &tmp22);
    ca_.SetSourcePosition("../../src/builtins/iterator.tq", 54);
    TNode<Symbol> tmp23;
    USE(tmp23);
    tmp23 = CodeStubAssembler(state_).IteratorSymbolConstant();
    TNode<Object> tmp24;
    USE(tmp24);
    tmp24 = CodeStubAssembler(state_).GetProperty(TNode<Context>{tmp14}, TNode<Object>{tmp15}, TNode<Object>{tmp23});
    ca_.SetSourcePosition("../../src/builtins/iterator.tq", 53);
    ca_.Goto(&block1, tmp14, tmp15, tmp16, tmp17, tmp18, tmp24, tmp20);
  }

  if (block2.is_used()) {
    TNode<Context> tmp25;
    TNode<Object> tmp26;
    TNode<Smi> tmp27;
    TNode<Smi> tmp28;
    TNode<HeapObject> tmp29;
    TNode<Object> tmp30;
    TNode<HeapObject> tmp31;
    ca_.Bind(&block2, &tmp25, &tmp26, &tmp27, &tmp28, &tmp29, &tmp30, &tmp31);
    ca_.SetSourcePosition("../../src/builtins/iterator.tq", 56);
    ca_.SetSourcePosition("../../src/builtins/iterator.tq", 58);
    TNode<Symbol> tmp32;
    USE(tmp32);
    tmp32 = CodeStubAssembler(state_).IteratorSymbolConstant();
    ca_.SetSourcePosition("../../src/builtins/iterator.tq", 57);
    TNode<Object> tmp33;
    tmp33 = CodeStubAssembler(state_).CallBuiltin(Builtins::kLoadIC, tmp25, tmp26, tmp32, tmp27, ca_.UncheckedCast<FeedbackVector>(tmp31));
    USE(tmp33);
    ca_.SetSourcePosition("../../src/builtins/iterator.tq", 53);
    ca_.Goto(&block1, tmp25, tmp26, tmp27, tmp28, tmp29, tmp33, tmp31);
  }

  if (block1.is_used()) {
    TNode<Context> tmp34;
    TNode<Object> tmp35;
    TNode<Smi> tmp36;
    TNode<Smi> tmp37;
    TNode<HeapObject> tmp38;
    TNode<Object> tmp39;
    TNode<HeapObject> tmp40;
    ca_.Bind(&block1, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40);
    ca_.SetSourcePosition("../../src/builtins/iterator.tq", 52);
    ca_.SetSourcePosition("../../src/builtins/iterator.tq", 62);
    ca_.SetSourcePosition("../../src/builtins/iterator.tq", 61);
    TNode<Object> tmp41;
    tmp41 = CodeStubAssembler(state_).CallBuiltin(Builtins::kCallIteratorWithFeedback, tmp34, tmp35, tmp39, tmp37, tmp38);
    USE(tmp41);
    CodeStubAssembler(state_).Return(tmp41);
  }
}

TF_BUILTIN(CallIteratorWithFeedback, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  TNode<Object> parameter1 = UncheckedCast<Object>(Parameter(Descriptor::kReceiver));
  USE(parameter1);
  TNode<Object> parameter2 = UncheckedCast<Object>(Parameter(Descriptor::kIteratorMethod));
  USE(parameter2);
  TNode<Smi> parameter3 = UncheckedCast<Smi>(Parameter(Descriptor::kCallSlot));
  USE(parameter3);
  TNode<HeapObject> parameter4 = UncheckedCast<HeapObject>(Parameter(Descriptor::kFeedback));
  USE(parameter4);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Smi, HeapObject> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Smi, HeapObject, UintPtrT, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Smi, HeapObject, UintPtrT, Object, JSReceiver> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Smi, HeapObject, UintPtrT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Smi, HeapObject, UintPtrT, JSReceiver> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Smi, HeapObject, UintPtrT, JSReceiver, Object, Object, Object> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Smi, HeapObject, UintPtrT, JSReceiver, Object, Object, Object, JSReceiver> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Smi, HeapObject, UintPtrT, JSReceiver, Object, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2, parameter3, parameter4);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Object> tmp1;
    TNode<Object> tmp2;
    TNode<Smi> tmp3;
    TNode<HeapObject> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../src/builtins/iterator.tq", 68);
    TNode<IntPtrT> tmp5;
    USE(tmp5);
    tmp5 = CodeStubAssembler(state_).SmiUntag(TNode<Smi>{tmp3});
    TNode<UintPtrT> tmp6;
    USE(tmp6);
    tmp6 = CodeStubAssembler(state_).Unsigned(TNode<IntPtrT>{tmp5});
    ca_.SetSourcePosition("../../src/builtins/iterator.tq", 69);
    CodeStubAssembler(state_).CollectCallFeedback(TNode<Object>{tmp2}, TNode<Context>{tmp0}, TNode<HeapObject>{tmp4}, TNode<UintPtrT>{tmp6});
    ca_.SetSourcePosition("../../src/builtins/iterator.tq", 70);
    TNode<JSReceiver> tmp7;
    USE(tmp7);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp7 = Cast71UT19ATCallableApiObject17ATCallableJSProxy15JSBoundFunction10JSFunction_1428(state_, TNode<Context>{tmp0}, TNode<Object>{tmp2}, &label0);
    ca_.Goto(&block3, tmp0, tmp1, tmp2, tmp3, tmp4, tmp6, tmp2, tmp7);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1, tmp2, tmp3, tmp4, tmp6, tmp2);
    }
  }

  if (block4.is_used()) {
    TNode<Context> tmp8;
    TNode<Object> tmp9;
    TNode<Object> tmp10;
    TNode<Smi> tmp11;
    TNode<HeapObject> tmp12;
    TNode<UintPtrT> tmp13;
    TNode<Object> tmp14;
    ca_.Bind(&block4, &tmp8, &tmp9, &tmp10, &tmp11, &tmp12, &tmp13, &tmp14);
    ca_.Goto(&block2, tmp8, tmp9, tmp10, tmp11, tmp12, tmp13);
  }

  if (block3.is_used()) {
    TNode<Context> tmp15;
    TNode<Object> tmp16;
    TNode<Object> tmp17;
    TNode<Smi> tmp18;
    TNode<HeapObject> tmp19;
    TNode<UintPtrT> tmp20;
    TNode<Object> tmp21;
    TNode<JSReceiver> tmp22;
    ca_.Bind(&block3, &tmp15, &tmp16, &tmp17, &tmp18, &tmp19, &tmp20, &tmp21, &tmp22);
    ca_.Goto(&block1, tmp15, tmp16, tmp17, tmp18, tmp19, tmp20, tmp22);
  }

  if (block2.is_used()) {
    TNode<Context> tmp23;
    TNode<Object> tmp24;
    TNode<Object> tmp25;
    TNode<Smi> tmp26;
    TNode<HeapObject> tmp27;
    TNode<UintPtrT> tmp28;
    ca_.Bind(&block2, &tmp23, &tmp24, &tmp25, &tmp26, &tmp27, &tmp28);
    ca_.SetSourcePosition("../../src/builtins/iterator.tq", 71);
    CodeStubAssembler(state_).CallRuntime(Runtime::kThrowCalledNonCallable, tmp23, tmp25);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block1.is_used()) {
    TNode<Context> tmp30;
    TNode<Object> tmp31;
    TNode<Object> tmp32;
    TNode<Smi> tmp33;
    TNode<HeapObject> tmp34;
    TNode<UintPtrT> tmp35;
    TNode<JSReceiver> tmp36;
    ca_.Bind(&block1, &tmp30, &tmp31, &tmp32, &tmp33, &tmp34, &tmp35, &tmp36);
    ca_.SetSourcePosition("../../src/builtins/iterator.tq", 70);
    ca_.SetSourcePosition("../../src/builtins/iterator.tq", 72);
    TNode<Object> tmp37;
    USE(tmp37);
    tmp37 = CodeStubAssembler(state_).Call(TNode<Context>{tmp30}, TNode<JSReceiver>{tmp36}, TNode<Object>{tmp31});
    ca_.SetSourcePosition("../../src/builtins/iterator.tq", 73);
    ca_.SetSourcePosition("../../src/builtins/iterator.tq", 74);
    TNode<JSReceiver> tmp38;
    USE(tmp38);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp38 = Cast10JSReceiver_1427(state_, TNode<Context>{tmp30}, TNode<Object>{tmp37}, &label0);
    ca_.Goto(&block7, tmp30, tmp31, tmp32, tmp33, tmp34, tmp35, tmp36, tmp37, tmp37, tmp37, tmp38);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block8, tmp30, tmp31, tmp32, tmp33, tmp34, tmp35, tmp36, tmp37, tmp37, tmp37);
    }
  }

  if (block8.is_used()) {
    TNode<Context> tmp39;
    TNode<Object> tmp40;
    TNode<Object> tmp41;
    TNode<Smi> tmp42;
    TNode<HeapObject> tmp43;
    TNode<UintPtrT> tmp44;
    TNode<JSReceiver> tmp45;
    TNode<Object> tmp46;
    TNode<Object> tmp47;
    TNode<Object> tmp48;
    ca_.Bind(&block8, &tmp39, &tmp40, &tmp41, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47, &tmp48);
    ca_.Goto(&block6, tmp39, tmp40, tmp41, tmp42, tmp43, tmp44, tmp45, tmp46, tmp47);
  }

  if (block7.is_used()) {
    TNode<Context> tmp49;
    TNode<Object> tmp50;
    TNode<Object> tmp51;
    TNode<Smi> tmp52;
    TNode<HeapObject> tmp53;
    TNode<UintPtrT> tmp54;
    TNode<JSReceiver> tmp55;
    TNode<Object> tmp56;
    TNode<Object> tmp57;
    TNode<Object> tmp58;
    TNode<JSReceiver> tmp59;
    ca_.Bind(&block7, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56, &tmp57, &tmp58, &tmp59);
    ca_.SetSourcePosition("../../src/builtins/iterator.tq", 75);
    CodeStubAssembler(state_).Return(tmp56);
  }

  if (block6.is_used()) {
    TNode<Context> tmp60;
    TNode<Object> tmp61;
    TNode<Object> tmp62;
    TNode<Smi> tmp63;
    TNode<HeapObject> tmp64;
    TNode<UintPtrT> tmp65;
    TNode<JSReceiver> tmp66;
    TNode<Object> tmp67;
    TNode<Object> tmp68;
    ca_.Bind(&block6, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67, &tmp68);
    ca_.SetSourcePosition("../../src/builtins/iterator.tq", 77);
    ca_.SetSourcePosition("../../src/builtins/iterator.tq", 78);
    CodeStubAssembler(state_).CallRuntime(Runtime::kThrowSymbolIteratorInvalid, tmp60);
    CodeStubAssembler(state_).Unreachable();
  }
}

}  // namespace internal
}  // namespace v8

