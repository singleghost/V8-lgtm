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

TorqueStructArgumentsInfo GetArgumentsFrameAndCount_0(compiler::CodeAssemblerState* state_, TNode<Context> p_context, TNode<JSFunction> p_f) {
  compiler::CodeAssembler ca_(state_);
  compiler::CodeAssemblerParameterizedLabel<Context, JSFunction> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSFunction, RawPtrT, SharedFunctionInfo, BInt, BInt, RawPtrT> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSFunction, RawPtrT, SharedFunctionInfo, BInt, BInt, RawPtrT, RawPtrT> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSFunction, RawPtrT, SharedFunctionInfo, BInt, BInt> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSFunction, RawPtrT, SharedFunctionInfo, BInt, BInt, RawPtrT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSFunction, RawPtrT, BInt, BInt> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSFunction, RawPtrT, BInt, BInt> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_f);

  if (block0.is_used()) {
    TNode<Context> tmp0;
    TNode<JSFunction> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    ca_.SetSourcePosition("../../src/builtins/arguments.tq", 37);
    TNode<RawPtrT> tmp2;
    USE(tmp2);
    tmp2 = CodeStubAssembler(state_).LoadParentFramePointer();
    ca_.SetSourcePosition("../../src/builtins/arguments.tq", 40);
    TNode<IntPtrT> tmp3 = ca_.IntPtrConstant(JSFunction::kSharedFunctionInfoOffset);
    USE(tmp3);
    TNode<SharedFunctionInfo>tmp4 = CodeStubAssembler(state_).LoadReference<SharedFunctionInfo>(CodeStubAssembler::Reference{tmp1, tmp3});
    ca_.SetSourcePosition("../../src/builtins/arguments.tq", 42);
    TNode<IntPtrT> tmp5 = ca_.IntPtrConstant(SharedFunctionInfo::kFormalParameterCountOffset);
    USE(tmp5);
    TNode<Uint16T>tmp6 = CodeStubAssembler(state_).LoadReference<Uint16T>(CodeStubAssembler::Reference{tmp4, tmp5});
    TNode<Int32T> tmp7;
    USE(tmp7);
    tmp7 = Convert7ATint328ATuint16_183(state_, TNode<Uint16T>{tmp6});
    TNode<BInt> tmp8;
    USE(tmp8);
    tmp8 = Convert6ATbint7ATint32_208(state_, TNode<Int32T>{tmp7});
    ca_.SetSourcePosition("../../src/builtins/arguments.tq", 41);
    ca_.SetSourcePosition("../../src/builtins/arguments.tq", 43);
    ca_.SetSourcePosition("../../src/builtins/arguments.tq", 46);
    TNode<RawPtrT> tmp9;
    USE(tmp9);
    tmp9 = LoadCallerFromFrame_299(state_, TNode<RawPtrT>{tmp2});
    TNode<RawPtrT> tmp10;
    USE(tmp10);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp10 = Cast23ATArgumentsAdaptorFrame_305(state_, TNode<Context>{tmp0}, TNode<RawPtrT>{tmp9}, &label0);
    ca_.Goto(&block4, tmp0, tmp1, tmp2, tmp4, tmp8, tmp8, tmp9, tmp10);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block5, tmp0, tmp1, tmp2, tmp4, tmp8, tmp8, tmp9);
    }
  }

  if (block5.is_used()) {
    TNode<Context> tmp11;
    TNode<JSFunction> tmp12;
    TNode<RawPtrT> tmp13;
    TNode<SharedFunctionInfo> tmp14;
    TNode<BInt> tmp15;
    TNode<BInt> tmp16;
    TNode<RawPtrT> tmp17;
    ca_.Bind(&block5, &tmp11, &tmp12, &tmp13, &tmp14, &tmp15, &tmp16, &tmp17);
    ca_.Goto(&block3, tmp11, tmp12, tmp13, tmp14, tmp15, tmp16);
  }

  if (block4.is_used()) {
    TNode<Context> tmp18;
    TNode<JSFunction> tmp19;
    TNode<RawPtrT> tmp20;
    TNode<SharedFunctionInfo> tmp21;
    TNode<BInt> tmp22;
    TNode<BInt> tmp23;
    TNode<RawPtrT> tmp24;
    TNode<RawPtrT> tmp25;
    ca_.Bind(&block4, &tmp18, &tmp19, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25);
    ca_.Goto(&block2, tmp18, tmp19, tmp20, tmp21, tmp22, tmp23, tmp25);
  }

  if (block3.is_used()) {
    TNode<Context> tmp26;
    TNode<JSFunction> tmp27;
    TNode<RawPtrT> tmp28;
    TNode<SharedFunctionInfo> tmp29;
    TNode<BInt> tmp30;
    TNode<BInt> tmp31;
    ca_.Bind(&block3, &tmp26, &tmp27, &tmp28, &tmp29, &tmp30, &tmp31);
    ca_.SetSourcePosition("../../src/builtins/arguments.tq", 48);
    ca_.SetSourcePosition("../../src/builtins/arguments.tq", 49);
    ca_.SetSourcePosition("../../src/builtins/arguments.tq", 50);
    ca_.SetSourcePosition("../../src/builtins/arguments.tq", 47);
    ca_.Goto(&block1, tmp26, tmp27, tmp28, tmp31, tmp30);
  }

  if (block2.is_used()) {
    TNode<Context> tmp32;
    TNode<JSFunction> tmp33;
    TNode<RawPtrT> tmp34;
    TNode<SharedFunctionInfo> tmp35;
    TNode<BInt> tmp36;
    TNode<BInt> tmp37;
    TNode<RawPtrT> tmp38;
    ca_.Bind(&block2, &tmp32, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38);
    ca_.SetSourcePosition("../../src/builtins/arguments.tq", 45);
    ca_.SetSourcePosition("../../src/builtins/arguments.tq", 54);
    ca_.SetSourcePosition("../../src/builtins/arguments.tq", 55);
    TNode<Smi> tmp39;
    USE(tmp39);
    tmp39 = LoadLengthFromAdapterFrame_302(state_, TNode<Context>{tmp32}, TNode<RawPtrT>{tmp38});
    TNode<BInt> tmp40;
    USE(tmp40);
    tmp40 = Convert6ATbint5ATSmi_210(state_, TNode<Smi>{tmp39});
    ca_.SetSourcePosition("../../src/builtins/arguments.tq", 56);
    ca_.SetSourcePosition("../../src/builtins/arguments.tq", 53);
    ca_.Goto(&block1, tmp32, tmp33, tmp38, tmp40, tmp36);
  }

  if (block1.is_used()) {
    TNode<Context> tmp41;
    TNode<JSFunction> tmp42;
    TNode<RawPtrT> tmp43;
    TNode<BInt> tmp44;
    TNode<BInt> tmp45;
    ca_.Bind(&block1, &tmp41, &tmp42, &tmp43, &tmp44, &tmp45);
    ca_.SetSourcePosition("../../src/builtins/arguments.tq", 34);
    ca_.Goto(&block6, tmp41, tmp42, tmp43, tmp44, tmp45);
  }

    TNode<Context> tmp46;
    TNode<JSFunction> tmp47;
    TNode<RawPtrT> tmp48;
    TNode<BInt> tmp49;
    TNode<BInt> tmp50;
    ca_.Bind(&block6, &tmp46, &tmp47, &tmp48, &tmp49, &tmp50);
  return TorqueStructArgumentsInfo{TNode<RawPtrT>{tmp48}, TNode<BInt>{tmp49}, TNode<BInt>{tmp50}};
}

}  // namespace internal
}  // namespace v8

