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

TNode<FixedArray> GetCoverageInfo_308(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSFunction> p_function, compiler::CodeAssemblerLabel* label_IfNoCoverageInfo) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, JSFunction> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSFunction, SharedFunctionInfo, HeapObject> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSFunction, SharedFunctionInfo, HeapObject, DebugInfo> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSFunction, SharedFunctionInfo> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSFunction, SharedFunctionInfo, DebugInfo> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSFunction, SharedFunctionInfo, DebugInfo> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSFunction, SharedFunctionInfo, DebugInfo> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSFunction, FixedArray> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSFunction, FixedArray> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_function);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<JSFunction> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../src/builtins/internal-coverage.tq", 23);
    TNode<IntPtrT> tmp2 = ca_.IntPtrConstant(JSFunction::kSharedFunctionInfoOffset);
    USE(tmp2);
    TNode<SharedFunctionInfo>tmp3 = CodeStubAssembler(state_).LoadReference<SharedFunctionInfo>(CodeStubAssembler::Reference{tmp1, tmp2});
    ca_.SetSourcePosition("../../src/builtins/internal-coverage.tq", 24);
    TNode<IntPtrT> tmp4 = ca_.IntPtrConstant(SharedFunctionInfo::kScriptOrDebugInfoOffset);
    USE(tmp4);
    TNode<HeapObject>tmp5 = CodeStubAssembler(state_).LoadReference<HeapObject>(CodeStubAssembler::Reference{tmp3, tmp4});
    TNode<DebugInfo> tmp6;
    USE(tmp6);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp6 = Cast9DebugInfo_144(state_, TNode<Context>{tmp0}, TNode<HeapObject>{tmp5}, &label0);
    ca_.Goto(&block5, tmp0, tmp1, tmp3, tmp5, tmp6);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp0, tmp1, tmp3, tmp5);
    }
  }

  if (block6.is_used()) {
    TNode<Context> tmp7;
    TNode<JSFunction> tmp8;
    TNode<SharedFunctionInfo> tmp9;
    TNode<HeapObject> tmp10;
    ca_.Bind(&block6, &tmp7, &tmp8, &tmp9, &tmp10);
    ca_.Goto(&block4, tmp7, tmp8, tmp9);
  }

  if (block5.is_used()) {
    TNode<Context> tmp11;
    TNode<JSFunction> tmp12;
    TNode<SharedFunctionInfo> tmp13;
    TNode<HeapObject> tmp14;
    TNode<DebugInfo> tmp15;
    ca_.Bind(&block5, &tmp11, &tmp12, &tmp13, &tmp14, &tmp15);
    ca_.Goto(&block3, tmp11, tmp12, tmp13, tmp15);
  }

  if (block4.is_used()) {
    TNode<Context> tmp16;
    TNode<JSFunction> tmp17;
    TNode<SharedFunctionInfo> tmp18;
    ca_.Bind(&block4, &tmp16, &tmp17, &tmp18);
    ca_.SetSourcePosition("../../src/builtins/internal-coverage.tq", 25);
    ca_.Goto(&block1);
  }

  if (block3.is_used()) {
    TNode<Context> tmp19;
    TNode<JSFunction> tmp20;
    TNode<SharedFunctionInfo> tmp21;
    TNode<DebugInfo> tmp22;
    ca_.Bind(&block3, &tmp19, &tmp20, &tmp21, &tmp22);
    ca_.SetSourcePosition("../../src/builtins/internal-coverage.tq", 27);
    TNode<IntPtrT> tmp23 = ca_.IntPtrConstant(DebugInfo::kFlagsOffset);
    USE(tmp23);
    TNode<Smi>tmp24 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp22, tmp23});
    TNode<Smi> tmp25;
    USE(tmp25);
    tmp25 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, DebugInfo::kHasCoverageInfo);
    TNode<Smi> tmp26;
    USE(tmp26);
    tmp26 = CodeStubAssembler(state_).SmiAnd(TNode<Smi>{tmp24}, TNode<Smi>{tmp25});
    TNode<Smi> tmp27;
    USE(tmp27);
    tmp27 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 0);
    TNode<BoolT> tmp28;
    USE(tmp28);
    tmp28 = CodeStubAssembler(state_).SmiEqual(TNode<Smi>{tmp26}, TNode<Smi>{tmp27});
    ca_.Branch(tmp28, &block7, &block8, tmp19, tmp20, tmp21, tmp22);
  }

  if (block7.is_used()) {
    TNode<Context> tmp29;
    TNode<JSFunction> tmp30;
    TNode<SharedFunctionInfo> tmp31;
    TNode<DebugInfo> tmp32;
    ca_.Bind(&block7, &tmp29, &tmp30, &tmp31, &tmp32);
    ca_.Goto(&block1);
  }

  if (block8.is_used()) {
    TNode<Context> tmp33;
    TNode<JSFunction> tmp34;
    TNode<SharedFunctionInfo> tmp35;
    TNode<DebugInfo> tmp36;
    ca_.Bind(&block8, &tmp33, &tmp34, &tmp35, &tmp36);
    ca_.SetSourcePosition("../../src/builtins/internal-coverage.tq", 28);
    TNode<IntPtrT> tmp37 = ca_.IntPtrConstant(DebugInfo::kCoverageInfoOffset);
    USE(tmp37);
    TNode<HeapObject>tmp38 = CodeStubAssembler(state_).LoadReference<HeapObject>(CodeStubAssembler::Reference{tmp36, tmp37});
    TNode<FixedArray> tmp39;
    USE(tmp39);
    tmp39 = UnsafeCast14ATCoverageInfo_1485(state_, TNode<Context>{tmp33}, TNode<Object>{tmp38});
    ca_.Goto(&block2, tmp33, tmp34, tmp39);
  }

  if (block2.is_used()) {
    TNode<Context> tmp40;
    TNode<JSFunction> tmp41;
    TNode<FixedArray> tmp42;
    ca_.Bind(&block2, &tmp40, &tmp41, &tmp42);
    ca_.SetSourcePosition("../../src/builtins/internal-coverage.tq", 21);
    ca_.Goto(&block9, tmp40, tmp41, tmp42);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_IfNoCoverageInfo);
  }

    TNode<Context> tmp43;
    TNode<JSFunction> tmp44;
    TNode<FixedArray> tmp45;
    ca_.Bind(&block9, &tmp43, &tmp44, &tmp45);
  return TNode<FixedArray>{tmp45};
}

TNode<Smi> SlotCount_309(compiler::CodeAssemblerState* state_, TNode<FixedArray> p_coverageInfo) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<FixedArray> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_coverageInfo);

  if (block0.is_used()) {
    TNode<FixedArray> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.SetSourcePosition("../../src/builtins/internal-coverage.tq", 36);
    TNode<IntPtrT> tmp1 = ca_.IntPtrConstant(FixedArrayBase::kLengthOffset);
    USE(tmp1);
    TNode<Smi>tmp2 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp0, tmp1});
    TNode<Smi> tmp3;
    USE(tmp3);
    tmp3 = CodeStubAssembler(state_).SmiSar(TNode<Smi>{tmp2}, CoverageInfo::kSlotIndexCountLog2);
    ca_.Goto(&block1, tmp0, tmp3);
  }

  if (block1.is_used()) {
    TNode<FixedArray> tmp4;
    TNode<Smi> tmp5;
    ca_.Bind(&block1, &tmp4, &tmp5);
    ca_.SetSourcePosition("../../src/builtins/internal-coverage.tq", 31);
    ca_.Goto(&block2, tmp4, tmp5);
  }

    TNode<FixedArray> tmp6;
    TNode<Smi> tmp7;
    ca_.Bind(&block2, &tmp6, &tmp7);
  return TNode<Smi>{tmp7};
}

TNode<Smi> FirstIndexForSlot_310(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Smi> p_slot) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Smi, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_slot);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Smi> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../src/builtins/internal-coverage.tq", 41);
    TNode<Smi> tmp2;
    USE(tmp2);
    tmp2 = CodeStubAssembler(state_).SmiShl(TNode<Smi>{tmp1}, CoverageInfo::kSlotIndexCountLog2);
    ca_.Goto(&block1, tmp0, tmp1, tmp2);
  }

  if (block1.is_used()) {
    TNode<Context> tmp3;
    TNode<Smi> tmp4;
    TNode<Smi> tmp5;
    ca_.Bind(&block1, &tmp3, &tmp4, &tmp5);
    ca_.SetSourcePosition("../../src/builtins/internal-coverage.tq", 39);
    ca_.Goto(&block2, tmp3, tmp4, tmp5);
  }

    TNode<Context> tmp6;
    TNode<Smi> tmp7;
    TNode<Smi> tmp8;
    ca_.Bind(&block2, &tmp6, &tmp7, &tmp8);
  return TNode<Smi>{tmp8};
}

void IncrementBlockCount_311(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<FixedArray> p_coverageInfo, TNode<Smi> p_slot) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Smi, Smi, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Smi, Smi, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Smi, Smi, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Smi, Smi, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Smi, Smi, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Smi, Smi, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, HeapObject, IntPtrT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Smi, Smi, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, HeapObject, IntPtrT, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Smi, Smi, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, HeapObject, IntPtrT, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Smi, Smi, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, HeapObject, IntPtrT, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT, IntPtrT, IntPtrT, IntPtrT, HeapObject, IntPtrT> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Smi, Smi, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, HeapObject, IntPtrT, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Smi, Smi, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, HeapObject, IntPtrT, FixedArray, IntPtrT, IntPtrT, Smi, Smi, IntPtrT, HeapObject, IntPtrT> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Smi, Smi, Smi, FixedArray, IntPtrT, IntPtrT, Smi, Smi, HeapObject, IntPtrT, FixedArray, IntPtrT, IntPtrT, Smi, Smi, HeapObject, IntPtrT> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, FixedArray, Smi> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_coverageInfo, p_slot);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<FixedArray> tmp1;
    TNode<Smi> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../src/builtins/internal-coverage.tq", 47);
    TNode<Smi> tmp3;
    USE(tmp3);
    tmp3 = FirstIndexForSlot_310(state_, TNode<Context>{tmp0}, TNode<Smi>{tmp2});
    ca_.SetSourcePosition("../../src/builtins/internal-coverage.tq", 48);
    TNode<Smi> tmp4;
    USE(tmp4);
    tmp4 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, CoverageInfo::kSlotBlockCountIndex);
    TNode<Smi> tmp5;
    USE(tmp5);
    tmp5 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{tmp3}, TNode<Smi>{tmp4});
    ca_.SetSourcePosition("../../src/builtins/internal-coverage.tq", 49);
    TNode<IntPtrT> tmp6 = ca_.IntPtrConstant(FixedArray::kObjectsOffset);
    USE(tmp6);
    TNode<IntPtrT> tmp7 = ca_.IntPtrConstant(FixedArrayBase::kLengthOffset);
    USE(tmp7);
    TNode<Smi>tmp8 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp1, tmp7});
    TNode<IntPtrT> tmp9;
    USE(tmp9);
    tmp9 = Convert8ATintptr5ATSmi_188(state_, TNode<Smi>{tmp8});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 55);
    TNode<IntPtrT> tmp10;
    USE(tmp10);
    tmp10 = Convert8ATintptr5ATSmi_188(state_, TNode<Smi>{tmp5});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 56);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 37);
    TNode<UintPtrT> tmp11;
    USE(tmp11);
    tmp11 = Convert9ATuintptr8ATintptr_205(state_, TNode<IntPtrT>{tmp10});
    TNode<UintPtrT> tmp12;
    USE(tmp12);
    tmp12 = Convert9ATuintptr8ATintptr_205(state_, TNode<IntPtrT>{tmp9});
    TNode<BoolT> tmp13;
    USE(tmp13);
    tmp13 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp11}, TNode<UintPtrT>{tmp12});
    ca_.Branch(tmp13, &block6, &block7, tmp0, tmp1, tmp2, tmp3, tmp5, tmp1, tmp6, tmp9, tmp5, tmp5, tmp10, tmp1, tmp6, tmp9, tmp10, tmp10);
  }

  if (block6.is_used()) {
    TNode<Context> tmp14;
    TNode<FixedArray> tmp15;
    TNode<Smi> tmp16;
    TNode<Smi> tmp17;
    TNode<Smi> tmp18;
    TNode<FixedArray> tmp19;
    TNode<IntPtrT> tmp20;
    TNode<IntPtrT> tmp21;
    TNode<Smi> tmp22;
    TNode<Smi> tmp23;
    TNode<IntPtrT> tmp24;
    TNode<HeapObject> tmp25;
    TNode<IntPtrT> tmp26;
    TNode<IntPtrT> tmp27;
    TNode<IntPtrT> tmp28;
    TNode<IntPtrT> tmp29;
    ca_.Bind(&block6, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18, &tmp19, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26, &tmp27, &tmp28, &tmp29);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 39);
    TNode<IntPtrT> tmp30;
    USE(tmp30);
    tmp30 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, (SizeOf20UT5ATSmi10HeapObject_346(state_)));
    TNode<IntPtrT> tmp31;
    USE(tmp31);
    tmp31 = CodeStubAssembler(state_).IntPtrMul(TNode<IntPtrT>{tmp29}, TNode<IntPtrT>{tmp30});
    TNode<IntPtrT> tmp32;
    USE(tmp32);
    tmp32 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp26}, TNode<IntPtrT>{tmp31});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 38);
    TNode<HeapObject> tmp33;
    USE(tmp33);
    TNode<IntPtrT> tmp34;
    USE(tmp34);
    std::tie(tmp33, tmp34) = UnsafeNewReference20UT5ATSmi10HeapObject_1434(state_, TNode<HeapObject>{tmp25}, TNode<IntPtrT>{tmp32}).Flatten();
    ca_.Goto(&block5, tmp14, tmp15, tmp16, tmp17, tmp18, tmp19, tmp20, tmp21, tmp22, tmp23, tmp24, tmp25, tmp26, tmp27, tmp28, tmp29, tmp33, tmp34);
  }

  if (block7.is_used()) {
    TNode<Context> tmp35;
    TNode<FixedArray> tmp36;
    TNode<Smi> tmp37;
    TNode<Smi> tmp38;
    TNode<Smi> tmp39;
    TNode<FixedArray> tmp40;
    TNode<IntPtrT> tmp41;
    TNode<IntPtrT> tmp42;
    TNode<Smi> tmp43;
    TNode<Smi> tmp44;
    TNode<IntPtrT> tmp45;
    TNode<HeapObject> tmp46;
    TNode<IntPtrT> tmp47;
    TNode<IntPtrT> tmp48;
    TNode<IntPtrT> tmp49;
    TNode<IntPtrT> tmp50;
    ca_.Bind(&block7, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40, &tmp41, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47, &tmp48, &tmp49, &tmp50);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 41);
    ca_.Goto(&block4, tmp35, tmp36, tmp37, tmp38, tmp39, tmp40, tmp41, tmp42, tmp43, tmp44, tmp45);
  }

  if (block5.is_used()) {
    TNode<Context> tmp51;
    TNode<FixedArray> tmp52;
    TNode<Smi> tmp53;
    TNode<Smi> tmp54;
    TNode<Smi> tmp55;
    TNode<FixedArray> tmp56;
    TNode<IntPtrT> tmp57;
    TNode<IntPtrT> tmp58;
    TNode<Smi> tmp59;
    TNode<Smi> tmp60;
    TNode<IntPtrT> tmp61;
    TNode<HeapObject> tmp62;
    TNode<IntPtrT> tmp63;
    TNode<IntPtrT> tmp64;
    TNode<IntPtrT> tmp65;
    TNode<IntPtrT> tmp66;
    TNode<HeapObject> tmp67;
    TNode<IntPtrT> tmp68;
    ca_.Bind(&block5, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67, &tmp68);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 56);
    ca_.Goto(&block3, tmp51, tmp52, tmp53, tmp54, tmp55, tmp56, tmp57, tmp58, tmp59, tmp60, tmp61, tmp67, tmp68);
  }

  if (block4.is_used()) {
    TNode<Context> tmp69;
    TNode<FixedArray> tmp70;
    TNode<Smi> tmp71;
    TNode<Smi> tmp72;
    TNode<Smi> tmp73;
    TNode<FixedArray> tmp74;
    TNode<IntPtrT> tmp75;
    TNode<IntPtrT> tmp76;
    TNode<Smi> tmp77;
    TNode<Smi> tmp78;
    TNode<IntPtrT> tmp79;
    ca_.Bind(&block4, &tmp69, &tmp70, &tmp71, &tmp72, &tmp73, &tmp74, &tmp75, &tmp76, &tmp77, &tmp78, &tmp79);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block3.is_used()) {
    TNode<Context> tmp80;
    TNode<FixedArray> tmp81;
    TNode<Smi> tmp82;
    TNode<Smi> tmp83;
    TNode<Smi> tmp84;
    TNode<FixedArray> tmp85;
    TNode<IntPtrT> tmp86;
    TNode<IntPtrT> tmp87;
    TNode<Smi> tmp88;
    TNode<Smi> tmp89;
    TNode<IntPtrT> tmp90;
    TNode<HeapObject> tmp91;
    TNode<IntPtrT> tmp92;
    ca_.Bind(&block3, &tmp80, &tmp81, &tmp82, &tmp83, &tmp84, &tmp85, &tmp86, &tmp87, &tmp88, &tmp89, &tmp90, &tmp91, &tmp92);
    ca_.Goto(&block2, tmp80, tmp81, tmp82, tmp83, tmp84, tmp85, tmp86, tmp87, tmp88, tmp89, tmp91, tmp92);
  }

  if (block2.is_used()) {
    TNode<Context> tmp93;
    TNode<FixedArray> tmp94;
    TNode<Smi> tmp95;
    TNode<Smi> tmp96;
    TNode<Smi> tmp97;
    TNode<FixedArray> tmp98;
    TNode<IntPtrT> tmp99;
    TNode<IntPtrT> tmp100;
    TNode<Smi> tmp101;
    TNode<Smi> tmp102;
    TNode<HeapObject> tmp103;
    TNode<IntPtrT> tmp104;
    ca_.Bind(&block2, &tmp93, &tmp94, &tmp95, &tmp96, &tmp97, &tmp98, &tmp99, &tmp100, &tmp101, &tmp102, &tmp103, &tmp104);
    ca_.SetSourcePosition("../../src/builtins/internal-coverage.tq", 50);
    TNode<IntPtrT> tmp105 = ca_.IntPtrConstant(FixedArray::kObjectsOffset);
    USE(tmp105);
    TNode<IntPtrT> tmp106 = ca_.IntPtrConstant(FixedArrayBase::kLengthOffset);
    USE(tmp106);
    TNode<Smi>tmp107 = CodeStubAssembler(state_).LoadReference<Smi>(CodeStubAssembler::Reference{tmp94, tmp106});
    TNode<IntPtrT> tmp108;
    USE(tmp108);
    tmp108 = Convert8ATintptr5ATSmi_188(state_, TNode<Smi>{tmp107});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 55);
    TNode<IntPtrT> tmp109;
    USE(tmp109);
    tmp109 = Convert8ATintptr5ATSmi_188(state_, TNode<Smi>{tmp97});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 56);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 37);
    TNode<UintPtrT> tmp110;
    USE(tmp110);
    tmp110 = Convert9ATuintptr8ATintptr_205(state_, TNode<IntPtrT>{tmp109});
    TNode<UintPtrT> tmp111;
    USE(tmp111);
    tmp111 = Convert9ATuintptr8ATintptr_205(state_, TNode<IntPtrT>{tmp108});
    TNode<BoolT> tmp112;
    USE(tmp112);
    tmp112 = CodeStubAssembler(state_).UintPtrLessThan(TNode<UintPtrT>{tmp110}, TNode<UintPtrT>{tmp111});
    ca_.Branch(tmp112, &block13, &block14, tmp93, tmp94, tmp95, tmp96, tmp97, tmp98, tmp99, tmp100, tmp101, tmp102, tmp103, tmp104, tmp94, tmp105, tmp108, tmp97, tmp97, tmp109, tmp94, tmp105, tmp108, tmp109, tmp109);
  }

  if (block13.is_used()) {
    TNode<Context> tmp113;
    TNode<FixedArray> tmp114;
    TNode<Smi> tmp115;
    TNode<Smi> tmp116;
    TNode<Smi> tmp117;
    TNode<FixedArray> tmp118;
    TNode<IntPtrT> tmp119;
    TNode<IntPtrT> tmp120;
    TNode<Smi> tmp121;
    TNode<Smi> tmp122;
    TNode<HeapObject> tmp123;
    TNode<IntPtrT> tmp124;
    TNode<FixedArray> tmp125;
    TNode<IntPtrT> tmp126;
    TNode<IntPtrT> tmp127;
    TNode<Smi> tmp128;
    TNode<Smi> tmp129;
    TNode<IntPtrT> tmp130;
    TNode<HeapObject> tmp131;
    TNode<IntPtrT> tmp132;
    TNode<IntPtrT> tmp133;
    TNode<IntPtrT> tmp134;
    TNode<IntPtrT> tmp135;
    ca_.Bind(&block13, &tmp113, &tmp114, &tmp115, &tmp116, &tmp117, &tmp118, &tmp119, &tmp120, &tmp121, &tmp122, &tmp123, &tmp124, &tmp125, &tmp126, &tmp127, &tmp128, &tmp129, &tmp130, &tmp131, &tmp132, &tmp133, &tmp134, &tmp135);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 39);
    TNode<IntPtrT> tmp136;
    USE(tmp136);
    tmp136 = FromConstexpr8ATintptr17ATconstexpr_int31_150(state_, (SizeOf20UT5ATSmi10HeapObject_346(state_)));
    TNode<IntPtrT> tmp137;
    USE(tmp137);
    tmp137 = CodeStubAssembler(state_).IntPtrMul(TNode<IntPtrT>{tmp135}, TNode<IntPtrT>{tmp136});
    TNode<IntPtrT> tmp138;
    USE(tmp138);
    tmp138 = CodeStubAssembler(state_).IntPtrAdd(TNode<IntPtrT>{tmp132}, TNode<IntPtrT>{tmp137});
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 38);
    TNode<HeapObject> tmp139;
    USE(tmp139);
    TNode<IntPtrT> tmp140;
    USE(tmp140);
    std::tie(tmp139, tmp140) = UnsafeNewReference20UT5ATSmi10HeapObject_1434(state_, TNode<HeapObject>{tmp131}, TNode<IntPtrT>{tmp138}).Flatten();
    ca_.Goto(&block12, tmp113, tmp114, tmp115, tmp116, tmp117, tmp118, tmp119, tmp120, tmp121, tmp122, tmp123, tmp124, tmp125, tmp126, tmp127, tmp128, tmp129, tmp130, tmp131, tmp132, tmp133, tmp134, tmp135, tmp139, tmp140);
  }

  if (block14.is_used()) {
    TNode<Context> tmp141;
    TNode<FixedArray> tmp142;
    TNode<Smi> tmp143;
    TNode<Smi> tmp144;
    TNode<Smi> tmp145;
    TNode<FixedArray> tmp146;
    TNode<IntPtrT> tmp147;
    TNode<IntPtrT> tmp148;
    TNode<Smi> tmp149;
    TNode<Smi> tmp150;
    TNode<HeapObject> tmp151;
    TNode<IntPtrT> tmp152;
    TNode<FixedArray> tmp153;
    TNode<IntPtrT> tmp154;
    TNode<IntPtrT> tmp155;
    TNode<Smi> tmp156;
    TNode<Smi> tmp157;
    TNode<IntPtrT> tmp158;
    TNode<HeapObject> tmp159;
    TNode<IntPtrT> tmp160;
    TNode<IntPtrT> tmp161;
    TNode<IntPtrT> tmp162;
    TNode<IntPtrT> tmp163;
    ca_.Bind(&block14, &tmp141, &tmp142, &tmp143, &tmp144, &tmp145, &tmp146, &tmp147, &tmp148, &tmp149, &tmp150, &tmp151, &tmp152, &tmp153, &tmp154, &tmp155, &tmp156, &tmp157, &tmp158, &tmp159, &tmp160, &tmp161, &tmp162, &tmp163);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 41);
    ca_.Goto(&block11, tmp141, tmp142, tmp143, tmp144, tmp145, tmp146, tmp147, tmp148, tmp149, tmp150, tmp151, tmp152, tmp153, tmp154, tmp155, tmp156, tmp157, tmp158);
  }

  if (block12.is_used()) {
    TNode<Context> tmp164;
    TNode<FixedArray> tmp165;
    TNode<Smi> tmp166;
    TNode<Smi> tmp167;
    TNode<Smi> tmp168;
    TNode<FixedArray> tmp169;
    TNode<IntPtrT> tmp170;
    TNode<IntPtrT> tmp171;
    TNode<Smi> tmp172;
    TNode<Smi> tmp173;
    TNode<HeapObject> tmp174;
    TNode<IntPtrT> tmp175;
    TNode<FixedArray> tmp176;
    TNode<IntPtrT> tmp177;
    TNode<IntPtrT> tmp178;
    TNode<Smi> tmp179;
    TNode<Smi> tmp180;
    TNode<IntPtrT> tmp181;
    TNode<HeapObject> tmp182;
    TNode<IntPtrT> tmp183;
    TNode<IntPtrT> tmp184;
    TNode<IntPtrT> tmp185;
    TNode<IntPtrT> tmp186;
    TNode<HeapObject> tmp187;
    TNode<IntPtrT> tmp188;
    ca_.Bind(&block12, &tmp164, &tmp165, &tmp166, &tmp167, &tmp168, &tmp169, &tmp170, &tmp171, &tmp172, &tmp173, &tmp174, &tmp175, &tmp176, &tmp177, &tmp178, &tmp179, &tmp180, &tmp181, &tmp182, &tmp183, &tmp184, &tmp185, &tmp186, &tmp187, &tmp188);
    ca_.SetSourcePosition("../../src/builtins/torque-internal.tq", 56);
    ca_.Goto(&block10, tmp164, tmp165, tmp166, tmp167, tmp168, tmp169, tmp170, tmp171, tmp172, tmp173, tmp174, tmp175, tmp176, tmp177, tmp178, tmp179, tmp180, tmp181, tmp187, tmp188);
  }

  if (block11.is_used()) {
    TNode<Context> tmp189;
    TNode<FixedArray> tmp190;
    TNode<Smi> tmp191;
    TNode<Smi> tmp192;
    TNode<Smi> tmp193;
    TNode<FixedArray> tmp194;
    TNode<IntPtrT> tmp195;
    TNode<IntPtrT> tmp196;
    TNode<Smi> tmp197;
    TNode<Smi> tmp198;
    TNode<HeapObject> tmp199;
    TNode<IntPtrT> tmp200;
    TNode<FixedArray> tmp201;
    TNode<IntPtrT> tmp202;
    TNode<IntPtrT> tmp203;
    TNode<Smi> tmp204;
    TNode<Smi> tmp205;
    TNode<IntPtrT> tmp206;
    ca_.Bind(&block11, &tmp189, &tmp190, &tmp191, &tmp192, &tmp193, &tmp194, &tmp195, &tmp196, &tmp197, &tmp198, &tmp199, &tmp200, &tmp201, &tmp202, &tmp203, &tmp204, &tmp205, &tmp206);
    CodeStubAssembler(state_).Unreachable();
  }

  if (block10.is_used()) {
    TNode<Context> tmp207;
    TNode<FixedArray> tmp208;
    TNode<Smi> tmp209;
    TNode<Smi> tmp210;
    TNode<Smi> tmp211;
    TNode<FixedArray> tmp212;
    TNode<IntPtrT> tmp213;
    TNode<IntPtrT> tmp214;
    TNode<Smi> tmp215;
    TNode<Smi> tmp216;
    TNode<HeapObject> tmp217;
    TNode<IntPtrT> tmp218;
    TNode<FixedArray> tmp219;
    TNode<IntPtrT> tmp220;
    TNode<IntPtrT> tmp221;
    TNode<Smi> tmp222;
    TNode<Smi> tmp223;
    TNode<IntPtrT> tmp224;
    TNode<HeapObject> tmp225;
    TNode<IntPtrT> tmp226;
    ca_.Bind(&block10, &tmp207, &tmp208, &tmp209, &tmp210, &tmp211, &tmp212, &tmp213, &tmp214, &tmp215, &tmp216, &tmp217, &tmp218, &tmp219, &tmp220, &tmp221, &tmp222, &tmp223, &tmp224, &tmp225, &tmp226);
    ca_.Goto(&block9, tmp207, tmp208, tmp209, tmp210, tmp211, tmp212, tmp213, tmp214, tmp215, tmp216, tmp217, tmp218, tmp219, tmp220, tmp221, tmp222, tmp223, tmp225, tmp226);
  }

  if (block9.is_used()) {
    TNode<Context> tmp227;
    TNode<FixedArray> tmp228;
    TNode<Smi> tmp229;
    TNode<Smi> tmp230;
    TNode<Smi> tmp231;
    TNode<FixedArray> tmp232;
    TNode<IntPtrT> tmp233;
    TNode<IntPtrT> tmp234;
    TNode<Smi> tmp235;
    TNode<Smi> tmp236;
    TNode<HeapObject> tmp237;
    TNode<IntPtrT> tmp238;
    TNode<FixedArray> tmp239;
    TNode<IntPtrT> tmp240;
    TNode<IntPtrT> tmp241;
    TNode<Smi> tmp242;
    TNode<Smi> tmp243;
    TNode<HeapObject> tmp244;
    TNode<IntPtrT> tmp245;
    ca_.Bind(&block9, &tmp227, &tmp228, &tmp229, &tmp230, &tmp231, &tmp232, &tmp233, &tmp234, &tmp235, &tmp236, &tmp237, &tmp238, &tmp239, &tmp240, &tmp241, &tmp242, &tmp243, &tmp244, &tmp245);
    ca_.SetSourcePosition("../../src/builtins/internal-coverage.tq", 50);
    TNode<Object>tmp246 = CodeStubAssembler(state_).LoadReference<Object>(CodeStubAssembler::Reference{tmp244, tmp245});
    TNode<Smi> tmp247;
    USE(tmp247);
    tmp247 = UnsafeCast5ATSmi_1433(state_, TNode<Context>{tmp227}, TNode<Object>{tmp246});
    TNode<Smi> tmp248;
    USE(tmp248);
    tmp248 = FromConstexpr5ATSmi17ATconstexpr_int31_154(state_, 1);
    TNode<Smi> tmp249;
    USE(tmp249);
    tmp249 = CodeStubAssembler(state_).SmiAdd(TNode<Smi>{tmp247}, TNode<Smi>{tmp248});
    ca_.SetSourcePosition("../../src/builtins/internal-coverage.tq", 49);
    CodeStubAssembler(state_).StoreReference(CodeStubAssembler::Reference{tmp237, tmp238}, tmp249);
    ca_.SetSourcePosition("../../src/builtins/internal-coverage.tq", 45);
    ca_.SetSourcePosition("../../src/builtins/internal-coverage.tq", 44);
    ca_.Goto(&block1, tmp227, tmp228, tmp229);
  }

  if (block1.is_used()) {
    TNode<Context> tmp250;
    TNode<FixedArray> tmp251;
    TNode<Smi> tmp252;
    ca_.Bind(&block1, &tmp250, &tmp251, &tmp252);
    ca_.Goto(&block16, tmp250, tmp251, tmp252);
  }

    TNode<Context> tmp253;
    TNode<FixedArray> tmp254;
    TNode<Smi> tmp255;
    ca_.Bind(&block16, &tmp253, &tmp254, &tmp255);
}

TF_BUILTIN(IncBlockCounter, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  TNode<JSFunction> parameter1 = UncheckedCast<JSFunction>(Parameter(Descriptor::kFunction));
  USE(parameter1);
  TNode<Smi> parameter2 = UncheckedCast<Smi>(Parameter(Descriptor::kCoverageArraySlotIndex));
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<Context, JSFunction, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSFunction, Smi, JSFunction> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSFunction, Smi, JSFunction, FixedArray> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSFunction, Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSFunction, Smi, FixedArray> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<JSFunction> tmp1;
    TNode<Smi> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    ca_.SetSourcePosition("../../src/builtins/internal-coverage.tq", 61);
    TNode<FixedArray> tmp3;
    USE(tmp3);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp3 = GetCoverageInfo_308(state_, TNode<Context>{tmp0}, TNode<JSFunction>{tmp1}, &label0);
    ca_.Goto(&block3, tmp0, tmp1, tmp2, tmp1, tmp3);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1, tmp2, tmp1);
    }
  }

  if (block4.is_used()) {
    TNode<Context> tmp4;
    TNode<JSFunction> tmp5;
    TNode<Smi> tmp6;
    TNode<JSFunction> tmp7;
    ca_.Bind(&block4, &tmp4, &tmp5, &tmp6, &tmp7);
    ca_.Goto(&block2, tmp4, tmp5, tmp6);
  }

  if (block3.is_used()) {
    TNode<Context> tmp8;
    TNode<JSFunction> tmp9;
    TNode<Smi> tmp10;
    TNode<JSFunction> tmp11;
    TNode<FixedArray> tmp12;
    ca_.Bind(&block3, &tmp8, &tmp9, &tmp10, &tmp11, &tmp12);
    ca_.Goto(&block1, tmp8, tmp9, tmp10, tmp12);
  }

  if (block2.is_used()) {
    TNode<Context> tmp13;
    TNode<JSFunction> tmp14;
    TNode<Smi> tmp15;
    ca_.Bind(&block2, &tmp13, &tmp14, &tmp15);
    TNode<Oddball> tmp16;
    USE(tmp16);
    tmp16 = Undefined_64(state_);
    CodeStubAssembler(state_).Return(tmp16);
  }

  if (block1.is_used()) {
    TNode<Context> tmp17;
    TNode<JSFunction> tmp18;
    TNode<Smi> tmp19;
    TNode<FixedArray> tmp20;
    ca_.Bind(&block1, &tmp17, &tmp18, &tmp19, &tmp20);
    ca_.SetSourcePosition("../../src/builtins/internal-coverage.tq", 60);
    ca_.SetSourcePosition("../../src/builtins/internal-coverage.tq", 62);
    IncrementBlockCount_311(state_, TNode<Context>{tmp17}, TNode<FixedArray>{tmp20}, TNode<Smi>{tmp19});
    ca_.SetSourcePosition("../../src/builtins/internal-coverage.tq", 63);
    TNode<Oddball> tmp21;
    USE(tmp21);
    tmp21 = Undefined_64(state_);
    CodeStubAssembler(state_).Return(tmp21);
  }
}

TNode<FixedArray> UnsafeCast14ATCoverageInfo_1485(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<Object> p_o) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, FixedArray> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, FixedArray> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../src/builtins/base.tq", 2846);
    TNode<FixedArray> tmp2;
    USE(tmp2);
    tmp2 = TORQUE_CAST(TNode<Object>{tmp1});
    ca_.Goto(&block1, tmp0, tmp1, tmp2);
  }

  if (block1.is_used()) {
    TNode<Context> tmp3;
    TNode<Object> tmp4;
    TNode<FixedArray> tmp5;
    ca_.Bind(&block1, &tmp3, &tmp4, &tmp5);
    ca_.SetSourcePosition("../../src/builtins/internal-coverage.tq", 28);
    ca_.Goto(&block2, tmp3, tmp4, tmp5);
  }

    TNode<Context> tmp6;
    TNode<Object> tmp7;
    TNode<FixedArray> tmp8;
    ca_.Bind(&block2, &tmp6, &tmp7, &tmp8);
  return TNode<FixedArray>{tmp8};
}

}  // namespace internal
}  // namespace v8

