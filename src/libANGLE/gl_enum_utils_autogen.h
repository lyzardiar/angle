// GENERATED FILE - DO NOT EDIT.
// Generated by gen_gl_enum_utils.py using data from gl.xml and gl_angle_ext.xml.
//
// Copyright 2019 The ANGLE Project Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//
// gl_enum_utils_autogen.h:
//   mapping of GLenum value to string.

#ifndef LIBANGLE_GL_ENUM_UTILS_AUTOGEN_H_
#define LIBANGLE_GL_ENUM_UTILS_AUTOGEN_H_

#include <string>

#include "common/PackedGLEnums_autogen.h"

namespace gl
{

enum class GLenumGroup
{
    AccumOp,
    AlphaFunction,
    AtomicCounterBufferPName,
    AttribMask,
    AttributeType,
    BindTransformFeedbackTarget,
    BlendEquationModeEXT,
    BlendingFactor,
    BlitFramebufferFilter,
    Boolean,
    Buffer,
    BufferAccessARB,
    BufferAccessMask,
    BufferBitQCOM,
    BufferStorageTarget,
    BufferTargetARB,
    BufferUsageARB,
    CheckFramebufferStatusTarget,
    ClearBufferMask,
    ClientAttribMask,
    ClipControlDepth,
    ClipControlOrigin,
    ClipPlaneName,
    ColorBuffer,
    ColorMaterialFace,
    ColorMaterialParameter,
    ColorPointerType,
    ColorTableParameterPNameSGI,
    ColorTableTarget,
    ColorTableTargetSGI,
    ContextFlagMask,
    ContextProfileMask,
    ConvolutionBorderModeEXT,
    ConvolutionParameterEXT,
    ConvolutionTarget,
    ConvolutionTargetEXT,
    CopyBufferSubDataTarget,
    CullFaceMode,
    DataType,
    DebugSeverity,
    DebugSource,
    DebugType,
    DefaultGroup,
    DepthFunction,
    DrawBufferMode,
    DrawElementsType,
    EnableCap,
    ErrorCode,
    ExternalHandleType,
    FeedBackToken,
    FeedbackType,
    FfdMaskSGIX,
    FfdTargetSGIX,
    FogCoordinatePointerType,
    FogMode,
    FogPName,
    FogParameter,
    FogPointerTypeEXT,
    FogPointerTypeIBM,
    FragmentLightModelParameterSGIX,
    FragmentOpATI,
    FramebufferAttachment,
    FramebufferAttachmentParameterName,
    FramebufferFetchNoncoherent,
    FramebufferParameterName,
    FramebufferStatus,
    FramebufferTarget,
    FrontFaceDirection,
    GetColorTableParameterPNameSGI,
    GetConvolutionParameter,
    GetFramebufferParameter,
    GetHistogramParameterPNameEXT,
    GetMapQuery,
    GetMinmaxParameterPNameEXT,
    GetPName,
    GetPixelMap,
    GetPointervPName,
    GetTextureParameter,
    GraphicsResetStatus,
    HintMode,
    HintTarget,
    HistogramTargetEXT,
    IndexPointerType,
    InterleavedArrayFormat,
    InternalFormat,
    InternalFormatPName,
    LightEnvModeSGIX,
    LightEnvParameterSGIX,
    LightModelColorControl,
    LightModelParameter,
    LightName,
    LightParameter,
    ListMode,
    ListNameType,
    ListParameterName,
    LogicOp,
    MapBufferUsageMask,
    MapQuery,
    MapTarget,
    MapTextureFormatINTEL,
    MaterialFace,
    MaterialParameter,
    MatrixMode,
    MemoryBarrierMask,
    MemoryObjectParameterName,
    MeshMode1,
    MeshMode2,
    MinmaxTargetEXT,
    NormalPointerType,
    ObjectIdentifier,
    OcclusionQueryEventMaskAMD,
    PatchParameterName,
    PathColor,
    PathCoverMode,
    PathElementType,
    PathFillMode,
    PathFontStyle,
    PathFontTarget,
    PathGenMode,
    PathHandleMissingGlyphs,
    PathListMode,
    PathMetricMask,
    PathParameter,
    PathStringFormat,
    PathTransformType,
    PipelineParameterName,
    PixelCopyType,
    PixelFormat,
    PixelMap,
    PixelStoreParameter,
    PixelStoreResampleMode,
    PixelStoreSubsampleRate,
    PixelTexGenMode,
    PixelTexGenParameterNameSGIS,
    PixelTransferParameter,
    PixelType,
    PointParameterNameSGIS,
    PolygonMode,
    PrecisionType,
    PrimitiveType,
    ProgramInterface,
    ProgramInterfacePName,
    ProgramParameterPName,
    ProgramPropertyARB,
    ProgramStagePName,
    QueryObjectParameterName,
    QueryParameterName,
    QueryTarget,
    ReadBufferMode,
    RenderbufferParameterName,
    RenderbufferTarget,
    RenderingMode,
    SamplePatternSGIS,
    SamplerParameterName,
    SemaphoreParameterName,
    SeparableTargetEXT,
    ShaderParameterName,
    ShaderType,
    ShadingModel,
    StencilFaceDirection,
    StencilFunction,
    StencilOp,
    StringName,
    SubroutineParameterName,
    SyncCondition,
    SyncObjectMask,
    SyncParameterName,
    SyncStatus,
    TexCoordPointerType,
    TextureCoordName,
    TextureEnvMode,
    TextureEnvParameter,
    TextureEnvTarget,
    TextureFilterFuncSGIS,
    TextureGenMode,
    TextureGenParameter,
    TextureLayout,
    TextureMagFilter,
    TextureMinFilter,
    TextureParameterName,
    TextureStorageMaskAMD,
    TextureTarget,
    TextureUnit,
    TextureWrapMode,
    TransformFeedbackPName,
    TypeEnum,
    UniformBlockPName,
    UniformPName,
    UseProgramStageMask,
    VertexArrayPName,
    VertexAttribEnum,
    VertexAttribPointerType,
    VertexAttribType,
    VertexBufferObjectParameter,
    VertexBufferObjectUsage,
    VertexPointerType,
    VertexProvokingMode
};

const char *GLbooleanToString(unsigned int value);

const char *GLenumToString(GLenumGroup enumGroup, unsigned int value);

std::string GLbitfieldToString(GLenumGroup enumGroup, unsigned int value);

}  // namespace gl

#endif  // LIBANGLE_GL_ENUM_UTILS_AUTOGEN_H_