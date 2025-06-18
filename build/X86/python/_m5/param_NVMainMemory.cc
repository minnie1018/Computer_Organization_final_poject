#include "pybind11/pybind11.h"
#include "pybind11/stl.h"

#include "params/NVMainMemory.hh"
#include "python/pybind11/core.hh"
#include "sim/init.hh"
#include "sim/sim_object.hh"

#include "Simulators/gem5/nvmain_mem.hh"

#include "base/types.hh"
#include "base/types.hh"
#include <string>
#include <string>
#include <string>
namespace py = pybind11;

static void
module_init(py::module &m_internal)
{
    py::module m = m_internal.def_submodule("param_NVMainMemory");
    py::class_<NVMainMemoryParams, AbstractMemoryParams, std::unique_ptr<NVMainMemoryParams, py::nodelete>>(m, "NVMainMemoryParams")
        .def(py::init<>())
        .def("create", &NVMainMemoryParams::create)
        .def_readwrite("NVMainWarmUp", &NVMainMemoryParams::NVMainWarmUp)
        .def_readwrite("atomic_latency", &NVMainMemoryParams::atomic_latency)
        .def_readwrite("atomic_mode", &NVMainMemoryParams::atomic_mode)
        .def_readwrite("atomic_variance", &NVMainMemoryParams::atomic_variance)
        .def_readwrite("config", &NVMainMemoryParams::config)
        .def_readwrite("configparams", &NVMainMemoryParams::configparams)
        .def_readwrite("configvalues", &NVMainMemoryParams::configvalues)
        .def_readwrite("port_port_connection_count", &NVMainMemoryParams::port_port_connection_count)
        ;

    py::class_<NVMainMemory, AbstractMemory, std::unique_ptr<NVMainMemory, py::nodelete>>(m, "NVMainMemory")
        ;

}

static EmbeddedPyBind embed_obj("NVMainMemory", module_init, "AbstractMemory");
