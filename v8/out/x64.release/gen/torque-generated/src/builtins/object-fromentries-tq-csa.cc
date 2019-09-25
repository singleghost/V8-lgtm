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

TNode<JSObject> ObjectFromEntriesFastCase_312(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_iterable, compiler::CodeAssemblerLabel* label_IfSlow) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSArray> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSArray, FixedArrayBase> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSArray, FixedArrayBase, FixedArray> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSArray, FixedArray, Smi, JSObject, Smi> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSArray, FixedArray, Smi, JSObject, Smi> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSArray, FixedArray, Smi, JSObject, Smi, Object, Object> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSArray, FixedArray, Smi, JSObject, Smi, Object, Object, Object, Object> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSArray, FixedArray, Smi, JSObject, Smi, Object, Object, Object> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSArray, FixedArray, Smi, JSObject, Smi, Object, Object, Object> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSArray, FixedArray, Smi, JSObject, Smi> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSArray, FixedArray, Smi, JSObject, Smi> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSObject> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSObject> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_iterable);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../src/builtins/object-fromentries.tq", 9);
    ca_.SetSourcePosition("../../src/builtins/object-fromentries.tq", 10);
    TNode<JSArray> tmp2;
    USE(tmp2);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp2 = Cast34ATFastJSArrayWithNoCustomIteration_1492(state_, TNode<Context>{tmp0}, TNode<Object>{tmp1}, &label0);
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
    TNode<JSArray> tmp11;
    ca_.Bind(&block5, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11);
    ca_.SetSourcePosition("../../src/builtins/object-fromentries.tq", 12);
    TNode<IntPtrT> tmp12 = ca_.IntPtrConstant(JSObject::kElementsOffset);
    USE(tmp12);
    TNode<FixedArrayBase>tmp13 = CodeStubAssembler(state_).LoadReference<FixedArrayBase>(CodeStubAssembler::Reference{tmp11, tmp12});
    TNode<FixedArray> tmp14;
    USE(tmp14);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp14 = Cast10FixedArray_103(state_, TNode<HeapObject>{tmp13}, &label0);
    ca_.Goto(&block7, tmp7, tmp8, tmp9, tmp11, tmp13, tmp14);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block8, tmp7, tmp8, tmp9, tmp11, tmp13);
    }
  }

  if (block8.is_used()) {
    TNode<Context> tmp15;
    TNode<Object> tmp16;
    TNode<Object> tmp17;
    TNode<JSArray> tmp18;
    TNode<FixedArrayBase> tmp19;
    ca_.Bind(&block8, &tmp15, &tmp16, &tmp17, &tmp18, &tmp19);
    ca_.Goto(&block1);
  }

  if (block7.is_used()) {
    TNode<Context> tmp20;
    TNode<Object> tmp21;
    TNode<Object> tmp22;
    TNode<JSArray> tmp23;
    TNode<FixedArrayBase> tmp24;
    TNode<FixedArray> tmp25;
    ca_.Bind(&block7, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25);
    ca_.SetSourcePosition("../../src/builtins/object-fromentries.tq", 11);
    ca_.SetSourcePosition("../../src/builtins/object-fromentries.tq", 13);
    TNode<Smi> tmp26;
    USE(tmp26);
    tmp26 = CodeStubAssembler(state_).LoadFastJSArrayLength(TNode<JSArray>{tmp23});
    ca_.SetSourcePosition("../../src/builtins/object-fromentries.tq", 14);
    TNode<JSObject> tmp27;
    USE(tmp27);
    tmp27 = NewJSObject_55(state_, TNode<Context>{tmp20});
    ca_.SetSourcePosition("../../src/builtins/object-fromentries.tq", 16);
    TNode<Smi> tmp28;
    USE(tmp28);
    tmp28 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 0);
    ca_.Goto(&block11, tmp20, tmp21, tmp22, tmp23, tmp25, tmp26, tmp27, tmp28);
  }

  if (block11.is_used()) {
    TNode<Context> tmp29;
    TNode<Object> tmp30;
    TNode<Object> tmp31;
    TNode<JSArray> tmp32;
    TNode<FixedArray> tmp33;
    TNode<Smi> tmp34;
    TNode<JSObject> tmp35;
    TNode<Smi> tmp36;
    ca_.Bind(&block11, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33, &tmp34, &tmp35, &tmp36);
    TNode<BoolT> tmp37;
    USE(tmp37);
    tmp37 = CodeStubAssembler(state_).SmiLessThan(TNode<Smi>{tmp36}, TNode<Smi>{tmp34});
    ca_.Branch(tmp37, &block9, &block10, tmp29, tmp30, tmp31, tmp32, tmp33, tmp34, tmp35, tmp36);
  }

  if (block9.is_used()) {
    TNode<Context> tmp38;
    TNode<Object> tmp39;
    TNode<Object> tmp40;
    TNode<JSArray> tmp41;
    TNode<FixedArray> tmp42;
    TNode<Smi> tmp43;
    TNode<JSObject> tmp44;
    TNode<Smi> tmp45;
    ca_.Bind(&block9, &tmp38, &tmp39, &tmp40, &tmp41, &tmp42, &tmp43, &tmp44, &tmp45);
    ca_.SetSourcePosition("../../src/builtins/object-fromentries.tq", 17);
    TNode<Object> tmp46;
    USE(tmp46);
    tmp46 = LoadElementOrUndefined_51(state_, TNode<Context>{tmp38}, TNode<FixedArray>{tmp42}, TNode<Smi>{tmp45});
    ca_.SetSourcePosition("../../src/builtins/object-fromentries.tq", 19);
    TNode<Object> tmp47;
    USE(tmp47);
    TNode<Object> tmp48;
    USE(tmp48);
    compiler::CodeAssemblerLabel label0(&ca_);
    std::tie(tmp47, tmp48) = LoadKeyValuePairNoSideEffects_269(state_, TNode<Context>{tmp38}, TNode<Object>{tmp46}, &label0).Flatten();
    ca_.Goto(&block13, tmp38, tmp39, tmp40, tmp41, tmp42, tmp43, tmp44, tmp45, tmp46, tmp46, tmp47, tmp48);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block14, tmp38, tmp39, tmp40, tmp41, tmp42, tmp43, tmp44, tmp45, tmp46, tmp46);
    }
  }

  if (block14.is_used()) {
    TNode<Context> tmp49;
    TNode<Object> tmp50;
    TNode<Object> tmp51;
    TNode<JSArray> tmp52;
    TNode<FixedArray> tmp53;
    TNode<Smi> tmp54;
    TNode<JSObject> tmp55;
    TNode<Smi> tmp56;
    TNode<Object> tmp57;
    TNode<Object> tmp58;
    ca_.Bind(&block14, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56, &tmp57, &tmp58);
    ca_.Goto(&block1);
  }

  if (block13.is_used()) {
    TNode<Context> tmp59;
    TNode<Object> tmp60;
    TNode<Object> tmp61;
    TNode<JSArray> tmp62;
    TNode<FixedArray> tmp63;
    TNode<Smi> tmp64;
    TNode<JSObject> tmp65;
    TNode<Smi> tmp66;
    TNode<Object> tmp67;
    TNode<Object> tmp68;
    TNode<Object> tmp69;
    TNode<Object> tmp70;
    ca_.Bind(&block13, &tmp59, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67, &tmp68, &tmp69, &tmp70);
    ca_.SetSourcePosition("../../src/builtins/object-fromentries.tq", 18);
    ca_.SetSourcePosition("../../src/builtins/object-fromentries.tq", 24);
    TNode<BoolT> tmp71;
    USE(tmp71);
    tmp71 = Is10JSReceiver90UT8ATBigInt7ATFalse6ATNull5ATSmi6ATTrue11ATUndefined10HeapNumber10JSReceiver6String6Symbol_1493(state_, TNode<Context>{tmp59}, TNode<Object>{tmp69});
    ca_.Branch(tmp71, &block15, &block16, tmp59, tmp60, tmp61, tmp62, tmp63, tmp64, tmp65, tmp66, tmp67, tmp69, tmp70);
  }

  if (block15.is_used()) {
    TNode<Context> tmp72;
    TNode<Object> tmp73;
    TNode<Object> tmp74;
    TNode<JSArray> tmp75;
    TNode<FixedArray> tmp76;
    TNode<Smi> tmp77;
    TNode<JSObject> tmp78;
    TNode<Smi> tmp79;
    TNode<Object> tmp80;
    TNode<Object> tmp81;
    TNode<Object> tmp82;
    ca_.Bind(&block15, &tmp72, &tmp73, &tmp74, &tmp75, &tmp76, &tmp77, &tmp78, &tmp79, &tmp80, &tmp81, &tmp82);
    ca_.Goto(&block1);
  }

  if (block16.is_used()) {
    TNode<Context> tmp83;
    TNode<Object> tmp84;
    TNode<Object> tmp85;
    TNode<JSArray> tmp86;
    TNode<FixedArray> tmp87;
    TNode<Smi> tmp88;
    TNode<JSObject> tmp89;
    TNode<Smi> tmp90;
    TNode<Object> tmp91;
    TNode<Object> tmp92;
    TNode<Object> tmp93;
    ca_.Bind(&block16, &tmp83, &tmp84, &tmp85, &tmp86, &tmp87, &tmp88, &tmp89, &tmp90, &tmp91, &tmp92, &tmp93);
    ca_.SetSourcePosition("../../src/builtins/object-fromentries.tq", 25);
    TNode<Object> tmp94;
    tmp94 = CodeStubAssembler(state_).CallBuiltin(Builtins::kFastCreateDataProperty, tmp83, tmp89, tmp92, tmp93);
    USE(tmp94);
    ca_.SetSourcePosition("../../src/builtins/object-fromentries.tq", 16);
    ca_.Goto(&block12, tmp83, tmp84, tmp85, tmp86, tmp87, tmp88, tmp89, tmp90);
  }

  if (block12.is_used()) {
    TNode<Context> tmp95;
    TNode<Object> tmp96;
    TNode<Object> tmp97;
    TNode<JSArray> tmp98;
    TNode<FixedArray> tmp99;
    TNode<Smi> tmp100;
    TNode<JSObject> tmp101;
    TNode<Smi> tmp102;
    ca_.Bind(&block12, &tmp95, &tmp96, &tmp97, &tmp98, &tmp99, &tmp100, &tmp101, &tmp102);
    TNode<Smi> tmp103;
    USE(tmp103);
    tmp103 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 1);
    TNode<Smi> tmp104;
    USE(tmp104);
    tmp104 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{tmp102}, TNode<Smi>{tmp103});
    ca_.Goto(&block11, tmp95, tmp96, tmp97, tmp98, tmp99, tmp100, tmp101, tmp104);
  }

  if (block10.is_used()) {
    TNode<Context> tmp105;
    TNode<Object> tmp106;
    TNode<Object> tmp107;
    TNode<JSArray> tmp108;
    TNode<FixedArray> tmp109;
    TNode<Smi> tmp110;
    TNode<JSObject> tmp111;
    TNode<Smi> tmp112;
    ca_.Bind(&block10, &tmp105, &tmp106, &tmp107, &tmp108, &tmp109, &tmp110, &tmp111, &tmp112);
    ca_.SetSourcePosition("../../src/builtins/object-fromentries.tq", 27);
    ca_.Goto(&block2, tmp105, tmp106, tmp111);
  }

  if (block4.is_used()) {
    TNode<Context> tmp113;
    TNode<Object> tmp114;
    TNode<Object> tmp115;
    ca_.Bind(&block4, &tmp113, &tmp114, &tmp115);
    ca_.SetSourcePosition("../../src/builtins/object-fromentries.tq", 29);
    ca_.SetSourcePosition("../../src/builtins/object-fromentries.tq", 30);
    ca_.Goto(&block1);
  }

  if (block2.is_used()) {
    TNode<Context> tmp116;
    TNode<Object> tmp117;
    TNode<JSObject> tmp118;
    ca_.Bind(&block2, &tmp116, &tmp117, &tmp118);
    ca_.SetSourcePosition("../../src/builtins/object-fromentries.tq", 7);
    ca_.Goto(&block17, tmp116, tmp117, tmp118);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_IfSlow);
  }

    TNode<Context> tmp119;
    TNode<Object> tmp120;
    TNode<JSObject> tmp121;
    ca_.Bind(&block17, &tmp119, &tmp120, &tmp121);
  return TNode<JSObject>{tmp121};
}

TF_BUILTIN(ObjectFromEntries, CodeStubAssembler) {
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
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, Object, JSObject> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, JSObject, Map, JSReceiver, Object> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, JSObject, Map, JSReceiver, Object, Object> block14(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, JSObject, Map, JSReceiver, Object> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, JSObject, Map, JSReceiver, Object, JSReceiver, Object, Map, Object> block19(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, JSObject, Map, JSReceiver, Object, JSReceiver, Object, Map> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, JSObject, Map, JSReceiver, Object, JSReceiver, Object, Map, JSReceiver> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, JSObject, Map, JSReceiver, Object> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, JSObject, Map, JSReceiver, Object, JSReceiver> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, JSObject, Map, JSReceiver, Object, JSReceiver, JSReceiver, Map, Object> block20(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, JSObject, Map, JSReceiver, Object, JSReceiver, Object, Object, Object> block21(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, JSObject, Map, JSReceiver, Object, JSReceiver, Object, Object, Object, JSObject, Object, Object, Object> block22(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, JSObject, Map, JSReceiver, Object> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object, JSObject, Map, JSReceiver, Object, Object> block10(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, RawPtrT, IntPtrT, Context, Object, Object> block2(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    ca_.Goto(&block0, torque_arguments.frame, torque_arguments.base, torque_arguments.length, parameter0, parameter1);

  if (block0.is_used()) {
    TNode<RawPtrT> tmp0;
    TNode<RawPtrT> tmp1;
    TNode<IntPtrT> tmp2;
    TNode<Context> tmp3;
    TNode<Object> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    ca_.SetSourcePosition("../../src/builtins/object-fromentries.tq", 38);
    TNode<IntPtrT> tmp5;
    USE(tmp5);
    tmp5 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, 0);
    TNode<Object> tmp6;
    USE(tmp6);
    tmp6 = CodeStubAssembler(state_).GetArgumentValue(TorqueStructArguments{TNode<RawPtrT>{tmp0}, TNode<RawPtrT>{tmp1}, TNode<IntPtrT>{tmp2}}, TNode<IntPtrT>{tmp5});
    ca_.SetSourcePosition("../../src/builtins/object-fromentries.tq", 40);
    TNode<BoolT> tmp7;
    USE(tmp7);
    tmp7 = CodeStubAssembler(state_).IsNullOrUndefined(TNode<Object>{tmp6});
    ca_.Branch(tmp7, &block5, &block6, tmp0, tmp1, tmp2, tmp3, tmp4, tmp6);
  }

  if (block5.is_used()) {
    TNode<RawPtrT> tmp8;
    TNode<RawPtrT> tmp9;
    TNode<IntPtrT> tmp10;
    TNode<Context> tmp11;
    TNode<Object> tmp12;
    TNode<Object> tmp13;
    ca_.Bind(&block5, &tmp8, &tmp9, &tmp10, &tmp11, &tmp12, &tmp13);
    ca_.Goto(&block2, tmp8, tmp9, tmp10, tmp11, tmp12, tmp13);
  }

  if (block6.is_used()) {
    TNode<RawPtrT> tmp14;
    TNode<RawPtrT> tmp15;
    TNode<IntPtrT> tmp16;
    TNode<Context> tmp17;
    TNode<Object> tmp18;
    TNode<Object> tmp19;
    ca_.Bind(&block6, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18, &tmp19);
    ca_.SetSourcePosition("../../src/builtins/object-fromentries.tq", 41);
    TNode<JSObject> tmp20;
    USE(tmp20);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp20 = ObjectFromEntriesFastCase_312(state_, TNode<Context>{tmp17}, TNode<Object>{tmp19}, &label0);
    ca_.Goto(&block7, tmp14, tmp15, tmp16, tmp17, tmp18, tmp19, tmp19, tmp20);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block8, tmp14, tmp15, tmp16, tmp17, tmp18, tmp19, tmp19);
    }
  }

  if (block8.is_used()) {
    TNode<RawPtrT> tmp21;
    TNode<RawPtrT> tmp22;
    TNode<IntPtrT> tmp23;
    TNode<Context> tmp24;
    TNode<Object> tmp25;
    TNode<Object> tmp26;
    TNode<Object> tmp27;
    ca_.Bind(&block8, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26, &tmp27);
    ca_.Goto(&block4, tmp21, tmp22, tmp23, tmp24, tmp25, tmp26);
  }

  if (block7.is_used()) {
    TNode<RawPtrT> tmp28;
    TNode<RawPtrT> tmp29;
    TNode<IntPtrT> tmp30;
    TNode<Context> tmp31;
    TNode<Object> tmp32;
    TNode<Object> tmp33;
    TNode<Object> tmp34;
    TNode<JSObject> tmp35;
    ca_.Bind(&block7, &tmp28, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33, &tmp34, &tmp35);
    arguments.PopAndReturn(tmp35);
  }

  if (block4.is_used()) {
    TNode<RawPtrT> tmp36;
    TNode<RawPtrT> tmp37;
    TNode<IntPtrT> tmp38;
    TNode<Context> tmp39;
    TNode<Object> tmp40;
    TNode<Object> tmp41;
    ca_.Bind(&block4, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40, &tmp41);
    ca_.SetSourcePosition("../../src/builtins/object-fromentries.tq", 44);
    TNode<JSObject> tmp42;
    USE(tmp42);
    tmp42 = NewJSObject_55(state_, TNode<Context>{tmp39});
    ca_.SetSourcePosition("../../src/builtins/object-fromentries.tq", 45);
    TNode<Map> tmp43;
    USE(tmp43);
    tmp43 = GetIteratorResultMap_227(state_, TNode<Context>{tmp39});
    ca_.SetSourcePosition("../../src/builtins/object-fromentries.tq", 46);
    TNode<JSReceiver> tmp44;
    USE(tmp44);
    TNode<Object> tmp45;
    USE(tmp45);
    std::tie(tmp44, tmp45) = IteratorBuiltinsAssembler(state_).GetIterator(TNode<Context>{tmp39}, TNode<Object>{tmp41}).Flatten();
    ca_.SetSourcePosition("../../src/builtins/object-fromentries.tq", 49);
    ca_.Goto(&block13, tmp36, tmp37, tmp38, tmp39, tmp40, tmp41, tmp42, tmp43, tmp44, tmp45);
  }

  if (block13.is_used()) {
    TNode<RawPtrT> tmp46;
    TNode<RawPtrT> tmp47;
    TNode<IntPtrT> tmp48;
    TNode<Context> tmp49;
    TNode<Object> tmp50;
    TNode<Object> tmp51;
    TNode<JSObject> tmp52;
    TNode<Map> tmp53;
    TNode<JSReceiver> tmp54;
    TNode<Object> tmp55;
    ca_.Bind(&block13, &tmp46, &tmp47, &tmp48, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55);
    TNode<BoolT> tmp56;
    USE(tmp56);
    compiler::CodeAssemblerExceptionHandlerLabel catch57__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::CodeAssemblerScopedExceptionHandler s(&ca_, &catch57__label);
    tmp56 = FromConstexpr6ATbool16ATconstexpr_bool_167(state_, true);
    }
    if (catch57__label.is_used()) {
      compiler::CodeAssemblerLabel catch57_skip(&ca_);
      ca_.Goto(&catch57_skip);
      TNode<Object> catch57_exception_object;
      ca_.Bind(&catch57__label, &catch57_exception_object);
      ca_.Goto(&block14, tmp46, tmp47, tmp48, tmp49, tmp50, tmp51, tmp52, tmp53, tmp54, tmp55, catch57_exception_object);
      ca_.Bind(&catch57_skip);
    }
    ca_.Branch(tmp56, &block11, &block12, tmp46, tmp47, tmp48, tmp49, tmp50, tmp51, tmp52, tmp53, tmp54, tmp55);
  }

  if (block14.is_used()) {
    TNode<RawPtrT> tmp58;
    TNode<RawPtrT> tmp59;
    TNode<IntPtrT> tmp60;
    TNode<Context> tmp61;
    TNode<Object> tmp62;
    TNode<Object> tmp63;
    TNode<JSObject> tmp64;
    TNode<Map> tmp65;
    TNode<JSReceiver> tmp66;
    TNode<Object> tmp67;
    TNode<Object> tmp68;
    ca_.Bind(&block14, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67, &tmp68);
    ca_.Goto(&block10, tmp58, tmp59, tmp60, tmp61, tmp62, tmp63, tmp64, tmp65, tmp66, tmp67, tmp68);
  }

  if (block11.is_used()) {
    TNode<RawPtrT> tmp69;
    TNode<RawPtrT> tmp70;
    TNode<IntPtrT> tmp71;
    TNode<Context> tmp72;
    TNode<Object> tmp73;
    TNode<Object> tmp74;
    TNode<JSObject> tmp75;
    TNode<Map> tmp76;
    TNode<JSReceiver> tmp77;
    TNode<Object> tmp78;
    ca_.Bind(&block11, &tmp69, &tmp70, &tmp71, &tmp72, &tmp73, &tmp74, &tmp75, &tmp76, &tmp77, &tmp78);
    ca_.SetSourcePosition("../../src/builtins/object-fromentries.tq", 51);
    TNode<JSReceiver> tmp79;
    USE(tmp79);
    compiler::CodeAssemblerLabel label0(&ca_);
    compiler::CodeAssemblerExceptionHandlerLabel catch80__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::CodeAssemblerScopedExceptionHandler s(&ca_, &catch80__label);
    tmp79 = IteratorBuiltinsAssembler(state_).IteratorStep(TNode<Context>{tmp72}, TorqueStructIteratorRecord{TNode<JSReceiver>{tmp77}, TNode<Object>{tmp78}}, TNode<Map>{tmp76}, &label0);
    }
    if (catch80__label.is_used()) {
      compiler::CodeAssemblerLabel catch80_skip(&ca_);
      ca_.Goto(&catch80_skip);
      TNode<Object> catch80_exception_object;
      ca_.Bind(&catch80__label, &catch80_exception_object);
      ca_.Goto(&block19, tmp69, tmp70, tmp71, tmp72, tmp73, tmp74, tmp75, tmp76, tmp77, tmp78, tmp77, tmp78, tmp76, catch80_exception_object);
      ca_.Bind(&catch80_skip);
    }
    ca_.Goto(&block17, tmp69, tmp70, tmp71, tmp72, tmp73, tmp74, tmp75, tmp76, tmp77, tmp78, tmp77, tmp78, tmp76, tmp79);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block18, tmp69, tmp70, tmp71, tmp72, tmp73, tmp74, tmp75, tmp76, tmp77, tmp78, tmp77, tmp78, tmp76);
    }
  }

  if (block19.is_used()) {
    TNode<RawPtrT> tmp81;
    TNode<RawPtrT> tmp82;
    TNode<IntPtrT> tmp83;
    TNode<Context> tmp84;
    TNode<Object> tmp85;
    TNode<Object> tmp86;
    TNode<JSObject> tmp87;
    TNode<Map> tmp88;
    TNode<JSReceiver> tmp89;
    TNode<Object> tmp90;
    TNode<JSReceiver> tmp91;
    TNode<Object> tmp92;
    TNode<Map> tmp93;
    TNode<Object> tmp94;
    ca_.Bind(&block19, &tmp81, &tmp82, &tmp83, &tmp84, &tmp85, &tmp86, &tmp87, &tmp88, &tmp89, &tmp90, &tmp91, &tmp92, &tmp93, &tmp94);
    ca_.Goto(&block10, tmp81, tmp82, tmp83, tmp84, tmp85, tmp86, tmp87, tmp88, tmp89, tmp90, tmp94);
  }

  if (block18.is_used()) {
    TNode<RawPtrT> tmp95;
    TNode<RawPtrT> tmp96;
    TNode<IntPtrT> tmp97;
    TNode<Context> tmp98;
    TNode<Object> tmp99;
    TNode<Object> tmp100;
    TNode<JSObject> tmp101;
    TNode<Map> tmp102;
    TNode<JSReceiver> tmp103;
    TNode<Object> tmp104;
    TNode<JSReceiver> tmp105;
    TNode<Object> tmp106;
    TNode<Map> tmp107;
    ca_.Bind(&block18, &tmp95, &tmp96, &tmp97, &tmp98, &tmp99, &tmp100, &tmp101, &tmp102, &tmp103, &tmp104, &tmp105, &tmp106, &tmp107);
    ca_.Goto(&block16, tmp95, tmp96, tmp97, tmp98, tmp99, tmp100, tmp101, tmp102, tmp103, tmp104);
  }

  if (block17.is_used()) {
    TNode<RawPtrT> tmp108;
    TNode<RawPtrT> tmp109;
    TNode<IntPtrT> tmp110;
    TNode<Context> tmp111;
    TNode<Object> tmp112;
    TNode<Object> tmp113;
    TNode<JSObject> tmp114;
    TNode<Map> tmp115;
    TNode<JSReceiver> tmp116;
    TNode<Object> tmp117;
    TNode<JSReceiver> tmp118;
    TNode<Object> tmp119;
    TNode<Map> tmp120;
    TNode<JSReceiver> tmp121;
    ca_.Bind(&block17, &tmp108, &tmp109, &tmp110, &tmp111, &tmp112, &tmp113, &tmp114, &tmp115, &tmp116, &tmp117, &tmp118, &tmp119, &tmp120, &tmp121);
    ca_.Goto(&block15, tmp108, tmp109, tmp110, tmp111, tmp112, tmp113, tmp114, tmp115, tmp116, tmp117, tmp121);
  }

  if (block16.is_used()) {
    TNode<RawPtrT> tmp122;
    TNode<RawPtrT> tmp123;
    TNode<IntPtrT> tmp124;
    TNode<Context> tmp125;
    TNode<Object> tmp126;
    TNode<Object> tmp127;
    TNode<JSObject> tmp128;
    TNode<Map> tmp129;
    TNode<JSReceiver> tmp130;
    TNode<Object> tmp131;
    ca_.Bind(&block16, &tmp122, &tmp123, &tmp124, &tmp125, &tmp126, &tmp127, &tmp128, &tmp129, &tmp130, &tmp131);
    ca_.SetSourcePosition("../../src/builtins/object-fromentries.tq", 52);
    arguments.PopAndReturn(tmp128);
  }

  if (block15.is_used()) {
    TNode<RawPtrT> tmp132;
    TNode<RawPtrT> tmp133;
    TNode<IntPtrT> tmp134;
    TNode<Context> tmp135;
    TNode<Object> tmp136;
    TNode<Object> tmp137;
    TNode<JSObject> tmp138;
    TNode<Map> tmp139;
    TNode<JSReceiver> tmp140;
    TNode<Object> tmp141;
    TNode<JSReceiver> tmp142;
    ca_.Bind(&block15, &tmp132, &tmp133, &tmp134, &tmp135, &tmp136, &tmp137, &tmp138, &tmp139, &tmp140, &tmp141, &tmp142);
    ca_.SetSourcePosition("../../src/builtins/object-fromentries.tq", 50);
    ca_.SetSourcePosition("../../src/builtins/object-fromentries.tq", 54);
    TNode<Object> tmp143;
    USE(tmp143);
    compiler::CodeAssemblerExceptionHandlerLabel catch144__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::CodeAssemblerScopedExceptionHandler s(&ca_, &catch144__label);
    tmp143 = IteratorBuiltinsAssembler(state_).IteratorValue(TNode<Context>{tmp135}, TNode<JSReceiver>{tmp142}, TNode<Map>{tmp139});
    }
    if (catch144__label.is_used()) {
      compiler::CodeAssemblerLabel catch144_skip(&ca_);
      ca_.Goto(&catch144_skip);
      TNode<Object> catch144_exception_object;
      ca_.Bind(&catch144__label, &catch144_exception_object);
      ca_.Goto(&block20, tmp132, tmp133, tmp134, tmp135, tmp136, tmp137, tmp138, tmp139, tmp140, tmp141, tmp142, tmp142, tmp139, catch144_exception_object);
      ca_.Bind(&catch144_skip);
    }
    ca_.SetSourcePosition("../../src/builtins/object-fromentries.tq", 53);
    ca_.SetSourcePosition("../../src/builtins/object-fromentries.tq", 56);
    TNode<Object> tmp145;
    USE(tmp145);
    TNode<Object> tmp146;
    USE(tmp146);
    compiler::CodeAssemblerExceptionHandlerLabel catch147__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::CodeAssemblerScopedExceptionHandler s(&ca_, &catch147__label);
    std::tie(tmp145, tmp146) = LoadKeyValuePair_270(state_, TNode<Context>{tmp135}, TNode<Object>{tmp143}).Flatten();
    }
    if (catch147__label.is_used()) {
      compiler::CodeAssemblerLabel catch147_skip(&ca_);
      ca_.Goto(&catch147_skip);
      TNode<Object> catch147_exception_object;
      ca_.Bind(&catch147__label, &catch147_exception_object);
      ca_.Goto(&block21, tmp132, tmp133, tmp134, tmp135, tmp136, tmp137, tmp138, tmp139, tmp140, tmp141, tmp142, tmp143, tmp143, catch147_exception_object);
      ca_.Bind(&catch147_skip);
    }
    ca_.SetSourcePosition("../../src/builtins/object-fromentries.tq", 55);
    ca_.SetSourcePosition("../../src/builtins/object-fromentries.tq", 57);
    TNode<Object> tmp148;
    compiler::CodeAssemblerExceptionHandlerLabel catch149__label(&ca_, compiler::CodeAssemblerLabel::kDeferred);
    { compiler::CodeAssemblerScopedExceptionHandler s(&ca_, &catch149__label);
    tmp148 = CodeStubAssembler(state_).CallBuiltin(Builtins::kFastCreateDataProperty, tmp135, tmp138, tmp145, tmp146);
    USE(tmp148);
    }
    if (catch149__label.is_used()) {
      compiler::CodeAssemblerLabel catch149_skip(&ca_);
      ca_.Goto(&catch149_skip);
      TNode<Object> catch149_exception_object;
      ca_.Bind(&catch149__label, &catch149_exception_object);
      ca_.Goto(&block22, tmp132, tmp133, tmp134, tmp135, tmp136, tmp137, tmp138, tmp139, tmp140, tmp141, tmp142, tmp143, tmp145, tmp146, tmp138, tmp145, tmp146, catch149_exception_object);
      ca_.Bind(&catch149_skip);
    }
    ca_.SetSourcePosition("../../src/builtins/object-fromentries.tq", 49);
    ca_.Goto(&block13, tmp132, tmp133, tmp134, tmp135, tmp136, tmp137, tmp138, tmp139, tmp140, tmp141);
  }

  if (block20.is_used()) {
    TNode<RawPtrT> tmp150;
    TNode<RawPtrT> tmp151;
    TNode<IntPtrT> tmp152;
    TNode<Context> tmp153;
    TNode<Object> tmp154;
    TNode<Object> tmp155;
    TNode<JSObject> tmp156;
    TNode<Map> tmp157;
    TNode<JSReceiver> tmp158;
    TNode<Object> tmp159;
    TNode<JSReceiver> tmp160;
    TNode<JSReceiver> tmp161;
    TNode<Map> tmp162;
    TNode<Object> tmp163;
    ca_.Bind(&block20, &tmp150, &tmp151, &tmp152, &tmp153, &tmp154, &tmp155, &tmp156, &tmp157, &tmp158, &tmp159, &tmp160, &tmp161, &tmp162, &tmp163);
    ca_.SetSourcePosition("../../src/builtins/object-fromentries.tq", 54);
    ca_.Goto(&block10, tmp150, tmp151, tmp152, tmp153, tmp154, tmp155, tmp156, tmp157, tmp158, tmp159, tmp163);
  }

  if (block21.is_used()) {
    TNode<RawPtrT> tmp164;
    TNode<RawPtrT> tmp165;
    TNode<IntPtrT> tmp166;
    TNode<Context> tmp167;
    TNode<Object> tmp168;
    TNode<Object> tmp169;
    TNode<JSObject> tmp170;
    TNode<Map> tmp171;
    TNode<JSReceiver> tmp172;
    TNode<Object> tmp173;
    TNode<JSReceiver> tmp174;
    TNode<Object> tmp175;
    TNode<Object> tmp176;
    TNode<Object> tmp177;
    ca_.Bind(&block21, &tmp164, &tmp165, &tmp166, &tmp167, &tmp168, &tmp169, &tmp170, &tmp171, &tmp172, &tmp173, &tmp174, &tmp175, &tmp176, &tmp177);
    ca_.SetSourcePosition("../../src/builtins/object-fromentries.tq", 56);
    ca_.Goto(&block10, tmp164, tmp165, tmp166, tmp167, tmp168, tmp169, tmp170, tmp171, tmp172, tmp173, tmp177);
  }

  if (block22.is_used()) {
    TNode<RawPtrT> tmp178;
    TNode<RawPtrT> tmp179;
    TNode<IntPtrT> tmp180;
    TNode<Context> tmp181;
    TNode<Object> tmp182;
    TNode<Object> tmp183;
    TNode<JSObject> tmp184;
    TNode<Map> tmp185;
    TNode<JSReceiver> tmp186;
    TNode<Object> tmp187;
    TNode<JSReceiver> tmp188;
    TNode<Object> tmp189;
    TNode<Object> tmp190;
    TNode<Object> tmp191;
    TNode<JSObject> tmp192;
    TNode<Object> tmp193;
    TNode<Object> tmp194;
    TNode<Object> tmp195;
    ca_.Bind(&block22, &tmp178, &tmp179, &tmp180, &tmp181, &tmp182, &tmp183, &tmp184, &tmp185, &tmp186, &tmp187, &tmp188, &tmp189, &tmp190, &tmp191, &tmp192, &tmp193, &tmp194, &tmp195);
    ca_.SetSourcePosition("../../src/builtins/object-fromentries.tq", 57);
    ca_.Goto(&block10, tmp178, tmp179, tmp180, tmp181, tmp182, tmp183, tmp184, tmp185, tmp186, tmp187, tmp195);
  }

  if (block12.is_used()) {
    TNode<RawPtrT> tmp196;
    TNode<RawPtrT> tmp197;
    TNode<IntPtrT> tmp198;
    TNode<Context> tmp199;
    TNode<Object> tmp200;
    TNode<Object> tmp201;
    TNode<JSObject> tmp202;
    TNode<Map> tmp203;
    TNode<JSReceiver> tmp204;
    TNode<Object> tmp205;
    ca_.Bind(&block12, &tmp196, &tmp197, &tmp198, &tmp199, &tmp200, &tmp201, &tmp202, &tmp203, &tmp204, &tmp205);
    ca_.SetSourcePosition("../../src/builtins/object-fromentries.tq", 59);
    arguments.PopAndReturn(tmp202);
  }

  if (block10.is_used()) {
    TNode<RawPtrT> tmp206;
    TNode<RawPtrT> tmp207;
    TNode<IntPtrT> tmp208;
    TNode<Context> tmp209;
    TNode<Object> tmp210;
    TNode<Object> tmp211;
    TNode<JSObject> tmp212;
    TNode<Map> tmp213;
    TNode<JSReceiver> tmp214;
    TNode<Object> tmp215;
    TNode<Object> tmp216;
    ca_.Bind(&block10, &tmp206, &tmp207, &tmp208, &tmp209, &tmp210, &tmp211, &tmp212, &tmp213, &tmp214, &tmp215, &tmp216);
    ca_.SetSourcePosition("../../src/builtins/object-fromentries.tq", 61);
    IteratorBuiltinsAssembler(state_).IteratorCloseOnException(TNode<Context>{tmp209}, TorqueStructIteratorRecord{TNode<JSReceiver>{tmp214}, TNode<Object>{tmp215}}, TNode<Object>{tmp216});
  }

  if (block2.is_used()) {
    TNode<RawPtrT> tmp217;
    TNode<RawPtrT> tmp218;
    TNode<IntPtrT> tmp219;
    TNode<Context> tmp220;
    TNode<Object> tmp221;
    TNode<Object> tmp222;
    ca_.Bind(&block2, &tmp217, &tmp218, &tmp219, &tmp220, &tmp221, &tmp222);
    ca_.SetSourcePosition("../../src/builtins/object-fromentries.tq", 65);
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{tmp220}, MessageTemplate::kNotIterable);
  }
}

TNode<JSArray> Cast34ATFastJSArrayWithNoCustomIteration_1492(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, HeapObject> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject, JSArray> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSArray> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSArray> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
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
    TNode<JSArray> tmp10;
    USE(tmp10);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp10 = Cast34ATFastJSArrayWithNoCustomIteration_140(state_, TNode<Context>{tmp6}, TNode<HeapObject>{tmp9}, &label0);
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
    TNode<JSArray> tmp17;
    ca_.Bind(&block5, &tmp14, &tmp15, &tmp16, &tmp17);
    ca_.Goto(&block2, tmp14, tmp15, tmp17);
  }

  if (block2.is_used()) {
    TNode<Context> tmp18;
    TNode<Object> tmp19;
    TNode<JSArray> tmp20;
    ca_.Bind(&block2, &tmp18, &tmp19, &tmp20);
    ca_.SetSourcePosition("../../src/builtins/object-fromentries.tq", 10);
    ca_.Goto(&block7, tmp18, tmp19, tmp20);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    TNode<Context> tmp21;
    TNode<Object> tmp22;
    TNode<JSArray> tmp23;
    ca_.Bind(&block7, &tmp21, &tmp22, &tmp23);
  return TNode<JSArray>{tmp23};
}

TNode<BoolT> Is10JSReceiver90UT8ATBigInt7ATFalse6ATNull5ATSmi6ATTrue11ATUndefined10HeapNumber10JSReceiver6String6Symbol_1493(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSReceiver> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSReceiver> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, BoolT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, BoolT> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 2840);
    TNode<JSReceiver> tmp2;
    USE(tmp2);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp2 = Cast10JSReceiver_1433(state_, TNode<Context>{tmp0}, TNode<Object>{tmp1}, &label0);
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
    TNode<BoolT> tmp12;
    USE(tmp12);
    tmp12 = FromConstexpr6ATbool16ATconstexpr_bool_167(state_, false);
    ca_.Goto(&block1, tmp10, tmp11, tmp12);
  }

  if (block2.is_used()) {
    TNode<Context> tmp13;
    TNode<Object> tmp14;
    TNode<JSReceiver> tmp15;
    ca_.Bind(&block2, &tmp13, &tmp14, &tmp15);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 2841);
    TNode<BoolT> tmp16;
    USE(tmp16);
    tmp16 = FromConstexpr6ATbool16ATconstexpr_bool_167(state_, true);
    ca_.Goto(&block1, tmp13, tmp14, tmp16);
  }

  if (block1.is_used()) {
    TNode<Context> tmp17;
    TNode<Object> tmp18;
    TNode<BoolT> tmp19;
    ca_.Bind(&block1, &tmp17, &tmp18, &tmp19);
    ca_.SetSourcePosition("../../src/builtins/object-fromentries.tq", 24);
    ca_.Goto(&block6, tmp17, tmp18, tmp19);
  }

    TNode<Context> tmp20;
    TNode<Object> tmp21;
    TNode<BoolT> tmp22;
    ca_.Bind(&block6, &tmp20, &tmp21, &tmp22);
  return TNode<BoolT>{tmp22};
}

}  // namespace internal
}  // namespace v8

