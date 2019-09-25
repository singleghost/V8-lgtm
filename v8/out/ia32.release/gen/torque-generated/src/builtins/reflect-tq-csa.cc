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

TF_BUILTIN(ReflectIsExtensible, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  TNode<Object> parameter1 = UncheckedCast<Object>(Parameter(Descriptor::kObject));
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSReceiver> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSReceiver> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../src/builtins/reflect.tq", 13);
    TNode<JSReceiver> tmp2;
    USE(tmp2);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp2 = Cast10JSReceiver_1427(state_, TNode<Context>{tmp0}, TNode<Object>{tmp1}, &label0);
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
    ca_.Goto(&block2, tmp3, tmp4);
  }

  if (block3.is_used()) {
    TNode<Context> tmp6;
    TNode<Object> tmp7;
    TNode<Object> tmp8;
    TNode<JSReceiver> tmp9;
    ca_.Bind(&block3, &tmp6, &tmp7, &tmp8, &tmp9);
    ca_.Goto(&block1, tmp6, tmp7, tmp9);
  }

  if (block2.is_used()) {
    TNode<Context> tmp10;
    TNode<Object> tmp11;
    ca_.Bind(&block2, &tmp10, &tmp11);
    ca_.SetSourcePosition("../../src/builtins/reflect.tq", 14);
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{tmp10}, MessageTemplate::kCalledOnNonObject, "Reflect.isExtensible");
  }

  if (block1.is_used()) {
    TNode<Context> tmp12;
    TNode<Object> tmp13;
    TNode<JSReceiver> tmp14;
    ca_.Bind(&block1, &tmp12, &tmp13, &tmp14);
    ca_.SetSourcePosition("../../src/builtins/reflect.tq", 15);
    TNode<Object> tmp15;
    USE(tmp15);
    tmp15 = ObjectIsExtensible_313(state_, TNode<Context>{tmp12}, TNode<Object>{tmp14});
    CodeStubAssembler(state_).Return(tmp15);
  }
}

TF_BUILTIN(ReflectPreventExtensions, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  TNode<Object> parameter1 = UncheckedCast<Object>(Parameter(Descriptor::kObject));
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSReceiver> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSReceiver> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../src/builtins/reflect.tq", 21);
    TNode<JSReceiver> tmp2;
    USE(tmp2);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp2 = Cast10JSReceiver_1427(state_, TNode<Context>{tmp0}, TNode<Object>{tmp1}, &label0);
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
    ca_.Goto(&block2, tmp3, tmp4);
  }

  if (block3.is_used()) {
    TNode<Context> tmp6;
    TNode<Object> tmp7;
    TNode<Object> tmp8;
    TNode<JSReceiver> tmp9;
    ca_.Bind(&block3, &tmp6, &tmp7, &tmp8, &tmp9);
    ca_.Goto(&block1, tmp6, tmp7, tmp9);
  }

  if (block2.is_used()) {
    TNode<Context> tmp10;
    TNode<Object> tmp11;
    ca_.Bind(&block2, &tmp10, &tmp11);
    ca_.SetSourcePosition("../../src/builtins/reflect.tq", 22);
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{tmp10}, MessageTemplate::kCalledOnNonObject, "Reflect.preventExtensions");
  }

  if (block1.is_used()) {
    TNode<Context> tmp12;
    TNode<Object> tmp13;
    TNode<JSReceiver> tmp14;
    ca_.Bind(&block1, &tmp12, &tmp13, &tmp14);
    ca_.SetSourcePosition("../../src/builtins/reflect.tq", 23);
    TNode<Object> tmp15;
    USE(tmp15);
    tmp15 = ObjectPreventExtensionsDontThrow_315(state_, TNode<Context>{tmp12}, TNode<Object>{tmp14});
    CodeStubAssembler(state_).Return(tmp15);
  }
}

TF_BUILTIN(ReflectGetPrototypeOf, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  TNode<Object> parameter1 = UncheckedCast<Object>(Parameter(Descriptor::kObject));
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSReceiver> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSReceiver> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../src/builtins/reflect.tq", 29);
    TNode<JSReceiver> tmp2;
    USE(tmp2);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp2 = Cast10JSReceiver_1427(state_, TNode<Context>{tmp0}, TNode<Object>{tmp1}, &label0);
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
    ca_.Goto(&block2, tmp3, tmp4);
  }

  if (block3.is_used()) {
    TNode<Context> tmp6;
    TNode<Object> tmp7;
    TNode<Object> tmp8;
    TNode<JSReceiver> tmp9;
    ca_.Bind(&block3, &tmp6, &tmp7, &tmp8, &tmp9);
    ca_.Goto(&block1, tmp6, tmp7, tmp9);
  }

  if (block2.is_used()) {
    TNode<Context> tmp10;
    TNode<Object> tmp11;
    ca_.Bind(&block2, &tmp10, &tmp11);
    ca_.SetSourcePosition("../../src/builtins/reflect.tq", 30);
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{tmp10}, MessageTemplate::kCalledOnNonObject, "Reflect.getPrototypeOf");
  }

  if (block1.is_used()) {
    TNode<Context> tmp12;
    TNode<Object> tmp13;
    TNode<JSReceiver> tmp14;
    ca_.Bind(&block1, &tmp12, &tmp13, &tmp14);
    ca_.SetSourcePosition("../../src/builtins/reflect.tq", 31);
    TNode<Object> tmp15;
    USE(tmp15);
    tmp15 = JSReceiverGetPrototypeOf_317(state_, TNode<Context>{tmp12}, TNode<JSReceiver>{tmp14});
    CodeStubAssembler(state_).Return(tmp15);
  }
}

TF_BUILTIN(ReflectSetPrototypeOf, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  TNode<Object> parameter1 = UncheckedCast<Object>(Parameter(Descriptor::kObject));
  USE(parameter1);
  TNode<Object> parameter2 = UncheckedCast<Object>(Parameter(Descriptor::kProto));
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSReceiver> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSReceiver> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSReceiver, Object, Object> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSReceiver, Object, Object, HeapObject> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSReceiver, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Object> tmp1;
    TNode<Object> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../src/builtins/reflect.tq", 37);
    TNode<JSReceiver> tmp3;
    USE(tmp3);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp3 = Cast10JSReceiver_1427(state_, TNode<Context>{tmp0}, TNode<Object>{tmp1}, &label0);
    ca_.Goto(&block3, tmp0, tmp1, tmp2, tmp1, tmp3);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1, tmp2, tmp1);
    }
  }

  if (block4.is_used()) {
    TNode<Context> tmp4;
    TNode<Object> tmp5;
    TNode<Object> tmp6;
    TNode<Object> tmp7;
    ca_.Bind(&block4, &tmp4, &tmp5, &tmp6, &tmp7);
    ca_.Goto(&block2, tmp4, tmp5, tmp6);
  }

  if (block3.is_used()) {
    TNode<Context> tmp8;
    TNode<Object> tmp9;
    TNode<Object> tmp10;
    TNode<Object> tmp11;
    TNode<JSReceiver> tmp12;
    ca_.Bind(&block3, &tmp8, &tmp9, &tmp10, &tmp11, &tmp12);
    ca_.Goto(&block1, tmp8, tmp9, tmp10, tmp12);
  }

  if (block2.is_used()) {
    TNode<Context> tmp13;
    TNode<Object> tmp14;
    TNode<Object> tmp15;
    ca_.Bind(&block2, &tmp13, &tmp14, &tmp15);
    ca_.SetSourcePosition("../../src/builtins/reflect.tq", 38);
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{tmp13}, MessageTemplate::kCalledOnNonObject, "Reflect.setPrototypeOf");
  }

  if (block1.is_used()) {
    TNode<Context> tmp16;
    TNode<Object> tmp17;
    TNode<Object> tmp18;
    TNode<JSReceiver> tmp19;
    ca_.Bind(&block1, &tmp16, &tmp17, &tmp18, &tmp19);
    ca_.SetSourcePosition("../../src/builtins/reflect.tq", 39);
    ca_.SetSourcePosition("../../src/builtins/reflect.tq", 40);
    TNode<HeapObject> tmp20;
    USE(tmp20);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp20 = Cast21UT6ATNull10JSReceiver_1488(state_, TNode<Context>{tmp16}, TNode<Object>{tmp18}, &label0);
    ca_.Goto(&block7, tmp16, tmp17, tmp18, tmp19, tmp18, tmp18, tmp20);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block8, tmp16, tmp17, tmp18, tmp19, tmp18, tmp18);
    }
  }

  if (block8.is_used()) {
    TNode<Context> tmp21;
    TNode<Object> tmp22;
    TNode<Object> tmp23;
    TNode<JSReceiver> tmp24;
    TNode<Object> tmp25;
    TNode<Object> tmp26;
    ca_.Bind(&block8, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26);
    ca_.Goto(&block6, tmp21, tmp22, tmp23, tmp24, tmp25);
  }

  if (block7.is_used()) {
    TNode<Context> tmp27;
    TNode<Object> tmp28;
    TNode<Object> tmp29;
    TNode<JSReceiver> tmp30;
    TNode<Object> tmp31;
    TNode<Object> tmp32;
    TNode<HeapObject> tmp33;
    ca_.Bind(&block7, &tmp27, &tmp28, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33);
    ca_.SetSourcePosition("../../src/builtins/reflect.tq", 41);
    TNode<Object> tmp34;
    USE(tmp34);
    tmp34 = ObjectSetPrototypeOfDontThrow_319(state_, TNode<Context>{tmp27}, TNode<Object>{tmp30}, TNode<HeapObject>{tmp33});
    CodeStubAssembler(state_).Return(tmp34);
  }

  if (block6.is_used()) {
    TNode<Context> tmp35;
    TNode<Object> tmp36;
    TNode<Object> tmp37;
    TNode<JSReceiver> tmp38;
    TNode<Object> tmp39;
    ca_.Bind(&block6, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39);
    ca_.SetSourcePosition("../../src/builtins/reflect.tq", 43);
    ca_.SetSourcePosition("../../src/builtins/reflect.tq", 44);
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{tmp35}, MessageTemplate::kProtoObjectOrNull, TNode<Object>{tmp37});
  }
}

TF_BUILTIN(ReflectGet, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  TNode<IntPtrT> arguments_length(ChangeInt32ToIntPtr(argc));
  TNode<RawPtrT> arguments_frame = UncheckedCast<RawPtrT>(LoadFramePointer());
  TorqueStructArguments torque_arguments(GetFrameArguments(arguments_frame, arguments_length));
  CodeStubArguments arguments(this, torque_arguments);
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, IntPtrT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, IntPtrT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, IntPtrT, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, IntPtrT, Object> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, IntPtrT, Object, Object> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, IntPtrT, Object, Object, JSReceiver> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, IntPtrT, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, IntPtrT, Object, JSReceiver> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, IntPtrT, Object, JSReceiver> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, IntPtrT, Object, JSReceiver> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, IntPtrT, Object, JSReceiver, Object> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, IntPtrT, Object, JSReceiver, Object> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, IntPtrT, Object, JSReceiver, Object, Name> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, IntPtrT, Object, JSReceiver, Object, Name> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, IntPtrT, Object, JSReceiver, Object, Name, Object> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, IntPtrT, Object, JSReceiver, Object, Name, Object> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, torque_arguments.frame, torque_arguments.base, torque_arguments.length, parameter0);

  if (block0.is_used()) {
    TNode<RawPtrT> tmp0;
    TNode<RawPtrT> tmp1;
    TNode<IntPtrT> tmp2;
    TNode<Context> tmp3;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../src/builtins/reflect.tq", 61);
    ca_.SetSourcePosition("../../src/builtins/reflect.tq", 62);
    TNode<IntPtrT> tmp4;
    USE(tmp4);
    tmp4 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 0);
    TNode<BoolT> tmp5;
    USE(tmp5);
    tmp5 = CodeStubAssembler(state_).IntPtrGreaterThan(TNode<IntPtrT>{tmp2}, TNode<IntPtrT>{tmp4});
    ca_.Branch(tmp5, &block1, &block2, tmp0, tmp1, tmp2, tmp3, tmp2);
  }

  if (block1.is_used()) {
    TNode<RawPtrT> tmp6;
    TNode<RawPtrT> tmp7;
    TNode<IntPtrT> tmp8;
    TNode<Context> tmp9;
    TNode<IntPtrT> tmp10;
    ca_.Bind(&block1, &tmp6, &tmp7, &tmp8, &tmp9, &tmp10);
    TNode<IntPtrT> tmp11;
    USE(tmp11);
    tmp11 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 0);
    TNode<Object> tmp12;
    USE(tmp12);
    tmp12 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{tmp6}, TNode<RawPtrT>{tmp7}, TNode<IntPtrT>{tmp8}}, TNode<IntPtrT>{tmp11});
    ca_.Goto(&block4, tmp6, tmp7, tmp8, tmp9, tmp10, tmp12);
  }

  if (block2.is_used()) {
    TNode<RawPtrT> tmp13;
    TNode<RawPtrT> tmp14;
    TNode<IntPtrT> tmp15;
    TNode<Context> tmp16;
    TNode<IntPtrT> tmp17;
    ca_.Bind(&block2, &tmp13, &tmp14, &tmp15, &tmp16, &tmp17);
    TNode<Oddball> tmp18;
    USE(tmp18);
    tmp18 = Undefined_64(state_);
    ca_.Goto(&block3, tmp13, tmp14, tmp15, tmp16, tmp17, tmp18);
  }

  if (block4.is_used()) {
    TNode<RawPtrT> tmp19;
    TNode<RawPtrT> tmp20;
    TNode<IntPtrT> tmp21;
    TNode<Context> tmp22;
    TNode<IntPtrT> tmp23;
    TNode<Object> tmp24;
    ca_.Bind(&block4, &tmp19, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24);
    ca_.Goto(&block3, tmp19, tmp20, tmp21, tmp22, tmp23, tmp24);
  }

  if (block3.is_used()) {
    TNode<RawPtrT> tmp25;
    TNode<RawPtrT> tmp26;
    TNode<IntPtrT> tmp27;
    TNode<Context> tmp28;
    TNode<IntPtrT> tmp29;
    TNode<Object> tmp30;
    ca_.Bind(&block3, &tmp25, &tmp26, &tmp27, &tmp28, &tmp29, &tmp30);
    ca_.SetSourcePosition("../../src/builtins/reflect.tq", 63);
    TNode<JSReceiver> tmp31;
    USE(tmp31);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp31 = Cast10JSReceiver_1427(state_, TNode<Context>{tmp28}, TNode<Object>{tmp30}, &label0);
    ca_.Goto(&block7, tmp25, tmp26, tmp27, tmp28, tmp29, tmp30, tmp30, tmp31);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block8, tmp25, tmp26, tmp27, tmp28, tmp29, tmp30, tmp30);
    }
  }

  if (block8.is_used()) {
    TNode<RawPtrT> tmp32;
    TNode<RawPtrT> tmp33;
    TNode<IntPtrT> tmp34;
    TNode<Context> tmp35;
    TNode<IntPtrT> tmp36;
    TNode<Object> tmp37;
    TNode<Object> tmp38;
    ca_.Bind(&block8, &tmp32, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38);
    ca_.Goto(&block6, tmp32, tmp33, tmp34, tmp35, tmp36, tmp37);
  }

  if (block7.is_used()) {
    TNode<RawPtrT> tmp39;
    TNode<RawPtrT> tmp40;
    TNode<IntPtrT> tmp41;
    TNode<Context> tmp42;
    TNode<IntPtrT> tmp43;
    TNode<Object> tmp44;
    TNode<Object> tmp45;
    TNode<JSReceiver> tmp46;
    ca_.Bind(&block7, &tmp39, &tmp40, &tmp41, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46);
    ca_.Goto(&block5, tmp39, tmp40, tmp41, tmp42, tmp43, tmp44, tmp46);
  }

  if (block6.is_used()) {
    TNode<RawPtrT> tmp47;
    TNode<RawPtrT> tmp48;
    TNode<IntPtrT> tmp49;
    TNode<Context> tmp50;
    TNode<IntPtrT> tmp51;
    TNode<Object> tmp52;
    ca_.Bind(&block6, &tmp47, &tmp48, &tmp49, &tmp50, &tmp51, &tmp52);
    ca_.SetSourcePosition("../../src/builtins/reflect.tq", 64);
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{tmp50}, MessageTemplate::kCalledOnNonObject, "Reflect.get");
  }

  if (block5.is_used()) {
    TNode<RawPtrT> tmp53;
    TNode<RawPtrT> tmp54;
    TNode<IntPtrT> tmp55;
    TNode<Context> tmp56;
    TNode<IntPtrT> tmp57;
    TNode<Object> tmp58;
    TNode<JSReceiver> tmp59;
    ca_.Bind(&block5, &tmp53, &tmp54, &tmp55, &tmp56, &tmp57, &tmp58, &tmp59);
    ca_.SetSourcePosition("../../src/builtins/reflect.tq", 65);
    TNode<IntPtrT> tmp60;
    USE(tmp60);
    tmp60 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 1);
    TNode<BoolT> tmp61;
    USE(tmp61);
    tmp61 = CodeStubAssembler(state_).IntPtrGreaterThan(TNode<IntPtrT>{tmp57}, TNode<IntPtrT>{tmp60});
    ca_.Branch(tmp61, &block9, &block10, tmp53, tmp54, tmp55, tmp56, tmp57, tmp58, tmp59);
  }

  if (block9.is_used()) {
    TNode<RawPtrT> tmp62;
    TNode<RawPtrT> tmp63;
    TNode<IntPtrT> tmp64;
    TNode<Context> tmp65;
    TNode<IntPtrT> tmp66;
    TNode<Object> tmp67;
    TNode<JSReceiver> tmp68;
    ca_.Bind(&block9, &tmp62, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67, &tmp68);
    TNode<IntPtrT> tmp69;
    USE(tmp69);
    tmp69 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 1);
    TNode<Object> tmp70;
    USE(tmp70);
    tmp70 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{tmp62}, TNode<RawPtrT>{tmp63}, TNode<IntPtrT>{tmp64}}, TNode<IntPtrT>{tmp69});
    ca_.Goto(&block12, tmp62, tmp63, tmp64, tmp65, tmp66, tmp67, tmp68, tmp70);
  }

  if (block10.is_used()) {
    TNode<RawPtrT> tmp71;
    TNode<RawPtrT> tmp72;
    TNode<IntPtrT> tmp73;
    TNode<Context> tmp74;
    TNode<IntPtrT> tmp75;
    TNode<Object> tmp76;
    TNode<JSReceiver> tmp77;
    ca_.Bind(&block10, &tmp71, &tmp72, &tmp73, &tmp74, &tmp75, &tmp76, &tmp77);
    TNode<Oddball> tmp78;
    USE(tmp78);
    tmp78 = Undefined_64(state_);
    ca_.Goto(&block11, tmp71, tmp72, tmp73, tmp74, tmp75, tmp76, tmp77, tmp78);
  }

  if (block12.is_used()) {
    TNode<RawPtrT> tmp79;
    TNode<RawPtrT> tmp80;
    TNode<IntPtrT> tmp81;
    TNode<Context> tmp82;
    TNode<IntPtrT> tmp83;
    TNode<Object> tmp84;
    TNode<JSReceiver> tmp85;
    TNode<Object> tmp86;
    ca_.Bind(&block12, &tmp79, &tmp80, &tmp81, &tmp82, &tmp83, &tmp84, &tmp85, &tmp86);
    ca_.Goto(&block11, tmp79, tmp80, tmp81, tmp82, tmp83, tmp84, tmp85, tmp86);
  }

  if (block11.is_used()) {
    TNode<RawPtrT> tmp87;
    TNode<RawPtrT> tmp88;
    TNode<IntPtrT> tmp89;
    TNode<Context> tmp90;
    TNode<IntPtrT> tmp91;
    TNode<Object> tmp92;
    TNode<JSReceiver> tmp93;
    TNode<Object> tmp94;
    ca_.Bind(&block11, &tmp87, &tmp88, &tmp89, &tmp90, &tmp91, &tmp92, &tmp93, &tmp94);
    ca_.SetSourcePosition("../../src/builtins/reflect.tq", 66);
    TNode<Name> tmp95;
    tmp95 = TORQUE_CAST(CodeStubAssembler(state_).CallBuiltin(Builtins::kToName, tmp90, tmp94));
    USE(tmp95);
    ca_.SetSourcePosition("../../src/builtins/reflect.tq", 67);
    TNode<IntPtrT> tmp96;
    USE(tmp96);
    tmp96 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 2);
    TNode<BoolT> tmp97;
    USE(tmp97);
    tmp97 = CodeStubAssembler(state_).IntPtrGreaterThan(TNode<IntPtrT>{tmp91}, TNode<IntPtrT>{tmp96});
    ca_.Branch(tmp97, &block13, &block14, tmp87, tmp88, tmp89, tmp90, tmp91, tmp92, tmp93, tmp94, tmp95);
  }

  if (block13.is_used()) {
    TNode<RawPtrT> tmp98;
    TNode<RawPtrT> tmp99;
    TNode<IntPtrT> tmp100;
    TNode<Context> tmp101;
    TNode<IntPtrT> tmp102;
    TNode<Object> tmp103;
    TNode<JSReceiver> tmp104;
    TNode<Object> tmp105;
    TNode<Name> tmp106;
    ca_.Bind(&block13, &tmp98, &tmp99, &tmp100, &tmp101, &tmp102, &tmp103, &tmp104, &tmp105, &tmp106);
    TNode<IntPtrT> tmp107;
    USE(tmp107);
    tmp107 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 2);
    TNode<Object> tmp108;
    USE(tmp108);
    tmp108 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{tmp98}, TNode<RawPtrT>{tmp99}, TNode<IntPtrT>{tmp100}}, TNode<IntPtrT>{tmp107});
    ca_.Goto(&block16, tmp98, tmp99, tmp100, tmp101, tmp102, tmp103, tmp104, tmp105, tmp106, tmp108);
  }

  if (block14.is_used()) {
    TNode<RawPtrT> tmp109;
    TNode<RawPtrT> tmp110;
    TNode<IntPtrT> tmp111;
    TNode<Context> tmp112;
    TNode<IntPtrT> tmp113;
    TNode<Object> tmp114;
    TNode<JSReceiver> tmp115;
    TNode<Object> tmp116;
    TNode<Name> tmp117;
    ca_.Bind(&block14, &tmp109, &tmp110, &tmp111, &tmp112, &tmp113, &tmp114, &tmp115, &tmp116, &tmp117);
    ca_.Goto(&block15, tmp109, tmp110, tmp111, tmp112, tmp113, tmp114, tmp115, tmp116, tmp117, tmp115);
  }

  if (block16.is_used()) {
    TNode<RawPtrT> tmp118;
    TNode<RawPtrT> tmp119;
    TNode<IntPtrT> tmp120;
    TNode<Context> tmp121;
    TNode<IntPtrT> tmp122;
    TNode<Object> tmp123;
    TNode<JSReceiver> tmp124;
    TNode<Object> tmp125;
    TNode<Name> tmp126;
    TNode<Object> tmp127;
    ca_.Bind(&block16, &tmp118, &tmp119, &tmp120, &tmp121, &tmp122, &tmp123, &tmp124, &tmp125, &tmp126, &tmp127);
    ca_.Goto(&block15, tmp118, tmp119, tmp120, tmp121, tmp122, tmp123, tmp124, tmp125, tmp126, tmp127);
  }

  if (block15.is_used()) {
    TNode<RawPtrT> tmp128;
    TNode<RawPtrT> tmp129;
    TNode<IntPtrT> tmp130;
    TNode<Context> tmp131;
    TNode<IntPtrT> tmp132;
    TNode<Object> tmp133;
    TNode<JSReceiver> tmp134;
    TNode<Object> tmp135;
    TNode<Name> tmp136;
    TNode<Object> tmp137;
    ca_.Bind(&block15, &tmp128, &tmp129, &tmp130, &tmp131, &tmp132, &tmp133, &tmp134, &tmp135, &tmp136, &tmp137);
    ca_.SetSourcePosition("../../src/builtins/reflect.tq", 69);
    TNode<Smi> tmp138;
    USE(tmp138);
    tmp138 = CodeStubAssembler(state_).SmiConstant(OnNonExistent::kReturnUndefined);
    ca_.SetSourcePosition("../../src/builtins/reflect.tq", 68);
    TNode<Object> tmp139;
    tmp139 = CodeStubAssembler(state_).CallBuiltin(Builtins::kGetPropertyWithReceiver, tmp131, tmp134, tmp136, tmp137, tmp138);
    USE(tmp139);
    arguments.PopAndReturn(tmp139);
  }
}

TF_BUILTIN(ReflectDeleteProperty, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  TNode<Object> parameter1 = UncheckedCast<Object>(Parameter(Descriptor::kObject));
  USE(parameter1);
  TNode<Object> parameter2 = UncheckedCast<Object>(Parameter(Descriptor::kKey));
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSReceiver> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSReceiver> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Object> tmp1;
    TNode<Object> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../src/builtins/reflect.tq", 75);
    TNode<JSReceiver> tmp3;
    USE(tmp3);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp3 = Cast10JSReceiver_1427(state_, TNode<Context>{tmp0}, TNode<Object>{tmp1}, &label0);
    ca_.Goto(&block3, tmp0, tmp1, tmp2, tmp1, tmp3);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1, tmp2, tmp1);
    }
  }

  if (block4.is_used()) {
    TNode<Context> tmp4;
    TNode<Object> tmp5;
    TNode<Object> tmp6;
    TNode<Object> tmp7;
    ca_.Bind(&block4, &tmp4, &tmp5, &tmp6, &tmp7);
    ca_.Goto(&block2, tmp4, tmp5, tmp6);
  }

  if (block3.is_used()) {
    TNode<Context> tmp8;
    TNode<Object> tmp9;
    TNode<Object> tmp10;
    TNode<Object> tmp11;
    TNode<JSReceiver> tmp12;
    ca_.Bind(&block3, &tmp8, &tmp9, &tmp10, &tmp11, &tmp12);
    ca_.Goto(&block1, tmp8, tmp9, tmp10, tmp12);
  }

  if (block2.is_used()) {
    TNode<Context> tmp13;
    TNode<Object> tmp14;
    TNode<Object> tmp15;
    ca_.Bind(&block2, &tmp13, &tmp14, &tmp15);
    ca_.SetSourcePosition("../../src/builtins/reflect.tq", 76);
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{tmp13}, MessageTemplate::kCalledOnNonObject, "Reflect.deleteProperty");
  }

  if (block1.is_used()) {
    TNode<Context> tmp16;
    TNode<Object> tmp17;
    TNode<Object> tmp18;
    TNode<JSReceiver> tmp19;
    ca_.Bind(&block1, &tmp16, &tmp17, &tmp18, &tmp19);
    ca_.SetSourcePosition("../../src/builtins/reflect.tq", 77);
    TNode<Smi> tmp20;
    USE(tmp20);
    tmp20 = FromConstexpr14ATLanguageMode24ATconstexpr_LanguageMode_168(state_, LanguageMode::kSloppy);
    TNode<Oddball> tmp21;
    tmp21 = TORQUE_CAST(CodeStubAssembler(state_).CallBuiltin(Builtins::kDeleteProperty, tmp16, tmp19, tmp18, tmp20));
    USE(tmp21);
    CodeStubAssembler(state_).Return(tmp21);
  }
}

}  // namespace internal
}  // namespace v8

