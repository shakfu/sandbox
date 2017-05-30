/* Generated by Nim Compiler v0.17.0 */
/*   (c) 2017 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Linux, amd64, gcc */
/* Command for C compiler:
   gcc -c  -w  -I/opt/nim/lib -o /mnt/hgfs/shared/projects/polylab/nim/demo/nimcache/demo.o /mnt/hgfs/shared/projects/polylab/nim/demo/nimcache/demo.c */
#define NIM_NEW_MANGLING_RULES
#define NIM_INTBITS 64

#include "nimbase.h"
#include <stdio.h>
#undef linux
#undef near
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct AnimalcolonObjectType__3R5gIxchlyf9cN89avNJMC0Q AnimalcolonObjectType__3R5gIxchlyf9cN89avNJMC0Q;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct DogcolonObjectType__t1n1BjYlliS1yZVWu79bAIg DogcolonObjectType__t1n1BjYlliS1yZVWu79bAIg;
typedef struct CatcolonObjectType__wTxIe3bOYi10GGQorcO2Kg CatcolonObjectType__wTxIe3bOYi10GGQorcO2Kg;
typedef struct TY_71oqvXLZrfh2tXKDh9a7wfQ TY_71oqvXLZrfh2tXKDh9a7wfQ;
typedef struct Cell_1zcF9cV8XIAtbN8h5HRUB8g Cell_1zcF9cV8XIAtbN8h5HRUB8g;
typedef struct CellSeq_Axo1XVm9aaQueTOldv8le5w CellSeq_Axo1XVm9aaQueTOldv8le5w;
typedef struct GcHeap_1TRH1TZMaVZTnLNcIHuNFQ GcHeap_1TRH1TZMaVZTnLNcIHuNFQ;
typedef struct GcStack_7fytPA5bBsob6See21YMRA GcStack_7fytPA5bBsob6See21YMRA;
typedef struct MemRegion_x81NhDv59b8ercDZ9bi85jyg MemRegion_x81NhDv59b8ercDZ9bi85jyg;
typedef struct SmallChunk_tXn60W2f8h3jgAYdEmy5NQ SmallChunk_tXn60W2f8h3jgAYdEmy5NQ;
typedef struct LLChunk_XsENErzHIZV9bhvyJx56wGw LLChunk_XsENErzHIZV9bhvyJx56wGw;
typedef struct BigChunk_Rv9c70Uhp2TytkX7eH78qEg BigChunk_Rv9c70Uhp2TytkX7eH78qEg;
typedef struct IntSet_EZObFrE3NC9bIb3YMkY9crZA IntSet_EZObFrE3NC9bIb3YMkY9crZA;
typedef struct Trunk_W0r8S0Y3UGke6T9bIUWnnuw Trunk_W0r8S0Y3UGke6T9bIUWnnuw;
typedef struct AvlNode_IaqjtwKhxLEpvDS9bct9blEw AvlNode_IaqjtwKhxLEpvDS9bct9blEw;
typedef struct HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg;
typedef struct TY_ujsjpB2O9cjj3uDHsXbnSzg TY_ujsjpB2O9cjj3uDHsXbnSzg;
typedef struct GcStat_0RwLoVBHZPfUAcLczmfQAg GcStat_0RwLoVBHZPfUAcLczmfQAg;
typedef struct CellSet_jG87P0AI9aZtss9ccTYBIISQ CellSet_jG87P0AI9aZtss9ccTYBIISQ;
typedef struct PageDesc_fublkgIY4LG3mT51LU2WHg PageDesc_fublkgIY4LG3mT51LU2WHg;
typedef struct BaseChunk_Sdq7WpT6qAH858F5ZEdG3w BaseChunk_Sdq7WpT6qAH858F5ZEdG3w;
typedef struct FreeCell_u6M5LHprqzkn9axr04yg9bGQ FreeCell_u6M5LHprqzkn9axr04yg9bGQ;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NU8 TNimKind_jIBKr1ejBgsfM33Kxw4j7A;
typedef NU8 TNimTypeFlag_v8QUszD1sWlSIWZz7mC4bQ_Set;
typedef N_NIMCALL_PTR(void, TY_ojoeKfW4VYIm36I9cpDTQIg) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, TY_WSm2xU5ARYv9aAR4l0z9c9auQ) (void* p);
struct  TNimType  {
NI size;
TNimKind_jIBKr1ejBgsfM33Kxw4j7A kind;
TNimTypeFlag_v8QUszD1sWlSIWZz7mC4bQ_Set flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY_ojoeKfW4VYIm36I9cpDTQIg marker;
TY_WSm2xU5ARYv9aAR4l0z9c9auQ deepcopy;
};
struct  TNimObject  {
TNimType* m_type;
};
struct  AnimalcolonObjectType__3R5gIxchlyf9cN89avNJMC0Q  {
  TNimObject Sup;
NimStringDesc* name;
NI age;
};
struct  DogcolonObjectType__t1n1BjYlliS1yZVWu79bAIg  {
  AnimalcolonObjectType__3R5gIxchlyf9cN89avNJMC0Q Sup;
};
typedef NU8 TNimNodeKind_unfNsxrcATrufDZmpBq4HQ;
struct  TNimNode  {
TNimNodeKind_unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef N_NIMCALL_PTR(void, TY_T4eqaYlFJYZUv9aG9b1TV0bQ) (void);
struct  Cell_1zcF9cV8XIAtbN8h5HRUB8g  {
NI refcount;
TNimType* typ;
};
struct  GcStack_7fytPA5bBsob6See21YMRA  {
void* bottom;
};
struct  CellSeq_Axo1XVm9aaQueTOldv8le5w  {
NI len;
NI cap;
Cell_1zcF9cV8XIAtbN8h5HRUB8g** d;
};
typedef SmallChunk_tXn60W2f8h3jgAYdEmy5NQ* TY_SiRwrEKZdLgxqz9a9aoVBglg[512];
typedef Trunk_W0r8S0Y3UGke6T9bIUWnnuw* TY_lh2A89ahMmYg9bCmpVaplLbA[256];
struct  IntSet_EZObFrE3NC9bIb3YMkY9crZA  {
TY_lh2A89ahMmYg9bCmpVaplLbA data;
};
typedef AvlNode_IaqjtwKhxLEpvDS9bct9blEw* TY_0aOLqZchNi8nWtMTi8ND8w[2];
struct  AvlNode_IaqjtwKhxLEpvDS9bct9blEw  {
TY_0aOLqZchNi8nWtMTi8ND8w link;
NI key;
NI upperBound;
NI level;
};
struct TY_ujsjpB2O9cjj3uDHsXbnSzg {
BigChunk_Rv9c70Uhp2TytkX7eH78qEg* Field0;
NI Field1;
};
typedef TY_ujsjpB2O9cjj3uDHsXbnSzg TY_LzOv2eCDGiceMKQstCLmhw[30];
struct  HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg  {
NI len;
TY_LzOv2eCDGiceMKQstCLmhw chunks;
HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg* next;
};
struct  MemRegion_x81NhDv59b8ercDZ9bi85jyg  {
NI minLargeObj;
NI maxLargeObj;
TY_SiRwrEKZdLgxqz9a9aoVBglg freeSmallChunks;
LLChunk_XsENErzHIZV9bhvyJx56wGw* llmem;
NI currMem;
NI maxMem;
NI freeMem;
NI lastSize;
BigChunk_Rv9c70Uhp2TytkX7eH78qEg* freeChunksList;
IntSet_EZObFrE3NC9bIb3YMkY9crZA chunkStarts;
AvlNode_IaqjtwKhxLEpvDS9bct9blEw* root;
AvlNode_IaqjtwKhxLEpvDS9bct9blEw* deleted;
AvlNode_IaqjtwKhxLEpvDS9bct9blEw* last;
AvlNode_IaqjtwKhxLEpvDS9bct9blEw* freeAvlNodes;
NIM_BOOL locked;
NIM_BOOL blockChunkSizeIncrease;
NI nextChunkSize;
AvlNode_IaqjtwKhxLEpvDS9bct9blEw bottomData;
HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg heapLinks;
};
struct  GcStat_0RwLoVBHZPfUAcLczmfQAg  {
NI stackScans;
NI cycleCollections;
NI maxThreshold;
NI maxStackSize;
NI maxStackCells;
NI cycleTableSize;
NI64 maxPause;
};
struct  CellSet_jG87P0AI9aZtss9ccTYBIISQ  {
NI counter;
NI max;
PageDesc_fublkgIY4LG3mT51LU2WHg* head;
PageDesc_fublkgIY4LG3mT51LU2WHg** data;
};
struct  GcHeap_1TRH1TZMaVZTnLNcIHuNFQ  {
GcStack_7fytPA5bBsob6See21YMRA stack;
NI cycleThreshold;
CellSeq_Axo1XVm9aaQueTOldv8le5w zct;
CellSeq_Axo1XVm9aaQueTOldv8le5w decStack;
CellSeq_Axo1XVm9aaQueTOldv8le5w tempStack;
NI recGcLock;
MemRegion_x81NhDv59b8ercDZ9bi85jyg region;
GcStat_0RwLoVBHZPfUAcLczmfQAg stat;
CellSet_jG87P0AI9aZtss9ccTYBIISQ marked;
CellSeq_Axo1XVm9aaQueTOldv8le5w additionalRoots;
};
struct  CatcolonObjectType__wTxIe3bOYi10GGQorcO2Kg  {
  AnimalcolonObjectType__3R5gIxchlyf9cN89avNJMC0Q Sup;
};
struct  BaseChunk_Sdq7WpT6qAH858F5ZEdG3w  {
NI prevSize;
NI size;
};
struct  SmallChunk_tXn60W2f8h3jgAYdEmy5NQ  {
  BaseChunk_Sdq7WpT6qAH858F5ZEdG3w Sup;
SmallChunk_tXn60W2f8h3jgAYdEmy5NQ* next;
SmallChunk_tXn60W2f8h3jgAYdEmy5NQ* prev;
FreeCell_u6M5LHprqzkn9axr04yg9bGQ* freeList;
NI free;
NI acc;
NF data;
};
struct  LLChunk_XsENErzHIZV9bhvyJx56wGw  {
NI size;
NI acc;
LLChunk_XsENErzHIZV9bhvyJx56wGw* next;
};
struct  BigChunk_Rv9c70Uhp2TytkX7eH78qEg  {
  BaseChunk_Sdq7WpT6qAH858F5ZEdG3w Sup;
BigChunk_Rv9c70Uhp2TytkX7eH78qEg* next;
BigChunk_Rv9c70Uhp2TytkX7eH78qEg* prev;
NF data;
};
typedef NI TY_9a8QARi5WsUggNU9bom7kzTQ[8];
struct  Trunk_W0r8S0Y3UGke6T9bIUWnnuw  {
Trunk_W0r8S0Y3UGke6T9bIUWnnuw* next;
NI key;
TY_9a8QARi5WsUggNU9bom7kzTQ bits;
};
struct  PageDesc_fublkgIY4LG3mT51LU2WHg  {
PageDesc_fublkgIY4LG3mT51LU2WHg* next;
NI key;
TY_9a8QARi5WsUggNU9bom7kzTQ bits;
};
struct  FreeCell_u6M5LHprqzkn9axr04yg9bGQ  {
FreeCell_u6M5LHprqzkn9axr04yg9bGQ* next;
NI zeroField;
};
struct TY_71oqvXLZrfh2tXKDh9a7wfQ {
  TGenericSeq Sup;
  AnimalcolonObjectType__3R5gIxchlyf9cN89avNJMC0Q* data[SEQ_DECL_SIZE];
};
N_NIMCALL(NimStringDesc*, vocalize_gb1QnzfqBpOdys3P8sslQQ)(AnimalcolonObjectType__3R5gIxchlyf9cN89avNJMC0Q* this_0);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackOverflow_II46IjNZztN9bmbxUD8dt8g)(void);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(NI, ageHumanYrs_ZRzmfNAKjibTY5EfvUL9cXA)(AnimalcolonObjectType__3R5gIxchlyf9cN89avNJMC0Q* this_0);
N_NIMCALL(NimStringDesc*, vocalize_Rva0UGX2IvjKicRH6UN2BQ)(DogcolonObjectType__t1n1BjYlliS1yZVWu79bAIg* this_0);
N_NIMCALL(NI, ageHumanYrs_ZoEhKTzJsK8g869bdBv6CkA)(DogcolonObjectType__t1n1BjYlliS1yZVWu79bAIg* this_0);
N_NIMCALL(NI, mulInt)(NI a, NI b);
N_NIMCALL(NimStringDesc*, vocalize_bNYNsyqBtXMgPs6azzJlmA)(CatcolonObjectType__wTxIe3bOYi10GGQorcO2Kg* this_0);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
static N_NIMCALL(void, Marker_TY_2HBAi4VkwONS26bKPxQL9cg)(void* p, NI op);
static N_NIMCALL(void, Marker_TY_71oqvXLZrfh2tXKDh9a7wfQ)(void* p, NI op);
static N_NIMCALL(void, TM_DcxC9awfE7BIOm2qDONPzRA_7)(void);
N_NIMCALL(void, nimRegisterGlobalMarker)(TY_T4eqaYlFJYZUv9aG9b1TV0bQ markerProc);
N_NIMCALL(void, nimGCunref)(void* p);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
static N_NIMCALL(void, Marker_TY_10zT9a0aAuyWEtbY59aeSOlA)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr);
static N_INLINE(void, rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system)(Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
N_NOINLINE(void, addZCT_fCDI7oO1NNVXXURtxSzsRw)(CellSeq_Axo1XVm9aaQueTOldv8le5w* s, Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
N_NIMCALL(TGenericSeq*, incrSeqV2)(TGenericSeq* seq, NI elemSize);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incRef_9cAA5YuQAAC3MVbnGeV86swsystem)(Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(void, decRef_MV4BBk6J1qu70IbBxwEn4wsystem)(Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_NIMCALL(void, Marker_TY_uCB9cFBasVJdXED6LrtWYCA)(void* p, NI op);
static N_NIMCALL(void, TM_DcxC9awfE7BIOm2qDONPzRA_10)(void);
N_NOINLINE(void, raiseIndexError)(void);
N_NIMCALL(NimStringDesc*, vocalize_xDY1dG89aWHQC9cshsrbuWag)(AnimalcolonObjectType__3R5gIxchlyf9cN89avNJMC0Q* this_0);
N_NIMCALL(NI, ageHumanYrs_SFSQoCKLlDcJzq9bFdgKs6g)(AnimalcolonObjectType__3R5gIxchlyf9cN89avNJMC0Q* this_0);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI x);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NIMCALL(void, failedAssertImpl_aDmpBTs9cPuXp0Mp9cfiNeyA)(NimStringDesc* msg);
N_NIMCALL(void, chckNilDisp)(void* p);
static N_INLINE(NIM_BOOL, isObjWithCache)(TNimType* obj, TNimType* subclass, TNimType** cache);
N_NOINLINE(NIM_BOOL, isObjSlowPath_k9bdq9bQE075AR7scLFt5wIg)(TNimType* obj, TNimType* subclass, TNimType** cache);
N_NIMCALL(void, chckObj)(TNimType* obj, TNimType* subclass);
static N_INLINE(void, initStackBottomWith)(void* locals);
N_NOINLINE(void, setStackBottom)(void* theStackBottom);
NIM_EXTERNC N_NOINLINE(void, systemInit000)(void);
NIM_EXTERNC N_NOINLINE(void, systemDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, NimMainModule)(void);
NIM_EXTERNC N_NOINLINE(void, demoDatInit000)(void);
extern TFrame* framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
TY_71oqvXLZrfh2tXKDh9a7wfQ* animals_WOmwdmrvpoWR3YQ3F6ELxQ;
extern TNimType NTI_13RNkKqUOX1TtorOUlKtqA_;
TNimType NTI_3R5gIxchlyf9cN89avNJMC0Q_;
extern TNimType NTI_77mFvmsOLKik79ci2hXkHEg_;
extern TNimType NTI_rR5Bzr1D5krxoo1NcNyeMA_;
TNimType NTI_2HBAi4VkwONS26bKPxQL9cg_;
TNimType NTI_71oqvXLZrfh2tXKDh9a7wfQ_;
TNimType NTI_t1n1BjYlliS1yZVWu79bAIg_;
TNimType NTI_10zT9a0aAuyWEtbY59aeSOlA_;
extern GcHeap_1TRH1TZMaVZTnLNcIHuNFQ gch_IcYaEuuWivYAS86vFMTS3Q;
TNimType NTI_wTxIe3bOYi10GGQorcO2Kg_;
TNimType NTI_uCB9cFBasVJdXED6LrtWYCA_;
AnimalcolonObjectType__3R5gIxchlyf9cN89avNJMC0Q* a_FEhclyGiNCR1AheLevX3Gg;
static TNimType* Nim_OfCheck_CACHE14[2];
static TNimType* Nim_OfCheck_CACHE15[2];
static TNimType* Nim_OfCheck_CACHE16[2];
static TNimType* Nim_OfCheck_CACHE17[2];
static TNimType* Nim_OfCheck_CACHE18[2];
STRING_LITERAL(TM_DcxC9awfE7BIOm2qDONPzRA_2, "...", 3);
STRING_LITERAL(TM_DcxC9awfE7BIOm2qDONPzRA_3, "woof", 4);
STRING_LITERAL(TM_DcxC9awfE7BIOm2qDONPzRA_5, "meow", 4);
STRING_LITERAL(TM_DcxC9awfE7BIOm2qDONPzRA_8, "Sparky", 6);
STRING_LITERAL(TM_DcxC9awfE7BIOm2qDONPzRA_9, "Mitten", 6);
STRING_LITERAL(TM_DcxC9awfE7BIOm2qDONPzRA_12, "len(a) == L seq modified while iterating over it", 48);

static N_INLINE(void, nimFrame)(TFrame* s) {
	NI T1_;
	T1_ = (NI)0;
	{
		if (!(framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw == NIM_NIL)) goto LA4_;
		T1_ = ((NI) 0);
	}
	goto LA2_;
	LA4_: ;
	{
		T1_ = ((NI) ((NI16)((*framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw).calldepth + ((NI16) 1))));
	}
	LA2_: ;
	(*s).calldepth = ((NI16) (T1_));
	(*s).prev = framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
	framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw = s;
	{
		if (!((*s).calldepth == ((NI16) 2000))) goto LA9_;
		stackOverflow_II46IjNZztN9bmbxUD8dt8g();
	}
	LA9_: ;
}

static N_INLINE(void, popFrame)(void) {
	framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw = (*framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw).prev;
}

N_NIMCALL(NimStringDesc*, vocalize_gb1QnzfqBpOdys3P8sslQQ)(AnimalcolonObjectType__3R5gIxchlyf9cN89avNJMC0Q* this_0) {
	NimStringDesc* result;
	nimfr_("vocalize", "demo.nim")
{	result = (NimStringDesc*)0;
	nimln_(5, "demo.nim");
	result = copyString(((NimStringDesc*) &TM_DcxC9awfE7BIOm2qDONPzRA_2));
	goto BeforeRet_;
	}BeforeRet_: ;
	popFrame();
	return result;
}

N_NIMCALL(NI, ageHumanYrs_ZRzmfNAKjibTY5EfvUL9cXA)(AnimalcolonObjectType__3R5gIxchlyf9cN89avNJMC0Q* this_0) {
	NI result;
	nimfr_("ageHumanYrs", "demo.nim")
	result = (NI)0;
	nimln_(6, "demo.nim");
	result = (*this_0).age;
	popFrame();
	return result;
}

N_NIMCALL(NimStringDesc*, vocalize_Rva0UGX2IvjKicRH6UN2BQ)(DogcolonObjectType__t1n1BjYlliS1yZVWu79bAIg* this_0) {
	NimStringDesc* result;
	nimfr_("vocalize", "demo.nim")
	result = (NimStringDesc*)0;
	nimln_(9, "demo.nim");
	result = copyString(((NimStringDesc*) &TM_DcxC9awfE7BIOm2qDONPzRA_3));
	popFrame();
	return result;
}

N_NIMCALL(NI, ageHumanYrs_ZoEhKTzJsK8g869bdBv6CkA)(DogcolonObjectType__t1n1BjYlliS1yZVWu79bAIg* this_0) {
	NI result;
	NI TM_DcxC9awfE7BIOm2qDONPzRA_4;
	nimfr_("ageHumanYrs", "demo.nim")
	result = (NI)0;
	nimln_(10, "demo.nim");
	TM_DcxC9awfE7BIOm2qDONPzRA_4 = mulInt((*this_0).Sup.age, ((NI) 7));
	result = (NI)(TM_DcxC9awfE7BIOm2qDONPzRA_4);
	popFrame();
	return result;
}

N_NIMCALL(NimStringDesc*, vocalize_bNYNsyqBtXMgPs6azzJlmA)(CatcolonObjectType__wTxIe3bOYi10GGQorcO2Kg* this_0) {
	NimStringDesc* result;
	nimfr_("vocalize", "demo.nim")
	result = (NimStringDesc*)0;
	nimln_(13, "demo.nim");
	result = copyString(((NimStringDesc*) &TM_DcxC9awfE7BIOm2qDONPzRA_5));
	popFrame();
	return result;
}
static N_NIMCALL(void, Marker_TY_2HBAi4VkwONS26bKPxQL9cg)(void* p, NI op) {
	AnimalcolonObjectType__3R5gIxchlyf9cN89avNJMC0Q* a;
	a = (AnimalcolonObjectType__3R5gIxchlyf9cN89avNJMC0Q*)p;
	nimGCvisit((void*)(*a).name, op);
}
static N_NIMCALL(void, Marker_TY_71oqvXLZrfh2tXKDh9a7wfQ)(void* p, NI op) {
	TY_71oqvXLZrfh2tXKDh9a7wfQ* a;
	NI T1_;
	a = (TY_71oqvXLZrfh2tXKDh9a7wfQ*)p;
	T1_ = (NI)0;
	for (T1_ = 0; T1_ < a->Sup.len; T1_++) {
	nimGCvisit((void*)a->data[T1_], op);
	}
}
static N_NIMCALL(void, TM_DcxC9awfE7BIOm2qDONPzRA_7)(void) {
	nimGCvisit((void*)animals_WOmwdmrvpoWR3YQ3F6ELxQ, 0);
}
static N_NIMCALL(void, Marker_TY_10zT9a0aAuyWEtbY59aeSOlA)(void* p, NI op) {
	DogcolonObjectType__t1n1BjYlliS1yZVWu79bAIg* a;
	a = (DogcolonObjectType__t1n1BjYlliS1yZVWu79bAIg*)p;
	nimGCvisit((void*)(*a).Sup.name, op);
}

static N_INLINE(Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr) {
	Cell_1zcF9cV8XIAtbN8h5HRUB8g* result;
	nimfr_("usrToCell", "gc.nim")
	result = (Cell_1zcF9cV8XIAtbN8h5HRUB8g*)0;
	nimln_(138, "gc.nim");
	result = ((Cell_1zcF9cV8XIAtbN8h5HRUB8g*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(Cell_1zcF9cV8XIAtbN8h5HRUB8g))))));
	popFrame();
	return result;
}

static N_INLINE(void, rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system)(Cell_1zcF9cV8XIAtbN8h5HRUB8g* c) {
	nimfr_("rtlAddZCT", "gc.nim")
	nimln_(216, "gc.nim");
	addZCT_fCDI7oO1NNVXXURtxSzsRw((&gch_IcYaEuuWivYAS86vFMTS3Q.zct), c);
	popFrame();
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	Cell_1zcF9cV8XIAtbN8h5HRUB8g* c;
	nimfr_("nimGCunrefNoCycle", "gc.nim")
	nimln_(270, "gc.nim");
	c = usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem(p);
	nimln_(272, "gc.nim");
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA3_;
		nimln_(273, "gc.nim");
		rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system(c);
	}
	LA3_: ;
	popFrame();
}

static N_INLINE(void, incRef_9cAA5YuQAAC3MVbnGeV86swsystem)(Cell_1zcF9cV8XIAtbN8h5HRUB8g* c) {
	nimfr_("incRef", "gc.nim")
	nimln_(196, "gc.nim");
	(*c).refcount = (NI)((NU64)((*c).refcount) + (NU64)(((NI) 8)));
	popFrame();
}

static N_INLINE(void, decRef_MV4BBk6J1qu70IbBxwEn4wsystem)(Cell_1zcF9cV8XIAtbN8h5HRUB8g* c) {
	nimfr_("decRef", "gc.nim")
	nimln_(223, "gc.nim");
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA3_;
		nimln_(224, "gc.nim");
		rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system(c);
	}
	LA3_: ;
	popFrame();
}

static N_INLINE(void, asgnRef)(void** dest, void* src) {
	nimfr_("asgnRef", "gc.nim")
	nimln_(281, "gc.nim");
	{
		Cell_1zcF9cV8XIAtbN8h5HRUB8g* T5_;
		nimln_(363, "system.nim");
		nimln_(281, "gc.nim");
		if (!!((src == NIM_NIL))) goto LA3_;
		T5_ = (Cell_1zcF9cV8XIAtbN8h5HRUB8g*)0;
		T5_ = usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem(src);
		incRef_9cAA5YuQAAC3MVbnGeV86swsystem(T5_);
	}
	LA3_: ;
	nimln_(282, "gc.nim");
	{
		Cell_1zcF9cV8XIAtbN8h5HRUB8g* T10_;
		nimln_(363, "system.nim");
		nimln_(282, "gc.nim");
		if (!!(((*dest) == NIM_NIL))) goto LA8_;
		T10_ = (Cell_1zcF9cV8XIAtbN8h5HRUB8g*)0;
		T10_ = usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem((*dest));
		decRef_MV4BBk6J1qu70IbBxwEn4wsystem(T10_);
	}
	LA8_: ;
	nimln_(283, "gc.nim");
	(*dest) = src;
	popFrame();
}
static N_NIMCALL(void, Marker_TY_uCB9cFBasVJdXED6LrtWYCA)(void* p, NI op) {
	CatcolonObjectType__wTxIe3bOYi10GGQorcO2Kg* a;
	a = (CatcolonObjectType__wTxIe3bOYi10GGQorcO2Kg*)p;
	nimGCvisit((void*)(*a).Sup.name, op);
}
static N_NIMCALL(void, TM_DcxC9awfE7BIOm2qDONPzRA_10)(void) {
	nimGCvisit((void*)a_FEhclyGiNCR1AheLevX3Gg, 0);
}

static N_INLINE(NI, addInt)(NI a, NI b) {
	NI result;
{	result = (NI)0;
	result = (NI)((NU64)(a) + (NU64)(b));
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (((NI) 0) <= (NI)(result ^ a));
		if (T3_) goto LA4_;
		T3_ = (((NI) 0) <= (NI)(result ^ b));
		LA4_: ;
		if (!T3_) goto LA5_;
		goto BeforeRet_;
	}
	LA5_: ;
	raiseOverflow();
	}BeforeRet_: ;
	return result;
}

static N_INLINE(NIM_BOOL, isObjWithCache)(TNimType* obj, TNimType* subclass, TNimType** cache) {
	NIM_BOOL result;
{	result = (NIM_BOOL)0;
	{
		if (!(obj == subclass)) goto LA3_;
		result = NIM_TRUE;
		goto BeforeRet_;
	}
	LA3_: ;
	{
		if (!((*obj).base == subclass)) goto LA7_;
		result = NIM_TRUE;
		goto BeforeRet_;
	}
	LA7_: ;
	{
		if (!(cache[(((NI) 0))- 0] == obj)) goto LA11_;
		result = NIM_FALSE;
		goto BeforeRet_;
	}
	LA11_: ;
	{
		if (!(cache[(((NI) 1))- 0] == obj)) goto LA15_;
		result = NIM_TRUE;
		goto BeforeRet_;
	}
	LA15_: ;
	result = isObjSlowPath_k9bdq9bQE075AR7scLFt5wIg(obj, subclass, cache);
	goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}

N_NIMCALL(NimStringDesc*, vocalize_xDY1dG89aWHQC9cshsrbuWag)(AnimalcolonObjectType__3R5gIxchlyf9cN89avNJMC0Q* this_0) {
	NimStringDesc* result;
	nimfr_("vocalize", "demo.nim")
{	result = (NimStringDesc*)0;
	nimln_(4, "demo.nim");
	chckNilDisp(this_0);
	{
		if (!((this_0) && (isObjWithCache((*this_0).Sup.m_type, (&NTI_wTxIe3bOYi10GGQorcO2Kg_), Nim_OfCheck_CACHE14)))) goto LA3_;
		if (this_0) chckObj((*this_0).Sup.m_type, (&NTI_wTxIe3bOYi10GGQorcO2Kg_));
		result = vocalize_bNYNsyqBtXMgPs6azzJlmA(((CatcolonObjectType__wTxIe3bOYi10GGQorcO2Kg*) (this_0)));
		goto BeforeRet_;
	}
	goto LA1_;
	LA3_: ;
	{
		if (!((this_0) && (isObjWithCache((*this_0).Sup.m_type, (&NTI_t1n1BjYlliS1yZVWu79bAIg_), Nim_OfCheck_CACHE15)))) goto LA6_;
		if (this_0) chckObj((*this_0).Sup.m_type, (&NTI_t1n1BjYlliS1yZVWu79bAIg_));
		result = vocalize_Rva0UGX2IvjKicRH6UN2BQ(((DogcolonObjectType__t1n1BjYlliS1yZVWu79bAIg*) (this_0)));
		goto BeforeRet_;
	}
	goto LA1_;
	LA6_: ;
	{
		if (!((this_0) && (isObjWithCache((*this_0).Sup.m_type, (&NTI_3R5gIxchlyf9cN89avNJMC0Q_), Nim_OfCheck_CACHE16)))) goto LA9_;
		result = vocalize_gb1QnzfqBpOdys3P8sslQQ(this_0);
		goto BeforeRet_;
	}
	goto LA1_;
	LA9_: ;
	LA1_: ;
	}BeforeRet_: ;
	popFrame();
	return result;
}

N_NIMCALL(NI, ageHumanYrs_SFSQoCKLlDcJzq9bFdgKs6g)(AnimalcolonObjectType__3R5gIxchlyf9cN89avNJMC0Q* this_0) {
	NI result;
	nimfr_("ageHumanYrs", "demo.nim")
{	result = (NI)0;
	nimln_(6, "demo.nim");
	chckNilDisp(this_0);
	{
		if (!((this_0) && (isObjWithCache((*this_0).Sup.m_type, (&NTI_t1n1BjYlliS1yZVWu79bAIg_), Nim_OfCheck_CACHE17)))) goto LA3_;
		if (this_0) chckObj((*this_0).Sup.m_type, (&NTI_t1n1BjYlliS1yZVWu79bAIg_));
		result = ageHumanYrs_ZoEhKTzJsK8g869bdBv6CkA(((DogcolonObjectType__t1n1BjYlliS1yZVWu79bAIg*) (this_0)));
		goto BeforeRet_;
	}
	goto LA1_;
	LA3_: ;
	{
		if (!((this_0) && (isObjWithCache((*this_0).Sup.m_type, (&NTI_3R5gIxchlyf9cN89avNJMC0Q_), Nim_OfCheck_CACHE18)))) goto LA6_;
		result = ageHumanYrs_ZRzmfNAKjibTY5EfvUL9cXA(this_0);
		goto BeforeRet_;
	}
	goto LA1_;
	LA6_: ;
	LA1_: ;
	}BeforeRet_: ;
	popFrame();
	return result;
}

static N_INLINE(void, initStackBottomWith)(void* locals) {
	setStackBottom(locals);
}
void PreMainInner(void) {
	systemInit000();
	demoDatInit000();
}

void PreMain(void) {
	void (*volatile inner)(void);
	systemDatInit000();
	inner = PreMainInner;
	initStackBottomWith((void *)&inner);
	(*inner)();
}

int cmdCount;
char** cmdLine;
char** gEnv;
N_CDECL(void, NimMainInner)(void) {
	NimMainModule();
}

N_CDECL(void, NimMain)(void) {
	void (*volatile inner)(void);
	PreMain();
	inner = NimMainInner;
	initStackBottomWith((void *)&inner);
	(*inner)();
}

int main(int argc, char** args, char** env) {
	cmdLine = args;
	cmdCount = argc;
	gEnv = env;
	NimMain();
	return nim_program_result;
}

NIM_EXTERNC N_NOINLINE(void, NimMainModule)(void) {
	DogcolonObjectType__t1n1BjYlliS1yZVWu79bAIg* T1_;
	NimStringDesc* T2_;
	AnimalcolonObjectType__3R5gIxchlyf9cN89avNJMC0Q* T3_;
	CatcolonObjectType__wTxIe3bOYi10GGQorcO2Kg* T4_;
	NimStringDesc* T5_;
	AnimalcolonObjectType__3R5gIxchlyf9cN89avNJMC0Q* T6_;
	nimfr_("demo", "demo.nim")
nimRegisterGlobalMarker(TM_DcxC9awfE7BIOm2qDONPzRA_7);
nimRegisterGlobalMarker(TM_DcxC9awfE7BIOm2qDONPzRA_10);
	nimln_(16, "demo.nim");
	if (animals_WOmwdmrvpoWR3YQ3F6ELxQ) nimGCunref(animals_WOmwdmrvpoWR3YQ3F6ELxQ);
	animals_WOmwdmrvpoWR3YQ3F6ELxQ = (TY_71oqvXLZrfh2tXKDh9a7wfQ*) newSeqRC1((&NTI_71oqvXLZrfh2tXKDh9a7wfQ_), 0);
	nimln_(17, "demo.nim");
	T1_ = (DogcolonObjectType__t1n1BjYlliS1yZVWu79bAIg*)0;
	T1_ = (DogcolonObjectType__t1n1BjYlliS1yZVWu79bAIg*) newObj((&NTI_10zT9a0aAuyWEtbY59aeSOlA_), sizeof(DogcolonObjectType__t1n1BjYlliS1yZVWu79bAIg));
	(*T1_).Sup.Sup.m_type = (&NTI_t1n1BjYlliS1yZVWu79bAIg_);
	T2_ = (NimStringDesc*)0;
	T2_ = (*T1_).Sup.name; (*T1_).Sup.name = copyStringRC1(((NimStringDesc*) &TM_DcxC9awfE7BIOm2qDONPzRA_8));
	if (T2_) nimGCunrefNoCycle(T2_);
	(*T1_).Sup.age = ((NI) 10);
	T3_ = (AnimalcolonObjectType__3R5gIxchlyf9cN89avNJMC0Q*)0;
	T3_ = &T1_->Sup;
	animals_WOmwdmrvpoWR3YQ3F6ELxQ = (TY_71oqvXLZrfh2tXKDh9a7wfQ*) incrSeqV2(&(animals_WOmwdmrvpoWR3YQ3F6ELxQ)->Sup, sizeof(AnimalcolonObjectType__3R5gIxchlyf9cN89avNJMC0Q*));
	asgnRef((void**) (&animals_WOmwdmrvpoWR3YQ3F6ELxQ->data[animals_WOmwdmrvpoWR3YQ3F6ELxQ->Sup.len]), T3_);
	++animals_WOmwdmrvpoWR3YQ3F6ELxQ->Sup.len;
	nimln_(18, "demo.nim");
	T4_ = (CatcolonObjectType__wTxIe3bOYi10GGQorcO2Kg*)0;
	T4_ = (CatcolonObjectType__wTxIe3bOYi10GGQorcO2Kg*) newObj((&NTI_uCB9cFBasVJdXED6LrtWYCA_), sizeof(CatcolonObjectType__wTxIe3bOYi10GGQorcO2Kg));
	(*T4_).Sup.Sup.m_type = (&NTI_wTxIe3bOYi10GGQorcO2Kg_);
	T5_ = (NimStringDesc*)0;
	T5_ = (*T4_).Sup.name; (*T4_).Sup.name = copyStringRC1(((NimStringDesc*) &TM_DcxC9awfE7BIOm2qDONPzRA_9));
	if (T5_) nimGCunrefNoCycle(T5_);
	(*T4_).Sup.age = ((NI) 10);
	T6_ = (AnimalcolonObjectType__3R5gIxchlyf9cN89avNJMC0Q*)0;
	T6_ = &T4_->Sup;
	animals_WOmwdmrvpoWR3YQ3F6ELxQ = (TY_71oqvXLZrfh2tXKDh9a7wfQ*) incrSeqV2(&(animals_WOmwdmrvpoWR3YQ3F6ELxQ)->Sup, sizeof(AnimalcolonObjectType__3R5gIxchlyf9cN89avNJMC0Q*));
	asgnRef((void**) (&animals_WOmwdmrvpoWR3YQ3F6ELxQ->data[animals_WOmwdmrvpoWR3YQ3F6ELxQ->Sup.len]), T6_);
	++animals_WOmwdmrvpoWR3YQ3F6ELxQ->Sup.len;
	{
		NI i;
		NI L;
		nimln_(3580, "system.nim");
		i = ((NI) 0);
		nimln_(3581, "system.nim");
		L = (animals_WOmwdmrvpoWR3YQ3F6ELxQ ? animals_WOmwdmrvpoWR3YQ3F6ELxQ->Sup.len : 0);
		{
			nimln_(3582, "system.nim");
			while (1) {
				NimStringDesc* T10_;
				NI T11_;
				NimStringDesc* T12_;
				NI TM_DcxC9awfE7BIOm2qDONPzRA_11;
				if (!(i < L)) goto LA9;
				nimln_(3583, "system.nim");
				if ((NU)(i) >= (NU)(animals_WOmwdmrvpoWR3YQ3F6ELxQ->Sup.len)) raiseIndexError();
				asgnRef((void**) (&a_FEhclyGiNCR1AheLevX3Gg), animals_WOmwdmrvpoWR3YQ3F6ELxQ->data[i]);
				nimln_(21, "demo.nim");
				T10_ = (NimStringDesc*)0;
				T10_ = vocalize_xDY1dG89aWHQC9cshsrbuWag(a_FEhclyGiNCR1AheLevX3Gg);
				printf("%s\012", T10_? (T10_)->data:"nil");
				fflush(stdout);
				nimln_(22, "demo.nim");
				T11_ = (NI)0;
				T11_ = ageHumanYrs_SFSQoCKLlDcJzq9bFdgKs6g(a_FEhclyGiNCR1AheLevX3Gg);
				T12_ = (NimStringDesc*)0;
				T12_ = nimIntToStr(T11_);
				printf("%s\012", T12_? (T12_)->data:"nil");
				fflush(stdout);
				nimln_(3584, "system.nim");
				TM_DcxC9awfE7BIOm2qDONPzRA_11 = addInt(i, ((NI) 1));
				i = (NI)(TM_DcxC9awfE7BIOm2qDONPzRA_11);
				nimln_(3585, "system.nim");
				{
					if (!!(((animals_WOmwdmrvpoWR3YQ3F6ELxQ ? animals_WOmwdmrvpoWR3YQ3F6ELxQ->Sup.len : 0) == L))) goto LA15_;
					failedAssertImpl_aDmpBTs9cPuXp0Mp9cfiNeyA(((NimStringDesc*) &TM_DcxC9awfE7BIOm2qDONPzRA_12));
				}
				LA15_: ;
			} LA9: ;
		}
	}
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, demoDatInit000)(void) {
static TNimNode* TM_DcxC9awfE7BIOm2qDONPzRA_6[2];
static TNimNode TM_DcxC9awfE7BIOm2qDONPzRA_0[5];
NTI_3R5gIxchlyf9cN89avNJMC0Q_.size = sizeof(AnimalcolonObjectType__3R5gIxchlyf9cN89avNJMC0Q);
NTI_3R5gIxchlyf9cN89avNJMC0Q_.kind = 17;
NTI_3R5gIxchlyf9cN89avNJMC0Q_.base = (&NTI_13RNkKqUOX1TtorOUlKtqA_);
TM_DcxC9awfE7BIOm2qDONPzRA_6[0] = &TM_DcxC9awfE7BIOm2qDONPzRA_0[1];
TM_DcxC9awfE7BIOm2qDONPzRA_0[1].kind = 1;
TM_DcxC9awfE7BIOm2qDONPzRA_0[1].offset = offsetof(AnimalcolonObjectType__3R5gIxchlyf9cN89avNJMC0Q, name);
TM_DcxC9awfE7BIOm2qDONPzRA_0[1].typ = (&NTI_77mFvmsOLKik79ci2hXkHEg_);
TM_DcxC9awfE7BIOm2qDONPzRA_0[1].name = "name";
TM_DcxC9awfE7BIOm2qDONPzRA_6[1] = &TM_DcxC9awfE7BIOm2qDONPzRA_0[2];
TM_DcxC9awfE7BIOm2qDONPzRA_0[2].kind = 1;
TM_DcxC9awfE7BIOm2qDONPzRA_0[2].offset = offsetof(AnimalcolonObjectType__3R5gIxchlyf9cN89avNJMC0Q, age);
TM_DcxC9awfE7BIOm2qDONPzRA_0[2].typ = (&NTI_rR5Bzr1D5krxoo1NcNyeMA_);
TM_DcxC9awfE7BIOm2qDONPzRA_0[2].name = "age";
TM_DcxC9awfE7BIOm2qDONPzRA_0[0].len = 2; TM_DcxC9awfE7BIOm2qDONPzRA_0[0].kind = 2; TM_DcxC9awfE7BIOm2qDONPzRA_0[0].sons = &TM_DcxC9awfE7BIOm2qDONPzRA_6[0];
NTI_3R5gIxchlyf9cN89avNJMC0Q_.node = &TM_DcxC9awfE7BIOm2qDONPzRA_0[0];
NTI_2HBAi4VkwONS26bKPxQL9cg_.size = sizeof(AnimalcolonObjectType__3R5gIxchlyf9cN89avNJMC0Q*);
NTI_2HBAi4VkwONS26bKPxQL9cg_.kind = 22;
NTI_2HBAi4VkwONS26bKPxQL9cg_.base = (&NTI_3R5gIxchlyf9cN89avNJMC0Q_);
NTI_2HBAi4VkwONS26bKPxQL9cg_.marker = Marker_TY_2HBAi4VkwONS26bKPxQL9cg;
NTI_71oqvXLZrfh2tXKDh9a7wfQ_.size = sizeof(TY_71oqvXLZrfh2tXKDh9a7wfQ*);
NTI_71oqvXLZrfh2tXKDh9a7wfQ_.kind = 24;
NTI_71oqvXLZrfh2tXKDh9a7wfQ_.base = (&NTI_2HBAi4VkwONS26bKPxQL9cg_);
NTI_71oqvXLZrfh2tXKDh9a7wfQ_.marker = Marker_TY_71oqvXLZrfh2tXKDh9a7wfQ;
NTI_t1n1BjYlliS1yZVWu79bAIg_.size = sizeof(DogcolonObjectType__t1n1BjYlliS1yZVWu79bAIg);
NTI_t1n1BjYlliS1yZVWu79bAIg_.kind = 17;
NTI_t1n1BjYlliS1yZVWu79bAIg_.base = (&NTI_3R5gIxchlyf9cN89avNJMC0Q_);
TM_DcxC9awfE7BIOm2qDONPzRA_0[3].len = 0; TM_DcxC9awfE7BIOm2qDONPzRA_0[3].kind = 2;
NTI_t1n1BjYlliS1yZVWu79bAIg_.node = &TM_DcxC9awfE7BIOm2qDONPzRA_0[3];
NTI_10zT9a0aAuyWEtbY59aeSOlA_.size = sizeof(DogcolonObjectType__t1n1BjYlliS1yZVWu79bAIg*);
NTI_10zT9a0aAuyWEtbY59aeSOlA_.kind = 22;
NTI_10zT9a0aAuyWEtbY59aeSOlA_.base = (&NTI_t1n1BjYlliS1yZVWu79bAIg_);
NTI_10zT9a0aAuyWEtbY59aeSOlA_.marker = Marker_TY_10zT9a0aAuyWEtbY59aeSOlA;
NTI_wTxIe3bOYi10GGQorcO2Kg_.size = sizeof(CatcolonObjectType__wTxIe3bOYi10GGQorcO2Kg);
NTI_wTxIe3bOYi10GGQorcO2Kg_.kind = 17;
NTI_wTxIe3bOYi10GGQorcO2Kg_.base = (&NTI_3R5gIxchlyf9cN89avNJMC0Q_);
TM_DcxC9awfE7BIOm2qDONPzRA_0[4].len = 0; TM_DcxC9awfE7BIOm2qDONPzRA_0[4].kind = 2;
NTI_wTxIe3bOYi10GGQorcO2Kg_.node = &TM_DcxC9awfE7BIOm2qDONPzRA_0[4];
NTI_uCB9cFBasVJdXED6LrtWYCA_.size = sizeof(CatcolonObjectType__wTxIe3bOYi10GGQorcO2Kg*);
NTI_uCB9cFBasVJdXED6LrtWYCA_.kind = 22;
NTI_uCB9cFBasVJdXED6LrtWYCA_.base = (&NTI_wTxIe3bOYi10GGQorcO2Kg_);
NTI_uCB9cFBasVJdXED6LrtWYCA_.marker = Marker_TY_uCB9cFBasVJdXED6LrtWYCA;
}

