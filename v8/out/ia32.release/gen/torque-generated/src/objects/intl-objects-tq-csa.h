#ifndef V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_INTL_OBJECTS_TQ_H_
#define V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_INTL_OBJECTS_TQ_H_

#include "src/compiler/code-assembler.h"
#include "src/codegen/code-stub-assembler.h"
#include "src/utils/utils.h"
#include "torque-generated/field-offsets-tq.h"
#include "torque-generated/csa-types-tq.h"

namespace v8 {
namespace internal {

TNode<Foreign> LoadJSDateTimeFormatIcuLocale_1309(compiler::CodeAssemblerState* state_, TNode<JSDateTimeFormat> p_o);
void StoreJSDateTimeFormatIcuLocale_1310(compiler::CodeAssemblerState* state_, TNode<JSDateTimeFormat> p_o, TNode<Foreign> p_v);
TNode<Foreign> LoadJSDateTimeFormatIcuSimpleDateFormat_1311(compiler::CodeAssemblerState* state_, TNode<JSDateTimeFormat> p_o);
void StoreJSDateTimeFormatIcuSimpleDateFormat_1312(compiler::CodeAssemblerState* state_, TNode<JSDateTimeFormat> p_o, TNode<Foreign> p_v);
TNode<Foreign> LoadJSDateTimeFormatIcuDateIntervalFormat_1313(compiler::CodeAssemblerState* state_, TNode<JSDateTimeFormat> p_o);
void StoreJSDateTimeFormatIcuDateIntervalFormat_1314(compiler::CodeAssemblerState* state_, TNode<JSDateTimeFormat> p_o, TNode<Foreign> p_v);
TNode<HeapObject> LoadJSDateTimeFormatBoundFormat_1315(compiler::CodeAssemblerState* state_, TNode<JSDateTimeFormat> p_o);
void StoreJSDateTimeFormatBoundFormat_1316(compiler::CodeAssemblerState* state_, TNode<JSDateTimeFormat> p_o, TNode<HeapObject> p_v);
TNode<Smi> LoadJSDateTimeFormatFlags_1317(compiler::CodeAssemblerState* state_, TNode<JSDateTimeFormat> p_o);
void StoreJSDateTimeFormatFlags_1318(compiler::CodeAssemblerState* state_, TNode<JSDateTimeFormat> p_o, TNode<Smi> p_v);
TNode<String> LoadJSListFormatLocale_1319(compiler::CodeAssemblerState* state_, TNode<JSListFormat> p_o);
void StoreJSListFormatLocale_1320(compiler::CodeAssemblerState* state_, TNode<JSListFormat> p_o, TNode<String> p_v);
TNode<Foreign> LoadJSListFormatIcuFormatter_1321(compiler::CodeAssemblerState* state_, TNode<JSListFormat> p_o);
void StoreJSListFormatIcuFormatter_1322(compiler::CodeAssemblerState* state_, TNode<JSListFormat> p_o, TNode<Foreign> p_v);
TNode<Smi> LoadJSListFormatFlags_1323(compiler::CodeAssemblerState* state_, TNode<JSListFormat> p_o);
void StoreJSListFormatFlags_1324(compiler::CodeAssemblerState* state_, TNode<JSListFormat> p_o, TNode<Smi> p_v);
TNode<String> LoadJSNumberFormatLocale_1325(compiler::CodeAssemblerState* state_, TNode<JSNumberFormat> p_o);
void StoreJSNumberFormatLocale_1326(compiler::CodeAssemblerState* state_, TNode<JSNumberFormat> p_o, TNode<String> p_v);
TNode<Foreign> LoadJSNumberFormatIcuNumberFormatter_1327(compiler::CodeAssemblerState* state_, TNode<JSNumberFormat> p_o);
void StoreJSNumberFormatIcuNumberFormatter_1328(compiler::CodeAssemblerState* state_, TNode<JSNumberFormat> p_o, TNode<Foreign> p_v);
TNode<HeapObject> LoadJSNumberFormatBoundFormat_1329(compiler::CodeAssemblerState* state_, TNode<JSNumberFormat> p_o);
void StoreJSNumberFormatBoundFormat_1330(compiler::CodeAssemblerState* state_, TNode<JSNumberFormat> p_o, TNode<HeapObject> p_v);
TNode<Smi> LoadJSNumberFormatFlags_1331(compiler::CodeAssemblerState* state_, TNode<JSNumberFormat> p_o);
void StoreJSNumberFormatFlags_1332(compiler::CodeAssemblerState* state_, TNode<JSNumberFormat> p_o, TNode<Smi> p_v);
TNode<String> LoadJSPluralRulesLocale_1333(compiler::CodeAssemblerState* state_, TNode<JSPluralRules> p_o);
void StoreJSPluralRulesLocale_1334(compiler::CodeAssemblerState* state_, TNode<JSPluralRules> p_o, TNode<String> p_v);
TNode<Smi> LoadJSPluralRulesFlags_1335(compiler::CodeAssemblerState* state_, TNode<JSPluralRules> p_o);
void StoreJSPluralRulesFlags_1336(compiler::CodeAssemblerState* state_, TNode<JSPluralRules> p_o, TNode<Smi> p_v);
TNode<Foreign> LoadJSPluralRulesIcuPluralRules_1337(compiler::CodeAssemblerState* state_, TNode<JSPluralRules> p_o);
void StoreJSPluralRulesIcuPluralRules_1338(compiler::CodeAssemblerState* state_, TNode<JSPluralRules> p_o, TNode<Foreign> p_v);
TNode<Foreign> LoadJSPluralRulesIcuNumberFormatter_1339(compiler::CodeAssemblerState* state_, TNode<JSPluralRules> p_o);
void StoreJSPluralRulesIcuNumberFormatter_1340(compiler::CodeAssemblerState* state_, TNode<JSPluralRules> p_o, TNode<Foreign> p_v);
TNode<String> LoadJSRelativeTimeFormatLocale_1341(compiler::CodeAssemblerState* state_, TNode<JSRelativeTimeFormat> p_o);
void StoreJSRelativeTimeFormatLocale_1342(compiler::CodeAssemblerState* state_, TNode<JSRelativeTimeFormat> p_o, TNode<String> p_v);
TNode<Foreign> LoadJSRelativeTimeFormatIcuFormatter_1343(compiler::CodeAssemblerState* state_, TNode<JSRelativeTimeFormat> p_o);
void StoreJSRelativeTimeFormatIcuFormatter_1344(compiler::CodeAssemblerState* state_, TNode<JSRelativeTimeFormat> p_o, TNode<Foreign> p_v);
TNode<Smi> LoadJSRelativeTimeFormatFlags_1345(compiler::CodeAssemblerState* state_, TNode<JSRelativeTimeFormat> p_o);
void StoreJSRelativeTimeFormatFlags_1346(compiler::CodeAssemblerState* state_, TNode<JSRelativeTimeFormat> p_o, TNode<Smi> p_v);
TNode<Foreign> LoadJSLocaleIcuLocale_1347(compiler::CodeAssemblerState* state_, TNode<JSLocale> p_o);
void StoreJSLocaleIcuLocale_1348(compiler::CodeAssemblerState* state_, TNode<JSLocale> p_o, TNode<Foreign> p_v);
TNode<String> LoadJSSegmenterLocale_1349(compiler::CodeAssemblerState* state_, TNode<JSSegmenter> p_o);
void StoreJSSegmenterLocale_1350(compiler::CodeAssemblerState* state_, TNode<JSSegmenter> p_o, TNode<String> p_v);
TNode<Foreign> LoadJSSegmenterIcuBreakIterator_1351(compiler::CodeAssemblerState* state_, TNode<JSSegmenter> p_o);
void StoreJSSegmenterIcuBreakIterator_1352(compiler::CodeAssemblerState* state_, TNode<JSSegmenter> p_o, TNode<Foreign> p_v);
TNode<Smi> LoadJSSegmenterFlags_1353(compiler::CodeAssemblerState* state_, TNode<JSSegmenter> p_o);
void StoreJSSegmenterFlags_1354(compiler::CodeAssemblerState* state_, TNode<JSSegmenter> p_o, TNode<Smi> p_v);
TNode<Foreign> LoadJSSegmentIteratorIcuBreakIterator_1355(compiler::CodeAssemblerState* state_, TNode<JSSegmentIterator> p_o);
void StoreJSSegmentIteratorIcuBreakIterator_1356(compiler::CodeAssemblerState* state_, TNode<JSSegmentIterator> p_o, TNode<Foreign> p_v);
TNode<Foreign> LoadJSSegmentIteratorUnicodeString_1357(compiler::CodeAssemblerState* state_, TNode<JSSegmentIterator> p_o);
void StoreJSSegmentIteratorUnicodeString_1358(compiler::CodeAssemblerState* state_, TNode<JSSegmentIterator> p_o, TNode<Foreign> p_v);
TNode<Smi> LoadJSSegmentIteratorFlags_1359(compiler::CodeAssemblerState* state_, TNode<JSSegmentIterator> p_o);
void StoreJSSegmentIteratorFlags_1360(compiler::CodeAssemblerState* state_, TNode<JSSegmentIterator> p_o, TNode<Smi> p_v);
TNode<String> LoadJSV8BreakIteratorLocale_1361(compiler::CodeAssemblerState* state_, TNode<JSV8BreakIterator> p_o);
void StoreJSV8BreakIteratorLocale_1362(compiler::CodeAssemblerState* state_, TNode<JSV8BreakIterator> p_o, TNode<String> p_v);
TNode<Foreign> LoadJSV8BreakIteratorBreakIterator_1363(compiler::CodeAssemblerState* state_, TNode<JSV8BreakIterator> p_o);
void StoreJSV8BreakIteratorBreakIterator_1364(compiler::CodeAssemblerState* state_, TNode<JSV8BreakIterator> p_o, TNode<Foreign> p_v);
TNode<Foreign> LoadJSV8BreakIteratorUnicodeString_1365(compiler::CodeAssemblerState* state_, TNode<JSV8BreakIterator> p_o);
void StoreJSV8BreakIteratorUnicodeString_1366(compiler::CodeAssemblerState* state_, TNode<JSV8BreakIterator> p_o, TNode<Foreign> p_v);
TNode<HeapObject> LoadJSV8BreakIteratorBoundAdoptText_1367(compiler::CodeAssemblerState* state_, TNode<JSV8BreakIterator> p_o);
void StoreJSV8BreakIteratorBoundAdoptText_1368(compiler::CodeAssemblerState* state_, TNode<JSV8BreakIterator> p_o, TNode<HeapObject> p_v);
TNode<HeapObject> LoadJSV8BreakIteratorBoundFirst_1369(compiler::CodeAssemblerState* state_, TNode<JSV8BreakIterator> p_o);
void StoreJSV8BreakIteratorBoundFirst_1370(compiler::CodeAssemblerState* state_, TNode<JSV8BreakIterator> p_o, TNode<HeapObject> p_v);
TNode<HeapObject> LoadJSV8BreakIteratorBoundNext_1371(compiler::CodeAssemblerState* state_, TNode<JSV8BreakIterator> p_o);
void StoreJSV8BreakIteratorBoundNext_1372(compiler::CodeAssemblerState* state_, TNode<JSV8BreakIterator> p_o, TNode<HeapObject> p_v);
TNode<HeapObject> LoadJSV8BreakIteratorBoundCurrent_1373(compiler::CodeAssemblerState* state_, TNode<JSV8BreakIterator> p_o);
void StoreJSV8BreakIteratorBoundCurrent_1374(compiler::CodeAssemblerState* state_, TNode<JSV8BreakIterator> p_o, TNode<HeapObject> p_v);
TNode<HeapObject> LoadJSV8BreakIteratorBoundBreakType_1375(compiler::CodeAssemblerState* state_, TNode<JSV8BreakIterator> p_o);
void StoreJSV8BreakIteratorBoundBreakType_1376(compiler::CodeAssemblerState* state_, TNode<JSV8BreakIterator> p_o, TNode<HeapObject> p_v);
TNode<Smi> LoadJSV8BreakIteratorBreakIteratorType_1377(compiler::CodeAssemblerState* state_, TNode<JSV8BreakIterator> p_o);
void StoreJSV8BreakIteratorBreakIteratorType_1378(compiler::CodeAssemblerState* state_, TNode<JSV8BreakIterator> p_o, TNode<Smi> p_v);
TNode<Foreign> LoadJSCollatorIcuCollator_1379(compiler::CodeAssemblerState* state_, TNode<JSCollator> p_o);
void StoreJSCollatorIcuCollator_1380(compiler::CodeAssemblerState* state_, TNode<JSCollator> p_o, TNode<Foreign> p_v);
TNode<HeapObject> LoadJSCollatorBoundCompare_1381(compiler::CodeAssemblerState* state_, TNode<JSCollator> p_o);
void StoreJSCollatorBoundCompare_1382(compiler::CodeAssemblerState* state_, TNode<JSCollator> p_o, TNode<HeapObject> p_v);
}  // namespace internal
}  // namespace v8

#endif  // V8_GEN_TORQUE_GENERATED_SRC_OBJECTS_INTL_OBJECTS_TQ_H_
