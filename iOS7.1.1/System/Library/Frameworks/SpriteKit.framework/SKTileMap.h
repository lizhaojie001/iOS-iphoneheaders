/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:45 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <SpriteKit/SKNode.h>
#import <GeoServices/NSXMLParserDelegate.h>

@class NSXMLParser, NSString, NSMutableArray;

@interface SKTileMap : SKNode <NSXMLParserDelegate> {

	bool _loading;
	bool _loaded;
	bool _skipSprites;
	bool _isometric;
	NSXMLParser* _parser;
	int _mapWidth;
	int _mapHeight;
	int _mapTileWidth;
	int _mapTileHeight;
	int _firstGid;
	int _tileWidth;
	int _tileHeight;
	int _spacing;
	int _margin;
	NSString* _imgName;
	NSString* _tilesetName;
	int _imgWidth;
	int _imgHeight;
	int _tileIndex;
	NSString* _layerName;
	int _layerWidth;
	int _layerHeight;
	NSMutableArray* _layerTiles;
	NSString* _mapName;

}

@property (nonatomic,readonly) CGSize tileSize; 
@property (nonatomic,readonly) CGSize mapSize; 
+(id)tileMapWithName:(id)arg1 ;
-(void)parser:(id)arg1 parseErrorOccurred:(id)arg2 ;
-(void)parser:(id)arg1 foundCharacters:(id)arg2 ;
-(void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 ;
-(void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5 ;
-(void)parserDidEndDocument:(id)arg1 ;
-(void)parserDidStartDocument:(id)arg1 ;
-(void)loadMap;
-(id)textureForGid:(unsigned)arg1 ;
-(id)tileAtGridLocationX:(unsigned)arg1 y:(unsigned)arg2 ;
-(CGSize)mapSize;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(CGSize)tileSize;
-(void).cxx_destruct;
@end
