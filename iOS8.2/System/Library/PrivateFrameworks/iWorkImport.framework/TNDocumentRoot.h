/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:23 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSADocumentRoot.h>
#import <iWorkImport/TSTResolverContainerNameProvider.h>

@class TNTheme, TSSStylesheet, NSMutableArray, TSKTreeNode, TNUIState, NSString, NSArray;

@interface TNDocumentRoot : TSADocumentRoot <TSTResolverContainerNameProvider> {

	TNTheme* mTheme;
	TSSStylesheet* mStylesheet;
	NSMutableArray* mSheets;
	TSKTreeNode* mSidebarOrder;
	unsigned mSheetNameCounter;
	TNUIState* mUIState;
	char mDocumentWasPreparedFromTemplate;
	char _printingAllSheets;
	NSString* _printerID;
	NSString* _paperID;
	CGSize _pageSize;

}

@property (nonatomic,readonly) TSSStylesheet * stylesheet; 
@property (nonatomic,retain) TNTheme * theme; 
@property (nonatomic,readonly) NSArray * sheets; 
@property (nonatomic,copy) NSString * printerID;                                             //@synthesize printerID=_printerID - In the implementation block
@property (nonatomic,copy) NSString * paperID;                                               //@synthesize paperID=_paperID - In the implementation block
@property (assign,nonatomic) CGSize pageSize;                                                //@synthesize pageSize=_pageSize - In the implementation block
@property (nonatomic,readonly) unsigned tableCount; 
@property (nonatomic,retain,readonly) TSKTreeNode * sidebarOrder; 
@property (nonatomic,retain) TNUIState * uiState; 
@property (assign,getter=isPrintingAllSheets,nonatomic) char printingAllSheets;              //@synthesize printingAllSheets=_printingAllSheets - In the implementation block
@property (nonatomic,copy) NSArray * selectedQuickCalcFunctions; 
@property (assign,nonatomic) char removedAllQuickCalcFunctions; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGSize)previewImageMaxSizeForType:(unsigned)arg1 ;
+(CGSize)previewImageSizeForType:(unsigned)arg1 ;
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(id)resolverMatchingName:(id)arg1 ;
-(void)documentDidLoad;
-(char)isMultiPageForQuickLook;
-(id)previewImageForSize:(CGSize)arg1 ;
-(void)prepareNewDocumentWithTemplateBundle:(id)arg1 ;
-(void)initializeForImport;
-(char)shouldAllowDrawableInGroups:(id)arg1 forImport:(char)arg2 ;
-(char)shouldShowComments;
-(void)setThemeForTemplateImport:(id)arg1 ;
-(id)resolverContainerNameForResolver:(id)arg1 ;
-(id)nameForResolverContainer:(id)arg1 ;
-(id)resolverContainerForName:(id)arg1 caseSensitive:(char)arg2 ;
-(id)resolverContainerNamesMatchingPrefix:(id)arg1 ;
-(id)resolverMatchingName:(id)arg1 contextResolver:(id)arg2 ;
-(id)resolverMatchingName:(id)arg1 contextContainerName:(id)arg2 ;
-(id)resolversMatchingPrefix:(id)arg1 ;
-(int)verticalAlignmentForTextStorage:(id)arg1 ;
-(int)naturalAlignmentAtCharIndex:(unsigned)arg1 inTextStorage:(id)arg2 ;
-(TNUIState *)uiState;
-(void)setUiState:(TNUIState *)arg1 ;
-(void)p_buildSidebarOrder;
-(void)setPaperID:(NSString *)arg1 ;
-(unsigned)p_tableCountForSheet:(id)arg1 ;
-(void)incrementSheetNameCounter;
-(void)insertSheet:(id)arg1 sheetIndex:(unsigned)arg2 context:(id)arg3 ;
-(void)p_removeSidebarNodeForSheet:(id)arg1 ;
-(id)p_untitledSheetName;
-(void)p_addSidebarNodeForSheet:(id)arg1 ;
-(char)validName:(id)arg1 forRenamingSheet:(id)arg2 ;
-(NSArray *)sheets;
-(id)p_resolverContainerForResolver:(id)arg1 ;
-(void)setSelectedQuickCalcFunctions:(NSArray *)arg1 ;
-(NSArray *)selectedQuickCalcFunctions;
-(void)setRemovedAllQuickCalcFunctions:(char)arg1 ;
-(char)removedAllQuickCalcFunctions;
-(NSString *)paperID;
-(id)p_chartsWantingDeferredUpgrade;
-(void)performDeferredUpgradeImportOperationsOnNewThreadForCharts:(id)arg1 ;
-(void)performDeferredUpgradeImportOperationsRequiringCalcEngine;
-(id)p_previewImageWithImageSize:(CGSize)arg1 ;
-(CGRect)p_contentFrameToCaptureForSheet:(id)arg1 ;
-(float)p_imageBorderForSize:(CGSize)arg1 ;
-(CGSize)p_adjustCapturedContentSize:(CGSize)arg1 toAspectRatio:(CGSize)arg2 ;
-(void)initializeHardCodedBlankDocument;
-(void)setImportedPaperID:(id)arg1 printerID:(id)arg2 ;
-(unsigned)tableCount;
-(void)removeAllSheets;
-(void)addSheet:(id)arg1 dolcContext:(id)arg2 ;
-(void)removeSheet:(id)arg1 ;
-(void)moveSheet:(id)arg1 toIndex:(unsigned)arg2 ;
-(char)validNameForNewSheet:(id)arg1 ;
-(void)setSidebarChildren:(id)arg1 forSheet:(id)arg2 ;
-(void)sheet:(id)arg1 insertedDrawable:(id)arg2 ;
-(void)sheet:(id)arg1 removedDrawable:(id)arg2 ;
-(TSKTreeNode *)sidebarOrder;
-(char)isPrintingAllSheets;
-(void)setPrintingAllSheets:(char)arg1 ;
-(void)dealloc;
-(id)initWithContext:(id)arg1 ;
-(void)setPrinterID:(NSString *)arg1 ;
-(NSString *)printerID;
-(unsigned)applicationType;
-(void)setPageSize:(CGSize)arg1 ;
-(id)childEnumerator;
-(TNTheme *)theme;
-(CGSize)pageSize;
-(id)activeSheet;
-(void)setTheme:(TNTheme *)arg1 ;
-(TSSStylesheet *)stylesheet;
@end
