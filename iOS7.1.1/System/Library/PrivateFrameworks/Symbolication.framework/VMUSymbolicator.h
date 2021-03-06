/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:29 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Symbolication/Symbolication-Structs.h>
@class NSMutableArray, NSArray, NSString, VMUMachTaskContainer;

@interface VMUSymbolicator : NSObject {

	NSMutableArray* _symbolOwners;
	NSArray* _symbolOwnerAddressRanges;
	NSString* _path;
	VMUMachTaskContainer* _machTaskContainer;
	bool _isProtected;

}
+(bool)isIgnoreFunctionSymbols;
+(id)symbolicatorWithHeaders:(id)arg1 allowLazySymbolOwners:(bool)arg2 path:(id)arg3 machTaskContainer:(id)arg4 ;
+(id)symbolicatorWithSymbolOwners:(id)arg1 path:(id)arg2 machTaskContainer:(id)arg3 ;
+(id)convertHeaderToSymbolOwner:(id)arg1 allowLazySymbolOwners:(bool)arg2 ;
+(id)symbolicatorForSignature:(id)arg1 dsymSearchPaths:(id)arg2 useMds:(bool)arg3 ;
+(void)ignoreFunctionSymbols:(bool)arg1 ;
+(id)symbolicatorForMachTaskContainer:(id)arg1 ;
+(id)symbolicatorForPath:(id)arg1 architecture:(id)arg2 ;
+(id)symbolicatorsForPath:(id)arg1 ;
+(id)symbolicatorForTask:(unsigned)arg1 ;
+(id)symbolicatorForPid:(int)arg1 ;
+(id)symbolicatorForSignature:(id)arg1 ;
-(id)programTextForAddressRange:(VMURange)arg1 ;
-(id)initWithSymbolOwners:(id)arg1 path:(id)arg2 machTaskContainer:(id)arg3 ;
-(id)programTextForAddress:(unsigned long long)arg1 ;
-(bool)containsAddress:(unsigned long long)arg1 ;
-(void)dealloc;
-(id)description;
-(id)path;
-(id)symbols;
-(int)pid;
-(id)signature;
-(id)regions;
-(id)architecture;
-(id)symbolsForMangledName:(id)arg1 ;
-(id)sourceInfosInAddressRange:(VMURange)arg1 ;
-(bool)isProtected;
-(id)sourceInfoForAddress:(unsigned long long)arg1 ;
-(id)sourceInfos;
-(id)symbolOwners;
-(void)forceFullSymbolExtraction;
-(void)replaceSymbolOwner:(id)arg1 withSymbolOwner:(id)arg2 ;
-(id)regionForAddress:(unsigned long long)arg1 ;
-(id)faultLazySymbolOwnerAtIndex:(long long)arg1 ;
-(id)regionsForName:(id)arg1 ;
-(id)symbolForAddress:(unsigned long long)arg1 ;
-(id)symbolsForName:(id)arg1 ;
-(id)symbolOwnersForName:(id)arg1 ;
-(id)symbolsInAddressRange:(VMURange)arg1 ;
-(bool)addSymbolRichFile:(id)arg1 ;
-(id)regionsInAddressRange:(VMURange)arg1 ;
-(id)symbolOwnerForAddress:(unsigned long long)arg1 ;
-(id)symbolOwnersInAddressRange:(VMURange)arg1 ;
-(id)symbolOwnerForName:(id)arg1 ;
-(id)symbolOwnersWithFlags:(unsigned)arg1 ;
-(id)symbolOwnerForPath:(id)arg1 ;
@end

