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

TorqueStructKeyValuePair LoadKeyValuePairNoSideEffects_269(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_MayHaveSideEffects) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSArray> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSArray, Smi, FixedArrayBase, FixedArrayBase> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSArray, Smi, FixedArrayBase, FixedArrayBase, FixedArray> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSArray, Smi, FixedArrayBase, FixedArray> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSArray, Smi, FixedArrayBase, FixedArray> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSArray, Smi, FixedArrayBase, FixedArray, Object> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSArray, Smi, FixedArrayBase, FixedArray, Object> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSArray, Smi, FixedArrayBase, FixedArray, Object> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSArray, Smi, FixedArrayBase, FixedArray, Object> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSArray, Smi, FixedArrayBase, FixedArray, Object, Object> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSArray, Smi, FixedArrayBase, FixedArray, Object, Object> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSArray, Smi, FixedArrayBase> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSArray, Smi, FixedArrayBase, FixedArrayBase> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSArray, Smi, FixedArrayBase, FixedArrayBase, FixedDoubleArray> block21(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSArray, Smi, FixedArrayBase, FixedDoubleArray> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSArray, Smi, FixedArrayBase, FixedDoubleArray> block24(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSArray, Smi, FixedArrayBase, FixedDoubleArray, Object> block26(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSArray, Smi, FixedArrayBase, FixedDoubleArray, Object> block25(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSArray, Smi, FixedArrayBase, FixedDoubleArray, Object> block27(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSArray, Smi, FixedArrayBase, FixedDoubleArray, Object> block28(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSArray, Smi, FixedArrayBase, FixedDoubleArray, Object, Object> block30(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSArray, Smi, FixedArrayBase, FixedDoubleArray, Object, Object> block29(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSArray, Smi, FixedArrayBase> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object> block34(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSReceiver> block33(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block32(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object> block35(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../src/builtins/collections.tq", 11);
    ca_.SetSourcePosition("../../src/builtins/collections.tq", 12);
    TNode<JSArray> tmp2;
    USE(tmp2);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp2 = Cast13ATFastJSArray_1452(state_, TNode<Context>{tmp0}, TNode<Object>{tmp1}, &label0);
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
    ca_.SetSourcePosition("../../src/builtins/collections.tq", 13);
    TNode<Smi> tmp12;
    USE(tmp12);
    tmp12 = CodeStubAssembler(state_).LoadFastJSArrayLength(TNode<JSArray>{tmp11});
    ca_.SetSourcePosition("../../src/builtins/collections.tq", 14);
    TNode<IntPtrT> tmp13 = ca_.IntPtrConstant(JSObject::kElementsOffset);
    USE(tmp13);
    TNode<FixedArrayBase>tmp14 = CodeStubAssembler(state_).LoadReference<FixedArrayBase>(CodeStubAssembler::Reference{tmp11, tmp13});
    ca_.SetSourcePosition("../../src/builtins/collections.tq", 15);
    TNode<FixedArray> tmp15;
    USE(tmp15);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp15 = Cast10FixedArray_103(state_, TNode<HeapObject>{tmp14}, &label0);
    ca_.Goto(&block9, tmp7, tmp8, tmp9, tmp11, tmp12, tmp14, tmp14, tmp15);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block10, tmp7, tmp8, tmp9, tmp11, tmp12, tmp14, tmp14);
    }
  }

  if (block10.is_used()) {
    TNode<Context> tmp16;
    TNode<Object> tmp17;
    TNode<Object> tmp18;
    TNode<JSArray> tmp19;
    TNode<Smi> tmp20;
    TNode<FixedArrayBase> tmp21;
    TNode<FixedArrayBase> tmp22;
    ca_.Bind(&block10, &tmp16, &tmp17, &tmp18, &tmp19, &tmp20, &tmp21, &tmp22);
    ca_.Goto(&block8, tmp16, tmp17, tmp18, tmp19, tmp20, tmp21);
  }

  if (block9.is_used()) {
    TNode<Context> tmp23;
    TNode<Object> tmp24;
    TNode<Object> tmp25;
    TNode<JSArray> tmp26;
    TNode<Smi> tmp27;
    TNode<FixedArrayBase> tmp28;
    TNode<FixedArrayBase> tmp29;
    TNode<FixedArray> tmp30;
    ca_.Bind(&block9, &tmp23, &tmp24, &tmp25, &tmp26, &tmp27, &tmp28, &tmp29, &tmp30);
    ca_.SetSourcePosition("../../src/builtins/collections.tq", 17);
    TNode<Smi> tmp31;
    USE(tmp31);
    tmp31 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 0);
    TNode<BoolT> tmp32;
    USE(tmp32);
    tmp32 = CodeStubAssembler(state_).SmiGreaterThan(TNode<Smi>{tmp27}, TNode<Smi>{tmp31});
    ca_.Branch(tmp32, &block11, &block12, tmp23, tmp24, tmp25, tmp26, tmp27, tmp28, tmp30);
  }

  if (block11.is_used()) {
    TNode<Context> tmp33;
    TNode<Object> tmp34;
    TNode<Object> tmp35;
    TNode<JSArray> tmp36;
    TNode<Smi> tmp37;
    TNode<FixedArrayBase> tmp38;
    TNode<FixedArray> tmp39;
    ca_.Bind(&block11, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39);
    TNode<Smi> tmp40;
    USE(tmp40);
    tmp40 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 0);
    TNode<Object> tmp41;
    USE(tmp41);
    tmp41 = LoadElementOrUndefined_51(state_, TNode<Context>{tmp33}, TNode<FixedArray>{tmp39}, TNode<Smi>{tmp40});
    ca_.Goto(&block14, tmp33, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39, tmp41);
  }

  if (block12.is_used()) {
    TNode<Context> tmp42;
    TNode<Object> tmp43;
    TNode<Object> tmp44;
    TNode<JSArray> tmp45;
    TNode<Smi> tmp46;
    TNode<FixedArrayBase> tmp47;
    TNode<FixedArray> tmp48;
    ca_.Bind(&block12, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47, &tmp48);
    ca_.SetSourcePosition("../../src/builtins/collections.tq", 18);
    TNode<Oddball> tmp49;
    USE(tmp49);
    tmp49 = Undefined_64(state_);
    ca_.SetSourcePosition("../../src/builtins/collections.tq", 17);
    ca_.Goto(&block13, tmp42, tmp43, tmp44, tmp45, tmp46, tmp47, tmp48, tmp49);
  }

  if (block14.is_used()) {
    TNode<Context> tmp50;
    TNode<Object> tmp51;
    TNode<Object> tmp52;
    TNode<JSArray> tmp53;
    TNode<Smi> tmp54;
    TNode<FixedArrayBase> tmp55;
    TNode<FixedArray> tmp56;
    TNode<Object> tmp57;
    ca_.Bind(&block14, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56, &tmp57);
    ca_.Goto(&block13, tmp50, tmp51, tmp52, tmp53, tmp54, tmp55, tmp56, tmp57);
  }

  if (block13.is_used()) {
    TNode<Context> tmp58;
    TNode<Object> tmp59;
    TNode<Object> tmp60;
    TNode<JSArray> tmp61;
    TNode<Smi> tmp62;
    TNode<FixedArrayBase> tmp63;
    TNode<FixedArray> tmp64;
    TNode<Object> tmp65;
    ca_.Bind(&block13, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64, &tmp65);
    ca_.SetSourcePosition("../../src/builtins/collections.tq", 19);
    TNode<Smi> tmp66;
    USE(tmp66);
    tmp66 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 1);
    TNode<BoolT> tmp67;
    USE(tmp67);
    tmp67 = CodeStubAssembler(state_).SmiGreaterThan(TNode<Smi>{tmp62}, TNode<Smi>{tmp66});
    ca_.Branch(tmp67, &block15, &block16, tmp58, tmp59, tmp60, tmp61, tmp62, tmp63, tmp64, tmp65);
  }

  if (block15.is_used()) {
    TNode<Context> tmp68;
    TNode<Object> tmp69;
    TNode<Object> tmp70;
    TNode<JSArray> tmp71;
    TNode<Smi> tmp72;
    TNode<FixedArrayBase> tmp73;
    TNode<FixedArray> tmp74;
    TNode<Object> tmp75;
    ca_.Bind(&block15, &tmp68, &tmp69, &tmp70, &tmp71, &tmp72, &tmp73, &tmp74, &tmp75);
    TNode<Smi> tmp76;
    USE(tmp76);
    tmp76 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 1);
    TNode<Object> tmp77;
    USE(tmp77);
    tmp77 = LoadElementOrUndefined_51(state_, TNode<Context>{tmp68}, TNode<FixedArray>{tmp74}, TNode<Smi>{tmp76});
    ca_.Goto(&block18, tmp68, tmp69, tmp70, tmp71, tmp72, tmp73, tmp74, tmp75, tmp77);
  }

  if (block16.is_used()) {
    TNode<Context> tmp78;
    TNode<Object> tmp79;
    TNode<Object> tmp80;
    TNode<JSArray> tmp81;
    TNode<Smi> tmp82;
    TNode<FixedArrayBase> tmp83;
    TNode<FixedArray> tmp84;
    TNode<Object> tmp85;
    ca_.Bind(&block16, &tmp78, &tmp79, &tmp80, &tmp81, &tmp82, &tmp83, &tmp84, &tmp85);
    ca_.SetSourcePosition("../../src/builtins/collections.tq", 20);
    TNode<Oddball> tmp86;
    USE(tmp86);
    tmp86 = Undefined_64(state_);
    ca_.SetSourcePosition("../../src/builtins/collections.tq", 19);
    ca_.Goto(&block17, tmp78, tmp79, tmp80, tmp81, tmp82, tmp83, tmp84, tmp85, tmp86);
  }

  if (block18.is_used()) {
    TNode<Context> tmp87;
    TNode<Object> tmp88;
    TNode<Object> tmp89;
    TNode<JSArray> tmp90;
    TNode<Smi> tmp91;
    TNode<FixedArrayBase> tmp92;
    TNode<FixedArray> tmp93;
    TNode<Object> tmp94;
    TNode<Object> tmp95;
    ca_.Bind(&block18, &tmp87, &tmp88, &tmp89, &tmp90, &tmp91, &tmp92, &tmp93, &tmp94, &tmp95);
    ca_.Goto(&block17, tmp87, tmp88, tmp89, tmp90, tmp91, tmp92, tmp93, tmp94, tmp95);
  }

  if (block17.is_used()) {
    TNode<Context> tmp96;
    TNode<Object> tmp97;
    TNode<Object> tmp98;
    TNode<JSArray> tmp99;
    TNode<Smi> tmp100;
    TNode<FixedArrayBase> tmp101;
    TNode<FixedArray> tmp102;
    TNode<Object> tmp103;
    TNode<Object> tmp104;
    ca_.Bind(&block17, &tmp96, &tmp97, &tmp98, &tmp99, &tmp100, &tmp101, &tmp102, &tmp103, &tmp104);
    ca_.SetSourcePosition("../../src/builtins/collections.tq", 16);
    ca_.Goto(&block2, tmp96, tmp97, tmp103, tmp104);
  }

  if (block8.is_used()) {
    TNode<Context> tmp105;
    TNode<Object> tmp106;
    TNode<Object> tmp107;
    TNode<JSArray> tmp108;
    TNode<Smi> tmp109;
    TNode<FixedArrayBase> tmp110;
    ca_.Bind(&block8, &tmp105, &tmp106, &tmp107, &tmp108, &tmp109, &tmp110);
    ca_.SetSourcePosition("../../src/builtins/collections.tq", 23);
    TNode<FixedDoubleArray> tmp111;
    USE(tmp111);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp111 = Cast16FixedDoubleArray_104(state_, TNode<HeapObject>{ca_.UncheckedCast<FixedArrayBase>(tmp110)}, &label0);
    ca_.Goto(&block21, tmp105, tmp106, tmp107, tmp108, tmp109, tmp110, ca_.UncheckedCast<FixedArrayBase>(tmp110), tmp111);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block22, tmp105, tmp106, tmp107, tmp108, tmp109, tmp110, ca_.UncheckedCast<FixedArrayBase>(tmp110));
    }
  }

  if (block22.is_used()) {
    TNode<Context> tmp112;
    TNode<Object> tmp113;
    TNode<Object> tmp114;
    TNode<JSArray> tmp115;
    TNode<Smi> tmp116;
    TNode<FixedArrayBase> tmp117;
    TNode<FixedArrayBase> tmp118;
    ca_.Bind(&block22, &tmp112, &tmp113, &tmp114, &tmp115, &tmp116, &tmp117, &tmp118);
    ca_.Goto(&block20, tmp112, tmp113, tmp114, tmp115, tmp116, tmp117);
  }

  if (block21.is_used()) {
    TNode<Context> tmp119;
    TNode<Object> tmp120;
    TNode<Object> tmp121;
    TNode<JSArray> tmp122;
    TNode<Smi> tmp123;
    TNode<FixedArrayBase> tmp124;
    TNode<FixedArrayBase> tmp125;
    TNode<FixedDoubleArray> tmp126;
    ca_.Bind(&block21, &tmp119, &tmp120, &tmp121, &tmp122, &tmp123, &tmp124, &tmp125, &tmp126);
    ca_.SetSourcePosition("../../src/builtins/collections.tq", 25);
    TNode<Smi> tmp127;
    USE(tmp127);
    tmp127 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 0);
    TNode<BoolT> tmp128;
    USE(tmp128);
    tmp128 = CodeStubAssembler(state_).SmiGreaterThan(TNode<Smi>{tmp123}, TNode<Smi>{tmp127});
    ca_.Branch(tmp128, &block23, &block24, tmp119, tmp120, tmp121, tmp122, tmp123, tmp124, tmp126);
  }

  if (block23.is_used()) {
    TNode<Context> tmp129;
    TNode<Object> tmp130;
    TNode<Object> tmp131;
    TNode<JSArray> tmp132;
    TNode<Smi> tmp133;
    TNode<FixedArrayBase> tmp134;
    TNode<FixedDoubleArray> tmp135;
    ca_.Bind(&block23, &tmp129, &tmp130, &tmp131, &tmp132, &tmp133, &tmp134, &tmp135);
    TNode<Smi> tmp136;
    USE(tmp136);
    tmp136 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 0);
    TNode<Object> tmp137;
    USE(tmp137);
    tmp137 = LoadElementOrUndefined_52(state_, TNode<FixedDoubleArray>{tmp135}, TNode<Smi>{tmp136});
    ca_.Goto(&block26, tmp129, tmp130, tmp131, tmp132, tmp133, tmp134, tmp135, tmp137);
  }

  if (block24.is_used()) {
    TNode<Context> tmp138;
    TNode<Object> tmp139;
    TNode<Object> tmp140;
    TNode<JSArray> tmp141;
    TNode<Smi> tmp142;
    TNode<FixedArrayBase> tmp143;
    TNode<FixedDoubleArray> tmp144;
    ca_.Bind(&block24, &tmp138, &tmp139, &tmp140, &tmp141, &tmp142, &tmp143, &tmp144);
    ca_.SetSourcePosition("../../src/builtins/collections.tq", 26);
    TNode<Oddball> tmp145;
    USE(tmp145);
    tmp145 = Undefined_64(state_);
    ca_.SetSourcePosition("../../src/builtins/collections.tq", 25);
    ca_.Goto(&block25, tmp138, tmp139, tmp140, tmp141, tmp142, tmp143, tmp144, tmp145);
  }

  if (block26.is_used()) {
    TNode<Context> tmp146;
    TNode<Object> tmp147;
    TNode<Object> tmp148;
    TNode<JSArray> tmp149;
    TNode<Smi> tmp150;
    TNode<FixedArrayBase> tmp151;
    TNode<FixedDoubleArray> tmp152;
    TNode<Object> tmp153;
    ca_.Bind(&block26, &tmp146, &tmp147, &tmp148, &tmp149, &tmp150, &tmp151, &tmp152, &tmp153);
    ca_.Goto(&block25, tmp146, tmp147, tmp148, tmp149, tmp150, tmp151, tmp152, tmp153);
  }

  if (block25.is_used()) {
    TNode<Context> tmp154;
    TNode<Object> tmp155;
    TNode<Object> tmp156;
    TNode<JSArray> tmp157;
    TNode<Smi> tmp158;
    TNode<FixedArrayBase> tmp159;
    TNode<FixedDoubleArray> tmp160;
    TNode<Object> tmp161;
    ca_.Bind(&block25, &tmp154, &tmp155, &tmp156, &tmp157, &tmp158, &tmp159, &tmp160, &tmp161);
    ca_.SetSourcePosition("../../src/builtins/collections.tq", 27);
    TNode<Smi> tmp162;
    USE(tmp162);
    tmp162 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 1);
    TNode<BoolT> tmp163;
    USE(tmp163);
    tmp163 = CodeStubAssembler(state_).SmiGreaterThan(TNode<Smi>{tmp158}, TNode<Smi>{tmp162});
    ca_.Branch(tmp163, &block27, &block28, tmp154, tmp155, tmp156, tmp157, tmp158, tmp159, tmp160, tmp161);
  }

  if (block27.is_used()) {
    TNode<Context> tmp164;
    TNode<Object> tmp165;
    TNode<Object> tmp166;
    TNode<JSArray> tmp167;
    TNode<Smi> tmp168;
    TNode<FixedArrayBase> tmp169;
    TNode<FixedDoubleArray> tmp170;
    TNode<Object> tmp171;
    ca_.Bind(&block27, &tmp164, &tmp165, &tmp166, &tmp167, &tmp168, &tmp169, &tmp170, &tmp171);
    TNode<Smi> tmp172;
    USE(tmp172);
    tmp172 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 1);
    TNode<Object> tmp173;
    USE(tmp173);
    tmp173 = LoadElementOrUndefined_52(state_, TNode<FixedDoubleArray>{tmp170}, TNode<Smi>{tmp172});
    ca_.Goto(&block30, tmp164, tmp165, tmp166, tmp167, tmp168, tmp169, tmp170, tmp171, tmp173);
  }

  if (block28.is_used()) {
    TNode<Context> tmp174;
    TNode<Object> tmp175;
    TNode<Object> tmp176;
    TNode<JSArray> tmp177;
    TNode<Smi> tmp178;
    TNode<FixedArrayBase> tmp179;
    TNode<FixedDoubleArray> tmp180;
    TNode<Object> tmp181;
    ca_.Bind(&block28, &tmp174, &tmp175, &tmp176, &tmp177, &tmp178, &tmp179, &tmp180, &tmp181);
    ca_.SetSourcePosition("../../src/builtins/collections.tq", 28);
    TNode<Oddball> tmp182;
    USE(tmp182);
    tmp182 = Undefined_64(state_);
    ca_.SetSourcePosition("../../src/builtins/collections.tq", 27);
    ca_.Goto(&block29, tmp174, tmp175, tmp176, tmp177, tmp178, tmp179, tmp180, tmp181, tmp182);
  }

  if (block30.is_used()) {
    TNode<Context> tmp183;
    TNode<Object> tmp184;
    TNode<Object> tmp185;
    TNode<JSArray> tmp186;
    TNode<Smi> tmp187;
    TNode<FixedArrayBase> tmp188;
    TNode<FixedDoubleArray> tmp189;
    TNode<Object> tmp190;
    TNode<Object> tmp191;
    ca_.Bind(&block30, &tmp183, &tmp184, &tmp185, &tmp186, &tmp187, &tmp188, &tmp189, &tmp190, &tmp191);
    ca_.Goto(&block29, tmp183, tmp184, tmp185, tmp186, tmp187, tmp188, tmp189, tmp190, tmp191);
  }

  if (block29.is_used()) {
    TNode<Context> tmp192;
    TNode<Object> tmp193;
    TNode<Object> tmp194;
    TNode<JSArray> tmp195;
    TNode<Smi> tmp196;
    TNode<FixedArrayBase> tmp197;
    TNode<FixedDoubleArray> tmp198;
    TNode<Object> tmp199;
    TNode<Object> tmp200;
    ca_.Bind(&block29, &tmp192, &tmp193, &tmp194, &tmp195, &tmp196, &tmp197, &tmp198, &tmp199, &tmp200);
    ca_.SetSourcePosition("../../src/builtins/collections.tq", 24);
    ca_.Goto(&block2, tmp192, tmp193, tmp199, tmp200);
  }

  if (block20.is_used()) {
    TNode<Context> tmp201;
    TNode<Object> tmp202;
    TNode<Object> tmp203;
    TNode<JSArray> tmp204;
    TNode<Smi> tmp205;
    TNode<FixedArrayBase> tmp206;
    ca_.Bind(&block20, &tmp201, &tmp202, &tmp203, &tmp204, &tmp205, &tmp206);
    ca_.SetSourcePosition("../../src/builtins/collections.tq", 31);
    ca_.SetSourcePosition("../../src/builtins/collections.tq", 32);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block4.is_used()) {
    TNode<Context> tmp207;
    TNode<Object> tmp208;
    TNode<Object> tmp209;
    ca_.Bind(&block4, &tmp207, &tmp208, &tmp209);
    ca_.SetSourcePosition("../../src/builtins/collections.tq", 36);
    TNode<JSReceiver> tmp210;
    USE(tmp210);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp210 = Cast10JSReceiver_1427(state_, TNode<Context>{tmp207}, TNode<Object>{ca_.UncheckedCast<Object>(tmp209)}, &label0);
    ca_.Goto(&block33, tmp207, tmp208, tmp209, ca_.UncheckedCast<Object>(tmp209), tmp210);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block34, tmp207, tmp208, tmp209, ca_.UncheckedCast<Object>(tmp209));
    }
  }

  if (block34.is_used()) {
    TNode<Context> tmp211;
    TNode<Object> tmp212;
    TNode<Object> tmp213;
    TNode<Object> tmp214;
    ca_.Bind(&block34, &tmp211, &tmp212, &tmp213, &tmp214);
    ca_.Goto(&block32, tmp211, tmp212, tmp213);
  }

  if (block33.is_used()) {
    TNode<Context> tmp215;
    TNode<Object> tmp216;
    TNode<Object> tmp217;
    TNode<Object> tmp218;
    TNode<JSReceiver> tmp219;
    ca_.Bind(&block33, &tmp215, &tmp216, &tmp217, &tmp218, &tmp219);
    ca_.SetSourcePosition("../../src/builtins/collections.tq", 37);
    ca_.Goto(&block1);
  }

  if (block32.is_used()) {
    TNode<Context> tmp220;
    TNode<Object> tmp221;
    TNode<Object> tmp222;
    ca_.Bind(&block32, &tmp220, &tmp221, &tmp222);
    ca_.SetSourcePosition("../../src/builtins/collections.tq", 39);
    ca_.SetSourcePosition("../../src/builtins/collections.tq", 40);
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{tmp220}, MessageTemplate::kIteratorValueNotAnObject, TNode<Object>{ca_.UncheckedCast<Object>(tmp222)});
  }

  if (block2.is_used()) {
    TNode<Context> tmp223;
    TNode<Object> tmp224;
    TNode<Object> tmp225;
    TNode<Object> tmp226;
    ca_.Bind(&block2, &tmp223, &tmp224, &tmp225, &tmp226);
    ca_.SetSourcePosition("../../src/builtins/collections.tq", 8);
    ca_.Goto(&block35, tmp223, tmp224, tmp225, tmp226);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_MayHaveSideEffects);
  }

    TNode<Context> tmp227;
    TNode<Object> tmp228;
    TNode<Object> tmp229;
    TNode<Object> tmp230;
    ca_.Bind(&block35, &tmp227, &tmp228, &tmp229, &tmp230);
  return TorqueStructKeyValuePair{TNode<Object>{tmp229}, TNode<Object>{tmp230}};
}

TorqueStructKeyValuePair LoadKeyValuePair_270(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../src/builtins/collections.tq", 49);
    TNode<Object> tmp2;
    USE(tmp2);
    TNode<Object> tmp3;
    USE(tmp3);
    compiler::CodeAssemblerLabel label0(&ca_);
    std::tie(tmp2, tmp3) = LoadKeyValuePairNoSideEffects_269(state_, TNode<Context>{tmp0}, TNode<Object>{tmp1}, &label0).Flatten();
    ca_.Goto(&block4, tmp0, tmp1, tmp1, tmp2, tmp3);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block5, tmp0, tmp1, tmp1);
    }
  }

  if (block5.is_used()) {
    TNode<Context> tmp4;
    TNode<Object> tmp5;
    TNode<Object> tmp6;
    ca_.Bind(&block5, &tmp4, &tmp5, &tmp6);
    ca_.Goto(&block3, tmp4, tmp5);
  }

  if (block4.is_used()) {
    TNode<Context> tmp7;
    TNode<Object> tmp8;
    TNode<Object> tmp9;
    TNode<Object> tmp10;
    TNode<Object> tmp11;
    ca_.Bind(&block4, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11);
    ca_.Goto(&block1, tmp7, tmp8, tmp10, tmp11);
  }

  if (block3.is_used()) {
    TNode<Context> tmp12;
    TNode<Object> tmp13;
    ca_.Bind(&block3, &tmp12, &tmp13);
    ca_.SetSourcePosition("../../src/builtins/collections.tq", 53);
    TNode<Smi> tmp14;
    USE(tmp14);
    tmp14 = Convert5ATSmi17ATconstexpr_int31_1429(state_, 0);
    TNode<Object> tmp15;
    USE(tmp15);
    tmp15 = CodeStubAssembler(state_).GetProperty(TNode<Context>{tmp12}, TNode<Object>{tmp13}, TNode<Object>{tmp14});
    ca_.SetSourcePosition("../../src/builtins/collections.tq", 54);
    TNode<Smi> tmp16;
    USE(tmp16);
    tmp16 = Convert5ATSmi17ATconstexpr_int31_1429(state_, 1);
    TNode<Object> tmp17;
    USE(tmp17);
    tmp17 = CodeStubAssembler(state_).GetProperty(TNode<Context>{tmp12}, TNode<Object>{tmp13}, TNode<Object>{tmp16});
    ca_.SetSourcePosition("../../src/builtins/collections.tq", 52);
    ca_.Goto(&block1, tmp12, tmp13, tmp15, tmp17);
  }

  if (block1.is_used()) {
    TNode<Context> tmp18;
    TNode<Object> tmp19;
    TNode<Object> tmp20;
    TNode<Object> tmp21;
    ca_.Bind(&block1, &tmp18, &tmp19, &tmp20, &tmp21);
    ca_.SetSourcePosition("../../src/builtins/collections.tq", 45);
    ca_.Goto(&block6, tmp18, tmp19, tmp20, tmp21);
  }

    TNode<Context> tmp22;
    TNode<Object> tmp23;
    TNode<Object> tmp24;
    TNode<Object> tmp25;
    ca_.Bind(&block6, &tmp22, &tmp23, &tmp24, &tmp25);
  return TorqueStructKeyValuePair{TNode<Object>{tmp24}, TNode<Object>{tmp25}};
}

}  // namespace internal
}  // namespace v8

