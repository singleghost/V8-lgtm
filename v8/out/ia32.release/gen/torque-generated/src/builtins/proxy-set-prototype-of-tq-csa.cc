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

TF_BUILTIN(ProxySetPrototypeOf, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  TNode<JSProxy> parameter1 = UncheckedCast<JSProxy>(Parameter(Descriptor::kProxy));
  USE(parameter1);
  TNode<HeapObject> parameter2 = UncheckedCast<HeapObject>(Parameter(Descriptor::kProto));
  USE(parameter2);
  TNode<Oddball> parameter3 = UncheckedCast<Oddball>(Parameter(Descriptor::kDoThrow));
  USE(parameter3);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, HeapObject, Oddball> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, HeapObject, Oddball, HeapObject> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, HeapObject, Oddball, HeapObject, JSReceiver> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, HeapObject, Oddball, JSReceiver, HeapObject, JSReceiver> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, HeapObject, Oddball, JSReceiver, HeapObject, JSReceiver, JSReceiver> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, HeapObject, Oddball, JSReceiver, HeapObject> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, HeapObject, Oddball, JSReceiver, HeapObject, JSReceiver> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, HeapObject, Oddball, JSReceiver, HeapObject, JSReceiver, Object> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, HeapObject, Oddball, JSReceiver, HeapObject, JSReceiver, Object> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, HeapObject, Oddball, JSReceiver, HeapObject, JSReceiver, Object> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, HeapObject, Oddball, JSReceiver, HeapObject, JSReceiver, Object> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, HeapObject, Oddball, JSReceiver, HeapObject, JSReceiver, Object, Object> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, HeapObject, Oddball, JSReceiver, HeapObject, JSReceiver, Object, Object> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, HeapObject, Oddball, JSReceiver, HeapObject, JSReceiver, Object, Object, Object> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, HeapObject, Oddball, JSReceiver, HeapObject, JSReceiver, Object, Object, Object> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, HeapObject, Oddball, Object, HeapObject> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, HeapObject, Oddball, Object, HeapObject> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, HeapObject, Oddball, Object, HeapObject> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSProxy, HeapObject, Oddball> block2(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2, parameter3);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<JSProxy> tmp1;
    TNode<HeapObject> tmp2;
    TNode<Oddball> tmp3;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3);
    ca_.SetSourcePosition("../../src/builtins/proxy-set-prototype-of.tq", 14);
    CodeStubAssembler(state_).PerformStackCheck(TNode<Context>{tmp0});
    ca_.SetSourcePosition("../../src/builtins/proxy-set-prototype-of.tq", 25);
    TNode<IntPtrT> tmp4 = ca_.IntPtrConstant(JSProxy::kHandlerOffset);
    USE(tmp4);
    TNode<HeapObject>tmp5 = CodeStubAssembler(state_).LoadReference<HeapObject>(CodeStubAssembler::Reference{tmp1, tmp4});
    TNode<JSReceiver> tmp6;
    USE(tmp6);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp6 = Cast10JSReceiver_142(state_, TNode<HeapObject>{tmp5}, &label0);
    ca_.Goto(&block5, tmp0, tmp1, tmp2, tmp3, tmp5, tmp6);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp0, tmp1, tmp2, tmp3, tmp5);
    }
  }

  if (block6.is_used()) {
    TNode<Context> tmp7;
    TNode<JSProxy> tmp8;
    TNode<HeapObject> tmp9;
    TNode<Oddball> tmp10;
    TNode<HeapObject> tmp11;
    ca_.Bind(&block6, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11);
    ca_.Goto(&block2, tmp7, tmp8, tmp9, tmp10);
  }

  if (block5.is_used()) {
    TNode<Context> tmp12;
    TNode<JSProxy> tmp13;
    TNode<HeapObject> tmp14;
    TNode<Oddball> tmp15;
    TNode<HeapObject> tmp16;
    TNode<JSReceiver> tmp17;
    ca_.Bind(&block5, &tmp12, &tmp13, &tmp14, &tmp15, &tmp16, &tmp17);
    ca_.SetSourcePosition("../../src/builtins/proxy-set-prototype-of.tq", 28);
    TNode<IntPtrT> tmp18 = ca_.IntPtrConstant(JSProxy::kTargetOffset);
    USE(tmp18);
    TNode<HeapObject>tmp19 = CodeStubAssembler(state_).LoadReference<HeapObject>(CodeStubAssembler::Reference{tmp13, tmp18});
    ca_.SetSourcePosition("../../src/builtins/proxy-set-prototype-of.tq", 32);
    TNode<JSReceiver> tmp20;
    USE(tmp20);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp20 = GetMethod_247(state_, TNode<Context>{tmp12}, TNode<Object>{tmp17}, "setPrototypeOf", &label0);
    ca_.Goto(&block9, tmp12, tmp13, tmp14, tmp15, tmp17, tmp19, tmp17, tmp20);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block10, tmp12, tmp13, tmp14, tmp15, tmp17, tmp19, tmp17);
    }
  }

  if (block10.is_used()) {
    TNode<Context> tmp21;
    TNode<JSProxy> tmp22;
    TNode<HeapObject> tmp23;
    TNode<Oddball> tmp24;
    TNode<JSReceiver> tmp25;
    TNode<HeapObject> tmp26;
    TNode<JSReceiver> tmp27;
    ca_.Bind(&block10, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26, &tmp27);
    ca_.Goto(&block8, tmp21, tmp22, tmp23, tmp24, tmp25, tmp26);
  }

  if (block9.is_used()) {
    TNode<Context> tmp28;
    TNode<JSProxy> tmp29;
    TNode<HeapObject> tmp30;
    TNode<Oddball> tmp31;
    TNode<JSReceiver> tmp32;
    TNode<HeapObject> tmp33;
    TNode<JSReceiver> tmp34;
    TNode<JSReceiver> tmp35;
    ca_.Bind(&block9, &tmp28, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33, &tmp34, &tmp35);
    ca_.Goto(&block7, tmp28, tmp29, tmp30, tmp31, tmp32, tmp33, tmp35);
  }

  if (block8.is_used()) {
    TNode<Context> tmp36;
    TNode<JSProxy> tmp37;
    TNode<HeapObject> tmp38;
    TNode<Oddball> tmp39;
    TNode<JSReceiver> tmp40;
    TNode<HeapObject> tmp41;
    ca_.Bind(&block8, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40, &tmp41);
    ca_.SetSourcePosition("../../src/builtins/proxy-set-prototype-of.tq", 33);
    ca_.Goto(&block4, tmp36, tmp37, tmp38, tmp39, tmp41, tmp38);
  }

  if (block7.is_used()) {
    TNode<Context> tmp42;
    TNode<JSProxy> tmp43;
    TNode<HeapObject> tmp44;
    TNode<Oddball> tmp45;
    TNode<JSReceiver> tmp46;
    TNode<HeapObject> tmp47;
    TNode<JSReceiver> tmp48;
    ca_.Bind(&block7, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47, &tmp48);
    ca_.SetSourcePosition("../../src/builtins/proxy-set-prototype-of.tq", 32);
    ca_.SetSourcePosition("../../src/builtins/proxy-set-prototype-of.tq", 37);
    TNode<Object> tmp49;
    USE(tmp49);
    tmp49 = CodeStubAssembler(state_).Call(TNode<Context>{tmp42}, TNode<JSReceiver>{tmp48}, TNode<Object>{tmp46}, TNode<Object>{tmp47}, TNode<Object>{tmp44});
    ca_.SetSourcePosition("../../src/builtins/proxy-set-prototype-of.tq", 40);
    TNode<BoolT> tmp50;
    USE(tmp50);
    tmp50 = ToBoolean_242(state_, TNode<Object>{tmp49});
    TNode<BoolT> tmp51;
    USE(tmp51);
    tmp51 = CodeStubAssembler(state_).Word32BinaryNot(TNode<BoolT>{tmp50});
    ca_.Branch(tmp51, &block11, &block12, tmp42, tmp43, tmp44, tmp45, tmp46, tmp47, tmp48, tmp49);
  }

  if (block11.is_used()) {
    TNode<Context> tmp52;
    TNode<JSProxy> tmp53;
    TNode<HeapObject> tmp54;
    TNode<Oddball> tmp55;
    TNode<JSReceiver> tmp56;
    TNode<HeapObject> tmp57;
    TNode<JSReceiver> tmp58;
    TNode<Object> tmp59;
    ca_.Bind(&block11, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56, &tmp57, &tmp58, &tmp59);
    ca_.SetSourcePosition("../../src/builtins/proxy-set-prototype-of.tq", 41);
    TNode<Oddball> tmp60;
    USE(tmp60);
    tmp60 = True_65(state_);
    TNode<BoolT> tmp61;
    USE(tmp61);
    tmp61 = CodeStubAssembler(state_).TaggedEqual(TNode<HeapObject>{tmp55}, TNode<HeapObject>{tmp60});
    ca_.Branch(tmp61, &block13, &block14, tmp52, tmp53, tmp54, tmp55, tmp56, tmp57, tmp58, tmp59);
  }

  if (block13.is_used()) {
    TNode<Context> tmp62;
    TNode<JSProxy> tmp63;
    TNode<HeapObject> tmp64;
    TNode<Oddball> tmp65;
    TNode<JSReceiver> tmp66;
    TNode<HeapObject> tmp67;
    TNode<JSReceiver> tmp68;
    TNode<Object> tmp69;
    ca_.Bind(&block13, &tmp62, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67, &tmp68, &tmp69);
    ca_.SetSourcePosition("../../src/builtins/proxy-set-prototype-of.tq", 42);
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{tmp62}, MessageTemplate::kProxyTrapReturnedFalsishFor, "setPrototypeOf");
  }

  if (block14.is_used()) {
    TNode<Context> tmp70;
    TNode<JSProxy> tmp71;
    TNode<HeapObject> tmp72;
    TNode<Oddball> tmp73;
    TNode<JSReceiver> tmp74;
    TNode<HeapObject> tmp75;
    TNode<JSReceiver> tmp76;
    TNode<Object> tmp77;
    ca_.Bind(&block14, &tmp70, &tmp71, &tmp72, &tmp73, &tmp74, &tmp75, &tmp76, &tmp77);
    ca_.SetSourcePosition("../../src/builtins/proxy-set-prototype-of.tq", 44);
    TNode<Oddball> tmp78;
    USE(tmp78);
    tmp78 = False_66(state_);
    CodeStubAssembler(state_).Return(tmp78);
  }

  if (block12.is_used()) {
    TNode<Context> tmp79;
    TNode<JSProxy> tmp80;
    TNode<HeapObject> tmp81;
    TNode<Oddball> tmp82;
    TNode<JSReceiver> tmp83;
    TNode<HeapObject> tmp84;
    TNode<JSReceiver> tmp85;
    TNode<Object> tmp86;
    ca_.Bind(&block12, &tmp79, &tmp80, &tmp81, &tmp82, &tmp83, &tmp84, &tmp85, &tmp86);
    ca_.SetSourcePosition("../../src/builtins/proxy-set-prototype-of.tq", 49);
    TNode<Object> tmp87;
    USE(tmp87);
    tmp87 = ObjectIsExtensible_313(state_, TNode<Context>{tmp79}, TNode<Object>{tmp84});
    ca_.SetSourcePosition("../../src/builtins/proxy-set-prototype-of.tq", 51);
    TNode<Oddball> tmp88;
    USE(tmp88);
    tmp88 = True_65(state_);
    TNode<BoolT> tmp89;
    USE(tmp89);
    tmp89 = CodeStubAssembler(state_).TaggedEqual(TNode<Object>{tmp87}, TNode<HeapObject>{tmp88});
    ca_.Branch(tmp89, &block15, &block16, tmp79, tmp80, tmp81, tmp82, tmp83, tmp84, tmp85, tmp86, tmp87);
  }

  if (block15.is_used()) {
    TNode<Context> tmp90;
    TNode<JSProxy> tmp91;
    TNode<HeapObject> tmp92;
    TNode<Oddball> tmp93;
    TNode<JSReceiver> tmp94;
    TNode<HeapObject> tmp95;
    TNode<JSReceiver> tmp96;
    TNode<Object> tmp97;
    TNode<Object> tmp98;
    ca_.Bind(&block15, &tmp90, &tmp91, &tmp92, &tmp93, &tmp94, &tmp95, &tmp96, &tmp97, &tmp98);
    ca_.SetSourcePosition("../../src/builtins/proxy-set-prototype-of.tq", 52);
    TNode<Oddball> tmp99;
    USE(tmp99);
    tmp99 = True_65(state_);
    CodeStubAssembler(state_).Return(tmp99);
  }

  if (block16.is_used()) {
    TNode<Context> tmp100;
    TNode<JSProxy> tmp101;
    TNode<HeapObject> tmp102;
    TNode<Oddball> tmp103;
    TNode<JSReceiver> tmp104;
    TNode<HeapObject> tmp105;
    TNode<JSReceiver> tmp106;
    TNode<Object> tmp107;
    TNode<Object> tmp108;
    ca_.Bind(&block16, &tmp100, &tmp101, &tmp102, &tmp103, &tmp104, &tmp105, &tmp106, &tmp107, &tmp108);
    ca_.SetSourcePosition("../../src/builtins/proxy-set-prototype-of.tq", 56);
    TNode<Object> tmp109;
    USE(tmp109);
    tmp109 = ObjectGetPrototypeOf_316(state_, TNode<Context>{tmp100}, TNode<Object>{tmp105});
    ca_.SetSourcePosition("../../src/builtins/proxy-set-prototype-of.tq", 61);
    TNode<BoolT> tmp110;
    USE(tmp110);
    tmp110 = SameValue_244(state_, TNode<Object>{tmp102}, TNode<Object>{tmp109});
    ca_.Branch(tmp110, &block17, &block18, tmp100, tmp101, tmp102, tmp103, tmp104, tmp105, tmp106, tmp107, tmp108, tmp109);
  }

  if (block17.is_used()) {
    TNode<Context> tmp111;
    TNode<JSProxy> tmp112;
    TNode<HeapObject> tmp113;
    TNode<Oddball> tmp114;
    TNode<JSReceiver> tmp115;
    TNode<HeapObject> tmp116;
    TNode<JSReceiver> tmp117;
    TNode<Object> tmp118;
    TNode<Object> tmp119;
    TNode<Object> tmp120;
    ca_.Bind(&block17, &tmp111, &tmp112, &tmp113, &tmp114, &tmp115, &tmp116, &tmp117, &tmp118, &tmp119, &tmp120);
    ca_.SetSourcePosition("../../src/builtins/proxy-set-prototype-of.tq", 62);
    TNode<Oddball> tmp121;
    USE(tmp121);
    tmp121 = True_65(state_);
    CodeStubAssembler(state_).Return(tmp121);
  }

  if (block18.is_used()) {
    TNode<Context> tmp122;
    TNode<JSProxy> tmp123;
    TNode<HeapObject> tmp124;
    TNode<Oddball> tmp125;
    TNode<JSReceiver> tmp126;
    TNode<HeapObject> tmp127;
    TNode<JSReceiver> tmp128;
    TNode<Object> tmp129;
    TNode<Object> tmp130;
    TNode<Object> tmp131;
    ca_.Bind(&block18, &tmp122, &tmp123, &tmp124, &tmp125, &tmp126, &tmp127, &tmp128, &tmp129, &tmp130, &tmp131);
    ca_.SetSourcePosition("../../src/builtins/proxy-set-prototype-of.tq", 64);
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{tmp122}, MessageTemplate::kProxySetPrototypeOfNonExtensible);
  }

  if (block4.is_used()) {
    TNode<Context> tmp132;
    TNode<JSProxy> tmp133;
    TNode<HeapObject> tmp134;
    TNode<Oddball> tmp135;
    TNode<Object> tmp136;
    TNode<HeapObject> tmp137;
    ca_.Bind(&block4, &tmp132, &tmp133, &tmp134, &tmp135, &tmp136, &tmp137);
    ca_.SetSourcePosition("../../src/builtins/proxy-set-prototype-of.tq", 68);
    TNode<Oddball> tmp138;
    USE(tmp138);
    tmp138 = True_65(state_);
    TNode<BoolT> tmp139;
    USE(tmp139);
    tmp139 = CodeStubAssembler(state_).TaggedEqual(TNode<HeapObject>{tmp135}, TNode<HeapObject>{tmp138});
    ca_.Branch(tmp139, &block19, &block20, tmp132, tmp133, tmp134, tmp135, tmp136, tmp137);
  }

  if (block19.is_used()) {
    TNode<Context> tmp140;
    TNode<JSProxy> tmp141;
    TNode<HeapObject> tmp142;
    TNode<Oddball> tmp143;
    TNode<Object> tmp144;
    TNode<HeapObject> tmp145;
    ca_.Bind(&block19, &tmp140, &tmp141, &tmp142, &tmp143, &tmp144, &tmp145);
    ca_.SetSourcePosition("../../src/builtins/proxy-set-prototype-of.tq", 69);
    TNode<Object> tmp146;
    USE(tmp146);
    tmp146 = ObjectSetPrototypeOfThrow_318(state_, TNode<Context>{tmp140}, TNode<Object>{tmp144}, TNode<HeapObject>{tmp145});
    CodeStubAssembler(state_).Return(tmp146);
  }

  if (block20.is_used()) {
    TNode<Context> tmp147;
    TNode<JSProxy> tmp148;
    TNode<HeapObject> tmp149;
    TNode<Oddball> tmp150;
    TNode<Object> tmp151;
    TNode<HeapObject> tmp152;
    ca_.Bind(&block20, &tmp147, &tmp148, &tmp149, &tmp150, &tmp151, &tmp152);
    ca_.SetSourcePosition("../../src/builtins/proxy-set-prototype-of.tq", 71);
    TNode<Object> tmp153;
    USE(tmp153);
    tmp153 = ObjectSetPrototypeOfDontThrow_319(state_, TNode<Context>{tmp147}, TNode<Object>{tmp151}, TNode<HeapObject>{tmp152});
    CodeStubAssembler(state_).Return(tmp153);
  }

  if (block2.is_used()) {
    TNode<Context> tmp154;
    TNode<JSProxy> tmp155;
    TNode<HeapObject> tmp156;
    TNode<Oddball> tmp157;
    ca_.Bind(&block2, &tmp154, &tmp155, &tmp156, &tmp157);
    ca_.SetSourcePosition("../../src/builtins/proxy-set-prototype-of.tq", 74);
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{tmp154}, MessageTemplate::kProxyRevoked, "setPrototypeOf");
  }
}

}  // namespace internal
}  // namespace v8

