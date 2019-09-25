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

TNode<Object> ObjectIsExtensible_313(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_object) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSReceiver> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSReceiver> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSReceiver, JSReceiver> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSReceiver, JSReceiver, JSProxy> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSReceiver> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSReceiver, JSProxy> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_object);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../src/builtins/object.tq", 32);
    TNode<JSReceiver> tmp2;
    USE(tmp2);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp2 = Cast10JSReceiver_1427(state_, TNode<Context>{tmp0}, TNode<Object>{tmp1}, &label0);
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
    ca_.Goto(&block3, tmp3, tmp4);
  }

  if (block4.is_used()) {
    TNode<Context> tmp6;
    TNode<Object> tmp7;
    TNode<Object> tmp8;
    TNode<JSReceiver> tmp9;
    ca_.Bind(&block4, &tmp6, &tmp7, &tmp8, &tmp9);
    ca_.Goto(&block2, tmp6, tmp7, tmp9);
  }

  if (block3.is_used()) {
    TNode<Context> tmp10;
    TNode<Object> tmp11;
    ca_.Bind(&block3, &tmp10, &tmp11);
    TNode<Oddball> tmp12;
    USE(tmp12);
    tmp12 = False_66(state_);
    ca_.Goto(&block1, tmp10, tmp11, tmp12);
  }

  if (block2.is_used()) {
    TNode<Context> tmp13;
    TNode<Object> tmp14;
    TNode<JSReceiver> tmp15;
    ca_.Bind(&block2, &tmp13, &tmp14, &tmp15);
    ca_.SetSourcePosition("../../src/builtins/object.tq", 33);
    TNode<JSProxy> tmp16;
    USE(tmp16);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp16 = Cast7JSProxy_107(state_, TNode<HeapObject>{tmp15}, &label0);
    ca_.Goto(&block8, tmp13, tmp14, tmp15, tmp15, tmp16);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block9, tmp13, tmp14, tmp15, tmp15);
    }
  }

  if (block9.is_used()) {
    TNode<Context> tmp17;
    TNode<Object> tmp18;
    TNode<JSReceiver> tmp19;
    TNode<JSReceiver> tmp20;
    ca_.Bind(&block9, &tmp17, &tmp18, &tmp19, &tmp20);
    ca_.Goto(&block7, tmp17, tmp18, tmp19);
  }

  if (block8.is_used()) {
    TNode<Context> tmp21;
    TNode<Object> tmp22;
    TNode<JSReceiver> tmp23;
    TNode<JSReceiver> tmp24;
    TNode<JSProxy> tmp25;
    ca_.Bind(&block8, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25);
    ca_.Goto(&block6, tmp21, tmp22, tmp23, tmp25);
  }

  if (block7.is_used()) {
    TNode<Context> tmp26;
    TNode<Object> tmp27;
    TNode<JSReceiver> tmp28;
    ca_.Bind(&block7, &tmp26, &tmp27, &tmp28);
    ca_.SetSourcePosition("../../src/builtins/object.tq", 34);
    TNode<Object> tmp29;
    tmp29 = CodeStubAssembler(state_).CallRuntime(Runtime::kObjectIsExtensible, tmp26, tmp28); 
    USE(tmp29);
    ca_.Goto(&block1, tmp26, tmp27, tmp29);
  }

  if (block6.is_used()) {
    TNode<Context> tmp30;
    TNode<Object> tmp31;
    TNode<JSReceiver> tmp32;
    TNode<JSProxy> tmp33;
    ca_.Bind(&block6, &tmp30, &tmp31, &tmp32, &tmp33);
    ca_.SetSourcePosition("../../src/builtins/object.tq", 35);
    TNode<Object> tmp34;
    tmp34 = CodeStubAssembler(state_).CallBuiltin(Builtins::kProxyIsExtensible, tmp30, tmp33);
    USE(tmp34);
    ca_.Goto(&block1, tmp30, tmp31, tmp34);
  }

  if (block1.is_used()) {
    TNode<Context> tmp35;
    TNode<Object> tmp36;
    TNode<Object> tmp37;
    ca_.Bind(&block1, &tmp35, &tmp36, &tmp37);
    ca_.SetSourcePosition("../../src/builtins/object.tq", 30);
    ca_.Goto(&block10, tmp35, tmp36, tmp37);
  }

    TNode<Context> tmp38;
    TNode<Object> tmp39;
    TNode<Object> tmp40;
    ca_.Bind(&block10, &tmp38, &tmp39, &tmp40);
  return TNode<Object>{tmp40};
}

TNode<Object> ObjectPreventExtensionsThrow_314(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_object) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSReceiver> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSReceiver> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSReceiver, JSReceiver> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSReceiver, JSReceiver, JSProxy> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSReceiver> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSReceiver, JSProxy> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_object);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../src/builtins/object.tq", 41);
    TNode<JSReceiver> tmp2;
    USE(tmp2);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp2 = Cast10JSReceiver_1427(state_, TNode<Context>{tmp0}, TNode<Object>{tmp1}, &label0);
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
    ca_.Goto(&block3, tmp3, tmp4);
  }

  if (block4.is_used()) {
    TNode<Context> tmp6;
    TNode<Object> tmp7;
    TNode<Object> tmp8;
    TNode<JSReceiver> tmp9;
    ca_.Bind(&block4, &tmp6, &tmp7, &tmp8, &tmp9);
    ca_.Goto(&block2, tmp6, tmp7, tmp9);
  }

  if (block3.is_used()) {
    TNode<Context> tmp10;
    TNode<Object> tmp11;
    ca_.Bind(&block3, &tmp10, &tmp11);
    ca_.Goto(&block1, tmp10, tmp11, tmp11);
  }

  if (block2.is_used()) {
    TNode<Context> tmp12;
    TNode<Object> tmp13;
    TNode<JSReceiver> tmp14;
    ca_.Bind(&block2, &tmp12, &tmp13, &tmp14);
    ca_.SetSourcePosition("../../src/builtins/object.tq", 42);
    TNode<JSProxy> tmp15;
    USE(tmp15);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp15 = Cast7JSProxy_107(state_, TNode<HeapObject>{tmp14}, &label0);
    ca_.Goto(&block8, tmp12, tmp13, tmp14, tmp14, tmp15);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block9, tmp12, tmp13, tmp14, tmp14);
    }
  }

  if (block9.is_used()) {
    TNode<Context> tmp16;
    TNode<Object> tmp17;
    TNode<JSReceiver> tmp18;
    TNode<JSReceiver> tmp19;
    ca_.Bind(&block9, &tmp16, &tmp17, &tmp18, &tmp19);
    ca_.Goto(&block7, tmp16, tmp17, tmp18);
  }

  if (block8.is_used()) {
    TNode<Context> tmp20;
    TNode<Object> tmp21;
    TNode<JSReceiver> tmp22;
    TNode<JSReceiver> tmp23;
    TNode<JSProxy> tmp24;
    ca_.Bind(&block8, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24);
    ca_.Goto(&block6, tmp20, tmp21, tmp22, tmp24);
  }

  if (block7.is_used()) {
    TNode<Context> tmp25;
    TNode<Object> tmp26;
    TNode<JSReceiver> tmp27;
    ca_.Bind(&block7, &tmp25, &tmp26, &tmp27);
    ca_.SetSourcePosition("../../src/builtins/object.tq", 44);
    ca_.SetSourcePosition("../../src/builtins/object.tq", 43);
    TNode<Object> tmp28;
    tmp28 = CodeStubAssembler(state_).CallRuntime(Runtime::kJSReceiverPreventExtensionsThrow, tmp25, tmp27); 
    USE(tmp28);
    ca_.Goto(&block1, tmp25, tmp26, tmp28);
  }

  if (block6.is_used()) {
    TNode<Context> tmp29;
    TNode<Object> tmp30;
    TNode<JSReceiver> tmp31;
    TNode<JSProxy> tmp32;
    ca_.Bind(&block6, &tmp29, &tmp30, &tmp31, &tmp32);
    ca_.SetSourcePosition("../../src/builtins/object.tq", 45);
    TNode<Oddball> tmp33;
    USE(tmp33);
    tmp33 = True_65(state_);
    TNode<Object> tmp34;
    tmp34 = CodeStubAssembler(state_).CallBuiltin(Builtins::kProxyPreventExtensions, tmp29, tmp32, tmp33);
    USE(tmp34);
    ca_.SetSourcePosition("../../src/builtins/object.tq", 46);
    ca_.Goto(&block1, tmp29, tmp30, tmp31);
  }

  if (block1.is_used()) {
    TNode<Context> tmp35;
    TNode<Object> tmp36;
    TNode<Object> tmp37;
    ca_.Bind(&block1, &tmp35, &tmp36, &tmp37);
    ca_.SetSourcePosition("../../src/builtins/object.tq", 38);
    ca_.Goto(&block10, tmp35, tmp36, tmp37);
  }

    TNode<Context> tmp38;
    TNode<Object> tmp39;
    TNode<Object> tmp40;
    ca_.Bind(&block10, &tmp38, &tmp39, &tmp40);
  return TNode<Object>{tmp40};
}

TNode<Object> ObjectPreventExtensionsDontThrow_315(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_object) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSReceiver> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSReceiver> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSReceiver, JSReceiver> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSReceiver, JSReceiver, JSProxy> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSReceiver> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSReceiver, JSProxy> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_object);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../src/builtins/object.tq", 52);
    TNode<JSReceiver> tmp2;
    USE(tmp2);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp2 = Cast10JSReceiver_1427(state_, TNode<Context>{tmp0}, TNode<Object>{tmp1}, &label0);
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
    ca_.Goto(&block3, tmp3, tmp4);
  }

  if (block4.is_used()) {
    TNode<Context> tmp6;
    TNode<Object> tmp7;
    TNode<Object> tmp8;
    TNode<JSReceiver> tmp9;
    ca_.Bind(&block4, &tmp6, &tmp7, &tmp8, &tmp9);
    ca_.Goto(&block2, tmp6, tmp7, tmp9);
  }

  if (block3.is_used()) {
    TNode<Context> tmp10;
    TNode<Object> tmp11;
    ca_.Bind(&block3, &tmp10, &tmp11);
    TNode<Oddball> tmp12;
    USE(tmp12);
    tmp12 = False_66(state_);
    ca_.Goto(&block1, tmp10, tmp11, tmp12);
  }

  if (block2.is_used()) {
    TNode<Context> tmp13;
    TNode<Object> tmp14;
    TNode<JSReceiver> tmp15;
    ca_.Bind(&block2, &tmp13, &tmp14, &tmp15);
    ca_.SetSourcePosition("../../src/builtins/object.tq", 53);
    TNode<JSProxy> tmp16;
    USE(tmp16);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp16 = Cast7JSProxy_107(state_, TNode<HeapObject>{tmp15}, &label0);
    ca_.Goto(&block8, tmp13, tmp14, tmp15, tmp15, tmp16);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block9, tmp13, tmp14, tmp15, tmp15);
    }
  }

  if (block9.is_used()) {
    TNode<Context> tmp17;
    TNode<Object> tmp18;
    TNode<JSReceiver> tmp19;
    TNode<JSReceiver> tmp20;
    ca_.Bind(&block9, &tmp17, &tmp18, &tmp19, &tmp20);
    ca_.Goto(&block7, tmp17, tmp18, tmp19);
  }

  if (block8.is_used()) {
    TNode<Context> tmp21;
    TNode<Object> tmp22;
    TNode<JSReceiver> tmp23;
    TNode<JSReceiver> tmp24;
    TNode<JSProxy> tmp25;
    ca_.Bind(&block8, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25);
    ca_.Goto(&block6, tmp21, tmp22, tmp23, tmp25);
  }

  if (block7.is_used()) {
    TNode<Context> tmp26;
    TNode<Object> tmp27;
    TNode<JSReceiver> tmp28;
    ca_.Bind(&block7, &tmp26, &tmp27, &tmp28);
    ca_.SetSourcePosition("../../src/builtins/object.tq", 55);
    ca_.SetSourcePosition("../../src/builtins/object.tq", 54);
    TNode<Object> tmp29;
    tmp29 = CodeStubAssembler(state_).CallRuntime(Runtime::kJSReceiverPreventExtensionsDontThrow, tmp26, tmp28); 
    USE(tmp29);
    ca_.Goto(&block1, tmp26, tmp27, tmp29);
  }

  if (block6.is_used()) {
    TNode<Context> tmp30;
    TNode<Object> tmp31;
    TNode<JSReceiver> tmp32;
    TNode<JSProxy> tmp33;
    ca_.Bind(&block6, &tmp30, &tmp31, &tmp32, &tmp33);
    ca_.SetSourcePosition("../../src/builtins/object.tq", 56);
    TNode<Oddball> tmp34;
    USE(tmp34);
    tmp34 = False_66(state_);
    TNode<Object> tmp35;
    tmp35 = CodeStubAssembler(state_).CallBuiltin(Builtins::kProxyPreventExtensions, tmp30, tmp33, tmp34);
    USE(tmp35);
    ca_.Goto(&block1, tmp30, tmp31, tmp35);
  }

  if (block1.is_used()) {
    TNode<Context> tmp36;
    TNode<Object> tmp37;
    TNode<Object> tmp38;
    ca_.Bind(&block1, &tmp36, &tmp37, &tmp38);
    ca_.SetSourcePosition("../../src/builtins/object.tq", 49);
    ca_.Goto(&block10, tmp36, tmp37, tmp38);
  }

    TNode<Context> tmp39;
    TNode<Object> tmp40;
    TNode<Object> tmp41;
    ca_.Bind(&block10, &tmp39, &tmp40, &tmp41);
  return TNode<Object>{tmp41};
}

TNode<Object> ObjectGetPrototypeOf_316(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_object) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_object);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../src/builtins/object.tq", 61);
    TNode<JSReceiver> tmp2;
    USE(tmp2);
    tmp2 = CodeStubAssembler(state_).ToObject_Inline(TNode<Context>{tmp0}, TNode<Object>{tmp1});
    ca_.SetSourcePosition("../../src/builtins/object.tq", 62);
    TNode<Object> tmp3;
    USE(tmp3);
    tmp3 = JSReceiverGetPrototypeOf_317(state_, TNode<Context>{tmp0}, TNode<JSReceiver>{tmp2});
    ca_.Goto(&block1, tmp0, tmp1, tmp3);
  }

  if (block1.is_used()) {
    TNode<Context> tmp4;
    TNode<Object> tmp5;
    TNode<Object> tmp6;
    ca_.Bind(&block1, &tmp4, &tmp5, &tmp6);
    ca_.SetSourcePosition("../../src/builtins/object.tq", 59);
    ca_.Goto(&block2, tmp4, tmp5, tmp6);
  }

    TNode<Context> tmp7;
    TNode<Object> tmp8;
    TNode<Object> tmp9;
    ca_.Bind(&block2, &tmp7, &tmp8, &tmp9);
  return TNode<Object>{tmp9};
}

TNode<Object> JSReceiverGetPrototypeOf_317(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSReceiver> p_object) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, JSReceiver> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, JSReceiver, JSProxy> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, JSProxy> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSReceiver, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_object);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<JSReceiver> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../src/builtins/object.tq", 68);
    TNode<JSProxy> tmp2;
    USE(tmp2);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp2 = Cast7JSProxy_107(state_, TNode<HeapObject>{tmp1}, &label0);
    ca_.Goto(&block4, tmp0, tmp1, tmp1, tmp2);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block5, tmp0, tmp1, tmp1);
    }
  }

  if (block5.is_used()) {
    TNode<Context> tmp3;
    TNode<JSReceiver> tmp4;
    TNode<JSReceiver> tmp5;
    ca_.Bind(&block5, &tmp3, &tmp4, &tmp5);
    ca_.Goto(&block3, tmp3, tmp4);
  }

  if (block4.is_used()) {
    TNode<Context> tmp6;
    TNode<JSReceiver> tmp7;
    TNode<JSReceiver> tmp8;
    TNode<JSProxy> tmp9;
    ca_.Bind(&block4, &tmp6, &tmp7, &tmp8, &tmp9);
    ca_.Goto(&block2, tmp6, tmp7, tmp9);
  }

  if (block3.is_used()) {
    TNode<Context> tmp10;
    TNode<JSReceiver> tmp11;
    ca_.Bind(&block3, &tmp10, &tmp11);
    ca_.SetSourcePosition("../../src/builtins/object.tq", 69);
    TNode<Object> tmp12;
    tmp12 = CodeStubAssembler(state_).CallRuntime(Runtime::kJSReceiverGetPrototypeOf, tmp10, tmp11); 
    USE(tmp12);
    ca_.Goto(&block1, tmp10, tmp11, tmp12);
  }

  if (block2.is_used()) {
    TNode<Context> tmp13;
    TNode<JSReceiver> tmp14;
    TNode<JSProxy> tmp15;
    ca_.Bind(&block2, &tmp13, &tmp14, &tmp15);
    ca_.SetSourcePosition("../../src/builtins/object.tq", 70);
    TNode<Object> tmp16;
    tmp16 = CodeStubAssembler(state_).CallBuiltin(Builtins::kProxyGetPrototypeOf, tmp13, tmp15);
    USE(tmp16);
    ca_.Goto(&block1, tmp13, tmp14, tmp16);
  }

  if (block1.is_used()) {
    TNode<Context> tmp17;
    TNode<JSReceiver> tmp18;
    TNode<Object> tmp19;
    ca_.Bind(&block1, &tmp17, &tmp18, &tmp19);
    ca_.SetSourcePosition("../../src/builtins/object.tq", 65);
    ca_.Goto(&block6, tmp17, tmp18, tmp19);
  }

    TNode<Context> tmp20;
    TNode<JSReceiver> tmp21;
    TNode<Object> tmp22;
    ca_.Bind(&block6, &tmp20, &tmp21, &tmp22);
  return TNode<Object>{tmp22};
}

TNode<Object> ObjectSetPrototypeOfThrow_318(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_object, TNode<HeapObject> p_proto) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject, Object, JSReceiver> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject, JSReceiver> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject, JSReceiver, JSReceiver> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject, JSReceiver, JSReceiver, JSProxy> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject, JSReceiver> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject, JSReceiver, JSProxy> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject, Object> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_object, p_proto);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Object> tmp1;
    TNode<HeapObject> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../src/builtins/object.tq", 76);
    TNode<JSReceiver> tmp3;
    USE(tmp3);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp3 = Cast10JSReceiver_1427(state_, TNode<Context>{tmp0}, TNode<Object>{tmp1}, &label0);
    ca_.Goto(&block4, tmp0, tmp1, tmp2, tmp1, tmp3);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block5, tmp0, tmp1, tmp2, tmp1);
    }
  }

  if (block5.is_used()) {
    TNode<Context> tmp4;
    TNode<Object> tmp5;
    TNode<HeapObject> tmp6;
    TNode<Object> tmp7;
    ca_.Bind(&block5, &tmp4, &tmp5, &tmp6, &tmp7);
    ca_.Goto(&block3, tmp4, tmp5, tmp6);
  }

  if (block4.is_used()) {
    TNode<Context> tmp8;
    TNode<Object> tmp9;
    TNode<HeapObject> tmp10;
    TNode<Object> tmp11;
    TNode<JSReceiver> tmp12;
    ca_.Bind(&block4, &tmp8, &tmp9, &tmp10, &tmp11, &tmp12);
    ca_.Goto(&block2, tmp8, tmp9, tmp10, tmp12);
  }

  if (block3.is_used()) {
    TNode<Context> tmp13;
    TNode<Object> tmp14;
    TNode<HeapObject> tmp15;
    ca_.Bind(&block3, &tmp13, &tmp14, &tmp15);
    ca_.Goto(&block1, tmp13, tmp14, tmp15, tmp14);
  }

  if (block2.is_used()) {
    TNode<Context> tmp16;
    TNode<Object> tmp17;
    TNode<HeapObject> tmp18;
    TNode<JSReceiver> tmp19;
    ca_.Bind(&block2, &tmp16, &tmp17, &tmp18, &tmp19);
    ca_.SetSourcePosition("../../src/builtins/object.tq", 77);
    TNode<JSProxy> tmp20;
    USE(tmp20);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp20 = Cast7JSProxy_107(state_, TNode<HeapObject>{tmp19}, &label0);
    ca_.Goto(&block8, tmp16, tmp17, tmp18, tmp19, tmp19, tmp20);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block9, tmp16, tmp17, tmp18, tmp19, tmp19);
    }
  }

  if (block9.is_used()) {
    TNode<Context> tmp21;
    TNode<Object> tmp22;
    TNode<HeapObject> tmp23;
    TNode<JSReceiver> tmp24;
    TNode<JSReceiver> tmp25;
    ca_.Bind(&block9, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25);
    ca_.Goto(&block7, tmp21, tmp22, tmp23, tmp24);
  }

  if (block8.is_used()) {
    TNode<Context> tmp26;
    TNode<Object> tmp27;
    TNode<HeapObject> tmp28;
    TNode<JSReceiver> tmp29;
    TNode<JSReceiver> tmp30;
    TNode<JSProxy> tmp31;
    ca_.Bind(&block8, &tmp26, &tmp27, &tmp28, &tmp29, &tmp30, &tmp31);
    ca_.Goto(&block6, tmp26, tmp27, tmp28, tmp29, tmp31);
  }

  if (block7.is_used()) {
    TNode<Context> tmp32;
    TNode<Object> tmp33;
    TNode<HeapObject> tmp34;
    TNode<JSReceiver> tmp35;
    ca_.Bind(&block7, &tmp32, &tmp33, &tmp34, &tmp35);
    ca_.SetSourcePosition("../../src/builtins/object.tq", 79);
    ca_.SetSourcePosition("../../src/builtins/object.tq", 78);
    TNode<Object> tmp36;
    tmp36 = CodeStubAssembler(state_).CallRuntime(Runtime::kJSReceiverSetPrototypeOfThrow, tmp32, tmp35, tmp34); 
    USE(tmp36);
    ca_.Goto(&block1, tmp32, tmp33, tmp34, tmp36);
  }

  if (block6.is_used()) {
    TNode<Context> tmp37;
    TNode<Object> tmp38;
    TNode<HeapObject> tmp39;
    TNode<JSReceiver> tmp40;
    TNode<JSProxy> tmp41;
    ca_.Bind(&block6, &tmp37, &tmp38, &tmp39, &tmp40, &tmp41);
    ca_.SetSourcePosition("../../src/builtins/object.tq", 80);
    TNode<Oddball> tmp42;
    USE(tmp42);
    tmp42 = True_65(state_);
    TNode<Object> tmp43;
    tmp43 = CodeStubAssembler(state_).CallBuiltin(Builtins::kProxySetPrototypeOf, tmp37, tmp41, tmp39, tmp42);
    USE(tmp43);
    ca_.SetSourcePosition("../../src/builtins/object.tq", 81);
    ca_.Goto(&block1, tmp37, tmp38, tmp39, tmp40);
  }

  if (block1.is_used()) {
    TNode<Context> tmp44;
    TNode<Object> tmp45;
    TNode<HeapObject> tmp46;
    TNode<Object> tmp47;
    ca_.Bind(&block1, &tmp44, &tmp45, &tmp46, &tmp47);
    ca_.SetSourcePosition("../../src/builtins/object.tq", 73);
    ca_.Goto(&block10, tmp44, tmp45, tmp46, tmp47);
  }

    TNode<Context> tmp48;
    TNode<Object> tmp49;
    TNode<HeapObject> tmp50;
    TNode<Object> tmp51;
    ca_.Bind(&block10, &tmp48, &tmp49, &tmp50, &tmp51);
  return TNode<Object>{tmp51};
}

TNode<Object> ObjectSetPrototypeOfDontThrow_319(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_object, TNode<HeapObject> p_proto) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject, Object, JSReceiver> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject, JSReceiver> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject, JSReceiver, JSReceiver> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject, JSReceiver, JSReceiver, JSProxy> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject, JSReceiver> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject, JSReceiver, JSProxy> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject, Object> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_object, p_proto);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Object> tmp1;
    TNode<HeapObject> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../src/builtins/object.tq", 87);
    TNode<JSReceiver> tmp3;
    USE(tmp3);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp3 = Cast10JSReceiver_1427(state_, TNode<Context>{tmp0}, TNode<Object>{tmp1}, &label0);
    ca_.Goto(&block4, tmp0, tmp1, tmp2, tmp1, tmp3);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block5, tmp0, tmp1, tmp2, tmp1);
    }
  }

  if (block5.is_used()) {
    TNode<Context> tmp4;
    TNode<Object> tmp5;
    TNode<HeapObject> tmp6;
    TNode<Object> tmp7;
    ca_.Bind(&block5, &tmp4, &tmp5, &tmp6, &tmp7);
    ca_.Goto(&block3, tmp4, tmp5, tmp6);
  }

  if (block4.is_used()) {
    TNode<Context> tmp8;
    TNode<Object> tmp9;
    TNode<HeapObject> tmp10;
    TNode<Object> tmp11;
    TNode<JSReceiver> tmp12;
    ca_.Bind(&block4, &tmp8, &tmp9, &tmp10, &tmp11, &tmp12);
    ca_.Goto(&block2, tmp8, tmp9, tmp10, tmp12);
  }

  if (block3.is_used()) {
    TNode<Context> tmp13;
    TNode<Object> tmp14;
    TNode<HeapObject> tmp15;
    ca_.Bind(&block3, &tmp13, &tmp14, &tmp15);
    TNode<Oddball> tmp16;
    USE(tmp16);
    tmp16 = False_66(state_);
    ca_.Goto(&block1, tmp13, tmp14, tmp15, tmp16);
  }

  if (block2.is_used()) {
    TNode<Context> tmp17;
    TNode<Object> tmp18;
    TNode<HeapObject> tmp19;
    TNode<JSReceiver> tmp20;
    ca_.Bind(&block2, &tmp17, &tmp18, &tmp19, &tmp20);
    ca_.SetSourcePosition("../../src/builtins/object.tq", 88);
    TNode<JSProxy> tmp21;
    USE(tmp21);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp21 = Cast7JSProxy_107(state_, TNode<HeapObject>{tmp20}, &label0);
    ca_.Goto(&block8, tmp17, tmp18, tmp19, tmp20, tmp20, tmp21);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block9, tmp17, tmp18, tmp19, tmp20, tmp20);
    }
  }

  if (block9.is_used()) {
    TNode<Context> tmp22;
    TNode<Object> tmp23;
    TNode<HeapObject> tmp24;
    TNode<JSReceiver> tmp25;
    TNode<JSReceiver> tmp26;
    ca_.Bind(&block9, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26);
    ca_.Goto(&block7, tmp22, tmp23, tmp24, tmp25);
  }

  if (block8.is_used()) {
    TNode<Context> tmp27;
    TNode<Object> tmp28;
    TNode<HeapObject> tmp29;
    TNode<JSReceiver> tmp30;
    TNode<JSReceiver> tmp31;
    TNode<JSProxy> tmp32;
    ca_.Bind(&block8, &tmp27, &tmp28, &tmp29, &tmp30, &tmp31, &tmp32);
    ca_.Goto(&block6, tmp27, tmp28, tmp29, tmp30, tmp32);
  }

  if (block7.is_used()) {
    TNode<Context> tmp33;
    TNode<Object> tmp34;
    TNode<HeapObject> tmp35;
    TNode<JSReceiver> tmp36;
    ca_.Bind(&block7, &tmp33, &tmp34, &tmp35, &tmp36);
    ca_.SetSourcePosition("../../src/builtins/object.tq", 90);
    ca_.SetSourcePosition("../../src/builtins/object.tq", 89);
    TNode<Object> tmp37;
    tmp37 = CodeStubAssembler(state_).CallRuntime(Runtime::kJSReceiverSetPrototypeOfDontThrow, tmp33, tmp36, tmp35); 
    USE(tmp37);
    ca_.Goto(&block1, tmp33, tmp34, tmp35, tmp37);
  }

  if (block6.is_used()) {
    TNode<Context> tmp38;
    TNode<Object> tmp39;
    TNode<HeapObject> tmp40;
    TNode<JSReceiver> tmp41;
    TNode<JSProxy> tmp42;
    ca_.Bind(&block6, &tmp38, &tmp39, &tmp40, &tmp41, &tmp42);
    ca_.SetSourcePosition("../../src/builtins/object.tq", 91);
    TNode<Oddball> tmp43;
    USE(tmp43);
    tmp43 = False_66(state_);
    TNode<Object> tmp44;
    tmp44 = CodeStubAssembler(state_).CallBuiltin(Builtins::kProxySetPrototypeOf, tmp38, tmp42, tmp40, tmp43);
    USE(tmp44);
    ca_.Goto(&block1, tmp38, tmp39, tmp40, tmp44);
  }

  if (block1.is_used()) {
    TNode<Context> tmp45;
    TNode<Object> tmp46;
    TNode<HeapObject> tmp47;
    TNode<Object> tmp48;
    ca_.Bind(&block1, &tmp45, &tmp46, &tmp47, &tmp48);
    ca_.SetSourcePosition("../../src/builtins/object.tq", 84);
    ca_.Goto(&block10, tmp45, tmp46, tmp47, tmp48);
  }

    TNode<Context> tmp49;
    TNode<Object> tmp50;
    TNode<HeapObject> tmp51;
    TNode<Object> tmp52;
    ca_.Bind(&block10, &tmp49, &tmp50, &tmp51, &tmp52);
  return TNode<Object>{tmp52};
}

TF_BUILTIN(ObjectIsExtensible, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  TNode<Object> parameter1 = UncheckedCast<Object>(Parameter(Descriptor::kObject));
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../src/builtins/object.tq", 99);
    TNode<Object> tmp2;
    USE(tmp2);
    tmp2 = ObjectIsExtensible_313(state_, TNode<Context>{tmp0}, TNode<Object>{tmp1});
    CodeStubAssembler(state_).Return(tmp2);
  }
}

TF_BUILTIN(ObjectPreventExtensions, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  TNode<Object> parameter1 = UncheckedCast<Object>(Parameter(Descriptor::kObject));
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../src/builtins/object.tq", 107);
    TNode<Object> tmp2;
    USE(tmp2);
    tmp2 = ObjectPreventExtensionsThrow_314(state_, TNode<Context>{tmp0}, TNode<Object>{tmp1});
    CodeStubAssembler(state_).Return(tmp2);
  }
}

TF_BUILTIN(ObjectGetPrototypeOf, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  TNode<Object> parameter1 = UncheckedCast<Object>(Parameter(Descriptor::kObject));
  USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../src/builtins/object.tq", 115);
    TNode<Object> tmp2;
    USE(tmp2);
    tmp2 = ObjectGetPrototypeOf_316(state_, TNode<Context>{tmp0}, TNode<Object>{tmp1});
    CodeStubAssembler(state_).Return(tmp2);
  }
}

TF_BUILTIN(ObjectSetPrototypeOf, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  TNode<Object> parameter1 = UncheckedCast<Object>(Parameter(Descriptor::kObject));
  USE(parameter1);
  TNode<Object> parameter2 = UncheckedCast<Object>(Parameter(Descriptor::kProto));
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, HeapObject> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Object> tmp1;
    TNode<Object> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../src/builtins/object.tq", 124);
    TNode<Object> tmp3;
    USE(tmp3);
    tmp3 = RequireObjectCoercible_243(state_, TNode<Context>{tmp0}, TNode<Object>{tmp1}, "Object.setPrototypeOf");
    ca_.SetSourcePosition("../../src/builtins/object.tq", 132);
    ca_.SetSourcePosition("../../src/builtins/object.tq", 133);
    TNode<HeapObject> tmp4;
    USE(tmp4);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp4 = Cast21UT6ATNull10JSReceiver_1488(state_, TNode<Context>{tmp0}, TNode<Object>{tmp2}, &label0);
    ca_.Goto(&block3, tmp0, tmp1, tmp2, tmp2, tmp2, tmp4);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1, tmp2, tmp2, tmp2);
    }
  }

  if (block4.is_used()) {
    TNode<Context> tmp5;
    TNode<Object> tmp6;
    TNode<Object> tmp7;
    TNode<Object> tmp8;
    TNode<Object> tmp9;
    ca_.Bind(&block4, &tmp5, &tmp6, &tmp7, &tmp8, &tmp9);
    ca_.Goto(&block2, tmp5, tmp6, tmp7, tmp8);
  }

  if (block3.is_used()) {
    TNode<Context> tmp10;
    TNode<Object> tmp11;
    TNode<Object> tmp12;
    TNode<Object> tmp13;
    TNode<Object> tmp14;
    TNode<HeapObject> tmp15;
    ca_.Bind(&block3, &tmp10, &tmp11, &tmp12, &tmp13, &tmp14, &tmp15);
    ca_.SetSourcePosition("../../src/builtins/object.tq", 134);
    TNode<Object> tmp16;
    USE(tmp16);
    tmp16 = ObjectSetPrototypeOfThrow_318(state_, TNode<Context>{tmp10}, TNode<Object>{tmp11}, TNode<HeapObject>{tmp15});
    CodeStubAssembler(state_).Return(tmp16);
  }

  if (block2.is_used()) {
    TNode<Context> tmp17;
    TNode<Object> tmp18;
    TNode<Object> tmp19;
    TNode<Object> tmp20;
    ca_.Bind(&block2, &tmp17, &tmp18, &tmp19, &tmp20);
    ca_.SetSourcePosition("../../src/builtins/object.tq", 136);
    ca_.SetSourcePosition("../../src/builtins/object.tq", 137);
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{tmp17}, MessageTemplate::kProtoObjectOrNull, TNode<Object>{tmp19});
  }
}

TNode<HeapObject> Cast21UT6ATNull10JSReceiver_1488(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, HeapObject> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject, HeapObject> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
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
    TNode<HeapObject> tmp10;
    USE(tmp10);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp10 = Cast21UT6ATNull10JSReceiver_146(state_, TNode<HeapObject>{tmp9}, &label0);
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
    TNode<HeapObject> tmp17;
    ca_.Bind(&block5, &tmp14, &tmp15, &tmp16, &tmp17);
    ca_.Goto(&block2, tmp14, tmp15, tmp17);
  }

  if (block2.is_used()) {
    TNode<Context> tmp18;
    TNode<Object> tmp19;
    TNode<HeapObject> tmp20;
    ca_.Bind(&block2, &tmp18, &tmp19, &tmp20);
    ca_.SetSourcePosition("../../src/builtins/object.tq", 133);
    ca_.Goto(&block7, tmp18, tmp19, tmp20);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    TNode<Context> tmp21;
    TNode<Object> tmp22;
    TNode<HeapObject> tmp23;
    ca_.Bind(&block7, &tmp21, &tmp22, &tmp23);
  return TNode<HeapObject>{tmp23};
}

}  // namespace internal
}  // namespace v8

