/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:07 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface TSCH3DAreaGenerator : NSObject {

	vector<glm::detail::tvec3<float>, std::__1::allocator<glm::detail::tvec3<float> > >* mTop;
	vector<glm::detail::tvec3<float>, std::__1::allocator<glm::detail::tvec3<float> > >* mBottom;
	tvec2<float> mYLimits;
	float mZeroValue;

}
+(id)generatorWithYLimits:(tvec2<float>)arg1 zeroValue:(float)arg2 ;
-(id)createGeometry:(const vector<float, std::__1::allocator<float> >*)arg1 ;
-(id)initWithYLimits:(tvec2<float>)arg1 zeroValue:(float)arg2 ;
-(float)clampedZero;
-(void)clipLine:(const vector<glm::detail::tvec3<float>, std::__1::allocator<glm::detail::tvec3<float> > >*)arg1 into:(vector<glm::detail::tvec3<float>, std::__1::allocator<glm::detail::tvec3<float> > >*)arg2 ;
-(void)dealloc;
-(void)addRow:(const vector<float, std::__1::allocator<float> >*)arg1 ;
@end

