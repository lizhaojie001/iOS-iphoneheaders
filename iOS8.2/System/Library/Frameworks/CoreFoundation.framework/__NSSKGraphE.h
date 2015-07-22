/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:20 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CoreFoundation/CoreFoundation-Structs.h>
@interface __NSSKGraphE : NSObject {

	edge* _edges;
	vertex* _vertices;
	unsigned _numV;
	unsigned _numE;
	unsigned _currE;
	unsigned _dump;
	unsigned _l_end;

}
-(id)initWithNumberOfVertices:(unsigned)arg1 numberOfEdges:(unsigned)arg2 ;
-(char)addEdgeWithH1:(unsigned)arg1 withH2:(unsigned)arg2 ;
-(unsigned)numOfEdges;
-(edge*)isAcyclic;
-(void)dealloc;
-(char)isEmpty;
-(void)finalize;
@end
