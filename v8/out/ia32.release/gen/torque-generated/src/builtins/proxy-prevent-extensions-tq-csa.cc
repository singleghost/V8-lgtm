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

TF_BUILTIN(ProxyPreventExtensions, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  TNode<JSProxy> parameter1 = UncheckedCast<JSProxy>(Parameter(Descriptor::kProxy));
  USE(parameter1);
  TNode<Oddball> parameter2 = UncheckedCast<Oddball>(Parameter(Descriptor::kDoThrow));
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Oddball> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Oddball, HeapObject> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Oddball, HeapObject, JSReceiver> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Oddball, JSReceiver, HeapObject, JSReceiver> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Oddball, JSReceiver, HeapObject, JSReceiver, JSReceiver> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Oddball, JSReceiver, HeapObject> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Oddball, JSReceiver, HeapObject, JSReceiver> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Oddball, JSReceiver, HeapObject, JSReceiver, Object> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Oddball, JSReceiver, HeapObject, JSReceiver, Object, Object> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Oddball, JSReceiver, HeapObject, JSReceiver, Object, Object> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Oddball, JSReceiver, HeapObject, JSReceiver, Object> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Oddball, JSReceiver, HeapObject, JSReceiver, Object> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Oddball, JSReceiver, HeapObject, JSReceiver, Object> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Oddball, JSReceiver, HeapObject, JSReceiver, Object> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Oddball, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Oddball, Object> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Oddball, Object> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, Oddball> block2(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<JSProxy> tmp1;
    TNode<Oddball> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../src/builtins/proxy-prevent-extensions.tq", 14);
    CodeStubAssembler(state_).PerformStackCheck(TNode<Context>{tmp0});
    ca_.SetSourcePosition("../../src/builtins/proxy-prevent-extensions.tq", 22);
    TNode<IntPtrT> tmp3 = ca_.IntPtrConstant(JSProxy::kHandlerOffset);
    USE(tmp3);
    TNode<HeapObject>tmp4 = CodeStubAssembler(state_).LoadReference<HeapObject>(CodeStubAssembler::Reference{tmp1, tmp3});
    TNode<JSReceiver> tmp5;
    USE(tmp5);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp5 = Cast10JSReceiver_142(state_, TNode<HeapObject>{tmp4}, &label0);
    ca_.Goto(&block5, tmp0, tmp1, tmp2, tmp4, tmp5);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp0, tmp1, tmp2, tmp4);
    }
  }

  if (block6.is_used()) {
    TNode<Context> tmp6;
    TNode<JSProxy> tmp7;
    TNode<Oddball> tmp8;
    TNode<HeapObject> tmp9;
    ca_.Bind(&block6, &tmp6, &tmp7, &tmp8, &tmp9);
    ca_.Goto(&block2, tmp6, tmp7, tmp8);
  }

  if (block5.is_used()) {
    TNode<Context> tmp10;
    TNode<JSProxy> tmp11;
    TNode<Oddball> tmp12;
    TNode<HeapObject> tmp13;
    TNode<JSReceiver> tmp14;
    ca_.Bind(&block5, &tmp10, &tmp11, &tmp12, &tmp13, &tmp14);
    ca_.SetSourcePosition("../../src/builtins/proxy-prevent-extensions.tq", 25);
    TNode<IntPtrT> tmp15 = ca_.IntPtrConstant(JSProxy::kTargetOffset);
    USE(tmp15);
    TNode<HeapObject>tmp16 = CodeStubAssembler(state_).LoadReference<HeapObject>(CodeStubAssembler::Reference{tmp11, tmp15});
    ca_.SetSourcePosition("../../src/builtins/proxy-prevent-extensions.tq", 29);
    TNode<JSReceiver> tmp17;
    USE(tmp17);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp17 = GetMethod_247(state_, TNode<Context>{tmp10}, TNode<Object>{tmp14}, "preventExtensions", &label0);
    ca_.Goto(&block9, tmp10, tmp11, tmp12, tmp14, tmp16, tmp14, tmp17);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block10, tmp10, tmp11, tmp12, tmp14, tmp16, tmp14);
    }
  }

  if (block10.is_used()) {
    TNode<Context> tmp18;
    TNode<JSProxy> tmp19;
    TNode<Oddball> tmp20;
    TNode<JSReceiver> tmp21;
    TNode<HeapObject> tmp22;
    TNode<JSReceiver> tmp23;
    ca_.Bind(&block10, &tmp18, &tmp19, &tmp20, &tmp21, &tmp22, &tmp23);
    ca_.Goto(&block8, tmp18, tmp19, tmp20, tmp21, tmp22);
  }

  if (block9.is_used()) {
    TNode<Context> tmp24;
    TNode<JSProxy> tmp25;
    TNode<Oddball> tmp26;
    TNode<JSReceiver> tmp27;
    TNode<HeapObject> tmp28;
    TNode<JSReceiver> tmp29;
    TNode<JSReceiver> tmp30;
    ca_.Bind(&block9, &tmp24, &tmp25, &tmp26, &tmp27, &tmp28, &tmp29, &tmp30);
    ca_.Goto(&block7, tmp24, tmp25, tmp26, tmp27, tmp28, tmp30);
  }

  if (block8.is_used()) {
    TNode<Context> tmp31;
    TNode<JSProxy> tmp32;
    TNode<Oddball> tmp33;
    TNode<JSReceiver> tmp34;
    TNode<HeapObject> tmp35;
    ca_.Bind(&block8, &tmp31, &tmp32, &tmp33, &tmp34, &tmp35);
    ca_.SetSourcePosition("../../src/builtins/proxy-prevent-extensions.tq", 30);
    ca_.Goto(&block4, tmp31, tmp32, tmp33, tmp35);
  }

  if (block7.is_used()) {
    TNode<Context> tmp36;
    TNode<JSProxy> tmp37;
    TNode<Oddball> tmp38;
    TNode<JSReceiver> tmp39;
    TNode<HeapObject> tmp40;
    TNode<JSReceiver> tmp41;
    ca_.Bind(&block7, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40, &tmp41);
    ca_.SetSourcePosition("../../src/builtins/proxy-prevent-extensions.tq", 29);
    ca_.SetSourcePosition("../../src/builtins/proxy-prevent-extensions.tq", 34);
    TNode<Object> tmp42;
    USE(tmp42);
    tmp42 = CodeStubAssembler(state_).Call(TNode<Context>{tmp36}, TNode<JSReceiver>{tmp41}, TNode<Object>{tmp39}, TNode<Object>{tmp40});
    ca_.SetSourcePosition("../../src/builtins/proxy-prevent-extensions.tq", 39);
    TNode<BoolT> tmp43;
    USE(tmp43);
    tmp43 = ToBoolean_242(state_, TNode<Object>{tmp42});
    ca_.Branch(tmp43, &block11, &block12, tmp36, tmp37, tmp38, tmp39, tmp40, tmp41, tmp42);
  }

  if (block11.is_used()) {
    TNode<Context> tmp44;
    TNode<JSProxy> tmp45;
    TNode<Oddball> tmp46;
    TNode<JSReceiver> tmp47;
    TNode<HeapObject> tmp48;
    TNode<JSReceiver> tmp49;
    TNode<Object> tmp50;
    ca_.Bind(&block11, &tmp44, &tmp45, &tmp46, &tmp47, &tmp48, &tmp49, &tmp50);
    ca_.SetSourcePosition("../../src/builtins/proxy-prevent-extensions.tq", 40);
    TNode<Object> tmp51;
    USE(tmp51);
    tmp51 = ObjectIsExtensible_313(state_, TNode<Context>{tmp44}, TNode<Object>{tmp48});
    ca_.SetSourcePosition("../../src/builtins/proxy-prevent-extensions.tq", 42);
    TNode<Oddball> tmp52;
    USE(tmp52);
    tmp52 = True_65(state_);
    TNode<BoolT> tmp53;
    USE(tmp53);
    tmp53 = CodeStubAssembler(state_).TaggedEqual(TNode<Object>{tmp51}, TNode<HeapObject>{tmp52});
    ca_.Branch(tmp53, &block14, &block15, tmp44, tmp45, tmp46, tmp47, tmp48, tmp49, tmp50, tmp51);
  }

  if (block14.is_used()) {
    TNode<Context> tmp54;
    TNode<JSProxy> tmp55;
    TNode<Oddball> tmp56;
    TNode<JSReceiver> tmp57;
    TNode<HeapObject> tmp58;
    TNode<JSReceiver> tmp59;
    TNode<Object> tmp60;
    TNode<Object> tmp61;
    ca_.Bind(&block14, &tmp54, &tmp55, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61);
    ca_.SetSourcePosition("../../src/builtins/proxy-prevent-extensions.tq", 43);
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{tmp54}, MessageTemplate::kProxyPreventExtensionsExtensible);
  }

  if (block15.is_used()) {
    TNode<Context> tmp62;
    TNode<JSProxy> tmp63;
    TNode<Oddball> tmp64;
    TNode<JSReceiver> tmp65;
    TNode<HeapObject> tmp66;
    TNode<JSReceiver> tmp67;
    TNode<Object> tmp68;
    TNode<Object> tmp69;
    ca_.Bind(&block15, &tmp62, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67, &tmp68, &tmp69);
    ca_.SetSourcePosition("../../src/builtins/proxy-prevent-extensions.tq", 39);
    ca_.Goto(&block13, tmp62, tmp63, tmp64, tmp65, tmp66, tmp67, tmp68);
  }

  if (block12.is_used()) {
    TNode<Context> tmp70;
    TNode<JSProxy> tmp71;
    TNode<Oddball> tmp72;
    TNode<JSReceiver> tmp73;
    TNode<HeapObject> tmp74;
    TNode<JSReceiver> tmp75;
    TNode<Object> tmp76;
    ca_.Bind(&block12, &tmp70, &tmp71, &tmp72, &tmp73, &tmp74, &tmp75, &tmp76);
    ca_.SetSourcePosition("../../src/builtins/proxy-prevent-extensions.tq", 46);
    TNode<Oddball> tmp77;
    USE(tmp77);
    tmp77 = True_65(state_);
    TNode<BoolT> tmp78;
    USE(tmp78);
    tmp78 = CodeStubAssembler(state_).TaggedEqual(TNode<HeapObject>{tmp72}, TNode<HeapObject>{tmp77});
    ca_.Branch(tmp78, &block16, &block17, tmp70, tmp71, tmp72, tmp73, tmp74, tmp75, tmp76);
  }

  if (block16.is_used()) {
    TNode<Context> tmp79;
    TNode<JSProxy> tmp80;
    TNode<Oddball> tmp81;
    TNode<JSReceiver> tmp82;
    TNode<HeapObject> tmp83;
    TNode<JSReceiver> tmp84;
    TNode<Object> tmp85;
    ca_.Bind(&block16, &tmp79, &tmp80, &tmp81, &tmp82, &tmp83, &tmp84, &tmp85);
    ca_.SetSourcePosition("../../src/builtins/proxy-prevent-extensions.tq", 47);
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{tmp79}, MessageTemplate::kProxyTrapReturnedFalsish, "preventExtensions");
  }

  if (block17.is_used()) {
    TNode<Context> tmp86;
    TNode<JSProxy> tmp87;
    TNode<Oddball> tmp88;
    TNode<JSReceiver> tmp89;
    TNode<HeapObject> tmp90;
    TNode<JSReceiver> tmp91;
    TNode<Object> tmp92;
    ca_.Bind(&block17, &tmp86, &tmp87, &tmp88, &tmp89, &tmp90, &tmp91, &tmp92);
    ca_.SetSourcePosition("../../src/builtins/proxy-prevent-extensions.tq", 49);
    TNode<Oddball> tmp93;
    USE(tmp93);
    tmp93 = False_66(state_);
    CodeStubAssembler(state_).Return(tmp93);
  }

  if (block13.is_used()) {
    TNode<Context> tmp94;
    TNode<JSProxy> tmp95;
    TNode<Oddball> tmp96;
    TNode<JSReceiver> tmp97;
    TNode<HeapObject> tmp98;
    TNode<JSReceiver> tmp99;
    TNode<Object> tmp100;
    ca_.Bind(&block13, &tmp94, &tmp95, &tmp96, &tmp97, &tmp98, &tmp99, &tmp100);
    ca_.SetSourcePosition("../../src/builtins/proxy-prevent-extensions.tq", 53);
    TNode<Oddball> tmp101;
    USE(tmp101);
    tmp101 = True_65(state_);
    CodeStubAssembler(state_).Return(tmp101);
  }

  if (block4.is_used()) {
    TNode<Context> tmp102;
    TNode<JSProxy> tmp103;
    TNode<Oddball> tmp104;
    TNode<Object> tmp105;
    ca_.Bind(&block4, &tmp102, &tmp103, &tmp104, &tmp105);
    ca_.SetSourcePosition("../../src/builtins/proxy-prevent-extensions.tq", 57);
    TNode<Oddball> tmp106;
    USE(tmp106);
    tmp106 = True_65(state_);
    TNode<BoolT> tmp107;
    USE(tmp107);
    tmp107 = CodeStubAssembler(state_).TaggedEqual(TNode<HeapObject>{tmp104}, TNode<HeapObject>{tmp106});
    ca_.Branch(tmp107, &block18, &block19, tmp102, tmp103, tmp104, tmp105);
  }

  if (block18.is_used()) {
    TNode<Context> tmp108;
    TNode<JSProxy> tmp109;
    TNode<Oddball> tmp110;
    TNode<Object> tmp111;
    ca_.Bind(&block18, &tmp108, &tmp109, &tmp110, &tmp111);
    ca_.SetSourcePosition("../../src/builtins/proxy-prevent-extensions.tq", 58);
    TNode<Object> tmp112;
    USE(tmp112);
    tmp112 = ObjectPreventExtensionsThrow_314(state_, TNode<Context>{tmp108}, TNode<Object>{tmp111});
    CodeStubAssembler(state_).Return(tmp112);
  }

  if (block19.is_used()) {
    TNode<Context> tmp113;
    TNode<JSProxy> tmp114;
    TNode<Oddball> tmp115;
    TNode<Object> tmp116;
    ca_.Bind(&block19, &tmp113, &tmp114, &tmp115, &tmp116);
    ca_.SetSourcePosition("../../src/builtins/proxy-prevent-extensions.tq", 60);
    TNode<Object> tmp117;
    USE(tmp117);
    tmp117 = ObjectPreventExtensionsDontThrow_315(state_, TNode<Context>{tmp113}, TNode<Object>{tmp116});
    CodeStubAssembler(state_).Return(tmp117);
  }

  if (block2.is_used()) {
    TNode<Context> tmp118;
    TNode<JSProxy> tmp119;
    TNode<Oddball> tmp120;
    ca_.Bind(&block2, &tmp118, &tmp119, &tmp120);
    ca_.SetSourcePosition("../../src/builtins/proxy-prevent-extensions.tq", 63);
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{tmp118}, MessageTemplate::kProxyRevoked, "preventExtensions");
  }
}

}  // namespace internal
}  // namespace v8

