//
//  BackendCommunicator.h
//  Treaux
//
//  Created by Johann Kerr on 5/11/15.
//  Copyright (c) 2015 Johann Kerr. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AFNetworking.h>
#import <AWSS3.h>
#import "User.h"
#import "Photo.h"

#define BASE_URL @"http://treaux.herokuapp.com/"

@class User;
@class Photo;


@interface BackendCommunicator : NSObject
//Singleton
+ (BackendCommunicator *)backend;
//Users


//Images


@end
