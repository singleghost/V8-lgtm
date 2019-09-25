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

TNode<JSStringIterator> NewJSStringIterator_340(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<String> p_string, TNode<Smi> p_nextIndex) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, String, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, String, Smi, JSStringIterator> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, String, Smi, JSStringIterator> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_string, p_nextIndex);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<String> tmp1;
    TNode<Smi> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../src/builtins/string-iterator.tq", 10);
    TNode<Map> tmp3;
    USE(tmp3);
    tmp3 = GetInitialStringIteratorMap_228(state_, TNode<Context>{tmp0});
    ca_.SetSourcePosition("../../src/builtins/string-iterator.tq", 11);
    TNode<FixedArray> tmp4;
    USE(tmp4);
    tmp4 = kEmptyFixedArray_214(state_);
    ca_.SetSourcePosition("../../src/builtins/string-iterator.tq", 12);
    TNode<FixedArray> tmp5;
    USE(tmp5);
    tmp5 = kEmptyFixedArray_214(state_);
    ca_.SetSourcePosition("../../src/builtins/string-iterator.tq", 13);
    ca_.SetSourcePosition("../../src/builtins/string-iterator.tq", 14);
    ca_.SetSourcePosition("../../src/builtins/string-iterator.tq", 9);
    TNode<IntPtrT> tmp6;
    USE(tmp6);
    tmp6 = CodeStubAssembler(state_).IntPtrConstant(((40)));
    TNode<JSStringIterator> tmp7;
    USE(tmp7);
    tmp7 = ca_.UncheckedCast<JSStringIterator>(CodeStubAssembler(state_).Allocate(TNode<IntPtrT>{tmp6}));
    CodeStubAssembler(state_).InitializeFieldsWithRoot(tmp7, CodeStubAssembler(state_).IntPtrConstant(40), TNode<IntPtrT>{tmp6}, RootIndex::kUndefinedValue);
    TNode<IntPtrT> tmp8 = ca_.IntPtrConstant(HeapObject::kMapOffset);
    USE(tmp8);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp7, tmp8}, tmp3);
    TNode<IntPtrT> tmp9 = ca_.IntPtrConstant(JSReceiver::kPropertiesOrHashOffset);
    USE(tmp9);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp7, tmp9}, tmp4);
    TNode<IntPtrT> tmp10 = ca_.IntPtrConstant(JSObject::kElementsOffset);
    USE(tmp10);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp7, tmp10}, tmp5);
    TNode<IntPtrT> tmp11 = ca_.IntPtrConstant(JSStringIterator::kStringOffset);
    USE(tmp11);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp7, tmp11}, tmp1);
    TNode<IntPtrT> tmp12 = ca_.IntPtrConstant(JSStringIterator::kNextIndexOffset);
    USE(tmp12);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp7, tmp12}, tmp2);
    ca_.Goto(&block1, tmp0, tmp1, tmp2, tmp7);
  }

  if (block1.is_used()) {
    TNode<Context> tmp13;
    TNode<String> tmp14;
    TNode<Smi> tmp15;
    TNode<JSStringIterator> tmp16;
    ca_.Bind(&block1, &tmp13, &tmp14, &tmp15, &tmp16);
    ca_.SetSourcePosition("../../src/builtins/string-iterator.tq", 7);
    ca_.Goto(&block2, tmp13, tmp14, tmp15, tmp16);
  }

    TNode<Context> tmp17;
    TNode<String> tmp18;
    TNode<Smi> tmp19;
    TNode<JSStringIterator> tmp20;
    ca_.Bind(&block2, &tmp17, &tmp18, &tmp19, &tmp20);
  return TNode<JSStringIterator>{tmp20};
}

TF_BUILTIN(StringPrototypeIterator, CodeStubAssembler) {
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
    ca_.SetSourcePosition("../../src/builtins/string-iterator.tq", 22);
    TNode<String> tmp2;
    USE(tmp2);
    tmp2 = FromConstexpr6String18ATconstexpr_string_156(state_, "String.prototype[Symbol.iterator]");
    TNode<String> tmp3;
    USE(tmp3);
    tmp3 = CodeStubAssembler(state_).ToThisString(TNode<Context>{tmp0}, TNode<Object>{tmp1}, TNode<String>{tmp2});
    ca_.SetSourcePosition("../../src/builtins/string-iterator.tq", 21);
    ca_.SetSourcePosition("../../src/builtins/string-iterator.tq", 23);
    TNode<Smi> tmp4;
    USE(tmp4);
    tmp4 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 0);
    ca_.SetSourcePosition("../../src/builtins/string-iterator.tq", 24);
    TNode<JSStringIterator> tmp5;
    USE(tmp5);
    tmp5 = NewJSStringIterator_340(state_, TNode<Context>{tmp0}, TNode<String>{tmp3}, TNode<Smi>{tmp4});
    CodeStubAssembler(state_).Return(tmp5);
  }
}

TF_BUILTIN(StringIteratorPrototypeNext, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  TNode<Object> parameter1 = UncheckedCast<Object>(Parameter(Descriptor::kReceiver));
USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSStringIterator> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSStringIterator> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSStringIterator, String, IntPtrT, IntPtrT> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSStringIterator, String, IntPtrT, IntPtrT> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../src/builtins/string-iterator.tq", 30);
    TNode<JSStringIterator> tmp2;
    USE(tmp2);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp2 = Cast16JSStringIterator_1502(state_, TNode<Context>{tmp0}, TNode<Object>{tmp1}, &label0);
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
    TNode<JSStringIterator> tmp9;
    ca_.Bind(&block3, &tmp6, &tmp7, &tmp8, &tmp9);
    ca_.Goto(&block1, tmp6, tmp7, tmp9);
  }

  if (block2.is_used()) {
    TNode<Context> tmp10;
    TNode<Object> tmp11;
    ca_.Bind(&block2, &tmp10, &tmp11);
    ca_.SetSourcePosition("../../src/builtins/string-iterator.tq", 32);
    ca_.SetSourcePosition("../../src/builtins/string-iterator.tq", 30);
    TNode<Object> tmp12;
    USE(tmp12);
    tmp12 = FromConstexpr20UT5ATSmi10HeapObject18ATconstexpr_string_170(state_, "String Iterator.prototype.next");
    CodeStubAssembler(state_).ThrowTypeError(TNode<Context>{tmp10}, MessageTemplate::kIncompatibleMethodReceiver, TNode<Object>{tmp12}, TNode<Object>{tmp11});
  }

  if (block1.is_used()) {
    TNode<Context> tmp13;
    TNode<Object> tmp14;
    TNode<JSStringIterator> tmp15;
    ca_.Bind(&block1, &tmp13, &tmp14, &tmp15);
    ca_.SetSourcePosition("../../src/builtins/string-iterator.tq", 33);
    TNode<IntPtrT> tmp16 = ca_.IntPtrConstant(JSStringIterator::kStringOffset);
    USE(tmp16);
    TNode<String>tmp17 = CodeStubAssembler(state_).LoadReference<String>(CodeStubAssembler::Reference{tmp15, tmp16});
    ca_.SetSourcePosition("../../src/builtins/string-iterator.tq", 34);
    TNode<IntPtrT> tmp18 = ca_.IntPtrConstant(JSStringIterator::kNextIndexOffset);
    USE(tmp18);
    TNode<Smi>tmp19 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp15, tmp18});
    TNode<IntPtrT> tmp20;
    USE(tmp20);
    tmp20 = CodeStubAssembler(state_).SmiUntag(TNode<Smi>{tmp19});
    ca_.SetSourcePosition("../../src/builtins/string-iterator.tq", 35);
    TNode<IntPtrT> tmp21;
    USE(tmp21);
    tmp21 = CodeStubAssembler(state_).LoadStringLengthAsWord(TNode<String>{tmp17});
    ca_.SetSourcePosition("../../src/builtins/string-iterator.tq", 36);
    TNode<BoolT> tmp22;
    USE(tmp22);
    tmp22 = CodeStubAssembler(state_).IntPtrGreaterThanOrEqual(TNode<IntPtrT>{tmp20}, TNode<IntPtrT>{tmp21});
    ca_.Branch(tmp22, &block5, &block6, tmp13, tmp14, tmp15, tmp17, tmp20, tmp21);
  }

  if (block5.is_used()) {
    TNode<Context> tmp23;
    TNode<Object> tmp24;
    TNode<JSStringIterator> tmp25;
    TNode<String> tmp26;
    TNode<IntPtrT> tmp27;
    TNode<IntPtrT> tmp28;
    ca_.Bind(&block5, &tmp23, &tmp24, &tmp25, &tmp26, &tmp27, &tmp28);
    ca_.SetSourcePosition("../../src/builtins/string-iterator.tq", 37);
    TNode<Oddball> tmp29;
    USE(tmp29);
    tmp29 = Undefined_64(state_);
    TNode<Oddball> tmp30;
    USE(tmp30);
    tmp30 = True_65(state_);
    TNode<JSObject> tmp31;
    USE(tmp31);
    tmp31 = CodeStubAssembler(state_).AllocateJSIteratorResult(TNode<Context>{tmp23}, TNode<Object>{tmp29}, TNode<Oddball>{tmp30});
    CodeStubAssembler(state_).Return(tmp31);
  }

  if (block6.is_used()) {
    TNode<Context> tmp32;
    TNode<Object> tmp33;
    TNode<JSStringIterator> tmp34;
    TNode<String> tmp35;
    TNode<IntPtrT> tmp36;
    TNode<IntPtrT> tmp37;
    ca_.Bind(&block6, &tmp32, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37);
    ca_.SetSourcePosition("../../src/builtins/string-iterator.tq", 41);
    TNode<Int32T> tmp38;
    USE(tmp38);
    tmp38 = StringBuiltinsAssembler(state_).LoadSurrogatePairAt(TNode<String>{tmp35}, TNode<IntPtrT>{tmp37}, TNode<IntPtrT>{tmp36}, UnicodeEncoding::UTF16);
    ca_.SetSourcePosition("../../src/builtins/string-iterator.tq", 42);
    TNode<String> tmp39;
    USE(tmp39);
    tmp39 = StringBuiltinsAssembler(state_).StringFromSingleUTF16EncodedCodePoint(TNode<Int32T>{tmp38});
    ca_.SetSourcePosition("../../src/builtins/string-iterator.tq", 43);
    TNode<IntPtrT> tmp40 = ca_.IntPtrConstant(JSStringIterator::kNextIndexOffset);
    USE(tmp40);
    TNode<IntPtrT> tmp41;
    USE(tmp41);
    tmp41 = CodeStubAssembler(state_).LoadStringLengthAsWord(TNode<String>{tmp39});
    TNode<IntPtrT> tmp42;
    USE(tmp42);
    tmp42 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp36}, TNode<IntPtrT>{tmp41});
    TNode<Smi> tmp43;
    USE(tmp43);
    tmp43 = CodeStubAssembler(state_).SmiTag(TNode<IntPtrT>{tmp42});
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp34, tmp40}, tmp43);
    ca_.SetSourcePosition("../../src/builtins/string-iterator.tq", 44);
    TNode<Oddball> tmp44;
    USE(tmp44);
    tmp44 = False_66(state_);
    TNode<JSObject> tmp45;
    USE(tmp45);
    tmp45 = CodeStubAssembler(state_).AllocateJSIteratorResult(TNode<Context>{tmp32}, TNode<Object>{tmp39}, TNode<Oddball>{tmp44});
    CodeStubAssembler(state_).Return(tmp45);
  }
}

TNode<JSStringIterator> Cast16JSStringIterator_1502(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, HeapObject> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject, JSStringIterator> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSStringIterator> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSStringIterator> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
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
    TNode<JSStringIterator> tmp10;
    USE(tmp10);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp10 = Cast16JSStringIterator_108(state_, TNode<HeapObject>{tmp9}, &label0);
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
    TNode<JSStringIterator> tmp17;
    ca_.Bind(&block5, &tmp14, &tmp15, &tmp16, &tmp17);
    ca_.Goto(&block2, tmp14, tmp15, tmp17);
  }

  if (block2.is_used()) {
    TNode<Context> tmp18;
    TNode<Object> tmp19;
    TNode<JSStringIterator> tmp20;
    ca_.Bind(&block2, &tmp18, &tmp19, &tmp20);
    ca_.SetSourcePosition("../../src/builtins/string-iterator.tq", 30);
    ca_.Goto(&block7, tmp18, tmp19, tmp20);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    TNode<Context> tmp21;
    TNode<Object> tmp22;
    TNode<JSStringIterator> tmp23;
    ca_.Bind(&block7, &tmp21, &tmp22, &tmp23);
  return TNode<JSStringIterator>{tmp23};
}

}  // namespace internal
}  // namespace v8

