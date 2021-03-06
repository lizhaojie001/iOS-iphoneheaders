/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:57 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class ESDContainer;

@interface ESDObject : NSObject {

	EshObject* mEshObject;
	ESDContainer* mParent;
	BOOL mIsChart;

}
-(id)pbInitWithType:(unsigned short)arg1 version:(unsigned short)arg2 state:(id)arg3 ;
-(id)ebInitWithType:(unsigned short)arg1 version:(unsigned short)arg2 state:(id)arg3 ;
-(EshGroup*)eshGroup;
-(EshShape*)eshShape;
-(int)shapeID;
-(void)dealloc;
-(id)initWithType:(unsigned short)arg1 ;
-(EshObject*)eshObject;
-(BOOL)isChart;
-(id)initWithEshObject:(EshObject*)arg1 ;
-(id)initFromReader:(OcReader*)arg1 type:(unsigned short)arg2 version:(unsigned short)arg3 ;
-(void)writeToWriter:(OcWriter*)arg1 ;
-(void)setChart:(BOOL)arg1 ;
-(id)parent;
@end

