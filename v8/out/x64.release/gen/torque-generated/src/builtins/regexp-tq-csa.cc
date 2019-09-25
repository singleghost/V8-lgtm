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

TNode<BoolT> IsFastRegExpStrict_333(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<HeapObject> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, HeapObject> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, HeapObject, HeapObject> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, HeapObject, HeapObject> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, HeapObject> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, HeapObject> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, HeapObject, BoolT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, HeapObject, BoolT> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<HeapObject> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../src/builtins/regexp.tq", 13);
    compiler::CodeAssemblerLabel label0(&ca_);
    compiler::CodeAssemblerLabel label1(&ca_);
    RegExpBuiltinsAssembler(state_).BranchIfFastRegExp_Strict(TNode<Context>{tmp0}, TNode<HeapObject>{tmp1}, &label0, &label1);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp0, tmp1, tmp1);
    }
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block7, tmp0, tmp1, tmp1);
    }
  }

  if (block6.is_used()) {
    TNode<Context> tmp2;
    TNode<HeapObject> tmp3;
    TNode<HeapObject> tmp4;
    ca_.Bind(&block6, &tmp2, &tmp3, &tmp4);
    ca_.Goto(&block5, tmp2, tmp3);
  }

  if (block7.is_used()) {
    TNode<Context> tmp5;
    TNode<HeapObject> tmp6;
    TNode<HeapObject> tmp7;
    ca_.Bind(&block7, &tmp5, &tmp6, &tmp7);
    ca_.Goto(&block3, tmp5, tmp6);
  }

  if (block5.is_used()) {
    TNode<Context> tmp8;
    TNode<HeapObject> tmp9;
    ca_.Bind(&block5, &tmp8, &tmp9);
    TNode<BoolT> tmp10;
    USE(tmp10);
    tmp10 = FromConstexpr6ATbool16ATconstexpr_bool_167(state_, true);
    ca_.Goto(&block1, tmp8, tmp9, tmp10);
  }

  if (block3.is_used()) {
    TNode<Context> tmp11;
    TNode<HeapObject> tmp12;
    ca_.Bind(&block3, &tmp11, &tmp12);
    TNode<BoolT> tmp13;
    USE(tmp13);
    tmp13 = FromConstexpr6ATbool16ATconstexpr_bool_167(state_, false);
    ca_.Goto(&block1, tmp11, tmp12, tmp13);
  }

  if (block1.is_used()) {
    TNode<Context> tmp14;
    TNode<HeapObject> tmp15;
    TNode<BoolT> tmp16;
    ca_.Bind(&block1, &tmp14, &tmp15, &tmp16);
    ca_.SetSourcePosition("../../src/builtins/regexp.tq", 12);
    ca_.Goto(&block8, tmp14, tmp15, tmp16);
  }

    TNode<Context> tmp17;
    TNode<HeapObject> tmp18;
    TNode<BoolT> tmp19;
    ca_.Bind(&block8, &tmp17, &tmp18, &tmp19);
  return TNode<BoolT>{tmp19};
}

TNode<BoolT> IsFastRegExpPermissive_334(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<HeapObject> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, HeapObject> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, HeapObject, HeapObject> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, HeapObject, HeapObject> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, HeapObject> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, HeapObject> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, HeapObject, BoolT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, HeapObject, BoolT> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<HeapObject> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../src/builtins/regexp.tq", 22);
    compiler::CodeAssemblerLabel label0(&ca_);
    compiler::CodeAssemblerLabel label1(&ca_);
    RegExpBuiltinsAssembler(state_).BranchIfFastRegExp_Permissive(TNode<Context>{tmp0}, TNode<HeapObject>{tmp1}, &label0, &label1);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp0, tmp1, tmp1);
    }
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block7, tmp0, tmp1, tmp1);
    }
  }

  if (block6.is_used()) {
    TNode<Context> tmp2;
    TNode<HeapObject> tmp3;
    TNode<HeapObject> tmp4;
    ca_.Bind(&block6, &tmp2, &tmp3, &tmp4);
    ca_.Goto(&block5, tmp2, tmp3);
  }

  if (block7.is_used()) {
    TNode<Context> tmp5;
    TNode<HeapObject> tmp6;
    TNode<HeapObject> tmp7;
    ca_.Bind(&block7, &tmp5, &tmp6, &tmp7);
    ca_.Goto(&block3, tmp5, tmp6);
  }

  if (block5.is_used()) {
    TNode<Context> tmp8;
    TNode<HeapObject> tmp9;
    ca_.Bind(&block5, &tmp8, &tmp9);
    TNode<BoolT> tmp10;
    USE(tmp10);
    tmp10 = FromConstexpr6ATbool16ATconstexpr_bool_167(state_, true);
    ca_.Goto(&block1, tmp8, tmp9, tmp10);
  }

  if (block3.is_used()) {
    TNode<Context> tmp11;
    TNode<HeapObject> tmp12;
    ca_.Bind(&block3, &tmp11, &tmp12);
    TNode<BoolT> tmp13;
    USE(tmp13);
    tmp13 = FromConstexpr6ATbool16ATconstexpr_bool_167(state_, false);
    ca_.Goto(&block1, tmp11, tmp12, tmp13);
  }

  if (block1.is_used()) {
    TNode<Context> tmp14;
    TNode<HeapObject> tmp15;
    TNode<BoolT> tmp16;
    ca_.Bind(&block1, &tmp14, &tmp15, &tmp16);
    ca_.SetSourcePosition("../../src/builtins/regexp.tq", 20);
    ca_.Goto(&block8, tmp14, tmp15, tmp16);
  }

    TNode<Context> tmp17;
    TNode<HeapObject> tmp18;
    TNode<BoolT> tmp19;
    ca_.Bind(&block8, &tmp17, &tmp18, &tmp19);
  return TNode<BoolT>{tmp19};
}

TNode<Object> FlagGetter_335(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_receiver, JSRegExp::Flag p_flag, int31_t p_counter, const char* p_methodName) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSRegExp> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_receiver);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../src/builtins/regexp.tq", 66);
    ca_.SetSourcePosition("../../src/builtins/regexp.tq", 67);
    TNode<JSRegExp> tmp2;
    USE(tmp2);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp2 = Cast8JSRegExp_1496(state_, TNode<Context>{tmp0}, TNode<Object>{tmp1}, &label0);
    ca_.Goto(&block4, tmp0, tmp1, tmp1, tmp1, tmp2);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block5, tmp0, tmp1, tmp1, tmp1);
    }
  }

  if (block5.is_used()) {
    TNode<Context> tmp3;
    TNode<Object> tmp4;
    TNode<Object> tmp5;
    TNode<Object> tmp6;
    ca_.Bind(&block5, &tmp3, &tmp4, &tmp5, &tmp6);
    ca_.Goto(&block3, tmp3, tmp4, tmp5);
  }

  if (block4.is_used()) {
    TNode<Context> tmp7;
    TNode<Object> tmp8;
    TNode<Object> tmp9;
    TNode<Object> tmp10;
    TNode<JSRegExp> tmp11;
    ca_.Bind(&block4, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11);
    ca_.SetSourcePosition("../../src/builtins/regexp.tq", 68);
    TNode<BoolT> tmp12;
    USE(tmp12);
    tmp12 = RegExpBuiltinsAssembler(state_).FastFlagGetter(TNode<JSRegExp>{tmp11}, p_flag);
    TNode<Oddball> tmp13;
    USE(tmp13);
    tmp13 = CodeStubAssembler(state_).SelectBooleanConstant(TNode<BoolT>{tmp12});
    ca_.Goto(&block1, tmp7, tmp8, tmp13);
  }

  if (block3.is_used()) {
    TNode<Context> tmp14;
    TNode<Object> tmp15;
    TNode<Object> tmp16;
    ca_.Bind(&block3, &tmp14, &tmp15, &tmp16);
    ca_.SetSourcePosition("../../src/builtins/regexp.tq", 70);
    ca_.SetSourcePosition("../../src/builtins/regexp.tq", 67);
    ca_.Goto(&block2, tmp14, tmp15, tmp16);
  }

  if (block2.is_used()) {
    TNode<Context> tmp17;
    TNode<Object> tmp18;
    TNode<Object> tmp19;
    ca_.Bind(&block2, &tmp17, &tmp18, &tmp19);
    ca_.SetSourcePosition("../../src/builtins/regexp.tq", 66);
    ca_.SetSourcePosition("../../src/builtins/regexp.tq", 73);
    TNode<BoolT> tmp20;
    USE(tmp20);
    tmp20 = RegExpBuiltinsAssembler(state_).IsReceiverInitialRegExpPrototype(TNode<Context>{tmp17}, TNode<Object>{tmp18});
    TNode<BoolT> tmp21;
    USE(tmp21);
    tmp21 = CodeStubAssembler(state_).Word32BinaryNot(TNode<BoolT>{tmp20});
    ca_.Branch(tmp21, &block6, &block7, tmp17, tmp18);
  }

  if (block6.is_used()) {
    TNode<Context> tmp22;
    TNode<Object> tmp23;
    ca_.Bind(&block6, &tmp22, &tmp23);
    ca_.SetSourcePosition("../../src/builtins/regexp.tq", 74);
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{tmp22}, MessageTemplate::kRegExpNonRegExp, p_methodName);
  }

  if (block7.is_used()) {
    TNode<Context> tmp24;
    TNode<Object> tmp25;
    ca_.Bind(&block7, &tmp24, &tmp25);
    ca_.SetSourcePosition("../../src/builtins/regexp.tq", 76);
    if (((CodeStubAssembler(state_).ConstexprInt31NotEqual(p_counter, -1)))) {
      ca_.Goto(&block8, tmp24, tmp25);
    } else {
      ca_.Goto(&block9, tmp24, tmp25);
    }
  }

  if (block8.is_used()) {
    TNode<Context> tmp26;
    TNode<Object> tmp27;
    ca_.Bind(&block8, &tmp26, &tmp27);
    ca_.SetSourcePosition("../../src/builtins/regexp.tq", 77);
    TNode<Smi> tmp28;
    USE(tmp28);
    tmp28 = CodeStubAssembler(state_).SmiConstant(p_counter);
    CodeStubAssembler(state_).CallRuntime(Runtime::kIncrementUseCounter, tmp26, tmp28);
    ca_.SetSourcePosition("../../src/builtins/regexp.tq", 76);
    ca_.Goto(&block10, tmp26, tmp27);
  }

  if (block9.is_used()) {
    TNode<Context> tmp30;
    TNode<Object> tmp31;
    ca_.Bind(&block9, &tmp30, &tmp31);
    ca_.Goto(&block10, tmp30, tmp31);
  }

  if (block10.is_used()) {
    TNode<Context> tmp32;
    TNode<Object> tmp33;
    ca_.Bind(&block10, &tmp32, &tmp33);
    ca_.SetSourcePosition("../../src/builtins/regexp.tq", 79);
    TNode<Oddball> tmp34;
    USE(tmp34);
    tmp34 = Undefined_64(state_);
    ca_.Goto(&block1, tmp32, tmp33, tmp34);
  }

  if (block1.is_used()) {
    TNode<Context> tmp35;
    TNode<Object> tmp36;
    TNode<Object> tmp37;
    ca_.Bind(&block1, &tmp35, &tmp36, &tmp37);
    ca_.SetSourcePosition("../../src/builtins/regexp.tq", 63);
    ca_.Goto(&block11, tmp35, tmp36, tmp37);
  }

    TNode<Context> tmp38;
    TNode<Object> tmp39;
    TNode<Object> tmp40;
    ca_.Bind(&block11, &tmp38, &tmp39, &tmp40);
  return TNode<Object>{tmp40};
}

TF_BUILTIN(RegExpPrototypeGlobalGetter, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  TNode<Object> parameter1 = UncheckedCast<Object>(Parameter(Descriptor::kReceiver));
USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../src/builtins/regexp.tq", 87);
    ca_.SetSourcePosition("../../src/builtins/regexp.tq", 86);
    TNode<Object> tmp2;
    USE(tmp2);
    tmp2 = FlagGetter_335(state_, TNode<Context>{tmp0}, TNode<Object>{tmp1}, JSRegExp::kGlobal, v8::Isolate::kRegExpPrototypeOldFlagGetter, "RegExp.prototype.global");
    CodeStubAssembler(state_).Return(tmp2);
  }
}

TF_BUILTIN(RegExpPrototypeIgnoreCaseGetter, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  TNode<Object> parameter1 = UncheckedCast<Object>(Parameter(Descriptor::kReceiver));
USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../src/builtins/regexp.tq", 96);
    ca_.SetSourcePosition("../../src/builtins/regexp.tq", 95);
    TNode<Object> tmp2;
    USE(tmp2);
    tmp2 = FlagGetter_335(state_, TNode<Context>{tmp0}, TNode<Object>{tmp1}, JSRegExp::kIgnoreCase, v8::Isolate::kRegExpPrototypeOldFlagGetter, "RegExp.prototype.ignoreCase");
    CodeStubAssembler(state_).Return(tmp2);
  }
}

TF_BUILTIN(RegExpPrototypeMultilineGetter, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  TNode<Object> parameter1 = UncheckedCast<Object>(Parameter(Descriptor::kReceiver));
USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../src/builtins/regexp.tq", 105);
    ca_.SetSourcePosition("../../src/builtins/regexp.tq", 104);
    TNode<Object> tmp2;
    USE(tmp2);
    tmp2 = FlagGetter_335(state_, TNode<Context>{tmp0}, TNode<Object>{tmp1}, JSRegExp::kMultiline, v8::Isolate::kRegExpPrototypeOldFlagGetter, "RegExp.prototype.multiline");
    CodeStubAssembler(state_).Return(tmp2);
  }
}

TF_BUILTIN(RegExpPrototypeDotAllGetter, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  TNode<Object> parameter1 = UncheckedCast<Object>(Parameter(Descriptor::kReceiver));
USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../src/builtins/regexp.tq", 113);
    TNode<Object> tmp2;
    USE(tmp2);
    tmp2 = FlagGetter_335(state_, TNode<Context>{tmp0}, TNode<Object>{tmp1}, JSRegExp::kDotAll, -1, "RegExp.prototype.dotAll");
    CodeStubAssembler(state_).Return(tmp2);
  }
}

TF_BUILTIN(RegExpPrototypeStickyGetter, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  TNode<Object> parameter1 = UncheckedCast<Object>(Parameter(Descriptor::kReceiver));
USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../src/builtins/regexp.tq", 121);
    ca_.SetSourcePosition("../../src/builtins/regexp.tq", 120);
    TNode<Object> tmp2;
    USE(tmp2);
    tmp2 = FlagGetter_335(state_, TNode<Context>{tmp0}, TNode<Object>{tmp1}, JSRegExp::kSticky, v8::Isolate::kRegExpPrototypeStickyGetter, "RegExp.prototype.sticky");
    CodeStubAssembler(state_).Return(tmp2);
  }
}

TF_BUILTIN(RegExpPrototypeUnicodeGetter, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  TNode<Object> parameter1 = UncheckedCast<Object>(Parameter(Descriptor::kReceiver));
USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../src/builtins/regexp.tq", 130);
    ca_.SetSourcePosition("../../src/builtins/regexp.tq", 129);
    TNode<Object> tmp2;
    USE(tmp2);
    tmp2 = FlagGetter_335(state_, TNode<Context>{tmp0}, TNode<Object>{tmp1}, JSRegExp::kUnicode, v8::Isolate::kRegExpPrototypeUnicodeGetter, "RegExp.prototype.unicode");
    CodeStubAssembler(state_).Return(tmp2);
  }
}

TNode<String> FastFlagsGetter_336(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSRegExp> p_receiver) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSRegExp, String> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_receiver);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<JSRegExp> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../src/builtins/regexp.tq", 140);
    TNode<String> tmp2;
    USE(tmp2);
    tmp2 = RegExpBuiltinsAssembler(state_).FlagsGetter(TNode<Context>{tmp0}, TNode<Object>{tmp1}, true);
    ca_.Goto(&block1, tmp0, tmp1, tmp2);
  }

  if (block1.is_used()) {
    TNode<Context> tmp3;
    TNode<JSRegExp> tmp4;
    TNode<String> tmp5;
    ca_.Bind(&block1, &tmp3, &tmp4, &tmp5);
    ca_.SetSourcePosition("../../src/builtins/regexp.tq", 138);
    ca_.Goto(&block2, tmp3, tmp4, tmp5);
  }

    TNode<Context> tmp6;
    TNode<JSRegExp> tmp7;
    TNode<String> tmp8;
    ca_.Bind(&block2, &tmp6, &tmp7, &tmp8);
  return TNode<String>{tmp8};
}

TNode<String> SlowFlagsGetter_337(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_receiver) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, String> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, String> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_receiver);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../src/builtins/regexp.tq", 145);
    TNode<String> tmp2;
    USE(tmp2);
    tmp2 = RegExpBuiltinsAssembler(state_).FlagsGetter(TNode<Context>{tmp0}, TNode<Object>{tmp1}, false);
    ca_.Goto(&block1, tmp0, tmp1, tmp2);
  }

  if (block1.is_used()) {
    TNode<Context> tmp3;
    TNode<Object> tmp4;
    TNode<String> tmp5;
    ca_.Bind(&block1, &tmp3, &tmp4, &tmp5);
    ca_.SetSourcePosition("../../src/builtins/regexp.tq", 143);
    ca_.Goto(&block2, tmp3, tmp4, tmp5);
  }

    TNode<Context> tmp6;
    TNode<Object> tmp7;
    TNode<String> tmp8;
    ca_.Bind(&block2, &tmp6, &tmp7, &tmp8);
  return TNode<String>{tmp8};
}

TF_BUILTIN(RegExpPrototypeFlagsGetter, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  TNode<Object> parameter1 = UncheckedCast<Object>(Parameter(Descriptor::kReceiver));
USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSRegExp> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSRegExp> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../src/builtins/regexp.tq", 155);
    CodeStubAssembler(state_).ThrowIfNotJSReceiver(TNode<Context>{tmp0}, TNode<Object>{tmp1}, MessageTemplate::kRegExpNonObject, "RegExp.prototype.flags");
    ca_.SetSourcePosition("../../src/builtins/regexp.tq", 160);
    TNode<JSRegExp> tmp2;
    USE(tmp2);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp2 = Cast14ATFastJSRegExp_1499(state_, TNode<Context>{tmp0}, TNode<Object>{tmp1}, &label0);
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
    TNode<JSRegExp> tmp9;
    ca_.Bind(&block3, &tmp6, &tmp7, &tmp8, &tmp9);
    ca_.Goto(&block1, tmp6, tmp7, tmp9);
  }

  if (block2.is_used()) {
    TNode<Context> tmp10;
    TNode<Object> tmp11;
    ca_.Bind(&block2, &tmp10, &tmp11);
    ca_.SetSourcePosition("../../src/builtins/regexp.tq", 161);
    TNode<String> tmp12;
    USE(tmp12);
    tmp12 = SlowFlagsGetter_337(state_, TNode<Context>{tmp10}, TNode<Object>{tmp11});
    CodeStubAssembler(state_).Return(tmp12);
  }

  if (block1.is_used()) {
    TNode<Context> tmp13;
    TNode<Object> tmp14;
    TNode<JSRegExp> tmp15;
    ca_.Bind(&block1, &tmp13, &tmp14, &tmp15);
    ca_.SetSourcePosition("../../src/builtins/regexp.tq", 162);
    TNode<String> tmp16;
    USE(tmp16);
    tmp16 = FastFlagsGetter_336(state_, TNode<Context>{tmp13}, TNode<JSRegExp>{tmp15});
    CodeStubAssembler(state_).Return(tmp16);
  }
}

TNode<JSRegExp> Cast14ATFastJSRegExp_1499(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, HeapObject> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject, JSRegExp> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSRegExp> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSRegExp> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
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
    TNode<JSRegExp> tmp10;
    USE(tmp10);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp10 = Cast14ATFastJSRegExp_136(state_, TNode<Context>{tmp6}, TNode<HeapObject>{tmp9}, &label0);
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
    TNode<JSRegExp> tmp17;
    ca_.Bind(&block5, &tmp14, &tmp15, &tmp16, &tmp17);
    ca_.Goto(&block2, tmp14, tmp15, tmp17);
  }

  if (block2.is_used()) {
    TNode<Context> tmp18;
    TNode<Object> tmp19;
    TNode<JSRegExp> tmp20;
    ca_.Bind(&block2, &tmp18, &tmp19, &tmp20);
    ca_.SetSourcePosition("../../src/builtins/regexp.tq", 160);
    ca_.Goto(&block7, tmp18, tmp19, tmp20);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    TNode<Context> tmp21;
    TNode<Object> tmp22;
    TNode<JSRegExp> tmp23;
    ca_.Bind(&block7, &tmp21, &tmp22, &tmp23);
  return TNode<JSRegExp>{tmp23};
}

}  // namespace internal
}  // namespace v8

