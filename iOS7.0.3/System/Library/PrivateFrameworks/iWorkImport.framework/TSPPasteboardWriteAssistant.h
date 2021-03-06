/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:09:17 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/TSPPasteboardWriting.h>
#import <iWorkImport/TSPProxyObjectManager.h>

@class TSPObjectContext, TSPPasteboardObject, NSMutableDictionary, NSMutableOrderedSet, TSURetainedPointerKeyDictionary, NSHashTable, TSPPasteboard, TSPPasteboardNativeDataProvider, NSDictionary;

@interface TSPPasteboardWriteAssistant : NSObject <TSPPasteboardWriting, TSPProxyObjectManager> {

	TSPObjectContext* _pasteboardContext;
	TSPPasteboardObject* _pasteboardObject;
	NSMutableDictionary* _dataProviderMap;
	NSMutableOrderedSet* _dataProviderTypes;
	BOOL _shouldRefuseAdditionalDataProviders;
	TSURetainedPointerKeyDictionary* _proxyObjectMap;
	NSHashTable* _delayedObjects;
	TSPPasteboard* _nativeDataPasteboard;
	TSPPasteboardNativeDataProvider* _nativeDataProvider;
	long _writeNativeDataToPasteboardOnceToken;
	long _nativeDataOnceToken;
	BOOL _didAttemptToSerializeNativeData;
	NSDictionary* _contentDescription;

}

@property (nonatomic,readonly) TSPObjectContext * pasteboardContext;                //@synthesize pasteboardContext=_pasteboardContext - In the implementation block
@property (nonatomic,readonly) TSPPasteboardObject * pasteboardObject;              //@synthesize pasteboardObject=_pasteboardObject - In the implementation block
@property (nonatomic,copy) NSDictionary * contentDescription;                       //@synthesize contentDescription=_contentDescription - In the implementation block
-(void)loadNativeData;
-(id)pasteboardContext;
-(id)pasteboardObject;
-(id)writableTypesForPasteboard:(id)arg1 ;
-(id)pasteboardPropertyListForType:(id)arg1 ;
-(id)proxyForReferencedObject:(id)arg1 ;
-(void)delayArchivingOfObject:(id)arg1 ;
-(void)waitForNativeDataIfNeeded;
-(void)writeNativeDataToPasteboard:(id)arg1 ;
-(void)setDataProvider:(id)arg1 forTypes:(id)arg2 ;
-(void)setProxy:(id)arg1 forReferencedObject:(id)arg2 ;
-(id)initWithContext:(id)arg1 ;
-(void)setContentDescription:(id)arg1 ;
-(id)contentDescription;
-(void).cxx_destruct;
@end

