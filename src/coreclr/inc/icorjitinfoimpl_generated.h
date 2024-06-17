// Licensed to the .NET Foundation under one or more agreements.
// The .NET Foundation licenses this file to you under the MIT license.

// DO NOT EDIT THIS FILE! IT IS AUTOGENERATED
// To regenerate run the gen script in src/coreclr/tools/Common/JitInterface/ThunkGenerator
// and follow the instructions in docs/project/updating-jitinterface.md


// ICorJitInfoImpl: declare for implementation all the members of the ICorJitInfo interface (which are
// specified as pure virtual methods). This is done once, here, and all implementations share it,
// to avoid duplicated declarations. This file is #include'd within all the ICorJitInfo implementation
// classes.
//
// NOTE: this file is in exactly the same order, with exactly the same whitespace, as the ICorJitInfo
// interface declaration (with the "virtual" and "= 0" syntax removed). This is to make it easy to compare
// against the interface declaration.

/**********************************************************************************/
// clang-format off
/**********************************************************************************/

public:

bool isIntrinsic(
          CORINFO_METHOD_HANDLE ftn) override;

bool notifyMethodInfoUsage(
          CORINFO_METHOD_HANDLE ftn) override;

uint32_t getMethodAttribs(
          CORINFO_METHOD_HANDLE ftn) override;

void setMethodAttribs(
          CORINFO_METHOD_HANDLE ftn,
          CorInfoMethodRuntimeFlags attribs) override;

void getMethodSig(
          CORINFO_METHOD_HANDLE ftn,
          CORINFO_SIG_INFO* sig,
          CORINFO_CLASS_HANDLE memberParent) override;

bool getMethodInfo(
          CORINFO_METHOD_HANDLE ftn,
          CORINFO_METHOD_INFO* info,
          CORINFO_CONTEXT_HANDLE context) override;

bool haveSameMethodDefinition(
          CORINFO_METHOD_HANDLE meth1Hnd,
          CORINFO_METHOD_HANDLE meth2Hnd) override;

CorInfoInline canInline(
          CORINFO_METHOD_HANDLE callerHnd,
          CORINFO_METHOD_HANDLE calleeHnd) override;

void beginInlining(
          CORINFO_METHOD_HANDLE inlinerHnd,
          CORINFO_METHOD_HANDLE inlineeHnd) override;

void reportInliningDecision(
          CORINFO_METHOD_HANDLE inlinerHnd,
          CORINFO_METHOD_HANDLE inlineeHnd,
          CorInfoInline inlineResult,
          const char* reason) override;

bool canTailCall(
          CORINFO_METHOD_HANDLE callerHnd,
          CORINFO_METHOD_HANDLE declaredCalleeHnd,
          CORINFO_METHOD_HANDLE exactCalleeHnd,
          bool fIsTailPrefix) override;

void reportTailCallDecision(
          CORINFO_METHOD_HANDLE callerHnd,
          CORINFO_METHOD_HANDLE calleeHnd,
          bool fIsTailPrefix,
          CorInfoTailCall tailCallResult,
          const char* reason) override;

void getEHinfo(
          CORINFO_METHOD_HANDLE ftn,
          unsigned EHnumber,
          CORINFO_EH_CLAUSE* clause) override;

CORINFO_CLASS_HANDLE getMethodClass(
          CORINFO_METHOD_HANDLE method) override;

void getMethodVTableOffset(
          CORINFO_METHOD_HANDLE method,
          unsigned* offsetOfIndirection,
          unsigned* offsetAfterIndirection,
          bool* isRelative) override;

bool resolveVirtualMethod(
          CORINFO_DEVIRTUALIZATION_INFO* info) override;

CORINFO_METHOD_HANDLE getUnboxedEntry(
          CORINFO_METHOD_HANDLE ftn,
          bool* requiresInstMethodTableArg) override;

CORINFO_CLASS_HANDLE getDefaultComparerClass(
          CORINFO_CLASS_HANDLE elemType) override;

CORINFO_CLASS_HANDLE getDefaultEqualityComparerClass(
          CORINFO_CLASS_HANDLE elemType) override;

void expandRawHandleIntrinsic(
          CORINFO_RESOLVED_TOKEN* pResolvedToken,
          CORINFO_METHOD_HANDLE callerHandle,
          CORINFO_GENERICHANDLE_RESULT* pResult) override;

bool isIntrinsicType(
          CORINFO_CLASS_HANDLE classHnd) override;

CorInfoCallConvExtension getUnmanagedCallConv(
          CORINFO_METHOD_HANDLE method,
          CORINFO_SIG_INFO* callSiteSig,
          bool* pSuppressGCTransition) override;

bool pInvokeMarshalingRequired(
          CORINFO_METHOD_HANDLE method,
          CORINFO_SIG_INFO* callSiteSig) override;

bool satisfiesMethodConstraints(
          CORINFO_CLASS_HANDLE parent,
          CORINFO_METHOD_HANDLE method) override;

void methodMustBeLoadedBeforeCodeIsRun(
          CORINFO_METHOD_HANDLE method) override;

CORINFO_METHOD_HANDLE mapMethodDeclToMethodImpl(
          CORINFO_METHOD_HANDLE method) override;

void getGSCookie(
          GSCookie* pCookieVal,
          GSCookie** ppCookieVal) override;

void setPatchpointInfo(
          PatchpointInfo* patchpointInfo) override;

PatchpointInfo* getOSRInfo(
          unsigned* ilOffset) override;

void resolveToken(
          CORINFO_RESOLVED_TOKEN* pResolvedToken) override;

void findSig(
          CORINFO_MODULE_HANDLE module,
          unsigned sigTOK,
          CORINFO_CONTEXT_HANDLE context,
          CORINFO_SIG_INFO* sig) override;

void findCallSiteSig(
          CORINFO_MODULE_HANDLE module,
          unsigned methTOK,
          CORINFO_CONTEXT_HANDLE context,
          CORINFO_SIG_INFO* sig) override;

CORINFO_CLASS_HANDLE getTokenTypeAsHandle(
          CORINFO_RESOLVED_TOKEN* pResolvedToken) override;

int getStringLiteral(
          CORINFO_MODULE_HANDLE module,
          unsigned metaTOK,
          char16_t* buffer,
          int bufferSize,
          int startIndex) override;

size_t printObjectDescription(
          CORINFO_OBJECT_HANDLE handle,
          char* buffer,
          size_t bufferSize,
          size_t* pRequiredBufferSize) override;

CorInfoType asCorInfoType(
          CORINFO_CLASS_HANDLE cls) override;

const char* getClassNameFromMetadata(
          CORINFO_CLASS_HANDLE cls,
          const char** namespaceName) override;

CORINFO_CLASS_HANDLE getTypeInstantiationArgument(
          CORINFO_CLASS_HANDLE cls,
          unsigned index) override;

size_t printClassName(
          CORINFO_CLASS_HANDLE cls,
          char* buffer,
          size_t bufferSize,
          size_t* pRequiredBufferSize) override;

bool isValueClass(
          CORINFO_CLASS_HANDLE cls) override;

uint32_t getClassAttribs(
          CORINFO_CLASS_HANDLE cls) override;

CORINFO_MODULE_HANDLE getClassModule(
          CORINFO_CLASS_HANDLE cls) override;

CORINFO_ASSEMBLY_HANDLE getModuleAssembly(
          CORINFO_MODULE_HANDLE mod) override;

const char* getAssemblyName(
          CORINFO_ASSEMBLY_HANDLE assem) override;

void* LongLifetimeMalloc(
          size_t sz) override;

void LongLifetimeFree(
          void* obj) override;

bool getIsClassInitedFlagAddress(
          CORINFO_CLASS_HANDLE cls,
          CORINFO_CONST_LOOKUP* addr,
          int* offset) override;

size_t getClassThreadStaticDynamicInfo(
          CORINFO_CLASS_HANDLE clr) override;

size_t getClassStaticDynamicInfo(
          CORINFO_CLASS_HANDLE clr) override;

bool getStaticBaseAddress(
          CORINFO_CLASS_HANDLE cls,
          bool isGc,
          CORINFO_CONST_LOOKUP* addr) override;

unsigned getClassSize(
          CORINFO_CLASS_HANDLE cls) override;

unsigned getHeapClassSize(
          CORINFO_CLASS_HANDLE cls) override;

bool canAllocateOnStack(
          CORINFO_CLASS_HANDLE cls) override;

unsigned getClassAlignmentRequirement(
          CORINFO_CLASS_HANDLE cls,
          bool fDoubleAlignHint) override;

unsigned getClassGClayout(
          CORINFO_CLASS_HANDLE cls,
          uint8_t* gcPtrs) override;

unsigned getClassNumInstanceFields(
          CORINFO_CLASS_HANDLE cls) override;

CORINFO_FIELD_HANDLE getFieldInClass(
          CORINFO_CLASS_HANDLE clsHnd,
          int32_t num) override;

GetTypeLayoutResult getTypeLayout(
          CORINFO_CLASS_HANDLE typeHnd,
          CORINFO_TYPE_LAYOUT_NODE* treeNodes,
          size_t* numTreeNodes) override;

bool checkMethodModifier(
          CORINFO_METHOD_HANDLE hMethod,
          const char* modifier,
          bool fOptional) override;

CorInfoHelpFunc getNewHelper(
          CORINFO_CLASS_HANDLE classHandle,
          bool* pHasSideEffects) override;

CorInfoHelpFunc getNewArrHelper(
          CORINFO_CLASS_HANDLE arrayCls) override;

CorInfoHelpFunc getCastingHelper(
          CORINFO_RESOLVED_TOKEN* pResolvedToken,
          bool fThrowing) override;

CorInfoHelpFunc getSharedCCtorHelper(
          CORINFO_CLASS_HANDLE clsHnd) override;

CORINFO_CLASS_HANDLE getTypeForBox(
          CORINFO_CLASS_HANDLE cls) override;

CorInfoHelpFunc getBoxHelper(
          CORINFO_CLASS_HANDLE cls) override;

CorInfoHelpFunc getUnBoxHelper(
          CORINFO_CLASS_HANDLE cls) override;

CORINFO_OBJECT_HANDLE getRuntimeTypePointer(
          CORINFO_CLASS_HANDLE cls) override;

bool isObjectImmutable(
          CORINFO_OBJECT_HANDLE objPtr) override;

bool getStringChar(
          CORINFO_OBJECT_HANDLE strObj,
          int index,
          uint16_t* value) override;

CORINFO_CLASS_HANDLE getObjectType(
          CORINFO_OBJECT_HANDLE objPtr) override;

bool getReadyToRunHelper(
          CORINFO_RESOLVED_TOKEN* pResolvedToken,
          CORINFO_LOOKUP_KIND* pGenericLookupKind,
          CorInfoHelpFunc id,
          CORINFO_METHOD_HANDLE callerHandle,
          CORINFO_CONST_LOOKUP* pLookup) override;

void getReadyToRunDelegateCtorHelper(
          CORINFO_RESOLVED_TOKEN* pTargetMethod,
          mdToken targetConstraint,
          CORINFO_CLASS_HANDLE delegateType,
          CORINFO_METHOD_HANDLE callerHandle,
          CORINFO_LOOKUP* pLookup) override;

CorInfoInitClassResult initClass(
          CORINFO_FIELD_HANDLE field,
          CORINFO_METHOD_HANDLE method,
          CORINFO_CONTEXT_HANDLE context) override;

void classMustBeLoadedBeforeCodeIsRun(
          CORINFO_CLASS_HANDLE cls) override;

CORINFO_CLASS_HANDLE getBuiltinClass(
          CorInfoClassId classId) override;

CorInfoType getTypeForPrimitiveValueClass(
          CORINFO_CLASS_HANDLE cls) override;

CorInfoType getTypeForPrimitiveNumericClass(
          CORINFO_CLASS_HANDLE cls) override;

bool canCast(
          CORINFO_CLASS_HANDLE child,
          CORINFO_CLASS_HANDLE parent) override;

TypeCompareState compareTypesForCast(
          CORINFO_CLASS_HANDLE fromClass,
          CORINFO_CLASS_HANDLE toClass) override;

TypeCompareState compareTypesForEquality(
          CORINFO_CLASS_HANDLE cls1,
          CORINFO_CLASS_HANDLE cls2) override;

bool isMoreSpecificType(
          CORINFO_CLASS_HANDLE cls1,
          CORINFO_CLASS_HANDLE cls2) override;

bool isExactType(
          CORINFO_CLASS_HANDLE cls) override;

TypeCompareState isGenericType(
          CORINFO_CLASS_HANDLE cls) override;

TypeCompareState isNullableType(
          CORINFO_CLASS_HANDLE cls) override;

TypeCompareState isEnum(
          CORINFO_CLASS_HANDLE cls,
          CORINFO_CLASS_HANDLE* underlyingType) override;

CORINFO_CLASS_HANDLE getParentType(
          CORINFO_CLASS_HANDLE cls) override;

CorInfoType getChildType(
          CORINFO_CLASS_HANDLE clsHnd,
          CORINFO_CLASS_HANDLE* clsRet) override;

bool isSDArray(
          CORINFO_CLASS_HANDLE cls) override;

unsigned getArrayRank(
          CORINFO_CLASS_HANDLE cls) override;

CorInfoArrayIntrinsic getArrayIntrinsicID(
          CORINFO_METHOD_HANDLE ftn) override;

void* getArrayInitializationData(
          CORINFO_FIELD_HANDLE field,
          uint32_t size) override;

CorInfoIsAccessAllowedResult canAccessClass(
          CORINFO_RESOLVED_TOKEN* pResolvedToken,
          CORINFO_METHOD_HANDLE callerHandle,
          CORINFO_HELPER_DESC* pAccessHelper) override;

size_t printFieldName(
          CORINFO_FIELD_HANDLE field,
          char* buffer,
          size_t bufferSize,
          size_t* pRequiredBufferSize) override;

CORINFO_CLASS_HANDLE getFieldClass(
          CORINFO_FIELD_HANDLE field) override;

CorInfoType getFieldType(
          CORINFO_FIELD_HANDLE field,
          CORINFO_CLASS_HANDLE* structType,
          CORINFO_CLASS_HANDLE memberParent) override;

unsigned getFieldOffset(
          CORINFO_FIELD_HANDLE field) override;

void getFieldInfo(
          CORINFO_RESOLVED_TOKEN* pResolvedToken,
          CORINFO_METHOD_HANDLE callerHandle,
          CORINFO_ACCESS_FLAGS flags,
          CORINFO_FIELD_INFO* pResult) override;

uint32_t getThreadLocalFieldInfo(
          CORINFO_FIELD_HANDLE field,
          bool isGCtype) override;

void getThreadLocalStaticBlocksInfo(
          CORINFO_THREAD_STATIC_BLOCKS_INFO* pInfo) override;

void getThreadLocalStaticInfo_NativeAOT(
          CORINFO_THREAD_STATIC_INFO_NATIVEAOT* pInfo) override;

bool isFieldStatic(
          CORINFO_FIELD_HANDLE fldHnd) override;

int getArrayOrStringLength(
          CORINFO_OBJECT_HANDLE objHnd) override;

void getBoundaries(
          CORINFO_METHOD_HANDLE ftn,
          unsigned int* cILOffsets,
          uint32_t** pILOffsets,
          ICorDebugInfo::BoundaryTypes* implicitBoundaries) override;

void setBoundaries(
          CORINFO_METHOD_HANDLE ftn,
          uint32_t cMap,
          ICorDebugInfo::OffsetMapping* pMap) override;

void getVars(
          CORINFO_METHOD_HANDLE ftn,
          uint32_t* cVars,
          ICorDebugInfo::ILVarInfo** vars,
          bool* extendOthers) override;

void setVars(
          CORINFO_METHOD_HANDLE ftn,
          uint32_t cVars,
          ICorDebugInfo::NativeVarInfo* vars) override;

void reportRichMappings(
          ICorDebugInfo::InlineTreeNode* inlineTreeNodes,
          uint32_t numInlineTreeNodes,
          ICorDebugInfo::RichOffsetMapping* mappings,
          uint32_t numMappings) override;

void reportMetadata(
          const char* key,
          const void* value,
          size_t length) override;

void* allocateArray(
          size_t cBytes) override;

void freeArray(
          void* array) override;

CORINFO_ARG_LIST_HANDLE getArgNext(
          CORINFO_ARG_LIST_HANDLE args) override;

CorInfoTypeWithMod getArgType(
          CORINFO_SIG_INFO* sig,
          CORINFO_ARG_LIST_HANDLE args,
          CORINFO_CLASS_HANDLE* vcTypeRet) override;

int getExactClasses(
          CORINFO_CLASS_HANDLE baseType,
          int maxExactClasses,
          CORINFO_CLASS_HANDLE* exactClsRet) override;

CORINFO_CLASS_HANDLE getArgClass(
          CORINFO_SIG_INFO* sig,
          CORINFO_ARG_LIST_HANDLE args) override;

CorInfoHFAElemType getHFAType(
          CORINFO_CLASS_HANDLE hClass) override;

bool runWithErrorTrap(
          ICorJitInfo::errorTrapFunction function,
          void* parameter) override;

bool runWithSPMIErrorTrap(
          ICorJitInfo::errorTrapFunction function,
          void* parameter) override;

void getEEInfo(
          CORINFO_EE_INFO* pEEInfoOut) override;

const char16_t* getJitTimeLogFilename() override;

mdMethodDef getMethodDefFromMethod(
          CORINFO_METHOD_HANDLE hMethod) override;

size_t printMethodName(
          CORINFO_METHOD_HANDLE ftn,
          char* buffer,
          size_t bufferSize,
          size_t* pRequiredBufferSize) override;

const char* getMethodNameFromMetadata(
          CORINFO_METHOD_HANDLE ftn,
          const char** className,
          const char** namespaceName,
          const char** enclosingClassName) override;

unsigned getMethodHash(
          CORINFO_METHOD_HANDLE ftn) override;

bool getSystemVAmd64PassStructInRegisterDescriptor(
          CORINFO_CLASS_HANDLE structHnd,
          SYSTEMV_AMD64_CORINFO_STRUCT_REG_PASSING_DESCRIPTOR* structPassInRegDescPtr) override;

void getSwiftLowering(
          CORINFO_CLASS_HANDLE structHnd,
          CORINFO_SWIFT_LOWERING* pLowering) override;

uint32_t getLoongArch64PassStructInRegisterFlags(
          CORINFO_CLASS_HANDLE structHnd) override;

uint32_t getRISCV64PassStructInRegisterFlags(
          CORINFO_CLASS_HANDLE structHnd) override;

uint32_t getThreadTLSIndex(
          void** ppIndirection) override;

int32_t* getAddrOfCaptureThreadGlobal(
          void** ppIndirection) override;

void* getHelperFtn(
          CorInfoHelpFunc ftnNum,
          void** ppIndirection) override;

void getFunctionEntryPoint(
          CORINFO_METHOD_HANDLE ftn,
          CORINFO_CONST_LOOKUP* pResult,
          CORINFO_ACCESS_FLAGS accessFlags) override;

void getFunctionFixedEntryPoint(
          CORINFO_METHOD_HANDLE ftn,
          bool isUnsafeFunctionPointer,
          CORINFO_CONST_LOOKUP* pResult) override;

void* getMethodSync(
          CORINFO_METHOD_HANDLE ftn,
          void** ppIndirection) override;

CorInfoHelpFunc getLazyStringLiteralHelper(
          CORINFO_MODULE_HANDLE handle) override;

CORINFO_MODULE_HANDLE embedModuleHandle(
          CORINFO_MODULE_HANDLE handle,
          void** ppIndirection) override;

CORINFO_CLASS_HANDLE embedClassHandle(
          CORINFO_CLASS_HANDLE handle,
          void** ppIndirection) override;

CORINFO_METHOD_HANDLE embedMethodHandle(
          CORINFO_METHOD_HANDLE handle,
          void** ppIndirection) override;

CORINFO_FIELD_HANDLE embedFieldHandle(
          CORINFO_FIELD_HANDLE handle,
          void** ppIndirection) override;

void embedGenericHandle(
          CORINFO_RESOLVED_TOKEN* pResolvedToken,
          bool fEmbedParent,
          CORINFO_METHOD_HANDLE callerHandle,
          CORINFO_GENERICHANDLE_RESULT* pResult) override;

void getLocationOfThisType(
          CORINFO_METHOD_HANDLE context,
          CORINFO_LOOKUP_KIND* pLookupKind) override;

void getAddressOfPInvokeTarget(
          CORINFO_METHOD_HANDLE method,
          CORINFO_CONST_LOOKUP* pLookup) override;

void* GetCookieForPInvokeCalliSig(
          CORINFO_SIG_INFO* szMetaSig,
          void** ppIndirection) override;

bool canGetCookieForPInvokeCalliSig(
          CORINFO_SIG_INFO* szMetaSig) override;

CORINFO_JUST_MY_CODE_HANDLE getJustMyCodeHandle(
          CORINFO_METHOD_HANDLE method,
          CORINFO_JUST_MY_CODE_HANDLE** ppIndirection) override;

void GetProfilingHandle(
          bool* pbHookFunction,
          void** pProfilerHandle,
          bool* pbIndirectedHandles) override;

void getCallInfo(
          CORINFO_RESOLVED_TOKEN* pResolvedToken,
          CORINFO_RESOLVED_TOKEN* pConstrainedResolvedToken,
          CORINFO_METHOD_HANDLE callerHandle,
          CORINFO_CALLINFO_FLAGS flags,
          CORINFO_CALL_INFO* pResult) override;

bool getStaticFieldContent(
          CORINFO_FIELD_HANDLE field,
          uint8_t* buffer,
          int bufferSize,
          int valueOffset,
          bool ignoreMovableObjects) override;

bool getObjectContent(
          CORINFO_OBJECT_HANDLE obj,
          uint8_t* buffer,
          int bufferSize,
          int valueOffset) override;

CORINFO_CLASS_HANDLE getStaticFieldCurrentClass(
          CORINFO_FIELD_HANDLE field,
          bool* pIsSpeculative) override;

CORINFO_VARARGS_HANDLE getVarArgsHandle(
          CORINFO_SIG_INFO* pSig,
          void** ppIndirection) override;

bool canGetVarArgsHandle(
          CORINFO_SIG_INFO* pSig) override;

InfoAccessType constructStringLiteral(
          CORINFO_MODULE_HANDLE module,
          mdToken metaTok,
          void** ppValue) override;

InfoAccessType emptyStringLiteral(
          void** ppValue) override;

uint32_t getFieldThreadLocalStoreID(
          CORINFO_FIELD_HANDLE field,
          void** ppIndirection) override;

CORINFO_METHOD_HANDLE GetDelegateCtor(
          CORINFO_METHOD_HANDLE methHnd,
          CORINFO_CLASS_HANDLE clsHnd,
          CORINFO_METHOD_HANDLE targetMethodHnd,
          DelegateCtorArgs* pCtorData) override;

void MethodCompileComplete(
          CORINFO_METHOD_HANDLE methHnd) override;

bool getTailCallHelpers(
          CORINFO_RESOLVED_TOKEN* callToken,
          CORINFO_SIG_INFO* sig,
          CORINFO_GET_TAILCALL_HELPERS_FLAGS flags,
          CORINFO_TAILCALL_HELPERS* pResult) override;

bool convertPInvokeCalliToCall(
          CORINFO_RESOLVED_TOKEN* pResolvedToken,
          bool mustConvert) override;

bool notifyInstructionSetUsage(
          CORINFO_InstructionSet instructionSet,
          bool supportEnabled) override;

void updateEntryPointForTailCall(
          CORINFO_CONST_LOOKUP* entryPoint) override;

void allocMem(
          AllocMemArgs* pArgs) override;

void reserveUnwindInfo(
          bool isFunclet,
          bool isColdCode,
          uint32_t unwindSize) override;

void allocUnwindInfo(
          uint8_t* pHotCode,
          uint8_t* pColdCode,
          uint32_t startOffset,
          uint32_t endOffset,
          uint32_t unwindSize,
          uint8_t* pUnwindBlock,
          CorJitFuncKind funcKind) override;

void* allocGCInfo(
          size_t size) override;

void setEHcount(
          unsigned cEH) override;

void setEHinfo(
          unsigned EHnumber,
          const CORINFO_EH_CLAUSE* clause) override;

bool logMsg(
          unsigned level,
          const char* fmt,
          va_list args) override;

int doAssert(
          const char* szFile,
          int iLine,
          const char* szExpr) override;

void reportFatalError(
          CorJitResult result) override;

JITINTERFACE_HRESULT getPgoInstrumentationResults(
          CORINFO_METHOD_HANDLE ftnHnd,
          ICorJitInfo::PgoInstrumentationSchema** pSchema,
          uint32_t* pCountSchemaItems,
          uint8_t** pInstrumentationData,
          ICorJitInfo::PgoSource* pPgoSource,
          bool* pDynamicPgo) override;

JITINTERFACE_HRESULT allocPgoInstrumentationBySchema(
          CORINFO_METHOD_HANDLE ftnHnd,
          ICorJitInfo::PgoInstrumentationSchema* pSchema,
          uint32_t countSchemaItems,
          uint8_t** pInstrumentationData) override;

void recordCallSite(
          uint32_t instrOffset,
          CORINFO_SIG_INFO* callSig,
          CORINFO_METHOD_HANDLE methodHandle) override;

void recordRelocation(
          void* location,
          void* locationRW,
          void* target,
          uint16_t fRelocType,
          int32_t addlDelta) override;

uint16_t getRelocTypeHint(
          void* target) override;

uint32_t getExpectedTargetArchitecture() override;

uint32_t getJitFlags(
          CORJIT_FLAGS* flags,
          uint32_t sizeInBytes) override;

/**********************************************************************************/
// clang-format on
/**********************************************************************************/
