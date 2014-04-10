//
//  ICMMedia.h
//  InstagramCollageMaker
//
//  Created by  mrhard on 07.04.14.
//  Copyright (c) 2014 Azoft. All rights reserved.
//

#import "ICMRemoteObject.h"

typedef NS_ENUM(NSUInteger, ICMMediaType) {
    ICMMediaTypePhoto,
    ICMMediaTypeVideo,
    ICMMediaTypeUnknown
};

@class ICMImage;

@interface ICMMedia : ICMRemoteObject

@property (nonatomic, copy) NSString *id;
@property (nonatomic) NSInteger likesCount;
@property (nonatomic) ICMMediaType type;
@property (nonatomic, strong) ICMImage *lowResolutionImage;
@property (nonatomic, strong) ICMImage *standartResolutionImage;
@property (nonatomic, strong) ICMImage *thumbnailImage;

@end