//
// Copyright (c) 2017 Bagel (https://github.com/yagiz/Bagel)
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.

#import "BagelBaseModel.h"
#import "BagelProject.h"
#import "BagelDevice.h"
#import "BagelRequestInfo.h"

@interface BagelRequestPacket : NSObject <BagelBaseModelProtocol>

@property (nonatomic,strong) NSString* packetId;

@property (nonatomic,strong) BagelRequestInfo* requestInfo;
@property (nonatomic,strong) NSData* requestInfoEncrypted;

@property (nonatomic,strong) BagelProject* project;
@property (nonatomic,strong) BagelDevice* device;

@property (nonatomic,strong) NSNumber* isRequestInfoEncrypted;

@property (nonatomic,strong) NSString* sdkVersion;
@property (nonatomic,strong) NSString* bagelVersion;
@property (nonatomic,strong) NSString* ipAddress;

@end

