/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:42 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Metal/MTLToolsLibrary.h>

@class MTLCompileOptions;

@interface MTLDebugLibrary : MTLToolsLibrary {

	unsigned _type;
	id _code;
	MTLCompileOptions* _compileOptions;

}

@property (assign,nonatomic) unsigned type;                                 //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) id code;                                         //@synthesize code=_code - In the implementation block
@property (nonatomic,copy) MTLCompileOptions * compileOptions;              //@synthesize compileOptions=_compileOptions - In the implementation block
-(id)newFunctionWithName:(id)arg1 ;
-(id)initWithLibrary:(id)arg1 parent:(id)arg2 type:(unsigned)arg3 code:(id)arg4 options:(id)arg5 ;
-(MTLCompileOptions *)compileOptions;
-(void)setCompileOptions:(MTLCompileOptions *)arg1 ;
-(void)setType:(unsigned)arg1 ;
-(unsigned)type;
-(id)code;
-(void)setCode:(id)arg1 ;
@end

