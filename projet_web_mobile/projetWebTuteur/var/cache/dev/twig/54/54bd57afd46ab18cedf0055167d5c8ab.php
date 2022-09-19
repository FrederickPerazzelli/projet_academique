<?php

use Twig\Environment;
use Twig\Error\LoaderError;
use Twig\Error\RuntimeError;
use Twig\Extension\SandboxExtension;
use Twig\Markup;
use Twig\Sandbox\SecurityError;
use Twig\Sandbox\SecurityNotAllowedTagError;
use Twig\Sandbox\SecurityNotAllowedFilterError;
use Twig\Sandbox\SecurityNotAllowedFunctionError;
use Twig\Source;
use Twig\Template;

/* user/index.html.twig */
class __TwigTemplate_2a1ed8779b9ac6932007355d82a0da53 extends Template
{
    private $source;
    private $macros = [];

    public function __construct(Environment $env)
    {
        parent::__construct($env);

        $this->source = $this->getSourceContext();

        $this->blocks = [
            'header' => [$this, 'block_header'],
            'title' => [$this, 'block_title'],
            'body' => [$this, 'block_body'],
        ];
    }

    protected function doGetParent(array $context)
    {
        // line 17
        return "base.html.twig";
    }

    protected function doDisplay(array $context, array $blocks = [])
    {
        $macros = $this->macros;
        $__internal_5a27a8ba21ca79b61932376b2fa922d2 = $this->extensions["Symfony\\Bundle\\WebProfilerBundle\\Twig\\WebProfilerExtension"];
        $__internal_5a27a8ba21ca79b61932376b2fa922d2->enter($__internal_5a27a8ba21ca79b61932376b2fa922d2_prof = new \Twig\Profiler\Profile($this->getTemplateName(), "template", "user/index.html.twig"));

        $__internal_6f47bbe9983af81f1e7450e9a3e3768f = $this->extensions["Symfony\\Bridge\\Twig\\Extension\\ProfilerExtension"];
        $__internal_6f47bbe9983af81f1e7450e9a3e3768f->enter($__internal_6f47bbe9983af81f1e7450e9a3e3768f_prof = new \Twig\Profiler\Profile($this->getTemplateName(), "template", "user/index.html.twig"));

        $this->parent = $this->loadTemplate("base.html.twig", "user/index.html.twig", 17);
        $this->parent->display($context, array_merge($this->blocks, $blocks));
        
        $__internal_5a27a8ba21ca79b61932376b2fa922d2->leave($__internal_5a27a8ba21ca79b61932376b2fa922d2_prof);

        
        $__internal_6f47bbe9983af81f1e7450e9a3e3768f->leave($__internal_6f47bbe9983af81f1e7450e9a3e3768f_prof);

    }

    // line 1
    public function block_header($context, array $blocks = [])
    {
        $macros = $this->macros;
        $__internal_5a27a8ba21ca79b61932376b2fa922d2 = $this->extensions["Symfony\\Bundle\\WebProfilerBundle\\Twig\\WebProfilerExtension"];
        $__internal_5a27a8ba21ca79b61932376b2fa922d2->enter($__internal_5a27a8ba21ca79b61932376b2fa922d2_prof = new \Twig\Profiler\Profile($this->getTemplateName(), "block", "header"));

        $__internal_6f47bbe9983af81f1e7450e9a3e3768f = $this->extensions["Symfony\\Bridge\\Twig\\Extension\\ProfilerExtension"];
        $__internal_6f47bbe9983af81f1e7450e9a3e3768f->enter($__internal_6f47bbe9983af81f1e7450e9a3e3768f_prof = new \Twig\Profiler\Profile($this->getTemplateName(), "block", "header"));

        // line 2
        echo "<!--****************************************
 Fichier : index.html.twig
 Auteur : Jean-Nyckolas Roy
 Fonctionnalité : A2
 Date : 2022-04-21
 Vérification :
 Date Nom Approuvé
 =========================================================
 Historique de modifications :
 2022-04-21 - Jean-Nyckolas - Affichage de base et ajout des filtres
 2022-04-26 - Jean-Nyckolas - Ajout des options de gestion des utilisateurs
 =========================================================
****************************************-->
";
        
        $__internal_6f47bbe9983af81f1e7450e9a3e3768f->leave($__internal_6f47bbe9983af81f1e7450e9a3e3768f_prof);

        
        $__internal_5a27a8ba21ca79b61932376b2fa922d2->leave($__internal_5a27a8ba21ca79b61932376b2fa922d2_prof);

    }

    // line 19
    public function block_title($context, array $blocks = [])
    {
        $macros = $this->macros;
        $__internal_5a27a8ba21ca79b61932376b2fa922d2 = $this->extensions["Symfony\\Bundle\\WebProfilerBundle\\Twig\\WebProfilerExtension"];
        $__internal_5a27a8ba21ca79b61932376b2fa922d2->enter($__internal_5a27a8ba21ca79b61932376b2fa922d2_prof = new \Twig\Profiler\Profile($this->getTemplateName(), "block", "title"));

        $__internal_6f47bbe9983af81f1e7450e9a3e3768f = $this->extensions["Symfony\\Bridge\\Twig\\Extension\\ProfilerExtension"];
        $__internal_6f47bbe9983af81f1e7450e9a3e3768f->enter($__internal_6f47bbe9983af81f1e7450e9a3e3768f_prof = new \Twig\Profiler\Profile($this->getTemplateName(), "block", "title"));

        echo "Gestion utilisateurs";
        
        $__internal_6f47bbe9983af81f1e7450e9a3e3768f->leave($__internal_6f47bbe9983af81f1e7450e9a3e3768f_prof);

        
        $__internal_5a27a8ba21ca79b61932376b2fa922d2->leave($__internal_5a27a8ba21ca79b61932376b2fa922d2_prof);

    }

    // line 21
    public function block_body($context, array $blocks = [])
    {
        $macros = $this->macros;
        $__internal_5a27a8ba21ca79b61932376b2fa922d2 = $this->extensions["Symfony\\Bundle\\WebProfilerBundle\\Twig\\WebProfilerExtension"];
        $__internal_5a27a8ba21ca79b61932376b2fa922d2->enter($__internal_5a27a8ba21ca79b61932376b2fa922d2_prof = new \Twig\Profiler\Profile($this->getTemplateName(), "block", "body"));

        $__internal_6f47bbe9983af81f1e7450e9a3e3768f = $this->extensions["Symfony\\Bridge\\Twig\\Extension\\ProfilerExtension"];
        $__internal_6f47bbe9983af81f1e7450e9a3e3768f->enter($__internal_6f47bbe9983af81f1e7450e9a3e3768f_prof = new \Twig\Profiler\Profile($this->getTemplateName(), "block", "body"));

        // line 22
        echo "    <!--===================== CSS =====================-->
    <style>
        table
        {
            border-collapse: collapse;
        }
        button 
        {
            margin: 5px 0px;
        }
        a
        {
            text-decoration: none;
        }
        tr 
        {
            border: solid thin;
        }
        th 
        {
            height: 30pt;
            background-color: #e34958;
            color: white;
        }
        th, td
        {
            text-align: center;
        }
        table tr:not([hidden]):nth-child(odd) td
        {
            background-color: #d6d6d6;
        }
        img 
        {
            object-fit: cover;
            border-radius: 50%;
            height: 50pt;
            width: 50pt;
            border: solid 2px;
        }
        .arrow 
        {
            border: solid black;
            border-width: 0 3px 3px 0;
            display: inline-block;
            padding: 3px;
        }

        .up 
        {
            transform: rotate(-135deg);
            -webkit-transform: rotate(-135deg);
        }

        .down 
        {
            transform: rotate(45deg);
            -webkit-transform: rotate(45deg);
        }

        .flex-row 
        {
            display: flex;
            flex-direction: row;
        }

        .flex-column 
        {
            display: flex;
            flex-direction: column;
        }

        #searchFilter {
            width: 100pt;
        }

        #userOptions {
            margin-left: 15pt;
        }
    </style>

    <!--===================== HTML =====================-->
    ";
        // line 104
        $this->loadTemplate("header.html.twig", "user/index.html.twig", 104)->display($context);
        // line 105
        echo "    <h1>Utilisateurs</h1>
    <div class=\"flex-row\">
        <button id=\"filterButton\" class=\"btn btn-light\">Filtrer <i class=\"arrow down\" id=\"filterArrow\"></i></button>
        <div id=\"userOptions\" hidden>
            <button id=\"activateUsers\" class=\"btn btn-success\">Activer</button>
            <button id=\"deactivateUsers\" class=\"btn btn-danger\">Désactiver</button>
        </div>
    </div>
    <div id=\"filters\" hidden>
        <div class=\"flex-row\">
            <div class=\"flex-column\">
                <b>Rôle</b>
                ";
        // line 117
        $context['_parent'] = $context;
        $context['_seq'] = twig_ensure_traversable((isset($context["roles"]) || array_key_exists("roles", $context) ? $context["roles"] : (function () { throw new RuntimeError('Variable "roles" does not exist.', 117, $this->source); })()));
        foreach ($context['_seq'] as $context["_key"] => $context["role"]) {
            // line 118
            echo "                    <div>
                        <input class=\"roleFilter\" type=\"checkbox\" id=\"roleFilter";
            // line 119
            echo twig_escape_filter($this->env, twig_get_attribute($this->env, $this->source, $context["role"], "id", [], "any", false, false, false, 119), "html", null, true);
            echo "\" name=\"roleFilter";
            echo twig_escape_filter($this->env, twig_get_attribute($this->env, $this->source, $context["role"], "id", [], "any", false, false, false, 119), "html", null, true);
            echo "\" value=\"";
            echo twig_escape_filter($this->env, twig_get_attribute($this->env, $this->source, $context["role"], "name", [], "any", false, false, false, 119), "html", null, true);
            echo "\"/>
                        <label for=\"roleFilter";
            // line 120
            echo twig_escape_filter($this->env, twig_get_attribute($this->env, $this->source, $context["role"], "id", [], "any", false, false, false, 120), "html", null, true);
            echo "\">";
            echo twig_escape_filter($this->env, twig_get_attribute($this->env, $this->source, $context["role"], "name", [], "any", false, false, false, 120), "html", null, true);
            echo "</label>
                    </div>
                ";
        }
        $_parent = $context['_parent'];
        unset($context['_seq'], $context['_iterated'], $context['_key'], $context['role'], $context['_parent'], $context['loop']);
        $context = array_intersect_key($context, $_parent) + $_parent;
        // line 123
        echo "            </div>
            <div class=\"flex-column\">
                <b>Actif</b>
                <div>
                    <input class=\"activeFilter\" type=\"checkbox\" id=\"activeFilterTrue\" name=\"activeFilterTrue\" value=\"true\"/>
                    <label for=\"activeFilterTrue\">Actif</label>
                </div>
                <div>
                    <input class=\"activeFilter\" type=\"checkbox\" id=\"activeFilterFalse\" name=\"activeFilterFalse\" value=\"false\"/>
                    <label for=\"activeFilterFalse\">Inactif</label>
                </div>
            </div>
            <div class=\"flex-column\">
                <b>Rechercher</b>
                <input type=\"text\" id=\"searchFilter\" name=\"searchFilter\"/>
            </div>
        </div>
        <button id=\"applyButton\" class=\"btn btn-primary\">Appliquer</button>
    </div>
    <table class=\"displayTable col-12 auto\">
        <tr>
            <th class=\"col-1\"></th>
            <th class=\"col-1\">Image</th>
            <th class=\"col-3\">Nom</th>
            <th class=\"col-2\">Courriel</th>
            <th class=\"col-2\">Role</th>
            <th class=\"col-2\">Date création</th>
            <th class=\"col-1\">Actif</th>
        </tr>
        ";
        // line 152
        $context['_parent'] = $context;
        $context['_seq'] = twig_ensure_traversable((isset($context["userList"]) || array_key_exists("userList", $context) ? $context["userList"] : (function () { throw new RuntimeError('Variable "userList" does not exist.', 152, $this->source); })()));
        foreach ($context['_seq'] as $context["_key"] => $context["user"]) {
            // line 153
            echo "            <tr class=\"tableRow\">
                <td><input class=\"selectUser\" type=\"checkbox\" id=\"select";
            // line 154
            echo twig_escape_filter($this->env, twig_get_attribute($this->env, $this->source, $context["user"], "id", [], "any", false, false, false, 154), "html", null, true);
            echo "\" name=\"select";
            echo twig_escape_filter($this->env, twig_get_attribute($this->env, $this->source, $context["user"], "id", [], "any", false, false, false, 154), "html", null, true);
            echo "\" value=\"";
            echo twig_escape_filter($this->env, twig_get_attribute($this->env, $this->source, $context["user"], "id", [], "any", false, false, false, 154), "html", null, true);
            echo "\"></td>
                <td>
                    ";
            // line 156
            if (twig_get_attribute($this->env, $this->source, $context["user"], "image", [], "any", false, false, false, 156)) {
                // line 157
                echo "                        <img alt=\"Image profil\" src=\"data:image/png;base64,";
                echo twig_escape_filter($this->env, twig_get_attribute($this->env, $this->source, $context["user"], "image", [], "any", false, false, false, 157), "html", null, true);
                echo "\"></img>
                    ";
            } else {
                // line 159
                echo "                        <img/>
                    ";
            }
            // line 161
            echo "                </td>
                <td><a href=\"/profile/";
            // line 162
            echo twig_escape_filter($this->env, twig_get_attribute($this->env, $this->source, $context["user"], "id", [], "any", false, false, false, 162), "html", null, true);
            echo "\" class=\"name\">";
            echo twig_escape_filter($this->env, twig_get_attribute($this->env, $this->source, $context["user"], "firstName", [], "any", false, false, false, 162), "html", null, true);
            echo " ";
            echo twig_escape_filter($this->env, twig_get_attribute($this->env, $this->source, $context["user"], "lastName", [], "any", false, false, false, 162), "html", null, true);
            echo "</a></td>
                <td class=\"email\">";
            // line 163
            echo twig_escape_filter($this->env, twig_get_attribute($this->env, $this->source, $context["user"], "email", [], "any", false, false, false, 163), "html", null, true);
            echo "</td>
                <td class=\"role\">";
            // line 164
            echo twig_escape_filter($this->env, twig_get_attribute($this->env, $this->source, twig_get_attribute($this->env, $this->source, $context["user"], "role", [], "any", false, false, false, 164), "name", [], "any", false, false, false, 164), "html", null, true);
            echo "</td>
                <td class=\"date\">";
            // line 165
            echo twig_escape_filter($this->env, twig_date_format_filter($this->env, twig_get_attribute($this->env, $this->source, $context["user"], "registeredDate", [], "any", false, false, false, 165), "Y-m-d"), "html", null, true);
            echo "</td>
                <td>
                    ";
            // line 167
            if (twig_get_attribute($this->env, $this->source, $context["user"], "validAccount", [], "any", false, false, false, 167)) {
                // line 168
                echo "                        <input class=\"active\" type=\"checkbox\" disabled checked>
                    ";
            } else {
                // line 170
                echo "                        <input class=\"active\" type=\"checkbox\" disabled>
                    ";
            }
            // line 172
            echo "                </td>
            </tr>
        ";
        }
        $_parent = $context['_parent'];
        unset($context['_seq'], $context['_iterated'], $context['_key'], $context['user'], $context['_parent'], $context['loop']);
        $context = array_intersect_key($context, $_parent) + $_parent;
        // line 175
        echo "    </table>
    ";
        // line 176
        $this->loadTemplate("footer.html.twig", "user/index.html.twig", 176)->display($context);
        // line 177
        echo "    <!--===================== JavaScript =====================-->
    <script async defer>
        let filterButton = document.getElementById('filterButton');
        filterButton.addEventListener('click', function()
        {
            let filterDiv = document.getElementById('filters');
            let arrow = document.getElementById('filterArrow');

            arrow.classList.toggle('up');
            arrow.classList.toggle('down');
            filterDiv.toggleAttribute('hidden');
        });

        let applyButton = document.getElementById('applyButton');
        applyButton.addEventListener('click', function()
        {
            let tableRows = document.getElementsByClassName('tableRow');

            let roleFilters = document.getElementsByClassName('roleFilter');
            let activeFilters = document.getElementsByClassName('activeFilter');
            let searchFilter = document.getElementById('searchFilter').value;

            let roleArray = [], activeArray = [];

            // Check for filters selected
            for (let rf of roleFilters) 
            {
                if (rf.checked)
                    roleArray.push(rf.value);
            }
            for (let af of activeFilters) {
                if (af.checked)
                    activeArray.push(af.value);
            }

            // Apply filters
            for (let tr of tableRows)
            {
                tr.removeAttribute('hidden');
                if (roleArray.length > 0)
                {
                    let role = tr.querySelector('.role').innerHTML;
                    if (!roleArray.includes(role))
                        tr.setAttribute('hidden', '');
                }

                if (activeArray.length > 0) 
                {
                    let active = tr.querySelector('.active');
                    if (!activeArray.includes(active.checked.toString()))
                        tr.setAttribute('hidden', '');
                }

                if (searchFilter != '') 
                {
                    let name = tr.querySelector('.name').innerHTML.toLowerCase();
                    let email = tr.querySelector('.email').innerHTML.toLowerCase();
                    if (!name.includes(searchFilter.toLowerCase()) && !email.includes(searchFilter.toLowerCase()))
                        tr.setAttribute('hidden', '');
                }
            }
        });

        let checkBoxes = document.getElementsByClassName('selectUser');
        let options = document.getElementById('userOptions');
        for (let cb of checkBoxes) 
        {
            cb.addEventListener('click', function()
            {
                let checked = false;
                for (let cb of checkBoxes) 
                {
                    if (cb.checked)
                        checked = true;
                }

                if (checked)
                    options.removeAttribute('hidden');
                else
                    options.setAttribute('hidden', '');
            });
        }

        let activateButton = document.getElementById('activateUsers');
        activateButton.addEventListener('click', function()
        {
            if (confirm('Voulez-vous activer les utilisateurs sélectionnés?'))
            {
                for (let cb of checkBoxes) 
                {
                    if (cb.checked)
                    {
                        activateUser(cb.value);
                        cb.checked = false;
                        let activeCb = cb.parentElement.parentElement.querySelector('td input.active');
                        activeCb.checked = true;
                    }
                }

                options.setAttribute('hidden', '');
            }
        });

        let deactivateButton = document.getElementById('deactivateUsers');
        deactivateButton.addEventListener('click', function()
        {
            if (confirm('Voulez-vous désactiver les utilisateurs sélectionnés?'))
            {
                for (let cb of checkBoxes) 
                {
                    if (cb.checked)
                    {
                        deactivateUser(cb.value);
                        cb.checked = false;
                        let activeCb = cb.parentElement.parentElement.querySelector('td input.active');
                        activeCb.checked = false;
                    }
                }

                options.setAttribute('hidden', '');
            }
        });

        /***** Requêtes AJAX *****/
        async function activateUser(id) {
            let response = await fetch('/activateUser/'+id);
            
            if (response.status === 200) {
                let data = await response.text();
                console.log('Activation success');
            }
        }

        async function deactivateUser(id) {
            let response = await fetch('/deactivateUser/'+id);
            
            if (response.status === 200) {
                let data = await response.text();
                console.log('Deactivation success');
            }
        }
    </script>
";
        
        $__internal_6f47bbe9983af81f1e7450e9a3e3768f->leave($__internal_6f47bbe9983af81f1e7450e9a3e3768f_prof);

        
        $__internal_5a27a8ba21ca79b61932376b2fa922d2->leave($__internal_5a27a8ba21ca79b61932376b2fa922d2_prof);

    }

    public function getTemplateName()
    {
        return "user/index.html.twig";
    }

    public function isTraitable()
    {
        return false;
    }

    public function getDebugInfo()
    {
        return array (  354 => 177,  352 => 176,  349 => 175,  341 => 172,  337 => 170,  333 => 168,  331 => 167,  326 => 165,  322 => 164,  318 => 163,  310 => 162,  307 => 161,  303 => 159,  297 => 157,  295 => 156,  286 => 154,  283 => 153,  279 => 152,  248 => 123,  237 => 120,  229 => 119,  226 => 118,  222 => 117,  208 => 105,  206 => 104,  122 => 22,  112 => 21,  93 => 19,  70 => 2,  60 => 1,  37 => 17,);
    }

    public function getSourceContext()
    {
        return new Source("{% block header %}
<!--****************************************
 Fichier : index.html.twig
 Auteur : Jean-Nyckolas Roy
 Fonctionnalité : A2
 Date : 2022-04-21
 Vérification :
 Date Nom Approuvé
 =========================================================
 Historique de modifications :
 2022-04-21 - Jean-Nyckolas - Affichage de base et ajout des filtres
 2022-04-26 - Jean-Nyckolas - Ajout des options de gestion des utilisateurs
 =========================================================
****************************************-->
{% endblock %}

{% extends 'base.html.twig' %}

{% block title %}Gestion utilisateurs{% endblock %}

{% block body %}
    <!--===================== CSS =====================-->
    <style>
        table
        {
            border-collapse: collapse;
        }
        button 
        {
            margin: 5px 0px;
        }
        a
        {
            text-decoration: none;
        }
        tr 
        {
            border: solid thin;
        }
        th 
        {
            height: 30pt;
            background-color: #e34958;
            color: white;
        }
        th, td
        {
            text-align: center;
        }
        table tr:not([hidden]):nth-child(odd) td
        {
            background-color: #d6d6d6;
        }
        img 
        {
            object-fit: cover;
            border-radius: 50%;
            height: 50pt;
            width: 50pt;
            border: solid 2px;
        }
        .arrow 
        {
            border: solid black;
            border-width: 0 3px 3px 0;
            display: inline-block;
            padding: 3px;
        }

        .up 
        {
            transform: rotate(-135deg);
            -webkit-transform: rotate(-135deg);
        }

        .down 
        {
            transform: rotate(45deg);
            -webkit-transform: rotate(45deg);
        }

        .flex-row 
        {
            display: flex;
            flex-direction: row;
        }

        .flex-column 
        {
            display: flex;
            flex-direction: column;
        }

        #searchFilter {
            width: 100pt;
        }

        #userOptions {
            margin-left: 15pt;
        }
    </style>

    <!--===================== HTML =====================-->
    {% include 'header.html.twig' %}
    <h1>Utilisateurs</h1>
    <div class=\"flex-row\">
        <button id=\"filterButton\" class=\"btn btn-light\">Filtrer <i class=\"arrow down\" id=\"filterArrow\"></i></button>
        <div id=\"userOptions\" hidden>
            <button id=\"activateUsers\" class=\"btn btn-success\">Activer</button>
            <button id=\"deactivateUsers\" class=\"btn btn-danger\">Désactiver</button>
        </div>
    </div>
    <div id=\"filters\" hidden>
        <div class=\"flex-row\">
            <div class=\"flex-column\">
                <b>Rôle</b>
                {% for role in roles %}
                    <div>
                        <input class=\"roleFilter\" type=\"checkbox\" id=\"roleFilter{{ role.id }}\" name=\"roleFilter{{ role.id }}\" value=\"{{ role.name }}\"/>
                        <label for=\"roleFilter{{ role.id }}\">{{ role.name }}</label>
                    </div>
                {% endfor %}
            </div>
            <div class=\"flex-column\">
                <b>Actif</b>
                <div>
                    <input class=\"activeFilter\" type=\"checkbox\" id=\"activeFilterTrue\" name=\"activeFilterTrue\" value=\"true\"/>
                    <label for=\"activeFilterTrue\">Actif</label>
                </div>
                <div>
                    <input class=\"activeFilter\" type=\"checkbox\" id=\"activeFilterFalse\" name=\"activeFilterFalse\" value=\"false\"/>
                    <label for=\"activeFilterFalse\">Inactif</label>
                </div>
            </div>
            <div class=\"flex-column\">
                <b>Rechercher</b>
                <input type=\"text\" id=\"searchFilter\" name=\"searchFilter\"/>
            </div>
        </div>
        <button id=\"applyButton\" class=\"btn btn-primary\">Appliquer</button>
    </div>
    <table class=\"displayTable col-12 auto\">
        <tr>
            <th class=\"col-1\"></th>
            <th class=\"col-1\">Image</th>
            <th class=\"col-3\">Nom</th>
            <th class=\"col-2\">Courriel</th>
            <th class=\"col-2\">Role</th>
            <th class=\"col-2\">Date création</th>
            <th class=\"col-1\">Actif</th>
        </tr>
        {% for user in userList %}
            <tr class=\"tableRow\">
                <td><input class=\"selectUser\" type=\"checkbox\" id=\"select{{ user.id }}\" name=\"select{{ user.id }}\" value=\"{{ user.id }}\"></td>
                <td>
                    {% if user.image %}
                        <img alt=\"Image profil\" src=\"data:image/png;base64,{{ user.image }}\"></img>
                    {% else %}
                        <img/>
                    {% endif %}
                </td>
                <td><a href=\"/profile/{{ user.id }}\" class=\"name\">{{ user.firstName }} {{ user.lastName }}</a></td>
                <td class=\"email\">{{ user.email }}</td>
                <td class=\"role\">{{ user.role.name }}</td>
                <td class=\"date\">{{ user.registeredDate|date('Y-m-d') }}</td>
                <td>
                    {% if user.validAccount %}
                        <input class=\"active\" type=\"checkbox\" disabled checked>
                    {% else %}
                        <input class=\"active\" type=\"checkbox\" disabled>
                    {% endif %}
                </td>
            </tr>
        {% endfor %}
    </table>
    {% include 'footer.html.twig' %}
    <!--===================== JavaScript =====================-->
    <script async defer>
        let filterButton = document.getElementById('filterButton');
        filterButton.addEventListener('click', function()
        {
            let filterDiv = document.getElementById('filters');
            let arrow = document.getElementById('filterArrow');

            arrow.classList.toggle('up');
            arrow.classList.toggle('down');
            filterDiv.toggleAttribute('hidden');
        });

        let applyButton = document.getElementById('applyButton');
        applyButton.addEventListener('click', function()
        {
            let tableRows = document.getElementsByClassName('tableRow');

            let roleFilters = document.getElementsByClassName('roleFilter');
            let activeFilters = document.getElementsByClassName('activeFilter');
            let searchFilter = document.getElementById('searchFilter').value;

            let roleArray = [], activeArray = [];

            // Check for filters selected
            for (let rf of roleFilters) 
            {
                if (rf.checked)
                    roleArray.push(rf.value);
            }
            for (let af of activeFilters) {
                if (af.checked)
                    activeArray.push(af.value);
            }

            // Apply filters
            for (let tr of tableRows)
            {
                tr.removeAttribute('hidden');
                if (roleArray.length > 0)
                {
                    let role = tr.querySelector('.role').innerHTML;
                    if (!roleArray.includes(role))
                        tr.setAttribute('hidden', '');
                }

                if (activeArray.length > 0) 
                {
                    let active = tr.querySelector('.active');
                    if (!activeArray.includes(active.checked.toString()))
                        tr.setAttribute('hidden', '');
                }

                if (searchFilter != '') 
                {
                    let name = tr.querySelector('.name').innerHTML.toLowerCase();
                    let email = tr.querySelector('.email').innerHTML.toLowerCase();
                    if (!name.includes(searchFilter.toLowerCase()) && !email.includes(searchFilter.toLowerCase()))
                        tr.setAttribute('hidden', '');
                }
            }
        });

        let checkBoxes = document.getElementsByClassName('selectUser');
        let options = document.getElementById('userOptions');
        for (let cb of checkBoxes) 
        {
            cb.addEventListener('click', function()
            {
                let checked = false;
                for (let cb of checkBoxes) 
                {
                    if (cb.checked)
                        checked = true;
                }

                if (checked)
                    options.removeAttribute('hidden');
                else
                    options.setAttribute('hidden', '');
            });
        }

        let activateButton = document.getElementById('activateUsers');
        activateButton.addEventListener('click', function()
        {
            if (confirm('Voulez-vous activer les utilisateurs sélectionnés?'))
            {
                for (let cb of checkBoxes) 
                {
                    if (cb.checked)
                    {
                        activateUser(cb.value);
                        cb.checked = false;
                        let activeCb = cb.parentElement.parentElement.querySelector('td input.active');
                        activeCb.checked = true;
                    }
                }

                options.setAttribute('hidden', '');
            }
        });

        let deactivateButton = document.getElementById('deactivateUsers');
        deactivateButton.addEventListener('click', function()
        {
            if (confirm('Voulez-vous désactiver les utilisateurs sélectionnés?'))
            {
                for (let cb of checkBoxes) 
                {
                    if (cb.checked)
                    {
                        deactivateUser(cb.value);
                        cb.checked = false;
                        let activeCb = cb.parentElement.parentElement.querySelector('td input.active');
                        activeCb.checked = false;
                    }
                }

                options.setAttribute('hidden', '');
            }
        });

        /***** Requêtes AJAX *****/
        async function activateUser(id) {
            let response = await fetch('/activateUser/'+id);
            
            if (response.status === 200) {
                let data = await response.text();
                console.log('Activation success');
            }
        }

        async function deactivateUser(id) {
            let response = await fetch('/deactivateUser/'+id);
            
            if (response.status === 200) {
                let data = await response.text();
                console.log('Deactivation success');
            }
        }
    </script>
{% endblock %}
", "user/index.html.twig", "C:\\xampp\\htdocs\\projetWebTuteur\\templates\\user\\index.html.twig");
    }
}
